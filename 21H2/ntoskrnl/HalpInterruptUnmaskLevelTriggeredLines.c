/*
 * XREFs of HalpInterruptUnmaskLevelTriggeredLines @ 0x140524390
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptRestoreAllControllerState @ 0x140A51670 (HalpInterruptRestoreAllControllerState.c)
 */

__int64 HalpInterruptUnmaskLevelTriggeredLines()
{
  HalpInterruptRestoreAllControllerState();
  return 0LL;
}
