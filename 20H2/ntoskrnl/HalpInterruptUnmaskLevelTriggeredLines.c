/*
 * XREFs of HalpInterruptUnmaskLevelTriggeredLines @ 0x1404D58B0
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptRestoreAllControllerState @ 0x14099AAB0 (HalpInterruptRestoreAllControllerState.c)
 */

__int64 HalpInterruptUnmaskLevelTriggeredLines()
{
  HalpInterruptRestoreAllControllerState();
  return 0LL;
}
