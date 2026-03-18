/*
 * XREFs of MiFlushHyperSpace @ 0x14035FD80
 * Callers:
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402385A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiFlushCacheForAttributeChange @ 0x1402F7368 (MiFlushCacheForAttributeChange.c)
 *     MiAllocateHyperSpace @ 0x14033BA24 (MiAllocateHyperSpace.c)
 * Callees:
 *     MiFlushTbList @ 0x14023A3C0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1402B0EF0 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
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
