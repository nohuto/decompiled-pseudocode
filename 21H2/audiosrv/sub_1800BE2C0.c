/*
 * XREFs of sub_1800BE2C0 @ 0x1800BE2C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 */

__int64 __fastcall sub_1800BE2C0(__int64 a1, __int64 a2)
{
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x4000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 0x1Au, (__int64)&unk_18016DA10, a2);
  }
  return sub_1800BE318(a2);
}
