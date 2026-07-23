/*
 * XREFs of ShipAssertGetBufferInfo @ 0x1800DE030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 *__fastcall ShipAssertGetBufferInfo(_QWORD *a1, _QWORD *a2)
{
  __int64 *result; // rax

  if ( a1 )
  {
    result = &qword_18016DA38;
    *a1 = &qword_18016DA38;
  }
  if ( a2 )
  {
    result = (__int64 *)&dword_1801697B4;
    *a2 = &dword_1801697B4;
  }
  return result;
}
