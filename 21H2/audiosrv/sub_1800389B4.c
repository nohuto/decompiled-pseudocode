/*
 * XREFs of sub_1800389B4 @ 0x1800389B4
 * Callers:
 *     sub_1800611C8 @ 0x1800611C8 (sub_1800611C8.c)
 *     sub_18007215C @ 0x18007215C (sub_18007215C.c)
 * Callees:
 *     sub_180038A00 @ 0x180038A00 (sub_180038A00.c)
 *     memset @ 0x18006AB8C (memset.c)
 */

__int64 __fastcall sub_1800389B4(__int64 a1)
{
  *(_QWORD *)a1 = off_1801481A0;
  *(_OWORD *)(a1 + 16) = xmmword_18015B730;
  memset((void *)(a1 + 32), 0, 0x300uLL);
  *(_QWORD *)(a1 + 8) = sub_180038A00();
  return a1;
}
