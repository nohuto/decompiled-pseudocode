/*
 * XREFs of sub_1800F5ED4 @ 0x1800F5ED4
 * Callers:
 *     sub_1800192D0 @ 0x1800192D0 (sub_1800192D0.c)
 *     sub_1800F61F8 @ 0x1800F61F8 (sub_1800F61F8.c)
 *     sub_1800F6338 @ 0x1800F6338 (sub_1800F6338.c)
 *     sub_1800F6478 @ 0x1800F6478 (sub_1800F6478.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800F5ED4(__int64 a1, int a2, _DWORD *a3)
{
  __int64 result; // rax
  _DWORD *i; // rcx

  LODWORD(result) = 0;
  for ( i = a3; *i != a2; i += 2 )
  {
    if ( !*i )
    {
      result = (int)result;
      a3[2 * (int)result] = a2;
      a3[2 * (int)result + 1] = 1;
      return result;
    }
    result = (unsigned int)(result + 1);
    if ( (int)result >= 3 )
      return result;
  }
  result = (int)result;
  ++a3[2 * (int)result + 1];
  return result;
}
