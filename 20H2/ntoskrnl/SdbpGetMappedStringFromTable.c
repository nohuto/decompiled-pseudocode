/*
 * XREFs of SdbpGetMappedStringFromTable @ 0x14074F830
 * Callers:
 *     SdbGetStringTagPtr @ 0x14074F7B0 (SdbGetStringTagPtr.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14074F1A4 (AslLogCallPrintf.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x14074F880 (SdbpGetStringTableItemFromStringRef.c)
 *     SdbpGetMappedTagData @ 0x140753034 (SdbpGetMappedTagData.c)
 */

__int64 __fastcall SdbpGetMappedStringFromTable(void *a1)
{
  SdbpGetStringTableItemFromStringRef(a1);
  AslLogCallPrintf(1LL);
  return 0LL;
}
