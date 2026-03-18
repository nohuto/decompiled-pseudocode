/*
 * XREFs of MiInsertInPageBlock @ 0x1402745EC
 * Callers:
 *     MiFreeInPageSupportBlock @ 0x14027456C (MiFreeInPageSupportBlock.c)
 *     MiInitializePageFaultResources @ 0x1403B7B80 (MiInitializePageFaultResources.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall MiInsertInPageBlock(PSLIST_ENTRY ListEntry)
{
  __int64 v2; // rcx
  union _SLIST_HEADER *v3; // rcx

  v2 = ((unsigned int)~LODWORD(ListEntry[12].Next) >> 6) & 1;
  if ( (unsigned __int64)ListEntry >= MiState[v2 + 2109] && (unsigned __int64)ListEntry < MiState[v2 + 2111] )
  {
    v3 = (union _SLIST_HEADER *)((char *)&unk_140C53200 + 16 * v2);
    goto LABEL_5;
  }
  if ( (unsigned int)LOWORD(MiState[2 * v2 + 2100]) < *((unsigned __int8 *)&MiState[2108] + v2) )
  {
    v3 = (union _SLIST_HEADER *)&MiState[2 * v2 + 2100];
LABEL_5:
    RtlpInterlockedPushEntrySList(v3, ListEntry);
    return 1LL;
  }
  return 0LL;
}
