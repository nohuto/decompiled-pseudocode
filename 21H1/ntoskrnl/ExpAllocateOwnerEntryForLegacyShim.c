/*
 * XREFs of ExpAllocateOwnerEntryForLegacyShim @ 0x14038C63C
 * Callers:
 *     SepMandatoryIntegrityCheck @ 0x140209E00 (SepMandatoryIntegrityCheck.c)
 *     SeSecurityAttributePresent @ 0x140259CA0 (SeSecurityAttributePresent.c)
 *     ExAcquireResourceSharedLite @ 0x140261FD0 (ExAcquireResourceSharedLite.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x1402E9570 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x1402EDF30 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     ExpFastResourceLegacyAcquireExclusive @ 0x14038AEC4 (ExpFastResourceLegacyAcquireExclusive.c)
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x1405AEC9C (ExpFastResourceLegacyAcquireSharedStarveExclusive.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
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
