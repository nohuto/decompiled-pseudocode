/*
 * XREFs of SddlpFree @ 0x140922128
 * Callers:
 *     SeConvertStringSidToSid @ 0x1403BC720 (SeConvertStringSidToSid.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall SddlpFree(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
