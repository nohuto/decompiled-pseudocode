/*
 * XREFs of PoDestroyReasonContext @ 0x1403622D4
 * Callers:
 *     ExpDeleteTimer @ 0x140247950 (ExpDeleteTimer.c)
 *     NtCancelTimer @ 0x140288EC0 (NtCancelTimer.c)
 *     NtSetTimerEx @ 0x140289560 (NtSetTimerEx.c)
 *     ExpSetTimerObject @ 0x1402897E0 (ExpSetTimerObject.c)
 *     PopPowerRequestCleanUp @ 0x140361F40 (PopPowerRequestCleanUp.c)
 *     NtSetTimer @ 0x140378C00 (NtSetTimer.c)
 *     PoRegisterSystemState @ 0x14056D500 (PoRegisterSystemState.c)
 *     PopPowerRequestCreateInfo @ 0x14072030C (PopPowerRequestCreateInfo.c)
 *     NtSetThreadExecutionState @ 0x140720650 (NtSetThreadExecutionState.c)
 *     PoCreatePowerRequest @ 0x14076E5D0 (PoCreatePowerRequest.c)
 *     PoCreateThermalRequest @ 0x1407911B0 (PoCreateThermalRequest.c)
 *     PoDeleteThermalRequest @ 0x1408E51D0 (PoDeleteThermalRequest.c)
 *     PopInitializeHighPerfPowerRequest @ 0x140A7417C (PopInitializeHighPerfPowerRequest.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
