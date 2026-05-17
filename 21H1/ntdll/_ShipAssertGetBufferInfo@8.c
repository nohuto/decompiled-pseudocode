/*
 * XREFs of _ShipAssertGetBufferInfo@8 @ 0x4B33B5F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__stdcall ShipAssertGetBufferInfo(_DWORD *a1, _DWORD *a2)
{
  _DWORD *result; // eax

  if ( a1 )
    *a1 = &dword_4B3A6C20;
  result = a2;
  if ( a2 )
    *a2 = &dword_4B3A3934;
  return result;
}
