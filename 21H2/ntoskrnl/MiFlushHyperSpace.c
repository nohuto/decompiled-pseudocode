/*
 * XREFs of MiFlushHyperSpace @ 0x1403D3284
 * Callers:
 *     MiFlushCacheForAttributeChange @ 0x140268AB0 (MiFlushCacheForAttributeChange.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402BEDD0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiAllocateHyperSpace @ 0x1402E80DC (MiAllocateHyperSpace.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x1402CF280 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void MiFlushHyperSpace()
{
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int64 HyperPte; // rbx
  _QWORD v2[24]; // [rsp+20h] [rbp-D8h] BYREF

  memset(v2, 0, 0xB8uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  HyperPte = (unsigned __int64)CurrentPrcb->HyperPte;
  v2[3] = 0LL;
  HyperPte &= 0xFFFFFFFFFFFFF000uLL;
  LODWORD(v2[1]) = 20;
  BYTE4(v2[0]) = 1;
  MiInsertTbFlushEntry((__int64)v2, HyperPte, 64LL, 0);
  MiFlushTbList((__int64)v2);
  CurrentPrcb->HyperPte = (void *)HyperPte;
}
