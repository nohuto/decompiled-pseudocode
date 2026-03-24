/*
 * XREFs of PfTFullEventListAdd @ 0x1402B7E4C
 * Callers:
 *     PfpEventHandleFullBuffer @ 0x1402B7E00 (PfpEventHandleFullBuffer.c)
 *     PfpFlushEventBuffers @ 0x1406CA380 (PfpFlushEventBuffers.c)
 * Callees:
 *     PfFbBufferListInsertInFree @ 0x1402D4690 (PfFbBufferListInsertInFree.c)
 *     RtlpInterlockedPopEntrySList @ 0x140407930 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140407970 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall PfTFullEventListAdd(PSLIST_ENTRY ListEntry)
{
  PSLIST_ENTRY result; // rax

  RtlpInterlockedPushEntrySList(&stru_140C4FDA0, ListEntry);
  while ( 1 )
  {
    result = (PSLIST_ENTRY)LOWORD(stru_140C4FDA0.Alignment);
    if ( LOWORD(stru_140C4FDA0.Alignment) <= (unsigned int)dword_140C4FDB0 )
      break;
    result = RtlpInterlockedPopEntrySList(&stru_140C4FDA0);
    if ( !result )
      break;
    PfFbBufferListInsertInFree(&stru_140C4FD20, result, 1);
  }
  return result;
}
