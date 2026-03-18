/*
 * XREFs of PoDestroyReasonContext @ 0x14036B090
 * Callers:
 *     PoRegisterSystemState @ 0x140201CD0 (PoRegisterSystemState.c)
 *     NtSetTimerEx @ 0x1402E3150 (NtSetTimerEx.c)
 *     ExpSetTimerObject @ 0x1402E33D0 (ExpSetTimerObject.c)
 *     ExpDeleteTimer @ 0x140356E00 (ExpDeleteTimer.c)
 *     NtCancelTimer @ 0x140356F50 (NtCancelTimer.c)
 *     PoCreatePowerRequest @ 0x140369E10 (PoCreatePowerRequest.c)
 *     PopPowerRequestCreateUserModeRequest @ 0x140369ECC (PopPowerRequestCreateUserModeRequest.c)
 *     NtSetTimer @ 0x1403749A0 (NtSetTimer.c)
 *     NtSetThreadExecutionState @ 0x1407EDD60 (NtSetThreadExecutionState.c)
 *     PopPowerRequestDelete @ 0x1407EF930 (PopPowerRequestDelete.c)
 *     PoCreateThermalRequest @ 0x140829400 (PoCreateThermalRequest.c)
 *     PoDeleteThermalRequest @ 0x14098B2F0 (PoDeleteThermalRequest.c)
 *     PopPowerAggregatorInitialize @ 0x140B02408 (PopPowerAggregatorInitialize.c)
 *     PopInitializeHighPerfPowerRequest @ 0x140B2D588 (PopInitializeHighPerfPowerRequest.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
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
