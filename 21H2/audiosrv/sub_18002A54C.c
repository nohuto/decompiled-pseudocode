/*
 * XREFs of sub_18002A54C @ 0x18002A54C
 * Callers:
 *     sub_18002A5E8 @ 0x18002A5E8 (sub_18002A5E8.c)
 * Callees:
 *     sub_1800037E8 @ 0x1800037E8 (sub_1800037E8.c)
 *     sub_18002A420 @ 0x18002A420 (sub_18002A420.c)
 *     sub_180046360 @ 0x180046360 (sub_180046360.c)
 *     sub_18004EAA0 @ 0x18004EAA0 (sub_18004EAA0.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18002A54C(_QWORD *a1, char **a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  int v6; // edi

  *a1 = 0LL;
  v4 = sub_18006A18C(120LL, &unk_18019F848);
  if ( v4 )
  {
    v5 = sub_1800037E8(v4);
    v6 = sub_18002A420(v5, *a2);
    if ( v6 >= 0 )
      v6 = sub_18004EAA0(v5, &xmmword_18015BA90, a1);
    if ( v5 )
      sub_180046360(v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v6;
}
