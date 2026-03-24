/*
 * XREFs of AslFree @ 0x14075477C
 * Callers:
 *     SdbpFreeAppAttributes @ 0x1405D1E50 (SdbpFreeAppAttributes.c)
 *     SdbpCheckMatchingFiles @ 0x1407544C0 (SdbpCheckMatchingFiles.c)
 *     AslpFileMakeStringVersionAttributes @ 0x1407B29BC (AslpFileMakeStringVersionAttributes.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140965080 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall AslFree(__int64 a1, void *a2)
{
  if ( a2 )
    ExFreePoolWithTag(a2, 0x74705041u);
}
