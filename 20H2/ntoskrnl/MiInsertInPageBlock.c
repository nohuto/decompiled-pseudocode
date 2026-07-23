/*
 * XREFs of MiInsertInPageBlock @ 0x1402CA838
 * Callers:
 *     MiFreeInPageSupportBlock @ 0x1402CA7B8 (MiFreeInPageSupportBlock.c)
 *     MiInitializePageFaultResources @ 0x1403C9DD8 (MiInitializePageFaultResources.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140405300 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall MiInsertInPageBlock(PSLIST_ENTRY ListEntry)
{
  __int64 v2; // rcx
  _SLIST_HEADER *v3; // rcx

  v2 = ((unsigned int)~LODWORD(ListEntry[12].Next) >> 6) & 1;
  if ( (unsigned __int64)ListEntry >= MiState[v2 + 1163] && (unsigned __int64)ListEntry < MiState[v2 + 1165] )
  {
    v3 = (_SLIST_HEADER *)((char *)&unk_140C4EB70 + 16 * v2);
LABEL_4:
    RtlpInterlockedPushEntrySList(v3, ListEntry);
    return 1LL;
  }
  if ( (unsigned int)LOWORD(MiState[2 * v2 + 1154]) < *((unsigned __int8 *)&MiState[1162] + v2) )
  {
    v3 = (_SLIST_HEADER *)&MiState[2 * v2 + 1154];
    goto LABEL_4;
  }
  return 0LL;
}
