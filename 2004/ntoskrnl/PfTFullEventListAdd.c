/*
 * XREFs of PfTFullEventListAdd @ 0x14034361C
 * Callers:
 *     PfpEventHandleFullBuffer @ 0x1403435D0 (PfpEventHandleFullBuffer.c)
 *     PfpFlushEventBuffers @ 0x1406CE510 (PfpFlushEventBuffers.c)
 * Callees:
 *     PfFbBufferListInsertInFree @ 0x140305114 (PfFbBufferListInsertInFree.c)
 *     RtlpInterlockedPopEntrySList @ 0x1403FEFF0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FF030 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall PfTFullEventListAdd(PSLIST_ENTRY ListEntry)
{
  PSLIST_ENTRY result; // rax

  RtlpInterlockedPushEntrySList(&stru_140C4FBA0, ListEntry);
  while ( 1 )
  {
    result = (PSLIST_ENTRY)LOWORD(stru_140C4FBA0.Alignment);
    if ( LOWORD(stru_140C4FBA0.Alignment) <= (unsigned int)dword_140C4FBB0 )
      break;
    result = RtlpInterlockedPopEntrySList(&stru_140C4FBA0);
    if ( !result )
      break;
    PfFbBufferListInsertInFree(
      (_SLIST_ENTRY *)&stru_140C4FB20,
      result,
      LODWORD(result[2].Next) - (_DWORD)result,
      *((_DWORD *)&result[2].Next + 3),
      1);
  }
  return result;
}
