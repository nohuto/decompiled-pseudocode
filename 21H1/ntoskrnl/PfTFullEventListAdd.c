/*
 * XREFs of PfTFullEventListAdd @ 0x140305B6C
 * Callers:
 *     PfpEventHandleFullBuffer @ 0x140305B20 (PfpEventHandleFullBuffer.c)
 *     PfpFlushEventBuffers @ 0x140653EB0 (PfpFlushEventBuffers.c)
 * Callees:
 *     PfFbBufferListInsertInFree @ 0x1402C2E5C (PfFbBufferListInsertInFree.c)
 *     RtlpInterlockedPopEntrySList @ 0x1403FDD60 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FDDA0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall PfTFullEventListAdd(PSLIST_ENTRY ListEntry)
{
  PSLIST_ENTRY result; // rax

  RtlpInterlockedPushEntrySList(&stru_140C4FCE0, ListEntry);
  while ( 1 )
  {
    result = (PSLIST_ENTRY)LOWORD(stru_140C4FCE0.Alignment);
    if ( LOWORD(stru_140C4FCE0.Alignment) <= (unsigned int)dword_140C4FCF0 )
      break;
    result = RtlpInterlockedPopEntrySList(&stru_140C4FCE0);
    if ( !result )
      break;
    PfFbBufferListInsertInFree(
      (_SLIST_ENTRY *)&stru_140C4FC60,
      result,
      LODWORD(result[2].Next) - (_DWORD)result,
      *((_DWORD *)&result[2].Next + 3),
      1);
  }
  return result;
}
