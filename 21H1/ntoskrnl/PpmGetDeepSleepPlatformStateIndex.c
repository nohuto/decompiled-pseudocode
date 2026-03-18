/*
 * XREFs of PpmGetDeepSleepPlatformStateIndex @ 0x1405601EC
 * Callers:
 *     PopFxClearDeviceConstraints @ 0x1405642C4 (PopFxClearDeviceConstraints.c)
 *     PopFxEnablePlatformStates @ 0x140564F40 (PopFxEnablePlatformStates.c)
 *     PopPepInitializeVetoMasks @ 0x14056F30C (PopPepInitializeVetoMasks.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x140570670 (PopPepUpdateDripsDeviceVetoMask.c)
 *     PopCheckResiliencyScenarios @ 0x14070E4E0 (PopCheckResiliencyScenarios.c)
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
