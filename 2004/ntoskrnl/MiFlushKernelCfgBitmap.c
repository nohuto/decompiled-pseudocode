/*
 * XREFs of MiFlushKernelCfgBitmap @ 0x14054E54C
 * Callers:
 *     MiMarkKernelImageCfgBits @ 0x140760B04 (MiMarkKernelImageCfgBits.c)
 * Callees:
 *     MiFlushTbList @ 0x14023A3C0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1402B0EF0 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 */

void __fastcall MiFlushKernelCfgBitmap(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned __int64 v4; // rdx
  _KPROCESS *v5; // rdx
  _QWORD v6[24]; // [rsp+20h] [rbp-D8h] BYREF

  v2 = a2;
  memset(v6, 0, 0xB8uLL);
  v6[3] = 0LL;
  LODWORD(v6[1]) = 20;
  v4 = qword_140C4CA38 + ((2 * ((unsigned __int64)(a1 + 0x800000000000LL) >> 4)) >> 3);
  MiInsertTbFlushEntry(
    (__int64)v6,
    v4 & 0xFFFFFFFFFFFFF000uLL,
    ((((_WORD)qword_140C4CA38 + (unsigned __int16)((2 * ((unsigned __int64)(a1 + 0x800000000000LL) >> 4)) >> 3)) & 0xFFF)
   + ((2 * ((unsigned __int64)(a1 + v2 + 0x7FFFFFFFFFFFLL) >> 4)) >> 3)
   - v4
   + qword_140C4CA38
   + 4096) >> 12,
    0);
  MiFlushTbList((__int64)v6, v5);
}
