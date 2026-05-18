/*
 * XREFs of sub_18009AE50 @ 0x18009AE50
 * Callers:
 *     sub_18002D4A0 @ 0x18002D4A0 (sub_18002D4A0.c)
 *     sub_18002EBE0 @ 0x18002EBE0 (sub_18002EBE0.c)
 *     sub_180030200 @ 0x180030200 (sub_180030200.c)
 *     sub_18003156C @ 0x18003156C (sub_18003156C.c)
 *     sub_180034B50 @ 0x180034B50 (sub_180034B50.c)
 *     sub_1800CAC58 @ 0x1800CAC58 (sub_1800CAC58.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18009AE50(__int64 a1)
{
  unsigned int **v1; // rcx
  __int64 result; // rax
  unsigned int *v3; // rcx

  v1 = *(unsigned int ***)(a1 + 112);
  result = 0LL;
  if ( v1 )
    v3 = *v1;
  else
    v3 = 0LL;
  if ( v3 )
    return *v3;
  return result;
}
