/*
 * XREFs of SdbpReadTagData @ 0x140753170
 * Callers:
 *     SdbReadBinaryTag @ 0x14074F5F4 (SdbReadBinaryTag.c)
 *     SdbpReadStringRef @ 0x14074F958 (SdbpReadStringRef.c)
 *     SdbReadDWORDTag @ 0x140752FC4 (SdbReadDWORDTag.c)
 *     SdbReadWORDTag @ 0x1407530FC (SdbReadWORDTag.c)
 *     SdbReadQWORDTag @ 0x1407AEE04 (SdbReadQWORDTag.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14074F1A4 (AslLogCallPrintf.c)
 *     SdbpGetTagHeadSize @ 0x140753498 (SdbpGetTagHeadSize.c)
 *     SdbGetTagDataSize @ 0x140753570 (SdbGetTagDataSize.c)
 *     SdbpReadMappedData @ 0x14075365C (SdbpReadMappedData.c)
 */

__int64 __fastcall SdbpReadTagData(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v6; // esi
  unsigned int TagDataSize; // ebx
  int TagHeadSize; // eax

  v6 = a2;
  TagDataSize = SdbGetTagDataSize(a1, a2);
  if ( TagDataSize <= a4 )
  {
    TagHeadSize = SdbpGetTagHeadSize(a1, v6);
    if ( (unsigned int)SdbpReadMappedData(a1, v6 + TagHeadSize, a3, TagDataSize) )
      return 1LL;
  }
  AslLogCallPrintf(1LL);
  return 0LL;
}
