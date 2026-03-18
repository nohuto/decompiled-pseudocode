/*
 * XREFs of PpmGetDeepSleepPlatformStateIndex @ 0x14056421C
 * Callers:
 *     PopFxClearDeviceConstraints @ 0x1405682F4 (PopFxClearDeviceConstraints.c)
 *     PopFxEnablePlatformStates @ 0x140568F90 (PopFxEnablePlatformStates.c)
 *     PopPepInitializeVetoMasks @ 0x14057338C (PopPepInitializeVetoMasks.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x1405746F0 (PopPepUpdateDripsDeviceVetoMask.c)
 *     PopCheckResiliencyScenarios @ 0x14071EB50 (PopCheckResiliencyScenarios.c)
 * Callees:
 *     <none>
 */

__int64 PpmGetDeepSleepPlatformStateIndex()
{
  if ( PpmPlatformStates && *(_DWORD *)PpmPlatformStates )
    return (unsigned int)(*(_DWORD *)PpmPlatformStates - 1);
  else
    return 0xFFFFFFFFLL;
}
