/*
 * XREFs of SddlpFree @ 0x140929200
 * Callers:
 *     SeConvertStringSidToSid @ 0x1403BFB30 (SeConvertStringSidToSid.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall SddlpFree(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
