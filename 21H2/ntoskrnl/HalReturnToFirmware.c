/*
 * XREFs of HalReturnToFirmware @ 0x14050A7E0
 * Callers:
 *     HaliAcpiSleep @ 0x140390D20 (HaliAcpiSleep.c)
 *     HalpLegacyShutdown @ 0x14050A920 (HalpLegacyShutdown.c)
 *     HalpShutdownReset @ 0x14050AC80 (HalpShutdownReset.c)
 *     KeBugCheck2 @ 0x1405660A0 (KeBugCheck2.c)
 *     KeRebootSystemForRecovery @ 0x140578830 (KeRebootSystemForRecovery.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x140579150 (KiDeferredBugcheckRecoveryWorker.c)
 *     KiHandleMultipleBugchecksDuringRecovery @ 0x14057938C (KiHandleMultipleBugchecksDuringRecovery.c)
 *     PopInvokeSystemStateHandler @ 0x140A4AF0C (PopInvokeSystemStateHandler.c)
 *     PopShutdownSystem @ 0x140A6BE04 (PopShutdownSystem.c)
 *     KdpSendWaitContinue @ 0x140A6FB80 (KdpSendWaitContinue.c)
 *     HdlspBugCheckProcessing @ 0x140AA8D9C (HdlspBugCheckProcessing.c)
 * Callees:
 *     HalpAcquireCmosSpinLock @ 0x14022D9F0 (HalpAcquireCmosSpinLock.c)
 *     DbgPrint @ 0x140369BD0 (DbgPrint.c)
 *     KdPowerTransitionEx @ 0x1403DA590 (KdPowerTransitionEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     HalpTimerStopAllTimers @ 0x1405033CC (HalpTimerStopAllTimers.c)
 *     HalpPowerWriteResetCommand @ 0x14050A93C (HalpPowerWriteResetCommand.c)
 *     HalpShutdown @ 0x14050AABC (HalpShutdown.c)
 *     HalpInterruptResetAllProcessors @ 0x14051F9A8 (HalpInterruptResetAllProcessors.c)
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
      KdPowerTransitionEx(4, 0);
      HalpShutdown();
    }
    else if ( a1 <= 1 || a1 > 3 )
    {
      DbgPrint("HalReturnToFirmware called\n");
      __debugbreak();
    }
  }
  KdPowerTransitionEx(4, 0);
  if ( HalpRebootHandler )
    off_140C01FA0[0]();
  _disable();
  if ( !HalpHvCpuManager || HalpEnlightenment )
    HalpTimerStopAllTimers();
  HalpAcquireCmosSpinLock(v2, v1, v3);
  if ( HalpResetParkDisposition )
    HalpInterruptResetAllProcessors();
  HalpPowerWriteResetCommand(0LL, 0LL);
  JUMPOUT(0x14050A86BLL);
}
