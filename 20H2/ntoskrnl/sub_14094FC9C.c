/*
 * XREFs of sub_14094FC9C @ 0x14094FC9C
 * Callers:
 *     sub_1405B16A0 @ 0x1405B16A0 (sub_1405B16A0.c)
 *     sub_14094FE40 @ 0x14094FE40 (sub_14094FE40.c)
 *     ExpGenuinePolicyPostProcess @ 0x1409501F0 (ExpGenuinePolicyPostProcess.c)
 *     sub_140950670 @ 0x140950670 (sub_140950670.c)
 *     sub_1409506F0 @ 0x1409506F0 (sub_1409506F0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14094FC9C(_DWORD *a1, _DWORD *a2, unsigned int a3, _DWORD *a4, int a5)
{
  __int64 result; // rax

  result = 0LL;
  *a4 = 4;
  if ( a3 < 4 )
    return 3221225507LL;
  if ( a1 )
    *a1 = 4;
  if ( a2 )
    *a2 = a5;
  return result;
}
