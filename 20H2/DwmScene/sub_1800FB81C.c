/*
 * XREFs of sub_1800FB81C @ 0x1800FB81C
 * Callers:
 *     sub_1800BB10C @ 0x1800BB10C (sub_1800BB10C.c)
 *     sub_1800C5744 @ 0x1800C5744 (sub_1800C5744.c)
 * Callees:
 *     sub_1800FB1D0 @ 0x1800FB1D0 (sub_1800FB1D0.c)
 */

char __fastcall sub_1800FB81C(__int64 a1, int a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 1944);
  *(_DWORD *)(a1 + 1944) = a2;
  if ( v2 != a2 )
    LOBYTE(v2) = sub_1800FB1D0(a1);
  return v2;
}
