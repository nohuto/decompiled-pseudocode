/*
 * XREFs of sub_18009AE08 @ 0x18009AE08
 * Callers:
 *     sub_180033D40 @ 0x180033D40 (sub_180033D40.c)
 *     sub_180066384 @ 0x180066384 (sub_180066384.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18009AE08(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 112);
  result = 0LL;
  if ( v1 )
    return *(unsigned int *)(v1 + 12);
  return result;
}
