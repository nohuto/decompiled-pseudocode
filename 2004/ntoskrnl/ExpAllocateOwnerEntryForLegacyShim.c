/*
 * XREFs of ExpAllocateOwnerEntryForLegacyShim @ 0x14038D1AC
 * Callers:
 *     ExAcquireResourceSharedLite @ 0x1402090B0 (ExAcquireResourceSharedLite.c)
 *     SeSecurityAttributePresent @ 0x140296520 (SeSecurityAttributePresent.c)
 *     SepMandatoryIntegrityCheck @ 0x14029C910 (SepMandatoryIntegrityCheck.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x1403243F0 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x140327860 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     ExpFastResourceLegacyAcquireExclusive @ 0x14038BA34 (ExpFastResourceLegacyAcquireExclusive.c)
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x1405AF3BC (ExpFastResourceLegacyAcquireSharedStarveExclusive.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

_BYTE *ExpAllocateOwnerEntryForLegacyShim()
{
  _BYTE *PoolWithTag; // rax
  _BYTE *v1; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  _BYTE *result; // rax

  do
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x454F5246u);
    v1 = PoolWithTag;
  }
  while ( !PoolWithTag );
  memset(PoolWithTag, 0, 0x48uLL);
  CurrentThread = KeGetCurrentThread();
  result = v1;
  v1[17] |= 2u;
  *((_QWORD *)v1 + 4) = CurrentThread;
  return result;
}
