/*
 * XREFs of sub_1800609CC @ 0x1800609CC
 * Callers:
 *     sub_18006034C @ 0x18006034C (sub_18006034C.c)
 * Callees:
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 */

__int64 __fastcall sub_1800609CC(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a1 + 8) = 1;
  *(_QWORD *)a1 = &off_180148910;
  *(_QWORD *)(a1 + 16) = a2;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 10LL, &unk_18016DA10, a1);
  }
  return a1;
}
