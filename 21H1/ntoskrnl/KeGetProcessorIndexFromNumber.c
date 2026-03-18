/*
 * XREFs of KeGetProcessorIndexFromNumber @ 0x140205810
 * Callers:
 *     PoGetIdleTimes @ 0x1402056D8 (PoGetIdleTimes.c)
 *     HalpInterruptSendIpi @ 0x14026E120 (HalpInterruptSendIpi.c)
 *     PoGetPerfStateAndParkingInfo @ 0x140313E68 (PoGetPerfStateAndParkingInfo.c)
 *     KeSetTargetProcessorDpcEx @ 0x140320EE0 (KeSetTargetProcessorDpcEx.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140327220 (KeQueryLogicalProcessorRelationship.c)
 *     HalRequestSoftwareInterrupt @ 0x140359A80 (HalRequestSoftwareInterrupt.c)
 *     HalpInterruptDestinationToTarget @ 0x140375B00 (HalpInterruptDestinationToTarget.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x140377B34 (KeSetIdealProcessorThreadByNumber.c)
 *     HalGetInterruptTargetInformation @ 0x1403C54C0 (HalGetInterruptTargetInformation.c)
 *     HalSendNMI @ 0x1404B87B0 (HalSendNMI.c)
 *     HalpInterruptDpReplaceBegin @ 0x1404D164C (HalpInterruptDpReplaceBegin.c)
 *     PpmClearSimulatedIdle @ 0x14055FD4C (PpmClearSimulatedIdle.c)
 *     PpmSetSimulatedIdle @ 0x140561CA4 (PpmSetSimulatedIdle.c)
 *     PpmUpdateProcessorIdleVeto @ 0x1405629A0 (PpmUpdateProcessorIdleVeto.c)
 *     ExpQuerySystemInformation @ 0x1405E5DF0 (ExpQuerySystemInformation.c)
 *     PspBuildCreateProcessContext @ 0x140707AB4 (PspBuildCreateProcessContext.c)
 *     IopConnectInterrupt @ 0x14074A9DC (IopConnectInterrupt.c)
 *     PpmUpdateIdleStates @ 0x14077F2B0 (PpmUpdateIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x1408DDA00 (PpmInstallPlatformIdleStates.c)
 *     PpmClearSimulatedLoad @ 0x1408E1824 (PpmClearSimulatedLoad.c)
 *     PpmPerfGetBrandedFrequency @ 0x1408E194C (PpmPerfGetBrandedFrequency.c)
 *     PpmSetSimulatedLoad @ 0x1408E1BB0 (PpmSetSimulatedLoad.c)
 *     HalpInterruptReinitialize @ 0x1409915D8 (HalpInterruptReinitialize.c)
 *     HalpInterruptUpdateLocalUnitIdentifier @ 0x1409A530C (HalpInterruptUpdateLocalUnitIdentifier.c)
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
