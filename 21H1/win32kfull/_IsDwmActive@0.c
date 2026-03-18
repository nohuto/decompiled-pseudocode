/*
 * XREFs of _IsDwmActive@0 @ 0x38C42
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __stdcall IsDwmActive()
{
  return g_pDwmState != 0;
}
