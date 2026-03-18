/*
 * XREFs of UserGetDriverObject @ 0x1C0122AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PDRIVER_OBJECT UserGetDriverObject()
{
  return gpWin32kDriverObject;
}
