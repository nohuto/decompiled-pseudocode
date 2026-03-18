/*
 * XREFs of MiRelocateImagePfn @ 0x1406818C0
 * Callers:
 *     MiPrivateFixup @ 0x140239840 (MiPrivateFixup.c)
 *     MiWalkEntireImage @ 0x1402C8CD0 (MiWalkEntireImage.c)
 *     MiValidateInPage @ 0x1402C9D90 (MiValidateInPage.c)
 *     MiFillPerSessionProtos @ 0x1408DA820 (MiFillPerSessionProtos.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     MiReservePtes @ 0x140285DC0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x140294430 (MiReleasePtes.c)
 *     MiMakeValidPte @ 0x1402B1B40 (MiMakeValidPte.c)
 *     MiMakeProtectionPfnCompatible @ 0x1402CA1DC (MiMakeProtectionPfnCompatible.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     KeFlushSingleTb @ 0x140353AC8 (KeFlushSingleTb.c)
 *     MiDoesPageRequireRetpolineFixups @ 0x140681BF4 (MiDoesPageRequireRetpolineFixups.c)
 *     MiPerformFixups @ 0x140681C18 (MiPerformFixups.c)
 */

__int64 __fastcall MiRelocateImagePfn(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7)
{
  __int64 *v11; // rdi
  __int64 v12; // r10
  unsigned int v13; // edx
  int v14; // edx
  __int64 v16; // rbx
  __int64 v17; // rcx
  ULONG_PTR v18; // r15
  int ProtectionPfnCompatible; // eax
  __int64 v20; // r9
  unsigned __int64 ValidPte; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v23; // r8
  unsigned __int64 v24; // rbx
  __int64 v25; // r8
  ULONG_PTR v26; // [rsp+70h] [rbp+8h]

  v11 = *(__int64 **)(*(_QWORD *)(BugCheckParameter2 + 96) + 32LL);
  v12 = *v11;
  if ( a3 >= (unsigned __int64)v11[7] )
    return 1LL;
  v13 = a3;
  while ( !*(_QWORD *)(v12 + 8LL * v13) && !(unsigned int)MiDoesPageRequireRetpolineFixups(v11 + 9) )
  {
    v13 = v14 + 1;
    if ( v13 != a3 )
      return 1LL;
  }
  v16 = 48 * a4 - 0x58000000000LL;
  v17 = 0LL;
  if ( a2 && (a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    v18 = 0LL;
    v26 = 0LL;
LABEL_14:
    CurrentThread = KeGetCurrentThread();
    if ( (struct _KTHREAD *)v11[1] == CurrentThread )
    {
      CurrentThread = 0LL;
    }
    else
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)(v11 + 3), 0LL);
      v17 = 0LL;
    }
    if ( a5 )
      v17 = v11[5];
    MiPerformFixups(a2, BugCheckParameter2, v17, a7);
    if ( CurrentThread )
    {
      if ( _InterlockedCompareExchange64(v11 + 3, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v11 + 3);
      KeAbPostRelease((ULONG_PTR)(v11 + 3));
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
    if ( !v18 )
      return 0LL;
    if ( v18 != v26 )
    {
      MiReleasePtes((__int64)&qword_140C4EDC0, (_QWORD *)v18, 1u);
      return 0LL;
    }
    v24 = ZeroPte;
    if ( MiPteInShadowRange(v18) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C4DE88) && (ZeroPte & 1) != 0 )
          v24 = ZeroPte | 0x8000000000000000uLL;
        *(_QWORD *)v18 = v24;
        MiWritePteShadow(v18, v24, v25);
        goto LABEL_49;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v24 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v18 = v24;
LABEL_49:
    KeFlushSingleTb(a2, 0, 1u);
    return 0LL;
  }
  v26 = a2;
  v18 = MiReservePtes((__int64)&qword_140C4EDC0, 1u);
  if ( v18 )
  {
LABEL_11:
    a2 = (__int64)(v18 << 25) >> 16;
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, v16);
    ValidPte = MiMakeValidPte(v18, a4, ProtectionPfnCompatible | 0xA0000000, v20);
    if ( MiPteInShadowRange(v18) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C4DE88) && (ValidPte & 1) != 0 )
          ValidPte |= 0x8000000000000000uLL;
        *(_QWORD *)v18 = ValidPte;
        MiWritePteShadow(v18, ValidPte, v23);
        goto LABEL_13;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ValidPte & 1) != 0 )
      {
        ValidPte |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v18 = ValidPte;
LABEL_13:
    v17 = 0LL;
    goto LABEL_14;
  }
  if ( a2 )
  {
    v18 = a2;
    goto LABEL_11;
  }
  return 3221225626LL;
}
