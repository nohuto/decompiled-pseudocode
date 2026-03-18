/*
 * XREFs of MiUpdateImagePfnImportRelocations @ 0x14039436C
 * Callers:
 *     MiWalkEntireImage @ 0x140284670 (MiWalkEntireImage.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x140394084 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 * Callees:
 *     MiReleasePtes @ 0x140247F40 (MiReleasePtes.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     MiReservePtes @ 0x1402743A0 (MiReservePtes.c)
 *     MiMakeProtectionPfnCompatible @ 0x1402827DC (MiMakeProtectionPfnCompatible.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     KeFlushSingleTb @ 0x14034C17C (KeFlushSingleTb.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     MiUpdateRetpolineImportFixups @ 0x140394548 (MiUpdateRetpolineImportFixups.c)
 */

__int64 __fastcall MiUpdateImagePfnImportRelocations(__int64 a1, unsigned __int64 a2, unsigned int a3, __int64 a4)
{
  struct _KTHREAD *v5; // rdx
  __int64 v8; // r15
  __int64 v9; // rcx
  _WORD *v10; // rcx
  __int64 v11; // rbx
  unsigned __int64 v12; // r12
  ULONG_PTR v13; // rdi
  int ProtectionPfnCompatible; // eax
  __int64 v15; // r9
  unsigned __int64 ValidPte; // rbx
  int v17; // r14d
  BOOL v18; // eax
  struct _KTHREAD *CurrentThread; // rbx
  signed __int64 *v20; // r14
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v25; // rbx
  int v26; // r14d

  v5 = 0LL;
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 32LL);
  v9 = *(_QWORD *)(v8 + 96);
  if ( !v9 )
    return 1LL;
  v10 = *(_WORD **)(v9 + 8LL * a3 + 56);
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
  v13 = MiReservePtes((__int64)&qword_140C4EE80, 1LL);
  if ( v13 )
  {
LABEL_8:
    a2 = (__int64)(v13 << 25) >> 16;
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, v11);
    ValidPte = MiMakeValidPte(v13, a4, ProtectionPfnCompatible | 0xA0000000, v15);
    v17 = 0;
    v18 = MiPteInShadowRange(v13);
    v5 = 0LL;
    if ( !v18 )
      goto LABEL_9;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v17 = 1;
      if ( HIBYTE(word_140C4DF48) == (_BYTE)v5 )
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
    if ( v17 )
    {
      MiWritePteShadow(v13, ValidPte);
      v5 = 0LL;
    }
LABEL_11:
    CurrentThread = KeGetCurrentThread();
    v20 = (signed __int64 *)(v8 + 24);
    if ( *(struct _KTHREAD **)(v8 + 8) == CurrentThread )
    {
      CurrentThread = v5;
    }
    else
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockSharedEx(v8 + 24, 0LL);
    }
    MiUpdateRetpolineImportFixups(a2, *(_QWORD *)(v8 + 96), a3);
    if ( CurrentThread )
    {
      if ( _InterlockedCompareExchange64(v20, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v20);
      KeAbPostRelease((ULONG_PTR)v20);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v21, v22, v23);
    }
    if ( !v13 )
      return 0LL;
    if ( v13 != v12 )
    {
      MiReleasePtes((__int64)&qword_140C4EE80, (_QWORD *)v13, 1u);
      return 0LL;
    }
    v25 = ZeroPte;
    v26 = 0;
    if ( MiPteInShadowRange(v13) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v26 = 1;
        if ( HIBYTE(word_140C4DF48) )
          goto LABEL_42;
LABEL_40:
        if ( (ZeroPte & 1) != 0 )
          v25 = ZeroPte | 0x8000000000000000uLL;
        goto LABEL_42;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        goto LABEL_40;
    }
LABEL_42:
    *(_QWORD *)v13 = v25;
    if ( v26 )
      MiWritePteShadow(v13, v25);
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
