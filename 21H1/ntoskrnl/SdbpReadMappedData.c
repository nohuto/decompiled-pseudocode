/*
 * XREFs of SdbpReadMappedData @ 0x140742EFC
 * Callers:
 *     SdbpOpenDatabaseInMemory @ 0x14073ED20 (SdbpOpenDatabaseInMemory.c)
 *     SdbpReadTagData @ 0x140742A10 (SdbpReadTagData.c)
 *     SdbpGetTagHeadSize @ 0x140742D38 (SdbpGetTagHeadSize.c)
 *     SdbGetTagDataSize @ 0x140742E10 (SdbGetTagDataSize.c)
 *     SdbGetTagFromTagID @ 0x140742EC4 (SdbGetTagFromTagID.c)
 *     SdbOpenDatabaseEx @ 0x14095F69C (SdbOpenDatabaseEx.c)
 * Callees:
 *     memmove @ 0x140408CC0 (memmove.c)
 *     AslLogCallPrintf @ 0x14073EA44 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpReadMappedData(__int64 a1, unsigned int a2, void *a3, unsigned int a4)
{
  if ( a2 + a4 < a4 || *(_DWORD *)(a1 + 20) < a2 + a4 )
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  else
  {
    memmove(a3, (const void *)(*(_QWORD *)(a1 + 8) + a2), a4);
    return 1LL;
  }
}
