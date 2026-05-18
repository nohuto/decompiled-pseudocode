/*
 * XREFs of sub_1801152FC @ 0x1801152FC
 * Callers:
 *     sub_18001C5E8 @ 0x18001C5E8 (sub_18001C5E8.c)
 *     sub_180025AA0 @ 0x180025AA0 (sub_180025AA0.c)
 *     sub_180075BFC @ 0x180075BFC (sub_180075BFC.c)
 *     sub_1800B1C90 @ 0x1800B1C90 (sub_1800B1C90.c)
 *     sub_1800CB940 @ 0x1800CB940 (sub_1800CB940.c)
 *     sub_1800F6930 @ 0x1800F6930 (sub_1800F6930.c)
 *     sub_18010FB50 @ 0x18010FB50 (sub_18010FB50.c)
 *     sub_18011B270 @ 0x18011B270 (sub_18011B270.c)
 *     sub_18011B340 @ 0x18011B340 (sub_18011B340.c)
 *     sub_18011B3C0 @ 0x18011B3C0 (sub_18011B3C0.c)
 *     sub_18011C608 @ 0x18011C608 (sub_18011C608.c)
 *     sub_18011CF24 @ 0x18011CF24 (sub_18011CF24.c)
 * Callees:
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     sub_180028844 @ 0x180028844 (sub_180028844.c)
 *     sub_1801163DC @ 0x1801163DC (sub_1801163DC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1801152FC(__int64 a1, _QWORD *a2, char a3)
{
  __int64 v4; // rdi
  __int64 v6; // rdx

  v4 = (__int64)a2;
  sub_180028844(a1, a2);
  *(_QWORD *)a1 = &Spectre::Utils::SpectreException::`vftable';
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  sub_18001CDF8((_QWORD *)(a1 + 24), v4);
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 60) = 0;
  if ( a3 )
  {
    if ( *(_QWORD *)(v4 + 24) >= 0x10uLL )
      v4 = *(_QWORD *)v4;
    v6 = 4LL;
  }
  else
  {
    if ( *(_QWORD *)(v4 + 24) >= 0x10uLL )
      v4 = *(_QWORD *)v4;
    v6 = 3LL;
  }
  sub_1801163DC(&unk_18020DC90, v6, "Throwing SpectreException with message '%s'", (const char *)v4);
  return a1;
}
