/*
 * XREFs of PpmGetDeepSleepPlatformStateIndex @ 0x14056083C
 * Callers:
 *     PopFxClearDeviceConstraints @ 0x140564914 (PopFxClearDeviceConstraints.c)
 *     PopFxEnablePlatformStates @ 0x140565590 (PopFxEnablePlatformStates.c)
 *     PopPepInitializeVetoMasks @ 0x14056F95C (PopPepInitializeVetoMasks.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x140570CC0 (PopPepUpdateDripsDeviceVetoMask.c)
 *     PopCheckResiliencyScenarios @ 0x1406A723C (PopCheckResiliencyScenarios.c)
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
