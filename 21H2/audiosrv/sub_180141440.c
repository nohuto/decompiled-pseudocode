/*
 * XREFs of sub_180141440 @ 0x180141440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180141440(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a3 )
    return 2147500035LL;
  if ( a2 >= 5 )
    return 2147942487LL;
  *a3 = qword_18019DB80[a2];
  return result;
}
