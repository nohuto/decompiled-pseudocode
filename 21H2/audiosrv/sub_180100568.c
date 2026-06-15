/*
 * XREFs of sub_180100568 @ 0x180100568
 * Callers:
 *     sub_18010393C @ 0x18010393C (sub_18010393C.c)
 * Callees:
 *     sub_1801020C4 @ 0x1801020C4 (sub_1801020C4.c)
 */

__int64 __fastcall sub_180100568(__int64 *a1, __int64 a2)
{
  __int64 result; // rax

  result = sub_1801020C4(a1, a2, 0LL, *a1);
  if ( *a1 )
    *(_QWORD *)(*a1 + 8) = result;
  else
    a1[1] = result;
  *a1 = result;
  return result;
}
