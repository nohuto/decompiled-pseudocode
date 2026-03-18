/*
 * XREFs of SdbpReadMappedData @ 0x14075365C
 * Callers:
 *     SdbpOpenDatabaseInMemory @ 0x14074F480 (SdbpOpenDatabaseInMemory.c)
 *     SdbpReadTagData @ 0x140753170 (SdbpReadTagData.c)
 *     SdbpGetTagHeadSize @ 0x140753498 (SdbpGetTagHeadSize.c)
 *     SdbGetTagDataSize @ 0x140753570 (SdbGetTagDataSize.c)
 *     SdbGetTagFromTagID @ 0x140753624 (SdbGetTagFromTagID.c)
 *     SdbOpenDatabaseEx @ 0x14096680C (SdbOpenDatabaseEx.c)
 * Callees:
 *     memmove @ 0x140411040 (memmove.c)
 *     AslLogCallPrintf @ 0x14074F1A4 (AslLogCallPrintf.c)
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
