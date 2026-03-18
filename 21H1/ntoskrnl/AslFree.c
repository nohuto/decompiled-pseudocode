/*
 * XREFs of AslFree @ 0x14073D2F0
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x14073D100 (SdbpCheckMatchingFiles.c)
 *     AslpFileMakeStringVersionAttributes @ 0x14079A6A0 (AslpFileMakeStringVersionAttributes.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140960670 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall AslFree(__int64 a1, void *a2)
{
  if ( a2 )
    ExFreePoolWithTag(a2, 0x74705041u);
}
