/*
 * XREFs of sub_18009AD6C @ 0x18009AD6C
 * Callers:
 *     sub_180030110 @ 0x180030110 (sub_180030110.c)
 *     sub_180030E0C @ 0x180030E0C (sub_180030E0C.c)
 *     sub_1800CAC58 @ 0x1800CAC58 (sub_1800CAC58.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18009AD6C(__int64 a1)
{
  __int64 *v1; // rcx
  __int64 result; // rax
  __int64 v3; // rcx

  v1 = *(__int64 **)(a1 + 112);
  result = 0LL;
  if ( v1 )
    v3 = *v1;
  else
    v3 = 0LL;
  if ( v3 )
    return *(unsigned int *)(v3 + 20);
  return result;
}
