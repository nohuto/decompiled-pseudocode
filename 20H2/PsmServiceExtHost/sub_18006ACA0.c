/*
 * XREFs of sub_18006ACA0 @ 0x18006ACA0
 * Callers:
 *     sub_180074BB0 @ 0x180074BB0 (sub_180074BB0.c)
 *     sub_1800759A8 @ 0x1800759A8 (sub_1800759A8.c)
 *     sub_1800760A8 @ 0x1800760A8 (sub_1800760A8.c)
 *     sub_180076240 @ 0x180076240 (sub_180076240.c)
 * Callees:
 *     sub_18006B648 @ 0x18006B648 (sub_18006B648.c)
 */

__int64 __fastcall sub_18006ACA0(_QWORD **a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rbx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 != a1 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      result = sub_18006B648(v2 - 179);
      v2 = v3;
    }
    while ( v3 != a1 );
  }
  return result;
}
