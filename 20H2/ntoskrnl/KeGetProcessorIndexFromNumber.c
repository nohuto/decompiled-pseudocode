/*
 * XREFs of KeGetProcessorIndexFromNumber @ 0x14033E1A0
 * Callers:
 *     HalpInterruptSendIpi @ 0x14027FB40 (HalpInterruptSendIpi.c)
 *     HalRequestSoftwareInterrupt @ 0x1402F7F30 (HalRequestSoftwareInterrupt.c)
 *     KeSetTargetProcessorDpcEx @ 0x14032F690 (KeSetTargetProcessorDpcEx.c)
 *     PoGetIdleTimes @ 0x14033E060 (PoGetIdleTimes.c)
 *     PoGetPerfStateAndParkingInfo @ 0x140340624 (PoGetPerfStateAndParkingInfo.c)
 *     KeQueryLogicalProcessorRelationship @ 0x14035FA70 (KeQueryLogicalProcessorRelationship.c)
 *     HalpInterruptDestinationToTarget @ 0x1403788A0 (HalpInterruptDestinationToTarget.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x14037A674 (KeSetIdealProcessorThreadByNumber.c)
 *     HalGetInterruptTargetInformation @ 0x1403C8EC0 (HalGetInterruptTargetInformation.c)
 *     HalSendNMI @ 0x1404BC3B0 (HalSendNMI.c)
 *     HalpInterruptDpReplaceBegin @ 0x1404D508C (HalpInterruptDpReplaceBegin.c)
 *     PpmClearSimulatedIdle @ 0x140563D7C (PpmClearSimulatedIdle.c)
 *     PpmSetSimulatedIdle @ 0x140565CD4 (PpmSetSimulatedIdle.c)
 *     PpmUpdateProcessorIdleVeto @ 0x1405669D0 (PpmUpdateProcessorIdleVeto.c)
 *     ExpQuerySystemInformation @ 0x140608060 (ExpQuerySystemInformation.c)
 *     PspBuildCreateProcessContext @ 0x140694298 (PspBuildCreateProcessContext.c)
 *     IopConnectInterrupt @ 0x14075D9DC (IopConnectInterrupt.c)
 *     PpmUpdateIdleStates @ 0x14078C040 (PpmUpdateIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x1408E4AA0 (PpmInstallPlatformIdleStates.c)
 *     PpmClearSimulatedLoad @ 0x1408E88E4 (PpmClearSimulatedLoad.c)
 *     PpmPerfGetBrandedFrequency @ 0x1408E8A0C (PpmPerfGetBrandedFrequency.c)
 *     PpmSetSimulatedLoad @ 0x1408E8C70 (PpmSetSimulatedLoad.c)
 *     HalpInterruptReinitialize @ 0x140998588 (HalpInterruptReinitialize.c)
 *     HalpInterruptUpdateLocalUnitIdentifier @ 0x1409AC0AC (HalpInterruptUpdateLocalUnitIdentifier.c)
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
