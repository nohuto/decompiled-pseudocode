/*
 * XREFs of KeGetProcessorIndexFromNumber @ 0x140269E20
 * Callers:
 *     HalRequestSoftwareInterrupt @ 0x140211E00 (HalRequestSoftwareInterrupt.c)
 *     KeQueryLogicalProcessorRelationship @ 0x14022DD90 (KeQueryLogicalProcessorRelationship.c)
 *     PoGetPerfStateAndParkingInfo @ 0x140241CF4 (PoGetPerfStateAndParkingInfo.c)
 *     KeSetTargetProcessorDpcEx @ 0x14024FAD0 (KeSetTargetProcessorDpcEx.c)
 *     PoGetIdleTimes @ 0x140269CDC (PoGetIdleTimes.c)
 *     HalpInterruptSendIpi @ 0x1402C4B10 (HalpInterruptSendIpi.c)
 *     HalpInterruptDestinationToTarget @ 0x140378880 (HalpInterruptDestinationToTarget.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x14037A3C4 (KeSetIdealProcessorThreadByNumber.c)
 *     HalGetInterruptTargetInformation @ 0x1403C9C00 (HalGetInterruptTargetInformation.c)
 *     HalSendNMI @ 0x1404BDFB0 (HalSendNMI.c)
 *     HalpInterruptDpReplaceBegin @ 0x1404D6C9C (HalpInterruptDpReplaceBegin.c)
 *     PpmClearSimulatedIdle @ 0x140565A8C (PpmClearSimulatedIdle.c)
 *     PpmSetSimulatedIdle @ 0x1405679E4 (PpmSetSimulatedIdle.c)
 *     PpmUpdateProcessorIdleVeto @ 0x1405686E0 (PpmUpdateProcessorIdleVeto.c)
 *     ExpQuerySystemInformation @ 0x140645E90 (ExpQuerySystemInformation.c)
 *     PspBuildCreateProcessContext @ 0x1406986F4 (PspBuildCreateProcessContext.c)
 *     IopConnectInterrupt @ 0x14076238C (IopConnectInterrupt.c)
 *     PpmUpdateIdleStates @ 0x140796760 (PpmUpdateIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x1408E2400 (PpmInstallPlatformIdleStates.c)
 *     PpmClearSimulatedLoad @ 0x1408E6244 (PpmClearSimulatedLoad.c)
 *     PpmPerfGetBrandedFrequency @ 0x1408E636C (PpmPerfGetBrandedFrequency.c)
 *     PpmSetSimulatedLoad @ 0x1408E65D0 (PpmSetSimulatedLoad.c)
 *     HalpInterruptReinitialize @ 0x140996D78 (HalpInterruptReinitialize.c)
 *     HalpInterruptUpdateLocalUnitIdentifier @ 0x1409A9EAC (HalpInterruptUpdateLocalUnitIdentifier.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall KeGetProcessorIndexFromNumber(PPROCESSOR_NUMBER ProcNumber)
{
  __int64 Group; // rax
  __int64 Number; // rdx
  ULONG result; // eax

  if ( ProcNumber->Reserved )
    return -1;
  Group = ProcNumber->Group;
  if ( !(_WORD)Group && !ProcNumber->Number )
    return 0;
  if ( (unsigned __int16)Group >= (unsigned __int16)KiMaximumGroups )
    return -1;
  Number = ProcNumber->Number;
  if ( (unsigned __int8)Number >= 0x40u )
    return -1;
  result = KiProcessorNumberToIndexMappingTable[64 * Group + Number];
  if ( !result )
    return -1;
  return result;
}
