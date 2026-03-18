/*
 * XREFs of AslFree @ 0x14074DA50
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x14074D860 (SdbpCheckMatchingFiles.c)
 *     AslpFileMakeStringVersionAttributes @ 0x1407ADDA0 (AslpFileMakeStringVersionAttributes.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x1409677E0 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall AslFree(__int64 a1, void *a2)
{
  if ( a2 )
    ExFreePoolWithTag(a2, 0x74705041u);
}
