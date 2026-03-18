/*
 * XREFs of UserGetDriverObject @ 0x1C0128A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PDRIVER_OBJECT UserGetDriverObject()
{
  return gpWin32kDriverObject;
}
