/*
 * XREFs of PoDestroyReasonContext @ 0x140282BD8
 * Callers:
 *     NtCancelTimer @ 0x140248B00 (NtCancelTimer.c)
 *     NtSetTimerEx @ 0x1402491A0 (NtSetTimerEx.c)
 *     ExpSetTimerObject @ 0x140249420 (ExpSetTimerObject.c)
 *     ExpDeleteTimer @ 0x1402601A0 (ExpDeleteTimer.c)
 *     PopPowerRequestCleanUp @ 0x14028278C (PopPowerRequestCleanUp.c)
 *     NtSetTimer @ 0x1403769A0 (NtSetTimer.c)
 *     PoRegisterSystemState @ 0x14056EF10 (PoRegisterSystemState.c)
 *     PopPowerRequestCreateInfo @ 0x14067CFCC (PopPowerRequestCreateInfo.c)
 *     NtSetThreadExecutionState @ 0x14067D5F0 (NtSetThreadExecutionState.c)
 *     PoCreatePowerRequest @ 0x140772740 (PoCreatePowerRequest.c)
 *     PoCreateThermalRequest @ 0x140790920 (PoCreateThermalRequest.c)
 *     PoDeleteThermalRequest @ 0x1408E29D0 (PoDeleteThermalRequest.c)
 *     PopInitializeHighPerfPowerRequest @ 0x140A710FC (PopInitializeHighPerfPowerRequest.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     Feature_3401902395__private_IsEnabledDeviceUsage @ 0x1403F7E54 (Feature_3401902395__private_IsEnabledDeviceUsage.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
