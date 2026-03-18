/*
 * XREFs of HalReturnToFirmware @ 0x1404B8BE0
 * Callers:
 *     HaliAcpiSleep @ 0x140382C30 (HaliAcpiSleep.c)
 *     HalpLegacyShutdown @ 0x1404B8D30 (HalpLegacyShutdown.c)
 *     HalpShutdownReset @ 0x1404B9090 (HalpShutdownReset.c)
 *     KeBugCheck2 @ 0x140511010 (KeBugCheck2.c)
 *     ExRebootSystemForRecovery @ 0x1405AC988 (ExRebootSystemForRecovery.c)
 *     PopInvokeSystemStateHandler @ 0x14098ED58 (PopInvokeSystemStateHandler.c)
 *     PopShutdownSystem @ 0x1409AE954 (PopShutdownSystem.c)
 *     KdpSendWaitContinue @ 0x1409B54F4 (KdpSendWaitContinue.c)
 *     HdlspBugCheckProcessing @ 0x1409EBD54 (HdlspBugCheckProcessing.c)
 * Callees:
 *     HalpAcquireCmosSpinLock @ 0x14020215C (HalpAcquireCmosSpinLock.c)
 *     DbgPrint @ 0x14033C6D0 (DbgPrint.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     HalpTimerStopAllTimers @ 0x1404B154C (HalpTimerStopAllTimers.c)
 *     HalpPowerWriteResetCommand @ 0x1404B8D4C (HalpPowerWriteResetCommand.c)
 *     HalpShutdown @ 0x1404B8ECC (HalpShutdown.c)
 *     HalpInterruptResetAllProcessors @ 0x1404CD7CC (HalpInterruptResetAllProcessors.c)
 *     KdPowerTransitionEx @ 0x14050B510 (KdPowerTransitionEx.c)
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
  JUMPOUT(0x1404B8C6BLL);
}
