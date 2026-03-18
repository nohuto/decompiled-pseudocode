/*
 * XREFs of ExpAllocateOwnerEntryForLegacyShim @ 0x14038F66C
 * Callers:
 *     ExAcquireResourceSharedLite @ 0x140222030 (ExAcquireResourceSharedLite.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x140223CF0 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     SepMandatoryIntegrityCheck @ 0x140224970 (SepMandatoryIntegrityCheck.c)
 *     SeSecurityAttributePresent @ 0x14022AF30 (SeSecurityAttributePresent.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x1402F6CB0 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     ExpFastResourceLegacyAcquireExclusive @ 0x14038DEF4 (ExpFastResourceLegacyAcquireExclusive.c)
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x1405B2F1C (ExpFastResourceLegacyAcquireSharedStarveExclusive.c)
 * Callees:
 *     memset @ 0x140411300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
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
