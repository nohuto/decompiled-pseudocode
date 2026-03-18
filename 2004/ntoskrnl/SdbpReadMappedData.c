/*
 * XREFs of SdbpReadMappedData @ 0x140744A7C
 * Callers:
 *     SdbpOpenDatabaseInMemory @ 0x1407408A0 (SdbpOpenDatabaseInMemory.c)
 *     SdbpReadTagData @ 0x140744590 (SdbpReadTagData.c)
 *     SdbpGetTagHeadSize @ 0x1407448B8 (SdbpGetTagHeadSize.c)
 *     SdbGetTagDataSize @ 0x140744990 (SdbGetTagDataSize.c)
 *     SdbGetTagFromTagID @ 0x140744A44 (SdbGetTagFromTagID.c)
 *     SdbOpenDatabaseEx @ 0x140960A3C (SdbOpenDatabaseEx.c)
 * Callees:
 *     memmove @ 0x140409FC0 (memmove.c)
 *     AslLogCallPrintf @ 0x1407405C4 (AslLogCallPrintf.c)
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
