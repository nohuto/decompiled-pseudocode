/*
 * XREFs of SdbReadDWORDTag @ 0x140742864
 * Callers:
 *     SdbGetDatabaseEdition @ 0x14073EF7C (SdbGetDatabaseEdition.c)
 *     KsepDbGetDriverShimsInternal @ 0x14074195C (KsepDbGetDriverShimsInternal.c)
 *     InitOnceScanIndexes @ 0x140742A90 (InitOnceScanIndexes.c)
 *     SdbpCheckAllAttributes @ 0x14079A16C (SdbpCheckAllAttributes.c)
 *     SdbQueryDataExTagID @ 0x1407AC2C8 (SdbQueryDataExTagID.c)
 *     SdbpGetExeEntryFlags @ 0x1407AC6C0 (SdbpGetExeEntryFlags.c)
 *     KsepDbGetShimInfo @ 0x1408BAFDC (KsepDbGetShimInfo.c)
 *     KsepDbReadKData @ 0x1408BB410 (KsepDbReadKData.c)
 *     SdbpCheckOSKind @ 0x140960B80 (SdbpCheckOSKind.c)
 *     SdbpCheckPackageAttributes @ 0x140960BD0 (SdbpCheckPackageAttributes.c)
 *     SdbpCheckRuntimePlatform @ 0x140960E30 (SdbpCheckRuntimePlatform.c)
 *     SdbpGetDeviceDWORD @ 0x14096101C (SdbpGetDeviceDWORD.c)
 *     SdbpGetMatchingTextAttributes @ 0x14096106C (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x140961298 (SdbpGetRegistryMatchingAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14073EA44 (AslLogCallPrintf.c)
 *     SdbpReadTagData @ 0x140742A10 (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x140742EC4 (SdbGetTagFromTagID.c)
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
