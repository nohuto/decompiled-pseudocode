/*
 * XREFs of PopFxEnablePlatformStates @ 0x140568F90
 * Callers:
 *     PpmEnableCoordinatedIdleStates @ 0x1408E44C8 (PpmEnableCoordinatedIdleStates.c)
 * Callees:
 *     PpmGetDeepSleepPlatformStateIndex @ 0x14056421C (PpmGetDeepSleepPlatformStateIndex.c)
 *     PopFxSetDeviceAccountingCsPlatformState @ 0x14056AE74 (PopFxSetDeviceAccountingCsPlatformState.c)
 *     PopPepPlatformStateRegistered @ 0x140573AAC (PopPepPlatformStateRegistered.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x1408E6F20 (PopFxInitializeSocSubsystemStaticInfo.c)
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
      _InterlockedExchange(&dword_140C4FF00, DeepSleepPlatformStateIndex);
      PopFxSetDeviceAccountingCsPlatformState(DeepSleepPlatformStateIndex);
      PopFxInitializeSocSubsystemStaticInfo(v2);
    }
  }
}
