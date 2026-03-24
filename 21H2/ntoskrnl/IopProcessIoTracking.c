/*
 * XREFs of IopProcessIoTracking @ 0x14050855C
 * Callers:
 *     IopPerfCompleteRequest @ 0x140508094 (IopPerfCompleteRequest.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryAcquirePushLockShared @ 0x14028AEE0 (ExfTryAcquirePushLockShared.c)
 *     KeAbPostReleaseEx @ 0x14028DE10 (KeAbPostReleaseEx.c)
 *     ExfReleasePushLockShared @ 0x1402F1470 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F921C (EtwTraceAutoBoostEntryExhaustion.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

char __fastcall IopProcessIoTracking(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  char v4; // si
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v6; // rbx
  ULONG_PTR v7; // rdi
  unsigned __int8 AbEntrySummary; // cl
  unsigned __int8 AbOrphanedEntrySummary; // al
  __int64 v10; // rax
  int SessionId; // eax
  __int64 v12; // rcx
  bool v13; // zf
  char result; // al
  __int64 i; // rbx
  int v16; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v17[3]; // [rsp+30h] [rbp-48h] BYREF

  v17[0] = 24LL;
  v4 = 0;
  v17[1] = a1;
  v17[2] = a2;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v4 = 1;
  }
  v16 = 0;
  v6 = KeGetCurrentThread();
  --v6->SpecialApcDisable;
  if ( ++v6->AbAllocationRegionCount != 1 )
  {
    v7 = 0LL;
LABEL_5:
    _interlockedbittestandset((volatile signed __int32 *)&v6->116 + 1, 0x10u);
    goto LABEL_18;
  }
  AbEntrySummary = v6->AbEntrySummary;
  if ( AbEntrySummary )
    goto LABEL_9;
  if ( v6->AbOrphanedEntrySummary )
  {
    AbOrphanedEntrySummary = v6->AbOrphanedEntrySummary;
    v6->AbOrphanedEntrySummary = 0;
    AbEntrySummary = AbOrphanedEntrySummary | v6->AbEntrySummary;
LABEL_9:
    _BitScanForward((unsigned int *)&v10, AbEntrySummary);
    v6->AbEntrySummary = AbEntrySummary & ~(1 << v10);
    v7 = (ULONG_PTR)&v6->LockEntries[v10];
    goto LABEL_10;
  }
  v7 = 0LL;
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) == 0 )
    goto LABEL_5;
  EtwTraceAutoBoostEntryExhaustion((__int64)v6, (__int64)&IopPerfIoTrackingLock);
LABEL_10:
  if ( !v7 )
    goto LABEL_5;
  if ( (unsigned __int64)&IopPerfIoTrackingLock >= 0xFFFF800000000000uLL
    && byte_140C4F9C8[(((unsigned __int64)&IopPerfIoTrackingLock >> 39) & 0x1FF) - 256] == 1 )
  {
    SessionId = MmGetSessionIdEx((__int64)v6->ApcState.Process);
  }
  else
  {
    SessionId = -1;
  }
  *(_DWORD *)(v7 + 40) = SessionId;
  *(_QWORD *)(v7 + 32) = (unsigned __int64)&IopPerfIoTrackingLock & 0x7FFFFFFFFFFFFFFCLL;
LABEL_18:
  --v6->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v6, (__int64)&IopPerfIoTrackingLock, (__int64)&v16, a4);
  v13 = v6->SpecialApcDisable++ == -1;
  if ( v13 && ($C459BD0D405E8E46662177FB3D0A143F *)v6->ApcState.ApcListHead[0].Flink != &v6->152 )
    KiCheckForKernelApcDelivery(v12);
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)&IopPerfIoTrackingLock, 17LL, 0LL)
    || (result = ExfTryAcquirePushLockShared(&IopPerfIoTrackingLock)) != 0 )
  {
    if ( v7 )
      *(_BYTE *)(v7 + 26) |= 1u;
    for ( i = IopPerfIoTrackingListHead; (__int64 *)i != &IopPerfIoTrackingListHead; i = *(_QWORD *)i )
      (*(void (__fastcall **)(_QWORD *))(i + 16))(v17);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&IopPerfIoTrackingLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&IopPerfIoTrackingLock);
    result = KeAbPostRelease((ULONG_PTR)&IopPerfIoTrackingLock);
  }
  else if ( v7 )
  {
    result = KeAbPostReleaseEx((ULONG_PTR)&IopPerfIoTrackingLock, v7);
  }
  if ( v4 == 1 )
    return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return result;
}
