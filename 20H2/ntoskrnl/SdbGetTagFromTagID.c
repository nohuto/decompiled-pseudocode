/*
 * XREFs of SdbGetTagFromTagID @ 0x140753624
 * Callers:
 *     SdbpFindMatcher @ 0x14074DC74 (SdbpFindMatcher.c)
 *     SdbReadBinaryTag @ 0x14074F5F4 (SdbReadBinaryTag.c)
 *     SdbGetStringTagPtr @ 0x14074F7B0 (SdbGetStringTagPtr.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x14074F880 (SdbpGetStringTableItemFromStringRef.c)
 *     SdbpReadStringRef @ 0x14074F958 (SdbpReadStringRef.c)
 *     SdbpGetIndex @ 0x140752DC4 (SdbpGetIndex.c)
 *     SdbpGetFirstIndexedRecord @ 0x140752EDC (SdbpGetFirstIndexedRecord.c)
 *     SdbReadDWORDTag @ 0x140752FC4 (SdbReadDWORDTag.c)
 *     SdbFindNextTag @ 0x140753078 (SdbFindNextTag.c)
 *     SdbReadWORDTag @ 0x1407530FC (SdbReadWORDTag.c)
 *     InitOnceScanIndexes @ 0x1407531F0 (InitOnceScanIndexes.c)
 *     SdbFindFirstTag @ 0x1407533B4 (SdbFindFirstTag.c)
 *     SdbGetNextChild @ 0x140753428 (SdbGetNextChild.c)
 *     SdbpGetNextTagId @ 0x1407534E8 (SdbpGetNextTagId.c)
 *     SdbGetTagDataSize @ 0x140753570 (SdbGetTagDataSize.c)
 *     SdbGetFirstChild @ 0x1407536A0 (SdbGetFirstChild.c)
 *     SdbReadQWORDTag @ 0x1407AEE04 (SdbReadQWORDTag.c)
 *     SdbpGetNextIndexedRecord @ 0x1407BCA0C (SdbpGetNextIndexedRecord.c)
 *     SdbFindFirstNamedTag @ 0x1407BD58C (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x14096885C (SdbpFindNextNamedTag.c)
 *     SdbGetBinaryTagData @ 0x140968968 (SdbGetBinaryTagData.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14074F1A4 (AslLogCallPrintf.c)
 *     SdbpReadMappedData @ 0x14075365C (SdbpReadMappedData.c)
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
