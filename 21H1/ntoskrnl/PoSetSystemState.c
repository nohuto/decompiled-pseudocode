/*
 * XREFs of PoSetSystemState @ 0x140569560
 * Callers:
 *     PoRegisterSystemState @ 0x140569480 (PoRegisterSystemState.c)
 * Callees:
 *     PopSetSystemState @ 0x1403A2AB0 (PopSetSystemState.c)
 *     PopReleasePolicyLock @ 0x14098C054 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C094 (PopAcquirePolicyLock.c)
 */

void __stdcall PoSetSystemState(EXECUTION_STATE Flags)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v3; // rdx
  __int64 v4; // rcx

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
    PopAcquirePolicyLock(Flags);
  PopSetSystemState(Flags, 7u);
  if ( CurrentIrql < 2u )
    PopReleasePolicyLock(v4, v3);
}
