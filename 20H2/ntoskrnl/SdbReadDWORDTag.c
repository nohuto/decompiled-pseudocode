/*
 * XREFs of SdbReadDWORDTag @ 0x140752FC4
 * Callers:
 *     SdbGetDatabaseEdition @ 0x14074F6DC (SdbGetDatabaseEdition.c)
 *     KsepDbGetDriverShimsInternal @ 0x1407520BC (KsepDbGetDriverShimsInternal.c)
 *     InitOnceScanIndexes @ 0x1407531F0 (InitOnceScanIndexes.c)
 *     SdbpCheckAllAttributes @ 0x1407AD86C (SdbpCheckAllAttributes.c)
 *     SdbQueryDataExTagID @ 0x1407BD368 (SdbQueryDataExTagID.c)
 *     SdbpGetExeEntryFlags @ 0x1407BD760 (SdbpGetExeEntryFlags.c)
 *     KsepDbGetShimInfo @ 0x1408C205C (KsepDbGetShimInfo.c)
 *     KsepDbReadKData @ 0x1408C2490 (KsepDbReadKData.c)
 *     SdbpCheckOSKind @ 0x140967CF0 (SdbpCheckOSKind.c)
 *     SdbpCheckPackageAttributes @ 0x140967D40 (SdbpCheckPackageAttributes.c)
 *     SdbpCheckRuntimePlatform @ 0x140967FA0 (SdbpCheckRuntimePlatform.c)
 *     SdbpGetDeviceDWORD @ 0x14096818C (SdbpGetDeviceDWORD.c)
 *     SdbpGetMatchingTextAttributes @ 0x1409681DC (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x140968408 (SdbpGetRegistryMatchingAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14074F1A4 (AslLogCallPrintf.c)
 *     SdbpReadTagData @ 0x140753170 (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x140753624 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbReadDWORDTag(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // ebx
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = a3;
  v4 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x4000 )
  {
    v6 = SdbpReadTagData(a1, v4, &v9, 4LL);
    v7 = v9;
    if ( !v6 )
      return a3;
    return v7;
  }
  else
  {
    SdbGetTagFromTagID(a1, v4);
    AslLogCallPrintf(1LL);
    return a3;
  }
}
