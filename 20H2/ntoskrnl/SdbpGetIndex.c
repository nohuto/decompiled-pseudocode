/*
 * XREFs of SdbpGetIndex @ 0x140752DC4
 * Callers:
 *     SdbpFindNextIndexedWildCardTag @ 0x14074CA2C (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x1407529B8 (SdbpFindFirstIndexedWildCardTag.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14074F1A4 (AslLogCallPrintf.c)
 *     SdbpGetMappedTagData @ 0x140753034 (SdbpGetMappedTagData.c)
 *     SdbGetTagDataSize @ 0x140753570 (SdbGetTagDataSize.c)
 *     SdbGetTagFromTagID @ 0x140753624 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbpGetIndex(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int v4; // ebx

  v4 = a2;
  if ( (unsigned __int16)SdbGetTagFromTagID(a1, a2) == 0x9801 )
  {
    *a3 = (unsigned int)SdbGetTagDataSize(a1, v4) / 0xC;
    return SdbpGetMappedTagData(a1, v4);
  }
  else
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
}
