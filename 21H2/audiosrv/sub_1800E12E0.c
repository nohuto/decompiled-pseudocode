/*
 * XREFs of sub_1800E12E0 @ 0x1800E12E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 */

__int64 __fastcall sub_1800E12E0(_QWORD *a1)
{
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 0x38u, (__int64)&unk_18015E3E8, a1);
  }
  return sub_1800DCCD0(a1);
}
