/*
 * XREFs of sub_180073444 @ 0x180073444
 * Callers:
 *     sub_18000476C @ 0x18000476C (sub_18000476C.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180073444(__int64 *a1)
{
  _QWORD *result; // rax
  __int64 v3; // rcx

  result = (_QWORD *)*a1;
  if ( *a1 )
  {
    v3 = result[1];
    result = (_QWORD *)*result;
    *a1 = (v3 - 8) & -(__int64)(v3 != 0);
  }
  return result;
}
