/*
 * XREFs of SdbFindNextTag @ 0x140753078
 * Callers:
 *     KsepDbCacheReadDeviceInternal @ 0x14074F09C (KsepDbCacheReadDeviceInternal.c)
 *     KsepDbGetDriverShimsInternal @ 0x1407520BC (KsepDbGetDriverShimsInternal.c)
 *     InitOnceScanIndexes @ 0x1407531F0 (InitOnceScanIndexes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14074F1A4 (AslLogCallPrintf.c)
 *     SdbGetNextChild @ 0x140753428 (SdbGetNextChild.c)
 *     SdbGetTagFromTagID @ 0x140753624 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbFindNextTag(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // edi
  unsigned int v6; // ebx
  __int16 TagFromTagID; // r14
  unsigned int NextChild; // eax

  v4 = a3;
  v6 = 0;
  TagFromTagID = SdbGetTagFromTagID(a1, a3);
  if ( TagFromTagID )
  {
    while ( 1 )
    {
      NextChild = SdbGetNextChild(a1, a2, v4);
      v4 = NextChild;
      if ( !NextChild )
        break;
      if ( (unsigned __int16)SdbGetTagFromTagID(a1, NextChild) == TagFromTagID )
        return v4;
    }
    return v6;
  }
  else
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
}
