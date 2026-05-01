/*
 * XREFs of sub_180035188 @ 0x180035188
 * Callers:
 *     sub_1800197C0 @ 0x1800197C0 (sub_1800197C0.c)
 * Callees:
 *     sub_1800351EC @ 0x1800351EC (sub_1800351EC.c)
 *     sub_180035220 @ 0x180035220 (sub_180035220.c)
 *     sub_18003D10C @ 0x18003D10C (sub_18003D10C.c)
 */

__int64 __fastcall sub_180035188(__int64 a1, _QWORD *a2)
{
  int v6; // eax

  sub_180035220();
  if ( (*(_BYTE *)(a1 + 192) & 2) != 0 )
  {
    *a2 = *(_QWORD *)(a1 + 184);
    sub_1800351EC(a1);
    return 0;
  }
  else
  {
    sub_1800351EC(a1);
    v6 = sub_18003D10C(a1, a2);
    if ( v6 >= 0 )
      return 0;
    return (unsigned int)v6;
  }
}
