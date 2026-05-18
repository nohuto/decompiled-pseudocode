/*
 * XREFs of sub_1800EDEC0 @ 0x1800EDEC0
 * Callers:
 *     sub_180129821 @ 0x180129821 (sub_180129821.c)
 * Callees:
 *     sub_1800D5EAC @ 0x1800D5EAC (sub_1800D5EAC.c)
 */

__int64 __fastcall sub_1800EDEC0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      result = sub_1800D5EAC(v4);
      v4 += 40LL;
    }
    while ( v4 != a3 );
  }
  return result;
}
