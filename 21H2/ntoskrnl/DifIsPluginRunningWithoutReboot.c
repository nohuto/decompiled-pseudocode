/*
 * XREFs of DifIsPluginRunningWithoutReboot @ 0x140604874
 * Callers:
 *     IopLoadUnloadDriver @ 0x1406DE800 (IopLoadUnloadDriver.c)
 *     VfMiscPluginEntry @ 0x140AA4854 (VfMiscPluginEntry.c)
 * Callees:
 *     <none>
 */

char DifIsPluginRunningWithoutReboot()
{
  return DifIsVolatileMode;
}
