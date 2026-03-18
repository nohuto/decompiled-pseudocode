/*
 * XREFs of PopSystemRequiredSet @ 0x1403A7390
 * Callers:
 *     NtSetThreadExecutionState @ 0x140720650 (NtSetThreadExecutionState.c)
 * Callees:
 *     PopResetIdleTime @ 0x140364434 (PopResetIdleTime.c)
 */

__int64 PopSystemRequiredSet()
{
  return PopResetIdleTime();
}
