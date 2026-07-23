/*
 * XREFs of AslFileMappingDelete @ 0x140756528
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x140754680 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckKObject @ 0x140754F1C (SdbpCheckKObject.c)
 *     SdbCloseDatabaseRead @ 0x1407563CC (SdbCloseDatabaseRead.c)
 *     AslFileMappingCreate @ 0x140758BB8 (AslFileMappingCreate.c)
 *     SdbGetDatabaseMatch @ 0x14077E808 (SdbGetDatabaseMatch.c)
 *     AslFileMappingCreateFromImageView @ 0x1407B3938 (AslFileMappingCreateFromImageView.c)
 *     SdbOpenDatabaseEx @ 0x14096426C (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingTextEntry @ 0x140964E74 (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140965260 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     RtlFileMapFree @ 0x14037103C (RtlFileMapFree.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
