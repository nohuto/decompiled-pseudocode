/*
 * XREFs of sub_140948B3C @ 0x140948B3C
 * Callers:
 *     sub_1405AD420 @ 0x1405AD420 (sub_1405AD420.c)
 *     sub_140948CE0 @ 0x140948CE0 (sub_140948CE0.c)
 *     ExpGenuinePolicyPostProcess @ 0x140949090 (ExpGenuinePolicyPostProcess.c)
 *     sub_140949510 @ 0x140949510 (sub_140949510.c)
 *     sub_140949590 @ 0x140949590 (sub_140949590.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140948B3C(_DWORD *a1, _DWORD *a2, unsigned int a3, _DWORD *a4, int a5)
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
