/*
 * XREFs of MiUpdateImagePfnImportRelocations @ 0x1403979C4
 * Callers:
 *     MiWalkEntireImage @ 0x1402DED00 (MiWalkEntireImage.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1403976DC (MiUpdateImportRelocationsOnDriverPrivatePages.c)
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
 *     MiUpdateRetpolineImportFixups @ 0x140397BA0 (MiUpdateRetpolineImportFixups.c)
 */

__int64 __fastcall MiUpdateImagePfnImportRelocations(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4)
{
  struct _KTHREAD *v5; // rdx
  unsigned int v6; // r13d
  __int64 v8; // r15
  __int64 v9; // rcx
  _WORD *v10; // rcx
  __int64 v11; // rbx
  unsigned __int64 v12; // r12
  ULONG_PTR v13; // rdi
  int ProtectionPfnCompatible; // eax
  unsigned __int64 ValidPte; // rbx
  int v16; // r14d
  BOOL v17; // eax
  struct _KTHREAD *CurrentThread; // rbx
  signed __int64 *v19; // r14
  unsigned __int64 v21; // rbx
  int v22; // r14d

  v5 = 0LL;
  v6 = a3;
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 32LL);
  v9 = *(_QWORD *)(v8 + 96);
  if ( !v9 )
    return 1LL;
  v10 = *(_WORD **)(v9 + 8LL * (unsigned int)a3 + 56);
  if ( !v10 || !*v10 && v10[3] != 3 )
    return 1LL;
  v11 = 48 * a4 - 0x58000000000LL;
  if ( a2 && (a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    v13 = 0LL;
    v12 = 0LL;
    goto LABEL_11;
  }
  v12 = a2;
  v13 = MiReservePtes((__int64)&qword_140C4EF80, 1u, a3, a4);
  if ( v13 )
  {
LABEL_8:
    a2 = (__int64)(v13 << 25) >> 16;
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, v11);
    ValidPte = MiMakeValidPte(v13, a4, ProtectionPfnCompatible | 0xA0000000);
    v16 = 0;
    v17 = MiPteInShadowRange(v13);
    v5 = 0LL;
    if ( !v17 )
      goto LABEL_9;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v16 = 1;
      if ( HIBYTE(word_140C4E048) == (_BYTE)v5 )
      {
LABEL_32:
        if ( (ValidPte & 1) != 0 )
          ValidPte |= 0x8000000000000000uLL;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      goto LABEL_32;
    }
LABEL_9:
    *(_QWORD *)v13 = ValidPte;
    if ( v16 )
    {
      MiWritePteShadow(v13, ValidPte);
      v5 = 0LL;
    }
LABEL_11:
    CurrentThread = KeGetCurrentThread();
    v19 = (signed __int64 *)(v8 + 24);
    if ( *(struct _KTHREAD **)(v8 + 8) == CurrentThread )
    {
      CurrentThread = v5;
    }
    else
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockSharedEx(v8 + 24, 0LL);
    }
    MiUpdateRetpolineImportFixups(a2, *(_QWORD *)(v8 + 96), v6);
    if ( CurrentThread )
    {
      if ( _InterlockedCompareExchange64(v19, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v19);
      KeAbPostRelease((ULONG_PTR)v19);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
    if ( !v13 )
      return 0LL;
    if ( v13 != v12 )
    {
      MiReleasePtes((__int64)&qword_140C4EF80, (_QWORD *)v13, 1u);
      return 0LL;
    }
    v21 = ZeroPte;
    v22 = 0;
    if ( MiPteInShadowRange(v13) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v22 = 1;
        if ( HIBYTE(word_140C4E048) )
          goto LABEL_42;
LABEL_40:
        if ( (ZeroPte & 1) != 0 )
          v21 = ZeroPte | 0x8000000000000000uLL;
        goto LABEL_42;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        goto LABEL_40;
    }
LABEL_42:
    *(_QWORD *)v13 = v21;
    if ( v22 )
      MiWritePteShadow(v13, v21);
    KeFlushSingleTb(a2, 0, 1u);
    return 0LL;
  }
  if ( a2 )
  {
    v13 = a2;
    goto LABEL_8;
  }
  return 3221225626LL;
}
