/*
 * XREFs of AslFileMappingDelete @ 0x1407409B4
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x14073EC80 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckKObject @ 0x14073F328 (SdbpCheckKObject.c)
 *     SdbCloseDatabaseRead @ 0x140740858 (SdbCloseDatabaseRead.c)
 *     AslFileMappingCreate @ 0x140743048 (AslFileMappingCreate.c)
 *     SdbGetDatabaseMatch @ 0x14076BAA8 (SdbGetDatabaseMatch.c)
 *     AslFileMappingCreateFromImageView @ 0x14079F84C (AslFileMappingCreateFromImageView.c)
 *     SdbOpenDatabaseEx @ 0x140960A3C (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingTextEntry @ 0x140961624 (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140961A10 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     RtlFileMapFree @ 0x14036EEAC (RtlFileMapFree.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
