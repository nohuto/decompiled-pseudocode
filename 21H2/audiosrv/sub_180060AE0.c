/*
 * XREFs of sub_180060AE0 @ 0x180060AE0
 * Callers:
 *     sub_180060A28 @ 0x180060A28 (sub_180060A28.c)
 *     sub_1800C287C @ 0x1800C287C (sub_1800C287C.c)
 * Callees:
 *     sub_180055EF8 @ 0x180055EF8 (sub_180055EF8.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 */

__int64 __fastcall sub_180060AE0(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a1 + 8) = 1;
  *(_QWORD *)a1 = &off_180148A70;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 16), 0, 0);
  *(_DWORD *)(a1 + 56) = 51;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 136) = a2;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_DWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0LL;
  sub_180055EF8(a1 + 144);
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 144) = off_180147248;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_DWORD *)(a1 + 240) = 0;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 10LL, &unk_18016DDC0, a1);
  }
  return a1;
}
