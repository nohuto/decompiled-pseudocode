/*
 * XREFs of MiRelocateImagePfn @ 0x1406EB9C0
 * Callers:
 *     MiPrivateFixup @ 0x140209BC8 (MiPrivateFixup.c)
 *     MiWalkEntireImage @ 0x1402DED00 (MiWalkEntireImage.c)
 *     MiValidateInPage @ 0x1402DFDC0 (MiValidateInPage.c)
 *     MiFillPerSessionProtos @ 0x1408D8140 (MiFillPerSessionProtos.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     KeFlushSingleTb @ 0x1402599A8 (KeFlushSingleTb.c)
 *     MiReservePtes @ 0x1402CAEB0 (MiReservePtes.c)
 *     MiMakeProtectionPfnCompatible @ 0x1402E020C (MiMakeProtectionPfnCompatible.c)
 *     MiReleasePtes @ 0x1402EA050 (MiReleasePtes.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiDoesPageRequireRetpolineFixups @ 0x1406EBCF4 (MiDoesPageRequireRetpolineFixups.c)
 *     MiPerformFixups @ 0x1406EBD18 (MiPerformFixups.c)
 */

__int64 __fastcall MiRelocateImagePfn(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        int a6,
        int a7)
{
  int v9; // esi
  __int64 *v11; // rdi
  __int64 v12; // r10
  unsigned int v13; // edx
  int v14; // edx
  __int64 v16; // rbx
  __int64 v17; // rcx
  ULONG_PTR v18; // r15
  int ProtectionPfnCompatible; // eax
  unsigned __int64 ValidPte; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 v22; // rbx
  ULONG_PTR v23; // [rsp+70h] [rbp+8h]

  v9 = a3;
  v11 = *(__int64 **)(*(_QWORD *)(BugCheckParameter2 + 96) + 32LL);
  v12 = *v11;
  if ( (unsigned int)a3 >= (unsigned __int64)v11[7] )
    return 1LL;
  v13 = a3;
  while ( !*(_QWORD *)(v12 + 8LL * v13) && !(unsigned int)MiDoesPageRequireRetpolineFixups(v11 + 9) )
  {
    v13 = v14 + 1;
    if ( v13 != v9 )
      return 1LL;
  }
  v16 = 48 * a4 - 0x58000000000LL;
  v17 = 0LL;
  if ( a2 && (a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    v18 = 0LL;
    v23 = 0LL;
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
    if ( v18 != v23 )
    {
      MiReleasePtes((__int64)&qword_140C4EF80, (_QWORD *)v18, 1u);
      return 0LL;
    }
    v22 = ZeroPte;
    if ( MiPteInShadowRange(v18) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C4E048) && (ZeroPte & 1) != 0 )
          v22 = ZeroPte | 0x8000000000000000uLL;
        *(_QWORD *)v18 = v22;
        MiWritePteShadow(v18, v22);
        goto LABEL_49;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v22 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v18 = v22;
LABEL_49:
    KeFlushSingleTb(a2, 0, 1u);
    return 0LL;
  }
  v23 = a2;
  v18 = MiReservePtes((__int64)&qword_140C4EF80, 1u, a3, a4);
  if ( v18 )
  {
LABEL_11:
    a2 = (__int64)(v18 << 25) >> 16;
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, v16);
    ValidPte = MiMakeValidPte(v18, a4, ProtectionPfnCompatible | 0xA0000000);
    if ( MiPteInShadowRange(v18) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C4E048) && (ValidPte & 1) != 0 )
          ValidPte |= 0x8000000000000000uLL;
        *(_QWORD *)v18 = ValidPte;
        MiWritePteShadow(v18, ValidPte);
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
