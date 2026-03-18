/*
 * XREFs of SdbpGetMappedTagData @ 0x1407428D4
 * Callers:
 *     SdbGetStringTagPtr @ 0x14073F050 (SdbGetStringTagPtr.c)
 *     SdbpGetMappedStringFromTable @ 0x14073F0D0 (SdbpGetMappedStringFromTable.c)
 *     SdbpGetIndex @ 0x140742664 (SdbpGetIndex.c)
 *     SdbpGetFirstIndexedRecord @ 0x14074277C (SdbpGetFirstIndexedRecord.c)
 *     SdbpGetNextIndexedRecord @ 0x1407AB96C (SdbpGetNextIndexedRecord.c)
 *     SdbQueryDataExTagID @ 0x1407AC2C8 (SdbQueryDataExTagID.c)
 *     KsepDbReadKData @ 0x1408BB410 (KsepDbReadKData.c)
 *     SdbGetBinaryTagData @ 0x1409617F8 (SdbGetBinaryTagData.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14073EA44 (AslLogCallPrintf.c)
 *     SdbpGetTagHeadSize @ 0x140742D38 (SdbpGetTagHeadSize.c)
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
