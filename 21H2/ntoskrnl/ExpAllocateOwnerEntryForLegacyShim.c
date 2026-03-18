/*
 * XREFs of ExpAllocateOwnerEntryForLegacyShim @ 0x14039C618
 * Callers:
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x140220460 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x140224140 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     SepMandatoryIntegrityCheck @ 0x1402FB7E0 (SepMandatoryIntegrityCheck.c)
 *     SeAccessCheckByType @ 0x1402FBEC0 (SeAccessCheckByType.c)
 *     SeSecurityAttributePresent @ 0x140300420 (SeSecurityAttributePresent.c)
 *     ExpFastResourceLegacyAcquireExclusive @ 0x14039BA38 (ExpFastResourceLegacyAcquireExclusive.c)
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x14063CD9C (ExpFastResourceLegacyAcquireSharedStarveExclusive.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
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
