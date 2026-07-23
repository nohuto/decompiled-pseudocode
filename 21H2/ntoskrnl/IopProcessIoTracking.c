/*
 * XREFs of IopProcessIoTracking @ 0x1405084DC
 * Callers:
 *     IopPerfCompleteRequest @ 0x140508014 (IopPerfCompleteRequest.c)
 * Callees:
 *     ExfTryAcquirePushLockShared @ 0x140208080 (ExfTryAcquirePushLockShared.c)
 *     KeAbPostReleaseEx @ 0x14020AFB0 (KeAbPostReleaseEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F9348 (EtwTraceAutoBoostEntryExhaustion.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
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
  bool v10; // zf
  char result; // al
  __int64 i; // rbx
  unsigned int v13; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v14[3]; // [rsp+30h] [rbp-48h] BYREF

  v14[0] = 24LL;
  v2 = 0;
  v14[1] = a1;
  v14[2] = a2;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v2 = 1;
  }
  v13 = 0;
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
    && byte_140C4FA08[(((unsigned __int64)&IopPerfIoTrackingLock >> 39) & 0x1FF) - 256] == 1 )
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
  KiAbThreadRemoveBoosts((ULONG_PTR)v4, (__int64)&IopPerfIoTrackingLock, &v13);
  v10 = v4->SpecialApcDisable++ == -1;
  if ( v10 && ($C459BD0D405E8E46662177FB3D0A143F *)v4->ApcState.ApcListHead[0].Flink != &v4->152 )
    KiCheckForKernelApcDelivery();
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)&IopPerfIoTrackingLock, 17LL, 0LL)
    || (result = ExfTryAcquirePushLockShared(&IopPerfIoTrackingLock)) != 0 )
  {
    if ( v5 )
      *(_BYTE *)(v5 + 26) |= 1u;
    for ( i = IopPerfIoTrackingListHead; (__int64 *)i != &IopPerfIoTrackingListHead; i = *(_QWORD *)i )
      (*(void (__fastcall **)(_QWORD *))(i + 16))(v14);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&IopPerfIoTrackingLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&IopPerfIoTrackingLock);
    result = KeAbPostRelease((ULONG_PTR)&IopPerfIoTrackingLock);
  }
  else if ( v5 )
  {
    result = KeAbPostReleaseEx((ULONG_PTR)&IopPerfIoTrackingLock, v5);
  }
  if ( v2 == 1 )
    return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return result;
}
