/*
 * XREFs of ExpAllocateOwnerEntryForLegacyShim @ 0x14038FCBC
 * Callers:
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x1402108A0 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     SeSecurityAttributePresent @ 0x1402F3310 (SeSecurityAttributePresent.c)
 *     ExAcquireResourceSharedLite @ 0x140356CB0 (ExAcquireResourceSharedLite.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x1403588F0 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     SepMandatoryIntegrityCheck @ 0x140359570 (SepMandatoryIntegrityCheck.c)
 *     ExpFastResourceLegacyAcquireExclusive @ 0x14038E5B4 (ExpFastResourceLegacyAcquireExclusive.c)
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x1405B4B4C (ExpFastResourceLegacyAcquireSharedStarveExclusive.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
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
