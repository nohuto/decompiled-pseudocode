/*
 * XREFs of sub_180032A20 @ 0x180032A20
 * Callers:
 *     sub_18001E9C0 @ 0x18001E9C0 (sub_18001E9C0.c)
 *     sub_18007E4D4 @ 0x18007E4D4 (sub_18007E4D4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180032A20(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = *(_QWORD *)(a2 + 24);
  if ( *a1 < v2 )
    return 0xFFFFFFFFLL;
  else
    return v2 < *a1;
}
