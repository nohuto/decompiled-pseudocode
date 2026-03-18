/*
 * XREFs of PopInitModernSleepEnabledActions @ 0x140A71168
 * Callers:
 *     PoInitSystem @ 0x140A3BD5C (PoInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 PopInitModernSleepEnabledActions()
{
  __int64 result; // rax

  result = (unsigned int)PopAggressiveStandbyActionsRegValue;
  if ( (unsigned int)PopAggressiveStandbyActionsRegValue < 4 )
    PopAggressiveStandbyEnabledActions = PopAggressiveStandbyActionsRegValue;
  return result;
}
