/*
 * XREFs of EtwpCovSampCaptureContextStop @ 0x140635EEC
 * Callers:
 *     EtwpCoverageSamplerStop @ 0x1409F39DC (EtwpCoverageSamplerStop.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     EtwpCovSampCaptureCancelApcs @ 0x140635C4C (EtwpCovSampCaptureCancelApcs.c)
 *     EtwpCovSampCaptureCleanupLookasides @ 0x140635DB8 (EtwpCovSampCaptureCleanupLookasides.c)
 *     EtwpCovSampCaptureFlushSampleBuffers @ 0x1406360C0 (EtwpCovSampCaptureFlushSampleBuffers.c)
 *     EtwpCovSampCaptureFreeLookasides @ 0x1409EF0D4 (EtwpCovSampCaptureFreeLookasides.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

char __fastcall EtwpCovSampCaptureContextStop(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  KSPIN_LOCK *v3; // rbp
  KIRQL v4; // al
  unsigned __int64 v5; // rsi
  __int64 *i; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v9; // eax
  _DWORD *SchedulerAssist; // r8
  bool v11; // zf
  LARGE_INTEGER v12; // rbx
  void *v13; // rcx
  void *v14; // rcx
  LARGE_INTEGER Timeout; // [rsp+50h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = (KSPIN_LOCK *)(a1 + 368);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 368));
  *(_DWORD *)(a1 + 1024) = 0;
  v5 = v4;
  if ( *(_DWORD *)(a1 + 1028) )
    *(_DWORD *)(a1 + 1028) = 0;
  for ( i = *(__int64 **)(a1 + 688); i != (__int64 *)(a1 + 688); i = (__int64 *)*i )
  {
    *((_DWORD *)i + 6) = 0;
    *((_DWORD *)i + 7) = 0;
  }
  KeResetEvent((PRKEVENT)(a1 + 1000));
  *(_DWORD *)(a1 + 1032) = 0;
  KxReleaseSpinLock(v3);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v11 = (v9 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v9;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  EtwpCovSampCaptureFlushSampleBuffers(a1);
  EtwpCovSampCaptureCleanupLookasides(a1);
  v12.QuadPart = -2500000LL;
  for ( Timeout.QuadPart = -2500000LL; KeWaitForSingleObject((PVOID)(a1 + 1000), Executive, 0, 0, &Timeout); Timeout = v12 )
  {
    EtwpCovSampCaptureCancelApcs(a1);
    EtwpCovSampCaptureFlushSampleBuffers(a1);
    v12.QuadPart *= 2LL;
    if ( v12.QuadPart < -9600000000LL )
      v12.QuadPart = -9600000000LL;
  }
  EtwpCovSampCaptureFreeLookasides(a1);
  v13 = *(void **)(a1 + 1064);
  if ( v13 )
  {
    ExFreePoolWithTag(v13, 0x56777445u);
    *(_QWORD *)(a1 + 1064) = 0LL;
  }
  v14 = *(void **)(a1 + 1072);
  if ( v14 )
  {
    ExFreePoolWithTag(v14, 0x56777445u);
    *(_QWORD *)(a1 + 1072) = 0LL;
  }
  *(_QWORD *)(a1 + 1056) = 0LL;
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
