/*
 * XREFs of MiDeleteTopLevelSessionMapping @ 0x1403F2C00
 * Callers:
 *     MiDeleteSessionAddressSpace @ 0x140388E8C (MiDeleteSessionAddressSpace.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x14027F090 (MiUnlockWorkingSetExclusive.c)
 *     MiInsertTbFlushEntry @ 0x1402B8FC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 *     MiWriteTopLevelPxe @ 0x14039E2CC (MiWriteTopLevelPxe.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     MiLockWorkingSetExclusive @ 0x14054DCE0 (MiLockWorkingSetExclusive.c)
 */

void __fastcall MiDeleteTopLevelSessionMapping(__int64 a1)
{
  __int64 *v2; // rdi
  unsigned __int8 v3; // bl
  _KPROCESS *v4; // rdx
  _QWORD v5[24]; // [rsp+20h] [rbp-D8h] BYREF

  memset(v5, 0, 0xB8uLL);
  v2 = (__int64 *)(8 * (((unsigned __int64)qword_140C4DC60 >> 39) & 0x1FF) - 0x90482413000LL);
  LODWORD(v5[0]) = 2;
  LODWORD(v5[1]) = 20;
  WORD2(v5[0]) = 0;
  v5[2] = 0LL;
  v5[3] = 0LL;
  v3 = MiLockWorkingSetExclusive(a1 + 256);
  MiInsertTbFlushEntry((__int64)v5, (__int64)((_QWORD)v2 << 25) >> 16, 1LL, 0);
  MiWriteTopLevelPxe(v2, ZeroPte);
  MiFlushTbList((unsigned int *)v5, v4);
  MiUnlockWorkingSetExclusive(a1 + 256, v3);
}
