/*
 * XREFs of sub_180078194 @ 0x180078194
 * Callers:
 *     sub_180062F10 @ 0x180062F10 (sub_180062F10.c)
 * Callees:
 *     memset @ 0x18004683A (memset.c)
 */

errno_t __fastcall sub_180078194(__int64 a1, _DWORD *a2)
{
  memset(a2, 0, 0x178uLL);
  *((_QWORD *)a2 + 45) = *(_QWORD *)(a1 + 1480);
  *((_QWORD *)a2 + 7) = *(_QWORD *)(a1 + 1256);
  *((_QWORD *)a2 + 8) = *(_QWORD *)(a1 + 1264);
  a2[2] = *(_DWORD *)a1;
  a2[4] = *(_DWORD *)(a1 + 1220);
  a2[3] = *(_DWORD *)(a1 + 1216);
  *(_OWORD *)(a2 + 6) = *(_OWORD *)(a1 + 1224);
  *((_WORD *)a2 + 20) = *(_WORD *)(a1 + 1240);
  *((_BYTE *)a2 + 42) = *(_BYTE *)(a1 + 1242);
  a2[11] = *(_DWORD *)(a1 + 1244);
  a2[12] = *(_DWORD *)(a1 + 1248);
  a2[18] = *(_DWORD *)(a1 + 1272);
  a2[92] = *(_DWORD *)(a1 + 1488);
  *a2 = *(_DWORD *)(a1 + 1208);
  a2[88] = *(_DWORD *)(a1 + 1476);
  a2[93] = *(_DWORD *)(a1 + 1492);
  memcpy_s(a2 + 38, 0xC8uLL, (const void *const)(a1 + 1276), 0xC8uLL);
  return memcpy_s(a2 + 20, 0x48uLL, (const void *const)(a1 + 8), 0x48uLL);
}
