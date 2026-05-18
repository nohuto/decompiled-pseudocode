/*
 * XREFs of sub_1800A06D8 @ 0x1800A06D8
 * Callers:
 *     sub_180039610 @ 0x180039610 (sub_180039610.c)
 *     sub_18006BC54 @ 0x18006BC54 (sub_18006BC54.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800A06D8(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 112);
  result = 0LL;
  if ( v1 )
    return *(unsigned int *)(v1 + 12);
  return result;
}
