/*
 * XREFs of SdbpGetMappedStringFromTable @ 0x14073F0D0
 * Callers:
 *     SdbGetStringTagPtr @ 0x14073F050 (SdbGetStringTagPtr.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14073EA44 (AslLogCallPrintf.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x14073F120 (SdbpGetStringTableItemFromStringRef.c)
 *     SdbpGetMappedTagData @ 0x1407428D4 (SdbpGetMappedTagData.c)
 */

__int64 __fastcall SdbpGetMappedStringFromTable(void *a1)
{
  SdbpGetStringTableItemFromStringRef(a1);
  AslLogCallPrintf(1LL);
  return 0LL;
}
