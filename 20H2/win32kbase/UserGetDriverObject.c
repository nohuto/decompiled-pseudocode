/*
 * XREFs of UserGetDriverObject @ 0x1C0120760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PDRIVER_OBJECT UserGetDriverObject()
{
  return gpWin32kDriverObject;
}
