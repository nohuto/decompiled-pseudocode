/*
 * XREFs of PipFreeBindingId @ 0x1407B7B04
 * Callers:
 *     PipDeleteBindingIds @ 0x1407B7AC0 (PipDeleteBindingIds.c)
 *     PipDeleteBindingId @ 0x1408997B4 (PipDeleteBindingId.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x1405D8770 (RtlFreeAnsiString.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall PipFreeBindingId(UNICODE_STRING *P)
{
  RtlFreeAnsiString(P + 1);
  ExFreePoolWithTag(P, 0x53706E50u);
}
