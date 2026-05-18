/*
 * XREFs of sub_18009AE18 @ 0x18009AE18
 * Callers:
 *     sub_180034B50 @ 0x180034B50 (sub_180034B50.c)
 *     sub_1800371F0 @ 0x1800371F0 (sub_1800371F0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18009AE18(__int64 a1)
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
    return *(unsigned int *)(v3 + 12);
  return result;
}
