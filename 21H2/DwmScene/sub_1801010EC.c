/*
 * XREFs of sub_1801010EC @ 0x1801010EC
 * Callers:
 *     sub_1800C09DC @ 0x1800C09DC (sub_1800C09DC.c)
 *     sub_1800CB014 @ 0x1800CB014 (sub_1800CB014.c)
 * Callees:
 *     sub_180100AA0 @ 0x180100AA0 (sub_180100AA0.c)
 */

char __fastcall sub_1801010EC(__int64 a1, int a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 1944);
  *(_DWORD *)(a1 + 1944) = a2;
  if ( v2 != a2 )
    LOBYTE(v2) = sub_180100AA0(a1);
  return v2;
}
