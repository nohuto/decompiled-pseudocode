/*
 * XREFs of KeAbPreWait @ 0x1402745C0
 * Callers:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     MiReferenceControlArea @ 0x140228B04 (MiReferenceControlArea.c)
 *     MiLockControlAreaSectionExtend @ 0x140265EC4 (MiLockControlAreaSectionExtend.c)
 *     ExpAcquireFastMutexContended @ 0x1402740C0 (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140274190 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402743C0 (ExfAcquirePushLockSharedEx.c)
 *     KeWaitForMultipleObjects @ 0x1402801A0 (KeWaitForMultipleObjects.c)
 *     KiWaitForAllObjects @ 0x14030EAC0 (KiWaitForAllObjects.c)
 *     MiWaitForCollidedFaultComplete @ 0x14031273C (MiWaitForCollidedFaultComplete.c)
 *     ExAcquireFastResourceExclusive @ 0x14038C2A0 (ExAcquireFastResourceExclusive.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14038C680 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceShared @ 0x14038C980 (ExAcquireFastResourceShared.c)
 *     MiChangingSubsectionProtos @ 0x14053A448 (MiChangingSubsectionProtos.c)
 *     MiWaitForExtentDeletions @ 0x14053D210 (MiWaitForExtentDeletions.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140648F18 (IopWaitAndAcquireFileObjectLock.c)
 *     CmpWaitOnHiveWriteQueue @ 0x14086F29C (CmpWaitOnHiveWriteQueue.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140881150 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     PfpPrefetchSharedConflictNotifyStart @ 0x1408DC660 (PfpPrefetchSharedConflictNotifyStart.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140272F70 (KiAbEntryRemoveFromTree.c)
 */

char __fastcall KeAbPreWait(__int64 a1)
{
  char result; // al

  *(_BYTE *)(a1 + 32) |= 2u;
  if ( *(__int64 *)(a1 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)a1);
  *(_BYTE *)(a1 + 25) |= 1u;
  result = *(_BYTE *)(a1 + 32) & 0xFD;
  *(_BYTE *)(a1 + 32) = result;
  return result;
}
