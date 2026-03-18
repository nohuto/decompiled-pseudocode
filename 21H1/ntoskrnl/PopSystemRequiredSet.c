/*
 * XREFs of PopSystemRequiredSet @ 0x1403A4810
 * Callers:
 *     NtSetThreadExecutionState @ 0x1406FEF30 (NtSetThreadExecutionState.c)
 * Callees:
 *     PopResetIdleTime @ 0x140320350 (PopResetIdleTime.c)
 */

__int64 PopSystemRequiredSet()
{
  return PopResetIdleTime();
}
