/*
 * XREFs of PipFreeBindingId @ 0x14085CB2C
 * Callers:
 *     PipDeleteBindingIds @ 0x14085CAE8 (PipDeleteBindingIds.c)
 *     PipDeleteBindingId @ 0x1409429D4 (PipDeleteBindingId.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall PipFreeBindingId(UNICODE_STRING *P)
{
  RtlFreeUnicodeString(P + 1);
  ExFreePoolWithTag(P, 0x53706E50u);
}
