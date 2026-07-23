/*
 * XREFs of PoDestroyReasonContext @ 0x140270E84
 * Callers:
 *     PopPowerRequestCleanUp @ 0x140270A38 (PopPowerRequestCleanUp.c)
 *     ExpDeleteTimer @ 0x140281910 (ExpDeleteTimer.c)
 *     NtCancelTimer @ 0x1402ED350 (NtCancelTimer.c)
 *     NtSetTimerEx @ 0x1402ED9F0 (NtSetTimerEx.c)
 *     ExpSetTimerObject @ 0x1402EDC70 (ExpSetTimerObject.c)
 *     NtSetTimer @ 0x1403764F0 (NtSetTimer.c)
 *     PoRegisterSystemState @ 0x14056F150 (PoRegisterSystemState.c)
 *     PopPowerRequestCreateInfo @ 0x140670E30 (PopPowerRequestCreateInfo.c)
 *     NtSetThreadExecutionState @ 0x1406713E0 (NtSetThreadExecutionState.c)
 *     PoCreatePowerRequest @ 0x140772900 (PoCreatePowerRequest.c)
 *     PoCreateThermalRequest @ 0x140791ED0 (PoCreateThermalRequest.c)
 *     PoDeleteThermalRequest @ 0x1408E2B30 (PoDeleteThermalRequest.c)
 *     PopInitializeHighPerfPowerRequest @ 0x140A720FC (PopInitializeHighPerfPowerRequest.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     Feature_3401902395__private_IsEnabledDeviceUsage @ 0x1403F7E54 (Feature_3401902395__private_IsEnabledDeviceUsage.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall PoDestroyReasonContext(_QWORD *P)
{
  void *v2; // rcx
  void *v3; // rcx

  if ( !*(_DWORD *)P )
  {
    v2 = (void *)P[1];
    if ( v2 )
      ObfDereferenceObjectWithTag(v2, 0x67446F50u);
  }
  if ( (unsigned int)Feature_3401902395__private_IsEnabledDeviceUsage() )
  {
    if ( *(_DWORD *)P )
    {
      v3 = (void *)P[3];
      if ( v3 )
        ExFreePoolWithTag(v3, 0x78435250u);
    }
  }
  ExFreePoolWithTag(P, 0x78435250u);
}
