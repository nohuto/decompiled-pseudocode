/*
 * XREFs of sub_180012D40 @ 0x180012D40
 * Callers:
 *     sub_18000FF28 @ 0x18000FF28 (sub_18000FF28.c)
 *     sub_180010990 @ 0x180010990 (sub_180010990.c)
 *     sub_180015340 @ 0x180015340 (sub_180015340.c)
 *     sub_1800181E0 @ 0x1800181E0 (sub_1800181E0.c)
 *     sub_18001FEC0 @ 0x18001FEC0 (sub_18001FEC0.c)
 *     sub_180020F50 @ 0x180020F50 (sub_180020F50.c)
 *     sub_1800714F0 @ 0x1800714F0 (sub_1800714F0.c)
 *     sub_180071664 @ 0x180071664 (sub_180071664.c)
 *     sub_180074B80 @ 0x180074B80 (sub_180074B80.c)
 *     sub_180075D24 @ 0x180075D24 (sub_180075D24.c)
 * Callees:
 *     sub_180023288 @ 0x180023288 (sub_180023288.c)
 */

__int64 __fastcall sub_180012D40(__int64 a1)
{
  int v2; // ecx
  unsigned int v4; // edi

  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 508LL) & 4;
  if ( !v2 && ((*(_BYTE *)(a1 + 1160) & 4) == 0 || (*(_BYTE *)(a1 + 1162) & 4) == 0) )
    return 0LL;
  v4 = 0;
  if ( (*(_BYTE *)(a1 + 836) & 1) != 0 && !(unsigned int)sub_180023288(a1 + 64, v2 == 0) )
    return 0LL;
  LOBYTE(v4) = (*(_BYTE *)(a1 + 1162) & 0x30) != 0;
  return v4;
}
