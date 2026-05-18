/*
 * XREFs of sub_18009ADF8 @ 0x18009ADF8
 * Callers:
 *     sub_180030110 @ 0x180030110 (sub_180030110.c)
 *     sub_180033D40 @ 0x180033D40 (sub_180033D40.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18009ADF8(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 112);
  result = 0LL;
  if ( v1 )
    return *(unsigned int *)(v1 + 8);
  return result;
}
