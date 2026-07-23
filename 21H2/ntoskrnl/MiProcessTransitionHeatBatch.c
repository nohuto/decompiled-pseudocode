/*
 * XREFs of MiProcessTransitionHeatBatch @ 0x14056003C
 * Callers:
 *     MmAccessFault @ 0x1402B1990 (MmAccessFault.c)
 *     MmCheckCachedPageStates @ 0x14032C2E0 (MmCheckCachedPageStates.c)
 *     MmCopyToCachedPage @ 0x14033C250 (MmCopyToCachedPage.c)
 * Callees:
 *     ExfTryAcquirePushLockShared @ 0x140208080 (ExfTryAcquirePushLockShared.c)
 *     KeAbPostReleaseEx @ 0x14020AFB0 (KeAbPostReleaseEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F9348 (EtwTraceAutoBoostEntryExhaustion.c)
 *     MiNotifyPageHeat @ 0x140560004 (MiNotifyPageHeat.c)
 */

char __fastcall MiProcessTransitionHeatBatch(unsigned int *a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  struct _KTHREAD *v3; // rbx
  ULONG_PTR v4; // rdi
  __int64 v5; // rax
  unsigned __int8 AbOrphanedEntrySummary; // al
  char v7; // cl
  int SessionId; // eax
  bool v9; // zf
  unsigned int *i; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r8
  unsigned __int64 v14; // r9
  _QWORD *v15; // r8
  unsigned int v17; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v17 = 0;
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
  EtwTraceAutoBoostEntryExhaustion((__int64)v3, (__int64)&qword_140C50E80);
LABEL_8:
  if ( !v4 )
    goto LABEL_3;
  if ( (unsigned __int64)&qword_140C50E80 >= 0xFFFF800000000000uLL
    && byte_140C4FA08[(((unsigned __int64)&qword_140C50E80 >> 39) & 0x1FF) - 256] == 1 )
  {
    SessionId = MmGetSessionIdEx((__int64)v3->ApcState.Process);
  }
  else
  {
    SessionId = -1;
  }
  *(_DWORD *)(v4 + 40) = SessionId;
  *(_QWORD *)(v4 + 32) = (unsigned __int64)&qword_140C50E80 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_16:
  --v3->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v3, (__int64)&qword_140C50E80, &v17);
  v9 = v3->SpecialApcDisable++ == -1;
  if ( v9 && ($C459BD0D405E8E46662177FB3D0A143F *)v3->ApcState.ApcListHead[0].Flink != &v3->152 )
    KiCheckForKernelApcDelivery();
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C50E80, 17LL, 0LL)
    || ExfTryAcquirePushLockShared(&qword_140C50E80) )
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
      v11 = *(_QWORD *)i >> 12;
      v12 = (*(_QWORD *)i & 0x3FFLL) + 1;
      v13 = (*(_QWORD *)i >> 10) & 3LL;
      if ( ((*(_QWORD *)i >> 10) & 3) != 0 )
      {
        do
        {
          v12 <<= 9;
          v11 >>= 9;
          LODWORD(v13) = v13 - 1;
        }
        while ( (_DWORD)v13 );
      }
      v14 = v12 + v11;
      if ( v11 < v12 + v11 )
        break;
LABEL_33:
      ;
    }
    v15 = (_QWORD *)(48 * v11 - 0x57FFFFFFFD8LL);
    while ( v11 <= 0xFFFFFFFFFLL && ((*v15 >> 50) & 1) != 0 )
    {
      ++v11;
      v15 += 6;
      if ( v11 >= v14 )
        goto LABEL_33;
    }
LABEL_36:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C50E80, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140C50E80);
    KeAbPostRelease((ULONG_PTR)&qword_140C50E80);
  }
  else if ( v4 )
  {
    KeAbPostReleaseEx((ULONG_PTR)&qword_140C50E80, v4);
  }
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
