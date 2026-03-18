/*
 * XREFs of SdbpReadTagData @ 0x140744590
 * Callers:
 *     SdbReadBinaryTag @ 0x140740A14 (SdbReadBinaryTag.c)
 *     SdbpReadStringRef @ 0x140740D78 (SdbpReadStringRef.c)
 *     SdbReadDWORDTag @ 0x1407443E4 (SdbReadDWORDTag.c)
 *     SdbReadWORDTag @ 0x14074451C (SdbReadWORDTag.c)
 *     SdbReadQWORDTag @ 0x14079FAD4 (SdbReadQWORDTag.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1407405C4 (AslLogCallPrintf.c)
 *     SdbpGetTagHeadSize @ 0x1407448B8 (SdbpGetTagHeadSize.c)
 *     SdbGetTagDataSize @ 0x140744990 (SdbGetTagDataSize.c)
 *     SdbpReadMappedData @ 0x140744A7C (SdbpReadMappedData.c)
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
