/*
 * XREFs of SdbReadBinaryTag @ 0x14073EE94
 * Callers:
 *     SdbGetDatabaseID @ 0x140740F30 (SdbGetDatabaseID.c)
 *     SdbReadEntryInformation @ 0x1407AC59C (SdbReadEntryInformation.c)
 *     SdbpGetExeEntryFlags @ 0x1407AC6C0 (SdbpGetExeEntryFlags.c)
 *     SdbpGetMatchingTextAttributes @ 0x14096106C (SdbpGetMatchingTextAttributes.c)
 *     SdbReadGUIDTag @ 0x14096186C (SdbReadGUIDTag.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14073EA44 (AslLogCallPrintf.c)
 *     SdbpReadTagData @ 0x140742A10 (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x140742EC4 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbReadBinaryTag(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v6; // ebx

  v6 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x9000 )
  {
    if ( (unsigned int)SdbpReadTagData(a1, v6, a3, a4) )
      return 1LL;
    AslLogCallPrintf(1LL);
  }
  else
  {
    SdbGetTagFromTagID(a1, v6);
    AslLogCallPrintf(1LL);
  }
  return 0LL;
}
