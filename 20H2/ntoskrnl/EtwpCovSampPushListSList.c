/*
 * XREFs of EtwpCovSampPushListSList @ 0x1405ADD90
 * Callers:
 *     EtwpCovSampCaptureQueueDpc @ 0x1405AD6D0 (EtwpCovSampCaptureQueueDpc.c)
 *     EtwpCovSampLookasideFlushFreeListToCleanupList @ 0x1405AD96C (EtwpCovSampLookasideFlushFreeListToCleanupList.c)
 * Callees:
 *     InterlockedPushListSList @ 0x140405370 (InterlockedPushListSList.c)
 */

PSLIST_ENTRY __fastcall EtwpCovSampPushListSList(_SLIST_HEADER *a1, _SLIST_ENTRY *a2, ULONG *a3)
{
  _SLIST_ENTRY *Next; // r9
  ULONG v5; // ebx
  _SLIST_ENTRY *i; // r8
  PSLIST_ENTRY result; // rax

  Next = a2->Next;
  v5 = 1;
  for ( i = a2; Next; Next = Next->Next )
  {
    ++v5;
    i = Next;
  }
  result = InterlockedPushListSList(a1, a2, i, v5);
  *a3 = v5;
  return result;
}
