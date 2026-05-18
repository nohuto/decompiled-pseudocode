/*
 * XREFs of sub_1800A063C @ 0x1800A063C
 * Callers:
 *     sub_1800359E0 @ 0x1800359E0 (sub_1800359E0.c)
 *     sub_1800366DC @ 0x1800366DC (sub_1800366DC.c)
 *     sub_1800D0528 @ 0x1800D0528 (sub_1800D0528.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800A063C(__int64 a1)
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
