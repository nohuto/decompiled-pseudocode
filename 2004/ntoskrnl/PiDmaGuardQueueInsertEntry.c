/*
 * XREFs of PiDmaGuardQueueInsertEntry @ 0x1408B60F0
 * Callers:
 *     PiDmaGuardProcessPostRemove @ 0x14073222C (PiDmaGuardProcessPostRemove.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140296B50 (ObfReferenceObjectWithTag.c)
 *     PipDgqInsertEntry @ 0x1408B6190 (PipDgqInsertEntry.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiDmaGuardQueueInsertEntry(PVOID Object)
{
  unsigned int v2; // ebx
  _QWORD *PoolWithTag; // rdi

  v2 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x64706E50u);
  if ( PoolWithTag )
  {
    ObfReferenceObjectWithTag(Object, 0x64706E50u);
    PoolWithTag[2] = Object;
    PipDgqInsertEntry(PoolWithTag);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
