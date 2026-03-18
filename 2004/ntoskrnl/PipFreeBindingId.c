/*
 * XREFs of PipFreeBindingId @ 0x1407BAC74
 * Callers:
 *     PipDeleteBindingIds @ 0x1407BAC30 (PipDeleteBindingIds.c)
 *     PipDeleteBindingId @ 0x14089AAD4 (PipDeleteBindingId.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x14065EA70 (RtlFreeAnsiString.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall PipFreeBindingId(UNICODE_STRING *P)
{
  RtlFreeAnsiString(P + 1);
  ExFreePoolWithTag(P, 0x53706E50u);
}
