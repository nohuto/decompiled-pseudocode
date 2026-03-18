/*
 * XREFs of SdbpGetMappedStringFromTable @ 0x140740C50
 * Callers:
 *     SdbGetStringTagPtr @ 0x140740BD0 (SdbGetStringTagPtr.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1407405C4 (AslLogCallPrintf.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x140740CA0 (SdbpGetStringTableItemFromStringRef.c)
 *     SdbpGetMappedTagData @ 0x140744454 (SdbpGetMappedTagData.c)
 */

__int64 __fastcall SdbpGetMappedStringFromTable(void *a1)
{
  SdbpGetStringTableItemFromStringRef(a1);
  AslLogCallPrintf(1LL);
  return 0LL;
}
