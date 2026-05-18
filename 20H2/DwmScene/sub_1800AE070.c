/*
 * XREFs of sub_1800AE070 @ 0x1800AE070
 * Callers:
 *     sub_180127240 @ 0x180127240 (sub_180127240.c)
 *     sub_1801272D6 @ 0x1801272D6 (sub_1801272D6.c)
 * Callees:
 *     sub_1800A7BC0 @ 0x1800A7BC0 (sub_1800A7BC0.c)
 */

__int64 __fastcall sub_1800AE070(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      result = sub_1800A7BC0(v4, 0);
      v4 += 48LL;
    }
    while ( v4 != a3 );
  }
  return result;
}
