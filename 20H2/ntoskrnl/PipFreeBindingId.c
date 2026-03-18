/*
 * XREFs of PipFreeBindingId @ 0x1407C9504
 * Callers:
 *     PipDeleteBindingIds @ 0x1407C94C0 (PipDeleteBindingIds.c)
 *     PipDeleteBindingId @ 0x1408A0604 (PipDeleteBindingId.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x140632500 (RtlFreeAnsiString.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall PipFreeBindingId(UNICODE_STRING *P)
{
  RtlFreeAnsiString(P + 1);
  ExFreePoolWithTag(P, 0x53706E50u);
}
