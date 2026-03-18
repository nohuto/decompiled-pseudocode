/*
 * XREFs of MiRelocateImagePfn @ 0x1405FC710
 * Callers:
 *     MiValidateInPage @ 0x1402297C0 (MiValidateInPage.c)
 *     MiWalkEntireImage @ 0x14022B620 (MiWalkEntireImage.c)
 *     MiPrivateFixup @ 0x140314F08 (MiPrivateFixup.c)
 *     MiFillPerSessionProtos @ 0x1408D49E0 (MiFillPerSessionProtos.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     MiReservePtes @ 0x14021B350 (MiReservePtes.c)
 *     MiMakeProtectionPfnCompatible @ 0x14022978C (MiMakeProtectionPfnCompatible.c)
 *     MiMakeValidPte @ 0x1402342E0 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     MiReleasePtes @ 0x140284720 (MiReleasePtes.c)
 *     KeFlushSingleTb @ 0x14031CE3C (KeFlushSingleTb.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiPerformFixups @ 0x1405FC1F4 (MiPerformFixups.c)
 *     MiDoesPageRequireRetpolineFixups @ 0x1405FC6E4 (MiDoesPageRequireRetpolineFixups.c)
 */

__int64 __fastcall MiRelocateImagePfn(
        _QWORD *BugCheckParameter2,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        int a6,
        char a7)
{
  __int64 v8; // rbp
  unsigned int v10; // esi
  __int64 *v12; // rdi
  __int64 v13; // r10
  unsigned int v14; // edx
  int v15; // edx
  __int64 v17; // rbx
  __int64 v18; // rcx
  ULONG_PTR v19; // r15
  int ProtectionPfnCompatible; // eax
  __int64 v21; // r9
  unsigned __int64 ValidPte; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v24; // r8
  unsigned __int64 v25; // rbx
  __int64 v26; // r8
  unsigned __int64 v27; // [rsp+70h] [rbp+8h]

  v8 = a5;
  v10 = a3;
  v12 = *(__int64 **)(BugCheckParameter2[12] + 32LL);
  v13 = *v12;
  if ( (unsigned int)a3 >= (unsigned __int64)v12[7] )
    return 1LL;
  v14 = a3;
  while ( !*(_QWORD *)(v13 + 8LL * v14) && !MiDoesPageRequireRetpolineFixups((__int64)(v12 + 9), v14) )
  {
    v14 = v15 + 1;
    if ( v14 != v10 )
      return 1LL;
  }
  v17 = 48 * a4 - 0x58000000000LL;
  v18 = 0LL;
  if ( a2 && (a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    v19 = 0LL;
    v27 = 0LL;
LABEL_14:
    CurrentThread = KeGetCurrentThread();
    if ( (struct _KTHREAD *)v12[1] == CurrentThread )
    {
      CurrentThread = 0LL;
    }
    else
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)(v12 + 3), 0LL);
      v18 = 0LL;
    }
    if ( a5 )
      v18 = v12[5];
    else
      v8 = v12[5];
    MiPerformFixups(a2, BugCheckParameter2, v10, v8, v18, a7);
    if ( CurrentThread )
    {
      if ( _InterlockedCompareExchange64(v12 + 3, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v12 + 3);
      KeAbPostRelease((ULONG_PTR)(v12 + 3));
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
    if ( !v19 )
      return 0LL;
    if ( v19 != v27 )
    {
      MiReleasePtes((__int64)&qword_140C4ED40, (_QWORD *)v19, 1u);
      return 0LL;
    }
    v25 = ZeroPte;
    if ( MiPteInShadowRange(v19) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C4DE08) && (ZeroPte & 1) != 0 )
          v25 = ZeroPte | 0x8000000000000000uLL;
        *(_QWORD *)v19 = v25;
        MiWritePteShadow(v19, v25, v26);
        goto LABEL_50;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v25 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v19 = v25;
LABEL_50:
    KeFlushSingleTb(a2, 0, 1u);
    return 0LL;
  }
  v27 = a2;
  v19 = MiReservePtes((__int64)&qword_140C4ED40, 1u, a3, a4);
  if ( v19 )
  {
LABEL_11:
    a2 = (__int64)(v19 << 25) >> 16;
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, v17);
    ValidPte = MiMakeValidPte(v19, a4, ProtectionPfnCompatible | 0xA0000000, v21);
    if ( MiPteInShadowRange(v19) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C4DE08) && (ValidPte & 1) != 0 )
          ValidPte |= 0x8000000000000000uLL;
        *(_QWORD *)v19 = ValidPte;
        MiWritePteShadow(v19, ValidPte, v24);
        goto LABEL_13;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ValidPte & 1) != 0 )
      {
        ValidPte |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v19 = ValidPte;
LABEL_13:
    v18 = 0LL;
    goto LABEL_14;
  }
  if ( a2 )
  {
    v19 = a2;
    goto LABEL_11;
  }
  return 3221225626LL;
}
