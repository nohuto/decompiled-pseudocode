/*
 * XREFs of IopProcessIoTracking @ 0x1405029CC
 * Callers:
 *     IopPerfCompleteRequest @ 0x1405024FC (IopPerfCompleteRequest.c)
 * Callees:
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryAcquirePushLockShared @ 0x140340930 (ExfTryAcquirePushLockShared.c)
 *     KeAbPostReleaseEx @ 0x140340F60 (KeAbPostReleaseEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F1844 (EtwTraceAutoBoostEntryExhaustion.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

char __fastcall IopProcessIoTracking(__int64 a1, unsigned int a2)
{
  char v2; // si
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v4; // rbx
  ULONG_PTR v5; // rdi
  unsigned __int8 AbEntrySummary; // cl
  unsigned __int8 AbOrphanedEntrySummary; // al
  __int64 v8; // rax
  int SessionId; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  _DWORD *v13; // r9
  bool v14; // zf
  char result; // al
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 i; // rbx
  int v20; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v21[3]; // [rsp+30h] [rbp-48h] BYREF

  v21[0] = 24LL;
  v2 = 0;
  v21[1] = a1;
  v21[2] = a2;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v2 = 1;
  }
  v20 = 0;
  v4 = KeGetCurrentThread();
  --v4->SpecialApcDisable;
  if ( ++v4->AbAllocationRegionCount != 1 )
  {
    v5 = 0LL;
LABEL_5:
    _interlockedbittestandset((volatile signed __int32 *)&v4->116 + 1, 0x10u);
    goto LABEL_18;
  }
  AbEntrySummary = v4->AbEntrySummary;
  if ( AbEntrySummary )
    goto LABEL_9;
  if ( v4->AbOrphanedEntrySummary )
  {
    AbOrphanedEntrySummary = v4->AbOrphanedEntrySummary;
    v4->AbOrphanedEntrySummary = 0;
    AbEntrySummary = AbOrphanedEntrySummary | v4->AbEntrySummary;
LABEL_9:
    _BitScanForward((unsigned int *)&v8, AbEntrySummary);
    v4->AbEntrySummary = AbEntrySummary & ~(1 << v8);
    v5 = (ULONG_PTR)&v4->LockEntries[v8];
    goto LABEL_10;
  }
  v5 = 0LL;
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) == 0 )
    goto LABEL_5;
  EtwTraceAutoBoostEntryExhaustion((__int64)v4, (__int64)&IopPerfIoTrackingLock);
LABEL_10:
  if ( !v5 )
    goto LABEL_5;
  if ( (unsigned __int64)&IopPerfIoTrackingLock >= 0xFFFF800000000000uLL
    && byte_140C4F908[(((unsigned __int64)&IopPerfIoTrackingLock >> 39) & 0x1FF) - 256] == 1 )
  {
    SessionId = MmGetSessionIdEx((__int64)v4->ApcState.Process);
  }
  else
  {
    SessionId = -1;
  }
  *(_DWORD *)(v5 + 40) = SessionId;
  *(_QWORD *)(v5 + 32) = (unsigned __int64)&IopPerfIoTrackingLock & 0x7FFFFFFFFFFFFFFCLL;
LABEL_18:
  --v4->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v4, (__int64)&IopPerfIoTrackingLock, &v20);
  v14 = v4->SpecialApcDisable++ == -1;
  if ( v14 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v4->ApcState.ApcListHead[0].Flink != &v4->152 )
    KiCheckForKernelApcDelivery(v11, v10, v12, v13);
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)&IopPerfIoTrackingLock, 17LL, 0LL)
    || (result = ExfTryAcquirePushLockShared(&IopPerfIoTrackingLock)) != 0 )
  {
    if ( v5 )
      *(_BYTE *)(v5 + 26) |= 1u;
    for ( i = IopPerfIoTrackingListHead; (__int64 *)i != &IopPerfIoTrackingListHead; i = *(_QWORD *)i )
      (*(void (__fastcall **)(_QWORD *))(i + 16))(v21);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&IopPerfIoTrackingLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&IopPerfIoTrackingLock);
    result = KeAbPostRelease((ULONG_PTR)&IopPerfIoTrackingLock);
  }
  else if ( v5 )
  {
    result = KeAbPostReleaseEx((ULONG_PTR)&IopPerfIoTrackingLock, v5);
  }
  if ( v2 == 1 )
    return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v16, v17, v18);
  return result;
}
