/*
 * XREFs of PipFreeBindingId @ 0x1407CD7C4
 * Callers:
 *     PipDeleteBindingIds @ 0x1407CD780 (PipDeleteBindingIds.c)
 *     PipDeleteBindingId @ 0x14089DBD4 (PipDeleteBindingId.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x140602CB0 (RtlFreeAnsiString.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall PipFreeBindingId(UNICODE_STRING *P)
{
  RtlFreeAnsiString(P + 1);
  ExFreePoolWithTag(P, 0x53706E50u);
}
