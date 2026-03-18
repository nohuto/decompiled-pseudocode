/*
 * XREFs of AslFree @ 0x14073EE70
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x14073EC80 (SdbpCheckMatchingFiles.c)
 *     AslpFileMakeStringVersionAttributes @ 0x14079EA70 (AslpFileMakeStringVersionAttributes.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140961A10 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall AslFree(__int64 a1, void *a2)
{
  if ( a2 )
    ExFreePoolWithTag(a2, 0x74705041u);
}
