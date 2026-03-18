/*
 * XREFs of HalpInterruptUnmaskLevelTriggeredLines @ 0x1404D1E70
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptRestoreAllControllerState @ 0x140993310 (HalpInterruptRestoreAllControllerState.c)
 */

__int64 HalpInterruptUnmaskLevelTriggeredLines()
{
  HalpInterruptRestoreAllControllerState();
  return 0LL;
}
