/*
 * XREFs of SdbpGetMappedTagData @ 0x140744454
 * Callers:
 *     SdbGetStringTagPtr @ 0x140740BD0 (SdbGetStringTagPtr.c)
 *     SdbpGetMappedStringFromTable @ 0x140740C50 (SdbpGetMappedStringFromTable.c)
 *     SdbpGetIndex @ 0x1407441E4 (SdbpGetIndex.c)
 *     SdbpGetFirstIndexedRecord @ 0x1407442FC (SdbpGetFirstIndexedRecord.c)
 *     SdbpGetNextIndexedRecord @ 0x1407AEACC (SdbpGetNextIndexedRecord.c)
 *     SdbQueryDataExTagID @ 0x1407AF428 (SdbQueryDataExTagID.c)
 *     KsepDbReadKData @ 0x1408BC730 (KsepDbReadKData.c)
 *     SdbGetBinaryTagData @ 0x140962B98 (SdbGetBinaryTagData.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1407405C4 (AslLogCallPrintf.c)
 *     SdbpGetTagHeadSize @ 0x1407448B8 (SdbpGetTagHeadSize.c)
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
