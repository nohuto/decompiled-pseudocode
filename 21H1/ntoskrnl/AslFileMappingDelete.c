/*
 * XREFs of AslFileMappingDelete @ 0x14073EE34
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x14073D100 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckKObject @ 0x14073D7A8 (SdbpCheckKObject.c)
 *     SdbCloseDatabaseRead @ 0x14073ECD8 (SdbCloseDatabaseRead.c)
 *     AslFileMappingCreate @ 0x1407414C8 (AslFileMappingCreate.c)
 *     SdbGetDatabaseMatch @ 0x1407696C8 (SdbGetDatabaseMatch.c)
 *     AslFileMappingCreateFromImageView @ 0x14079B47C (AslFileMappingCreateFromImageView.c)
 *     SdbOpenDatabaseEx @ 0x14095F69C (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingTextEntry @ 0x140960284 (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140960670 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     RtlFileMapFree @ 0x14036E27C (RtlFileMapFree.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
