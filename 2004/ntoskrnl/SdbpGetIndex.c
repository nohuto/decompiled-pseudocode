/*
 * XREFs of SdbpGetIndex @ 0x1407441E4
 * Callers:
 *     SdbpFindNextIndexedWildCardTag @ 0x14073DE48 (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x140743DD8 (SdbpFindFirstIndexedWildCardTag.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1407405C4 (AslLogCallPrintf.c)
 *     SdbpGetMappedTagData @ 0x140744454 (SdbpGetMappedTagData.c)
 *     SdbGetTagDataSize @ 0x140744990 (SdbGetTagDataSize.c)
 *     SdbGetTagFromTagID @ 0x140744A44 (SdbGetTagFromTagID.c)
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
