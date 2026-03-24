/*
 * XREFs of PoSetSystemState @ 0x14056EFF0
 * Callers:
 *     PoRegisterSystemState @ 0x14056EF10 (PoRegisterSystemState.c)
 * Callees:
 *     PopSetSystemState @ 0x1403A5EC0 (PopSetSystemState.c)
 *     PopReleasePolicyLock @ 0x14098F590 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098F5D0 (PopAcquirePolicyLock.c)
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
