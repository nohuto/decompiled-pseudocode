/*
 * XREFs of SdbpGetMappedTagData @ 0x140753034
 * Callers:
 *     SdbGetStringTagPtr @ 0x14074F7B0 (SdbGetStringTagPtr.c)
 *     SdbpGetMappedStringFromTable @ 0x14074F830 (SdbpGetMappedStringFromTable.c)
 *     SdbpGetIndex @ 0x140752DC4 (SdbpGetIndex.c)
 *     SdbpGetFirstIndexedRecord @ 0x140752EDC (SdbpGetFirstIndexedRecord.c)
 *     SdbpGetNextIndexedRecord @ 0x1407BCA0C (SdbpGetNextIndexedRecord.c)
 *     SdbQueryDataExTagID @ 0x1407BD368 (SdbQueryDataExTagID.c)
 *     KsepDbReadKData @ 0x1408C2490 (KsepDbReadKData.c)
 *     SdbGetBinaryTagData @ 0x140968968 (SdbGetBinaryTagData.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14074F1A4 (AslLogCallPrintf.c)
 *     SdbpGetTagHeadSize @ 0x140753498 (SdbpGetTagHeadSize.c)
 */

__int64 __fastcall SdbpGetMappedTagData(__int64 a1, int a2)
{
  unsigned int v3; // eax
  __int64 v4; // rbx

  v3 = a2 + SdbpGetTagHeadSize();
  if ( v3 >= *(_DWORD *)(a1 + 20) )
  {
    AslLogCallPrintf(1LL);
    v4 = 0LL;
    goto LABEL_5;
  }
  v4 = *(_QWORD *)(a1 + 8) + v3;
  if ( !v4 )
LABEL_5:
    AslLogCallPrintf(1LL);
  return v4;
}
