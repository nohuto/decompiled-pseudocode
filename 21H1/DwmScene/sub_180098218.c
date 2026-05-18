/*
 * XREFs of sub_180098218 @ 0x180098218
 * Callers:
 *     sub_180126B49 @ 0x180126B49 (sub_180126B49.c)
 * Callees:
 *     sub_180094740 @ 0x180094740 (sub_180094740.c)
 */

__int64 __fastcall sub_180098218(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v4; // rbx
  __int64 result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      result = sub_180094740(v4);
      v4 += 11;
    }
    while ( v4 != a3 );
  }
  return result;
}
