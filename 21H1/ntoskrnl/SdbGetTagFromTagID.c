/*
 * XREFs of SdbGetTagFromTagID @ 0x140742EC4
 * Callers:
 *     SdbpFindMatcher @ 0x14073D514 (SdbpFindMatcher.c)
 *     SdbReadBinaryTag @ 0x14073EE94 (SdbReadBinaryTag.c)
 *     SdbGetStringTagPtr @ 0x14073F050 (SdbGetStringTagPtr.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x14073F120 (SdbpGetStringTableItemFromStringRef.c)
 *     SdbpReadStringRef @ 0x14073F1F8 (SdbpReadStringRef.c)
 *     SdbpGetIndex @ 0x140742664 (SdbpGetIndex.c)
 *     SdbpGetFirstIndexedRecord @ 0x14074277C (SdbpGetFirstIndexedRecord.c)
 *     SdbReadDWORDTag @ 0x140742864 (SdbReadDWORDTag.c)
 *     SdbFindNextTag @ 0x140742918 (SdbFindNextTag.c)
 *     SdbReadWORDTag @ 0x14074299C (SdbReadWORDTag.c)
 *     InitOnceScanIndexes @ 0x140742A90 (InitOnceScanIndexes.c)
 *     SdbFindFirstTag @ 0x140742C54 (SdbFindFirstTag.c)
 *     SdbGetNextChild @ 0x140742CC8 (SdbGetNextChild.c)
 *     SdbpGetNextTagId @ 0x140742D88 (SdbpGetNextTagId.c)
 *     SdbGetTagDataSize @ 0x140742E10 (SdbGetTagDataSize.c)
 *     SdbGetFirstChild @ 0x140742F40 (SdbGetFirstChild.c)
 *     SdbReadQWORDTag @ 0x14079B704 (SdbReadQWORDTag.c)
 *     SdbpGetNextIndexedRecord @ 0x1407AB96C (SdbpGetNextIndexedRecord.c)
 *     SdbFindFirstNamedTag @ 0x1407AC4EC (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x1409616EC (SdbpFindNextNamedTag.c)
 *     SdbGetBinaryTagData @ 0x1409617F8 (SdbGetBinaryTagData.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14073EA44 (AslLogCallPrintf.c)
 *     SdbpReadMappedData @ 0x140742EFC (SdbpReadMappedData.c)
 */

__int64 __fastcall SdbGetTagFromTagID(__int64 a1, __int64 a2)
{
  unsigned __int16 v3; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  if ( (unsigned int)SdbpReadMappedData(a1, a2, &v3, 2LL) )
    return v3;
  AslLogCallPrintf(1LL);
  return 0LL;
}
