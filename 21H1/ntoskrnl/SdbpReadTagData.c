/*
 * XREFs of SdbpReadTagData @ 0x140742A10
 * Callers:
 *     SdbReadBinaryTag @ 0x14073EE94 (SdbReadBinaryTag.c)
 *     SdbpReadStringRef @ 0x14073F1F8 (SdbpReadStringRef.c)
 *     SdbReadDWORDTag @ 0x140742864 (SdbReadDWORDTag.c)
 *     SdbReadWORDTag @ 0x14074299C (SdbReadWORDTag.c)
 *     SdbReadQWORDTag @ 0x14079B704 (SdbReadQWORDTag.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14073EA44 (AslLogCallPrintf.c)
 *     SdbpGetTagHeadSize @ 0x140742D38 (SdbpGetTagHeadSize.c)
 *     SdbGetTagDataSize @ 0x140742E10 (SdbGetTagDataSize.c)
 *     SdbpReadMappedData @ 0x140742EFC (SdbpReadMappedData.c)
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
