/*
 * XREFs of PoDestroyReasonContext @ 0x140276B88
 * Callers:
 *     NtSetTimerEx @ 0x1402111A0 (NtSetTimerEx.c)
 *     ExpSetTimerObject @ 0x140211420 (ExpSetTimerObject.c)
 *     PopPowerRequestCleanUp @ 0x1402767F4 (PopPowerRequestCleanUp.c)
 *     ExpDeleteTimer @ 0x1402C9260 (ExpDeleteTimer.c)
 *     NtCancelTimer @ 0x1402FFD50 (NtCancelTimer.c)
 *     NtSetTimer @ 0x140376C70 (NtSetTimer.c)
 *     PoRegisterSystemState @ 0x140569AD0 (PoRegisterSystemState.c)
 *     PopPowerRequestCreateInfo @ 0x14064E220 (PopPowerRequestCreateInfo.c)
 *     NtSetThreadExecutionState @ 0x14064EE90 (NtSetThreadExecutionState.c)
 *     PoCreatePowerRequest @ 0x14075FF60 (PoCreatePowerRequest.c)
 *     PoCreateThermalRequest @ 0x1407837C0 (PoCreateThermalRequest.c)
 *     PoDeleteThermalRequest @ 0x1408DF390 (PoDeleteThermalRequest.c)
 *     PopInitializeHighPerfPowerRequest @ 0x140A6DA5C (PopInitializeHighPerfPowerRequest.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
