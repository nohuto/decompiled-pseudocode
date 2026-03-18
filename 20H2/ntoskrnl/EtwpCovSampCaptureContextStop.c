/*
 * XREFs of EtwpCovSampCaptureContextStop @ 0x1405AD05C
 * Callers:
 *     EtwpCoverageSamplerStop @ 0x140949C88 (EtwpCoverageSamplerStop.c)
 * Callees:
 *     KeResetEvent @ 0x140209F50 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwpCovSampCaptureCancelApcs @ 0x1405ACDC4 (EtwpCovSampCaptureCancelApcs.c)
 *     EtwpCovSampCaptureCleanupLookasides @ 0x1405ACF28 (EtwpCovSampCaptureCleanupLookasides.c)
 *     EtwpCovSampCaptureFlushSampleBuffers @ 0x1405AD230 (EtwpCovSampCaptureFlushSampleBuffers.c)
 *     EtwpCovSampCaptureFreeLookasides @ 0x140945138 (EtwpCovSampCaptureFreeLookasides.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall EtwpCovSampCaptureContextStop(__int64 a1)
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
  v3 = (KSPIN_LOCK *)(a1 + 264);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 264));
  *(_DWORD *)(a1 + 912) = 0;
  v5 = v4;
  if ( *(_DWORD *)(a1 + 916) )
    *(_DWORD *)(a1 + 916) = 0;
  for ( i = *(__int64 **)(a1 + 576); i != (__int64 *)(a1 + 576); i = (__int64 *)*i )
  {
    *((_DWORD *)i + 6) = 0;
    *((_DWORD *)i + 7) = 0;
  }
  KeResetEvent((PRKEVENT)(a1 + 888));
  *(_DWORD *)(a1 + 920) = 0;
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
  for ( Timeout.QuadPart = -2500000LL; KeWaitForSingleObject((PVOID)(a1 + 888), Executive, 0, 0, &Timeout); Timeout = v12 )
  {
    EtwpCovSampCaptureCancelApcs(a1);
    EtwpCovSampCaptureFlushSampleBuffers(a1);
    v12.QuadPart *= 2LL;
    if ( v12.QuadPart < -9600000000LL )
      v12.QuadPart = -9600000000LL;
  }
  EtwpCovSampCaptureFreeLookasides(a1);
  v13 = *(void **)(a1 + 952);
  if ( v13 )
  {
    ExFreePoolWithTag(v13, 0x56777445u);
    *(_QWORD *)(a1 + 952) = 0LL;
  }
  v14 = *(void **)(a1 + 960);
  if ( v14 )
  {
    ExFreePoolWithTag(v14, 0x56777445u);
    *(_QWORD *)(a1 + 960) = 0LL;
  }
  *(_QWORD *)(a1 + 944) = 0LL;
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
