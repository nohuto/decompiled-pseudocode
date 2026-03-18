/*
 * XREFs of MiFlushHyperSpace @ 0x140322470
 * Callers:
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402915F0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiAllocateHyperSpace @ 0x1402FF124 (MiAllocateHyperSpace.c)
 *     MiFlushCacheForAttributeChange @ 0x140353348 (MiFlushCacheForAttributeChange.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 */

void MiFlushHyperSpace()
{
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int64 HyperPte; // rbx
  _KPROCESS *v2; // rdx
  _QWORD v3[24]; // [rsp+20h] [rbp-D8h] BYREF

  memset(v3, 0, 0xB8uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  HyperPte = (unsigned __int64)CurrentPrcb->HyperPte;
  v3[3] = 0LL;
  HyperPte &= 0xFFFFFFFFFFFFF000uLL;
  LODWORD(v3[1]) = 20;
  BYTE4(v3[0]) = 1;
  MiInsertTbFlushEntry((__int64)v3, HyperPte, 64LL, 0);
  MiFlushTbList((__int64)v3, v2);
  CurrentPrcb->HyperPte = (void *)HyperPte;
}
