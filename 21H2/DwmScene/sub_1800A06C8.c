/*
 * XREFs of sub_1800A06C8 @ 0x1800A06C8
 * Callers:
 *     sub_1800359E0 @ 0x1800359E0 (sub_1800359E0.c)
 *     sub_180039610 @ 0x180039610 (sub_180039610.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800A06C8(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 112);
  result = 0LL;
  if ( v1 )
    return *(unsigned int *)(v1 + 8);
  return result;
}
