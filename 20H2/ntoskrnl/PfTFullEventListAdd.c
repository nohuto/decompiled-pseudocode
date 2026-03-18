/*
 * XREFs of PfTFullEventListAdd @ 0x140314A4C
 * Callers:
 *     PfpEventHandleFullBuffer @ 0x140314A00 (PfpEventHandleFullBuffer.c)
 *     PfpFlushEventBuffers @ 0x14064B4D0 (PfpFlushEventBuffers.c)
 * Callees:
 *     PfFbBufferListInsertInFree @ 0x140244110 (PfFbBufferListInsertInFree.c)
 *     RtlpInterlockedPopEntrySList @ 0x1404052C0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140405300 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall PfTFullEventListAdd(PSLIST_ENTRY ListEntry)
{
  PSLIST_ENTRY result; // rax

  RtlpInterlockedPushEntrySList(&stru_140C4FC20, ListEntry);
  while ( 1 )
  {
    result = (PSLIST_ENTRY)LOWORD(stru_140C4FC20.Alignment);
    if ( LOWORD(stru_140C4FC20.Alignment) <= (unsigned int)dword_140C4FC30 )
      break;
    result = RtlpInterlockedPopEntrySList(&stru_140C4FC20);
    if ( !result )
      break;
    PfFbBufferListInsertInFree(
      (_SLIST_ENTRY *)&stru_140C4FBA0,
      result,
      LODWORD(result[2].Next) - (_DWORD)result,
      *((_DWORD *)&result[2].Next + 3),
      1);
  }
  return result;
}
