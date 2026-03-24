/*
 * XREFs of KeGetProcessorIndexFromNumber @ 0x14027BE80
 * Callers:
 *     HalpInterruptSendIpi @ 0x140220210 (HalpInterruptSendIpi.c)
 *     PoGetIdleTimes @ 0x14027BD3C (PoGetIdleTimes.c)
 *     HalRequestSoftwareInterrupt @ 0x140293E90 (HalRequestSoftwareInterrupt.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1402AFA30 (KeQueryLogicalProcessorRelationship.c)
 *     PoGetPerfStateAndParkingInfo @ 0x1402C3774 (PoGetPerfStateAndParkingInfo.c)
 *     KeSetTargetProcessorDpcEx @ 0x1402D1640 (KeSetTargetProcessorDpcEx.c)
 *     HalpInterruptDestinationToTarget @ 0x140378D30 (HalpInterruptDestinationToTarget.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x14037A874 (KeSetIdealProcessorThreadByNumber.c)
 *     HalGetInterruptTargetInformation @ 0x1403C9A60 (HalGetInterruptTargetInformation.c)
 *     HalSendNMI @ 0x1404BDD70 (HalSendNMI.c)
 *     HalpInterruptDpReplaceBegin @ 0x1404D6A5C (HalpInterruptDpReplaceBegin.c)
 *     PpmClearSimulatedIdle @ 0x14056584C (PpmClearSimulatedIdle.c)
 *     PpmSetSimulatedIdle @ 0x1405677A4 (PpmSetSimulatedIdle.c)
 *     PpmUpdateProcessorIdleVeto @ 0x1405684A0 (PpmUpdateProcessorIdleVeto.c)
 *     PspBuildCreateProcessContext @ 0x140608C44 (PspBuildCreateProcessContext.c)
 *     ExpQuerySystemInformation @ 0x140651070 (ExpQuerySystemInformation.c)
 *     IopConnectInterrupt @ 0x1407621CC (IopConnectInterrupt.c)
 *     PpmUpdateIdleStates @ 0x140796560 (PpmUpdateIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x1408E22A0 (PpmInstallPlatformIdleStates.c)
 *     PpmClearSimulatedLoad @ 0x1408E60E4 (PpmClearSimulatedLoad.c)
 *     PpmPerfGetBrandedFrequency @ 0x1408E620C (PpmPerfGetBrandedFrequency.c)
 *     PpmSetSimulatedLoad @ 0x1408E6470 (PpmSetSimulatedLoad.c)
 *     HalpInterruptReinitialize @ 0x140995D78 (HalpInterruptReinitialize.c)
 *     HalpInterruptUpdateLocalUnitIdentifier @ 0x1409A8F7C (HalpInterruptUpdateLocalUnitIdentifier.c)
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
