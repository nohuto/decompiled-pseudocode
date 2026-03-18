/*
 * XREFs of ACPISetDeviceWorker @ 0x1C00215BC
 * Callers:
 *     ACPICMButtonStartWorker @ 0x1C00029E0 (ACPICMButtonStartWorker.c)
 *     ACPIFanDeviceControl @ 0x1C0003160 (ACPIFanDeviceControl.c)
 *     ACPIFanLoop @ 0x1C0003664 (ACPIFanLoop.c)
 *     ACPIThermalLoopEx @ 0x1C00209D8 (ACPIThermalLoopEx.c)
 *     ACPIRootPowerCallBack @ 0x1C002ED80 (ACPIRootPowerCallBack.c)
 *     ACPICMButtonNotify @ 0x1C004D608 (ACPICMButtonNotify.c)
 *     ACPICMExperienceButtonHandleEvent @ 0x1C004D9FC (ACPICMExperienceButtonHandleEvent.c)
 *     ACPIFanFSTCallback @ 0x1C0054AC0 (ACPIFanFSTCallback.c)
 *     ACPIPepCleanupPlatformNotificationSupport @ 0x1C00B0268 (ACPIPepCleanupPlatformNotificationSupport.c)
 *     ACPIPepPowerSettingChangeCallback @ 0x1C00B0520 (ACPIPepPowerSettingChangeCallback.c)
 * Callees:
 *     <none>
 */

void __fastcall ACPISetDeviceWorker(__int64 a1, int a2)
{
  KIRQL v4; // al
  bool v5; // si
  _QWORD *v6; // rdi
  _QWORD *v7; // rcx

  v4 = KeAcquireSpinLockRaiseToDpc(&ACPIWorkerQueueSpinLock);
  *(_DWORD *)(a1 + 160) |= a2;
  v5 = 0;
  v6 = (_QWORD *)(a1 + 168);
  if ( !*v6 )
  {
    v7 = (_QWORD *)qword_1C0080A68;
    if ( *(__int64 **)qword_1C0080A68 != &ACPIDeviceWorkQueue )
      __fastfail(3u);
    *v6 = &ACPIDeviceWorkQueue;
    v6[1] = v7;
    *v7 = v6;
    qword_1C0080A68 = (__int64)v6;
    v5 = ACPIWorkerBusy == 0;
    ACPIWorkerBusy = 1;
  }
  KeReleaseSpinLock(&ACPIWorkerQueueSpinLock, v4);
  if ( v5 )
    ExQueueWorkItem(&ACPIWorkItem, DelayedWorkQueue);
}
