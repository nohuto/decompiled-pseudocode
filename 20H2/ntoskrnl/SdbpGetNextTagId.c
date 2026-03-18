/*
 * XREFs of SdbpGetNextTagId @ 0x1407534E8
 * Callers:
 *     SdbGetNextChild @ 0x140753428 (SdbGetNextChild.c)
 *     SdbGetFirstChild @ 0x1407536A0 (SdbGetFirstChild.c)
 *     SdbpGetNextIndexedRecord @ 0x1407BCA0C (SdbpGetNextIndexedRecord.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14074F1A4 (AslLogCallPrintf.c)
 *     SdbpGetTagHeadSize @ 0x140753498 (SdbpGetTagHeadSize.c)
 *     SdbGetTagDataSize @ 0x140753570 (SdbGetTagDataSize.c)
 *     SdbGetTagFromTagID @ 0x140753624 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbpGetNextTagId(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  int TagHeadSize; // esi
  unsigned int TagDataSize; // eax

  v2 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x7000 && (unsigned int)SdbGetTagDataSize(a1, v2) == -1 )
  {
    AslLogCallPrintf(1LL);
    return *(unsigned int *)(a1 + 20);
  }
  TagHeadSize = SdbpGetTagHeadSize(a1, v2);
  if ( !TagHeadSize )
    return *(unsigned int *)(a1 + 20);
  TagDataSize = SdbGetTagDataSize(a1, v2);
  if ( (*(_DWORD *)(a1 + 1328) & 1) == 0 )
    TagDataSize = (TagDataSize + 1) & 0xFFFFFFFE;
  return v2 + TagHeadSize + TagDataSize;
}
