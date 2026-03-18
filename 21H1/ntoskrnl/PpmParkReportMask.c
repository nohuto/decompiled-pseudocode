/*
 * XREFs of PpmParkReportMask @ 0x140305930
 * Callers:
 *     <none>
 * Callees:
 *     KeCpuSetReportParkedProcessors @ 0x14020245C (KeCpuSetReportParkedProcessors.c)
 *     KeCopyAffinityEx @ 0x140277930 (KeCopyAffinityEx.c)
 *     KeIsEqualAffinityEx @ 0x1403BF3F0 (KeIsEqualAffinityEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     HvlParkedVirtualProcessors @ 0x1404F24F0 (HvlParkedVirtualProcessors.c)
 */

char PpmParkReportMask()
{
  if ( PpmIsParkingEnabled
    && !(unsigned int)KeIsEqualAffinityEx(PpmPerfCoreParkingMask, &PpmPerfReportedCoreParkingMask) )
  {
    KeCopyAffinityEx((__int64)&PpmPerfReportedCoreParkingMask, PpmPerfCoreParkingMask);
    if ( KeGetCurrentPrcb()->PowerState.Hypervisor == ProcHypervisorPower )
      HvlParkedVirtualProcessors();
    if ( PpmParkMaskHandler )
      PpmParkMaskHandler(PpmCheckTime, PpmPerfCoreParkingMask);
    KeCpuSetReportParkedProcessors(PpmPerfCoreParkingMask, 2u);
  }
  return 1;
}
