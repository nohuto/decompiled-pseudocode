/*
 * XREFs of KeGetProcessorIndexFromNumber @ 0x1402981D0
 * Callers:
 *     HalpInterruptSendIpi @ 0x1402150D0 (HalpInterruptSendIpi.c)
 *     HalRequestSoftwareInterrupt @ 0x140273DE0 (HalRequestSoftwareInterrupt.c)
 *     PoGetIdleTimes @ 0x140298098 (PoGetIdleTimes.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1402DD500 (KeQueryLogicalProcessorRelationship.c)
 *     PoGetPerfStateAndParkingInfo @ 0x140351CB8 (PoGetPerfStateAndParkingInfo.c)
 *     KeSetTargetProcessorDpcEx @ 0x14035E9A0 (KeSetTargetProcessorDpcEx.c)
 *     HalpInterruptDestinationToTarget @ 0x140376910 (HalpInterruptDestinationToTarget.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x140378944 (KeSetIdealProcessorThreadByNumber.c)
 *     HalGetInterruptTargetInformation @ 0x1403C6430 (HalGetInterruptTargetInformation.c)
 *     HalSendNMI @ 0x1404B8E90 (HalSendNMI.c)
 *     HalpInterruptDpReplaceBegin @ 0x1404D1AFC (HalpInterruptDpReplaceBegin.c)
 *     PpmClearSimulatedIdle @ 0x14056039C (PpmClearSimulatedIdle.c)
 *     PpmSetSimulatedIdle @ 0x1405622F4 (PpmSetSimulatedIdle.c)
 *     PpmUpdateProcessorIdleVeto @ 0x140562FF0 (PpmUpdateProcessorIdleVeto.c)
 *     ExpQuerySystemInformation @ 0x14068F290 (ExpQuerySystemInformation.c)
 *     PspBuildCreateProcessContext @ 0x1406B1BF4 (PspBuildCreateProcessContext.c)
 *     IopConnectInterrupt @ 0x14074EDFC (IopConnectInterrupt.c)
 *     PpmUpdateIdleStates @ 0x14077EAA0 (PpmUpdateIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x1408DEC60 (PpmInstallPlatformIdleStates.c)
 *     PpmClearSimulatedLoad @ 0x1408E2AA4 (PpmClearSimulatedLoad.c)
 *     PpmPerfGetBrandedFrequency @ 0x1408E2BCC (PpmPerfGetBrandedFrequency.c)
 *     PpmSetSimulatedLoad @ 0x1408E2E30 (PpmSetSimulatedLoad.c)
 *     HalpInterruptReinitialize @ 0x140992518 (HalpInterruptReinitialize.c)
 *     HalpInterruptUpdateLocalUnitIdentifier @ 0x1409A614C (HalpInterruptUpdateLocalUnitIdentifier.c)
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
