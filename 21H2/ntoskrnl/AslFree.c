/*
 * XREFs of AslFree @ 0x14075493C
 * Callers:
 *     SdbpFreeAppAttributes @ 0x1405D1E50 (SdbpFreeAppAttributes.c)
 *     SdbpCheckMatchingFiles @ 0x140754680 (SdbpCheckMatchingFiles.c)
 *     AslpFileMakeStringVersionAttributes @ 0x1407B2B5C (AslpFileMakeStringVersionAttributes.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140965260 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall AslFree(__int64 a1, void *a2)
{
  if ( a2 )
    ExFreePoolWithTag(a2, 0x74705041u);
}
