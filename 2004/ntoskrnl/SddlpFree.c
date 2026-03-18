/*
 * XREFs of SddlpFree @ 0x1409233D8
 * Callers:
 *     SeConvertStringSidToSid @ 0x1403BD6B0 (SeConvertStringSidToSid.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall SddlpFree(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
