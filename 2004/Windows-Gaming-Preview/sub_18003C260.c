/*
 * XREFs of sub_18003C260 @ 0x18003C260
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003BA14 @ 0x18003BA14 (sub_18003BA14.c)
 */

__int64 __fastcall sub_18003C260(__int64 a1, int a2, int a3)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 24);
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)sub_18003BA14((__int64 *)(a1 + 8));
  return (unsigned int)a3;
}
