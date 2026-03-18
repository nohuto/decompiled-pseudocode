/*
 * XREFs of MiDeleteTopLevelSessionMapping @ 0x1403EE798
 * Callers:
 *     MiDeleteSessionAddressSpace @ 0x140386CEC (MiDeleteSessionAddressSpace.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x140213300 (MiUnlockWorkingSetExclusive.c)
 *     MiFlushTbList @ 0x14023A3C0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1402B0EF0 (MiInsertTbFlushEntry.c)
 *     MiWriteTopLevelPxe @ 0x14039B17C (MiWriteTopLevelPxe.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     MiLockWorkingSetExclusive @ 0x14054A310 (MiLockWorkingSetExclusive.c)
 */

void __fastcall MiDeleteTopLevelSessionMapping(__int64 a1)
{
  __int64 *v2; // rdi
  unsigned __int8 v3; // bl
  _KPROCESS *v4; // rdx
  _QWORD v5[24]; // [rsp+20h] [rbp-D8h] BYREF

  memset(v5, 0, 0xB8uLL);
  v2 = (__int64 *)(8 * (((unsigned __int64)qword_140C4DBE0 >> 39) & 0x1FF) - 0x90482413000LL);
  LODWORD(v5[0]) = 2;
  LODWORD(v5[1]) = 20;
  WORD2(v5[0]) = 0;
  v5[2] = 0LL;
  v5[3] = 0LL;
  v3 = MiLockWorkingSetExclusive(a1 + 256);
  MiInsertTbFlushEntry((__int64)v5, (__int64)((_QWORD)v2 << 25) >> 16, 1LL, 0);
  MiWriteTopLevelPxe(v2, ZeroPte);
  MiFlushTbList((__int64)v5, v4);
  MiUnlockWorkingSetExclusive(a1 + 256, v3);
}
