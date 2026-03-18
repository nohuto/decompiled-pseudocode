/*
 * XREFs of AslFileMappingDelete @ 0x14075E448
 * Callers:
 *     SdbCloseDatabaseRead @ 0x1406E0BB8 (SdbCloseDatabaseRead.c)
 *     AslFileMappingCreate @ 0x14075E160 (AslFileMappingCreate.c)
 *     SdbGetDatabaseMatch @ 0x14075E2D8 (SdbGetDatabaseMatch.c)
 *     SdbpCheckMatchingFiles @ 0x1408414E0 (SdbpCheckMatchingFiles.c)
 *     AslFileMappingCreateFromImageView @ 0x140842D98 (AslFileMappingCreateFromImageView.c)
 *     SdbpCheckKObject @ 0x140843160 (SdbpCheckKObject.c)
 *     SdbOpenDatabaseEx @ 0x140A108BC (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingTextEntry @ 0x140A11614 (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140A11A00 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     RtlFileMapFree @ 0x1402D89E8 (RtlFileMapFree.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
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
