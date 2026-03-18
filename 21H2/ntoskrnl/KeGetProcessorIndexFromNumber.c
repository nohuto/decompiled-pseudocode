/*
 * XREFs of KeGetProcessorIndexFromNumber @ 0x140293580
 * Callers:
 *     PoGetPerfStateAndParkingInfo @ 0x1402485E0 (PoGetPerfStateAndParkingInfo.c)
 *     HalpInterruptDestinationToTarget @ 0x140252164 (HalpInterruptDestinationToTarget.c)
 *     KeSetTargetProcessorDpcEx @ 0x14025ACA0 (KeSetTargetProcessorDpcEx.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140263790 (KeQueryLogicalProcessorRelationship.c)
 *     KeSelectIdealProcessor @ 0x140293268 (KeSelectIdealProcessor.c)
 *     PoGetIdleTimes @ 0x140293444 (PoGetIdleTimes.c)
 *     HalpInterruptSendIpi @ 0x1402ADD00 (HalpInterruptSendIpi.c)
 *     HalSendNMI @ 0x1402DA8E0 (HalSendNMI.c)
 *     KiForwardTick @ 0x140303740 (KiForwardTick.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x1403861B4 (KeSetIdealProcessorThreadByNumber.c)
 *     IntPartGetProcessorEfficiencyClass @ 0x1403C0E9C (IntPartGetProcessorEfficiencyClass.c)
 *     HalGetInterruptTargetInformation @ 0x1403D8950 (HalGetInterruptTargetInformation.c)
 *     HalpInterruptDpReplaceBegin @ 0x140523D5C (HalpInterruptDpReplaceBegin.c)
 *     PpmClearSimulatedIdle @ 0x1405C70FC (PpmClearSimulatedIdle.c)
 *     PpmSetSimulatedIdle @ 0x1405C8BDC (PpmSetSimulatedIdle.c)
 *     PpmUpdateProcessorIdleVeto @ 0x1405C9740 (PpmUpdateProcessorIdleVeto.c)
 *     PspBuildCreateProcessContext @ 0x140670488 (PspBuildCreateProcessContext.c)
 *     ExpQuerySystemInformation @ 0x14073B5A0 (ExpQuerySystemInformation.c)
 *     IopConnectInterrupt @ 0x140817258 (IopConnectInterrupt.c)
 *     PpmUpdateIdleStates @ 0x140829930 (PpmUpdateIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x14098AAF0 (PpmInstallPlatformIdleStates.c)
 *     PpmClearSimulatedLoad @ 0x14098E9D8 (PpmClearSimulatedLoad.c)
 *     PpmPerfGetBrandedFrequency @ 0x14098EB00 (PpmPerfGetBrandedFrequency.c)
 *     PpmSetSimulatedLoad @ 0x14098ED44 (PpmSetSimulatedLoad.c)
 *     HalpInterruptReinitialize @ 0x140A505D4 (HalpInterruptReinitialize.c)
 *     HalpInterruptUpdateLocalUnitIdentifier @ 0x140A62EE4 (HalpInterruptUpdateLocalUnitIdentifier.c)
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
