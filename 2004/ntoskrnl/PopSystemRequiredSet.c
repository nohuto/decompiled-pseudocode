/*
 * XREFs of PopSystemRequiredSet @ 0x1403A4F90
 * Callers:
 *     NtSetThreadExecutionState @ 0x14064EE90 (NtSetThreadExecutionState.c)
 * Callees:
 *     PopResetIdleTime @ 0x14035DF70 (PopResetIdleTime.c)
 */

__int64 PopSystemRequiredSet()
{
  return PopResetIdleTime();
}
