/*
 * XREFs of SdbGetTagFromTagID @ 0x140744A44
 * Callers:
 *     SdbpFindMatcher @ 0x14073F094 (SdbpFindMatcher.c)
 *     SdbReadBinaryTag @ 0x140740A14 (SdbReadBinaryTag.c)
 *     SdbGetStringTagPtr @ 0x140740BD0 (SdbGetStringTagPtr.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x140740CA0 (SdbpGetStringTableItemFromStringRef.c)
 *     SdbpReadStringRef @ 0x140740D78 (SdbpReadStringRef.c)
 *     SdbpGetIndex @ 0x1407441E4 (SdbpGetIndex.c)
 *     SdbpGetFirstIndexedRecord @ 0x1407442FC (SdbpGetFirstIndexedRecord.c)
 *     SdbReadDWORDTag @ 0x1407443E4 (SdbReadDWORDTag.c)
 *     SdbFindNextTag @ 0x140744498 (SdbFindNextTag.c)
 *     SdbReadWORDTag @ 0x14074451C (SdbReadWORDTag.c)
 *     InitOnceScanIndexes @ 0x140744610 (InitOnceScanIndexes.c)
 *     SdbFindFirstTag @ 0x1407447D4 (SdbFindFirstTag.c)
 *     SdbGetNextChild @ 0x140744848 (SdbGetNextChild.c)
 *     SdbpGetNextTagId @ 0x140744908 (SdbpGetNextTagId.c)
 *     SdbGetTagDataSize @ 0x140744990 (SdbGetTagDataSize.c)
 *     SdbGetFirstChild @ 0x140744AC0 (SdbGetFirstChild.c)
 *     SdbReadQWORDTag @ 0x14079FAD4 (SdbReadQWORDTag.c)
 *     SdbpGetNextIndexedRecord @ 0x1407AEACC (SdbpGetNextIndexedRecord.c)
 *     SdbFindFirstNamedTag @ 0x1407AF64C (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x140962A8C (SdbpFindNextNamedTag.c)
 *     SdbGetBinaryTagData @ 0x140962B98 (SdbGetBinaryTagData.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1407405C4 (AslLogCallPrintf.c)
 *     SdbpReadMappedData @ 0x140744A7C (SdbpReadMappedData.c)
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
