/*
 * XREFs of PfTFullEventListAdd @ 0x14023602C
 * Callers:
 *     PfpEventHandleFullBuffer @ 0x140235FE0 (PfpEventHandleFullBuffer.c)
 *     PfpFlushEventBuffers @ 0x140678C70 (PfpFlushEventBuffers.c)
 * Callees:
 *     PfFbBufferListInsertInFree @ 0x140273370 (PfFbBufferListInsertInFree.c)
 *     RtlpInterlockedPopEntrySList @ 0x140407B10 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140407B50 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall PfTFullEventListAdd(PSLIST_ENTRY ListEntry)
{
  PSLIST_ENTRY result; // rax

  RtlpInterlockedPushEntrySList(&stru_140C4FDE0, ListEntry);
  while ( 1 )
  {
    result = (PSLIST_ENTRY)LOWORD(stru_140C4FDE0.Alignment);
    if ( LOWORD(stru_140C4FDE0.Alignment) <= (unsigned int)dword_140C4FDF0 )
      break;
    result = RtlpInterlockedPopEntrySList(&stru_140C4FDE0);
    if ( !result )
      break;
    PfFbBufferListInsertInFree(&stru_140C4FD60, result, 1);
  }
  return result;
}
