/*
 * XREFs of MiFlushHyperSpace @ 0x140251200
 * Callers:
 *     MiAllocateHyperSpace @ 0x1402E195C (MiAllocateHyperSpace.c)
 *     MiFlushCacheForAttributeChange @ 0x14030E598 (MiFlushCacheForAttributeChange.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140353660 (MiUnmapPageInHyperSpaceWorker.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 MiFlushHyperSpace()
{
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int64 HyperPte; // rbx
  __int64 result; // rax
  _QWORD v3[24]; // [rsp+20h] [rbp-D8h] BYREF

  memset(v3, 0, 0xB8uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  HyperPte = (unsigned __int64)CurrentPrcb->HyperPte;
  v3[3] = 0LL;
  HyperPte &= 0xFFFFFFFFFFFFF000uLL;
  LODWORD(v3[1]) = 20;
  BYTE4(v3[0]) = 1;
  MiInsertTbFlushEntry(v3, HyperPte, 64LL, 0LL);
  result = MiFlushTbList(v3);
  CurrentPrcb->HyperPte = (void *)HyperPte;
  return result;
}
