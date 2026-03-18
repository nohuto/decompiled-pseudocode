/*
 * XREFs of SdbReadDWORDTag @ 0x1407443E4
 * Callers:
 *     SdbGetDatabaseEdition @ 0x140740AFC (SdbGetDatabaseEdition.c)
 *     KsepDbGetDriverShimsInternal @ 0x1407434DC (KsepDbGetDriverShimsInternal.c)
 *     InitOnceScanIndexes @ 0x140744610 (InitOnceScanIndexes.c)
 *     SdbpCheckAllAttributes @ 0x14079E53C (SdbpCheckAllAttributes.c)
 *     SdbQueryDataExTagID @ 0x1407AF428 (SdbQueryDataExTagID.c)
 *     SdbpGetExeEntryFlags @ 0x1407AF820 (SdbpGetExeEntryFlags.c)
 *     KsepDbGetShimInfo @ 0x1408BC2FC (KsepDbGetShimInfo.c)
 *     KsepDbReadKData @ 0x1408BC730 (KsepDbReadKData.c)
 *     SdbpCheckOSKind @ 0x140961F20 (SdbpCheckOSKind.c)
 *     SdbpCheckPackageAttributes @ 0x140961F70 (SdbpCheckPackageAttributes.c)
 *     SdbpCheckRuntimePlatform @ 0x1409621D0 (SdbpCheckRuntimePlatform.c)
 *     SdbpGetDeviceDWORD @ 0x1409623BC (SdbpGetDeviceDWORD.c)
 *     SdbpGetMatchingTextAttributes @ 0x14096240C (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x140962638 (SdbpGetRegistryMatchingAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1407405C4 (AslLogCallPrintf.c)
 *     SdbpReadTagData @ 0x140744590 (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x140744A44 (SdbGetTagFromTagID.c)
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
