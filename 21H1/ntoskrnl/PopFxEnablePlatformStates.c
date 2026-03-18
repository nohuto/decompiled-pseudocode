/*
 * XREFs of PopFxEnablePlatformStates @ 0x140564F40
 * Callers:
 *     PpmEnableCoordinatedIdleStates @ 0x1408DD428 (PpmEnableCoordinatedIdleStates.c)
 * Callees:
 *     PpmGetDeepSleepPlatformStateIndex @ 0x1405601EC (PpmGetDeepSleepPlatformStateIndex.c)
 *     PopFxSetDeviceAccountingCsPlatformState @ 0x140566DF4 (PopFxSetDeviceAccountingCsPlatformState.c)
 *     PopPepPlatformStateRegistered @ 0x14056FA2C (PopPepPlatformStateRegistered.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x1408DFE60 (PopFxInitializeSocSubsystemStaticInfo.c)
 */

void __fastcall PopFxEnablePlatformStates(int a1)
{
  unsigned __int32 DeepSleepPlatformStateIndex; // eax
  unsigned __int32 v2; // ebx

  if ( a1 )
  {
    PopPepPlatformStateRegistered();
    DeepSleepPlatformStateIndex = PpmGetDeepSleepPlatformStateIndex();
    v2 = DeepSleepPlatformStateIndex;
    if ( DeepSleepPlatformStateIndex != -1 )
    {
      _InterlockedExchange(&dword_140C4FFC0, DeepSleepPlatformStateIndex);
      PopFxSetDeviceAccountingCsPlatformState(DeepSleepPlatformStateIndex);
      PopFxInitializeSocSubsystemStaticInfo(v2);
    }
  }
}
