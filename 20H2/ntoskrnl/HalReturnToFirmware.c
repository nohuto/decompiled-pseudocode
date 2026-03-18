/*
 * XREFs of HalReturnToFirmware @ 0x1404BC7E0
 * Callers:
 *     HaliAcpiSleep @ 0x140385150 (HaliAcpiSleep.c)
 *     HalpLegacyShutdown @ 0x1404BC930 (HalpLegacyShutdown.c)
 *     HalpShutdownReset @ 0x1404BCC90 (HalpShutdownReset.c)
 *     KeBugCheck2 @ 0x140514F90 (KeBugCheck2.c)
 *     ExRebootSystemForRecovery @ 0x1405B0C14 (ExRebootSystemForRecovery.c)
 *     PopInvokeSystemStateHandler @ 0x140995A68 (PopInvokeSystemStateHandler.c)
 *     PopShutdownSystem @ 0x1409B5724 (PopShutdownSystem.c)
 *     KdpSendWaitContinue @ 0x1409BB4F4 (KdpSendWaitContinue.c)
 *     HdlspBugCheckProcessing @ 0x1409F1D54 (HdlspBugCheckProcessing.c)
 * Callees:
 *     HalpAcquireCmosSpinLock @ 0x140312D1C (HalpAcquireCmosSpinLock.c)
 *     DbgPrint @ 0x1403647B0 (DbgPrint.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     HalpTimerStopAllTimers @ 0x1404B512C (HalpTimerStopAllTimers.c)
 *     HalpPowerWriteResetCommand @ 0x1404BC94C (HalpPowerWriteResetCommand.c)
 *     HalpShutdown @ 0x1404BCACC (HalpShutdown.c)
 *     HalpInterruptResetAllProcessors @ 0x1404D121C (HalpInterruptResetAllProcessors.c)
 *     KdPowerTransitionEx @ 0x14050F490 (KdPowerTransitionEx.c)
 */

void __fastcall __noreturn HalReturnToFirmware(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      KdPowerTransitionEx(4LL, 0LL);
      HalpShutdown();
    }
    else if ( a1 <= 1 || a1 > 3 )
    {
      DbgPrint("HalReturnToFirmware called\n");
      __debugbreak();
    }
  }
  KdPowerTransitionEx(4LL, 0LL);
  if ( HalpRebootHandler )
    off_140C00950[0]();
  _disable();
  if ( !HalpHvCpuManager || HalpEnlightenment )
    HalpTimerStopAllTimers();
  HalpAcquireCmosSpinLock(v2, v1, v3);
  if ( HalpResetParkDisposition )
    HalpInterruptResetAllProcessors();
  HalpPowerWriteResetCommand(0LL, 0LL);
  JUMPOUT(0x1404BC86BLL);
}
