/*
 * XREFs of AslFileMappingDelete @ 0x14074F594
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x14074D860 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckKObject @ 0x14074DF08 (SdbpCheckKObject.c)
 *     SdbCloseDatabaseRead @ 0x14074F438 (SdbCloseDatabaseRead.c)
 *     AslFileMappingCreate @ 0x140751C28 (AslFileMappingCreate.c)
 *     SdbGetDatabaseMatch @ 0x14077A868 (SdbGetDatabaseMatch.c)
 *     AslFileMappingCreateFromImageView @ 0x1407AEB7C (AslFileMappingCreateFromImageView.c)
 *     SdbOpenDatabaseEx @ 0x14096680C (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingTextEntry @ 0x1409673F4 (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x1409677E0 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     RtlFileMapFree @ 0x140370DFC (RtlFileMapFree.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall AslFileMappingDelete(PVOID *P)
{
  PVOID v2; // rcx

  if ( P )
  {
    RtlFileMapFree((__int64)(P + 1));
    v2 = P[9];
    if ( v2 )
    {
      ExFreePoolWithTag(v2, 0x74705041u);
      P[9] = 0LL;
    }
    if ( *P )
    {
      ExFreePoolWithTag(*P, 0x74705041u);
      *P = 0LL;
    }
    ExFreePoolWithTag(P, 0x74705041u);
  }
}
