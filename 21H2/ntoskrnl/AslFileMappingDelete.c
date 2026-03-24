/*
 * XREFs of AslFileMappingDelete @ 0x140756368
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x1407544C0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckKObject @ 0x140754D5C (SdbpCheckKObject.c)
 *     SdbCloseDatabaseRead @ 0x14075620C (SdbCloseDatabaseRead.c)
 *     AslFileMappingCreate @ 0x1407589F8 (AslFileMappingCreate.c)
 *     SdbGetDatabaseMatch @ 0x14077E648 (SdbGetDatabaseMatch.c)
 *     AslFileMappingCreateFromImageView @ 0x1407B3798 (AslFileMappingCreateFromImageView.c)
 *     SdbOpenDatabaseEx @ 0x14096408C (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingTextEntry @ 0x140964C94 (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140965080 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     RtlFileMapFree @ 0x1403714EC (RtlFileMapFree.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
