/*
 * XREFs of PipFreeBindingId @ 0x1407CD934
 * Callers:
 *     PipDeleteBindingIds @ 0x1407CD8F0 (PipDeleteBindingIds.c)
 *     PipDeleteBindingId @ 0x14089DD34 (PipDeleteBindingId.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall PipFreeBindingId(UNICODE_STRING *P)
{
  RtlFreeAnsiString(P + 1);
  ExFreePoolWithTag(P, 0x53706E50u);
}
