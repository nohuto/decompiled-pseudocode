/*
 * XREFs of _EditionGetMouseWheelRoutingMode@0 @ 0x14799B
 * Callers:
 *     <none>
 * Callees:
 *     ?RawInputMouseRequestedByForeground@@YGHXZ @ 0x146B7C (-RawInputMouseRequestedByForeground@@YGHXZ.c)
 */

BOOL __stdcall EditionGetMouseWheelRoutingMode()
{
  int v0; // esi

  v0 = *(_DWORD *)UPDWORDPointer(8220);
  if ( v0 == 1 )
    return !RawInputMouseRequestedByForeground();
  return v0;
}
