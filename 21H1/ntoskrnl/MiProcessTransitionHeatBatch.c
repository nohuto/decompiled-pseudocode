/*
 * XREFs of MiProcessTransitionHeatBatch @ 0x14055A30C
 * Callers:
 *     MmAccessFault @ 0x14020C560 (MmAccessFault.c)
 *     MmCopyToCachedPage @ 0x14027CC60 (MmCopyToCachedPage.c)
 *     MmCheckCachedPageStates @ 0x140288A80 (MmCheckCachedPageStates.c)
 * Callees:
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryAcquirePushLockShared @ 0x140340930 (ExfTryAcquirePushLockShared.c)
 *     KeAbPostReleaseEx @ 0x140340F60 (KeAbPostReleaseEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F1844 (EtwTraceAutoBoostEntryExhaustion.c)
 *     MiNotifyPageHeat @ 0x14055A2D4 (MiNotifyPageHeat.c)
 */

__int64 __fastcall MiProcessTransitionHeatBatch(unsigned int *a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  struct _KTHREAD *v3; // rbx
  ULONG_PTR v4; // rdi
  __int64 v5; // rax
  unsigned __int8 AbOrphanedEntrySummary; // al
  char v7; // cl
  int SessionId; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  _DWORD *v12; // r9
  bool v13; // zf
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int *i; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r8
  unsigned __int64 v21; // r9
  _QWORD *v22; // r8
  int v24; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v24 = 0;
  v3 = KeGetCurrentThread();
  --v3->SpecialApcDisable;
  if ( ++v3->AbAllocationRegionCount != 1 )
  {
    v4 = 0LL;
LABEL_3:
    _interlockedbittestandset((volatile signed __int32 *)&v3->116 + 1, 0x10u);
    goto LABEL_16;
  }
  LOBYTE(v5) = v3->AbEntrySummary;
  if ( (_BYTE)v5 )
    goto LABEL_7;
  if ( v3->AbOrphanedEntrySummary )
  {
    AbOrphanedEntrySummary = v3->AbOrphanedEntrySummary;
    v3->AbOrphanedEntrySummary = 0;
    LOBYTE(v5) = v3->AbEntrySummary | AbOrphanedEntrySummary;
LABEL_7:
    v7 = v5;
    _BitScanForward((unsigned int *)&v5, (unsigned __int8)v5);
    v3->AbEntrySummary = v7 & ~(1 << v5);
    v4 = (ULONG_PTR)&v3->LockEntries[v5];
    goto LABEL_8;
  }
  v4 = 0LL;
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) == 0 )
    goto LABEL_3;
  EtwTraceAutoBoostEntryExhaustion((__int64)v3, (__int64)&qword_140C50D40);
LABEL_8:
  if ( !v4 )
    goto LABEL_3;
  if ( (unsigned __int64)&qword_140C50D40 >= 0xFFFF800000000000uLL
    && byte_140C4F908[(((unsigned __int64)&qword_140C50D40 >> 39) & 0x1FF) - 256] == 1 )
  {
    SessionId = MmGetSessionIdEx((__int64)v3->ApcState.Process);
  }
  else
  {
    SessionId = -1;
  }
  *(_DWORD *)(v4 + 40) = SessionId;
  *(_QWORD *)(v4 + 32) = (unsigned __int64)&qword_140C50D40 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_16:
  --v3->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v3, (__int64)&qword_140C50D40, &v24);
  v13 = v3->SpecialApcDisable++ == -1;
  if ( v13 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v3->ApcState.ApcListHead[0].Flink != &v3->152 )
    KiCheckForKernelApcDelivery(v10, v9, v11, v12);
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C50D40, 17LL, 0LL)
    || ExfTryAcquirePushLockShared(&qword_140C50D40) )
  {
    if ( v4 )
      *(_BYTE *)(v4 + 26) |= 1u;
    for ( i = a1 + 4; ; i += 2 )
    {
      if ( i >= &a1[2 * a1[1] + 4] )
      {
        MiNotifyPageHeat(a1);
        goto LABEL_36;
      }
      v18 = *(_QWORD *)i >> 12;
      v19 = (*(_QWORD *)i & 0x3FFLL) + 1;
      v20 = (*(_QWORD *)i >> 10) & 3LL;
      if ( ((*(_QWORD *)i >> 10) & 3) != 0 )
      {
        do
        {
          v19 <<= 9;
          v18 >>= 9;
          LODWORD(v20) = v20 - 1;
        }
        while ( (_DWORD)v20 );
      }
      v21 = v19 + v18;
      if ( v18 < v19 + v18 )
        break;
LABEL_33:
      ;
    }
    v22 = (_QWORD *)(48 * v18 - 0x57FFFFFFFD8LL);
    while ( v18 <= 0xFFFFFFFFFLL && ((*v22 >> 50) & 1) != 0 )
    {
      ++v18;
      v22 += 6;
      if ( v18 >= v21 )
        goto LABEL_33;
    }
LABEL_36:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C50D40, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140C50D40);
    KeAbPostRelease((ULONG_PTR)&qword_140C50D40);
  }
  else if ( v4 )
  {
    KeAbPostReleaseEx((ULONG_PTR)&qword_140C50D40, v4);
  }
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v14, v15, v16);
}
