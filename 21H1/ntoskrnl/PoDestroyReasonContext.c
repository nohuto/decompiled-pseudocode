/*
 * XREFs of PoDestroyReasonContext @ 0x14033D208
 * Callers:
 *     ExpDeleteTimer @ 0x140236430 (ExpDeleteTimer.c)
 *     NtSetTimerEx @ 0x14026A1F0 (NtSetTimerEx.c)
 *     ExpSetTimerObject @ 0x14026A470 (ExpSetTimerObject.c)
 *     PopPowerRequestCleanUp @ 0x14033CE74 (PopPowerRequestCleanUp.c)
 *     NtCancelTimer @ 0x14033ECF0 (NtCancelTimer.c)
 *     NtSetTimer @ 0x140375E60 (NtSetTimer.c)
 *     PoRegisterSystemState @ 0x140569480 (PoRegisterSystemState.c)
 *     NtSetThreadExecutionState @ 0x1406FEF30 (NtSetThreadExecutionState.c)
 *     PopPowerRequestCreateInfo @ 0x1406FF504 (PopPowerRequestCreateInfo.c)
 *     PoCreatePowerRequest @ 0x14075DC50 (PoCreatePowerRequest.c)
 *     PoCreateThermalRequest @ 0x14077ADC0 (PoCreateThermalRequest.c)
 *     PoDeleteThermalRequest @ 0x1408DE130 (PoDeleteThermalRequest.c)
 *     PopInitializeHighPerfPowerRequest @ 0x140A6D3B4 (PopInitializeHighPerfPowerRequest.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall PoDestroyReasonContext(_QWORD *P)
{
  void *v2; // rcx

  if ( !*(_DWORD *)P )
  {
    v2 = (void *)P[1];
    if ( v2 )
      ObfDereferenceObjectWithTag(v2, 0x67446F50u);
  }
  ExFreePoolWithTag(P, 0x78435250u);
}
