/*
 * XREFs of EtwpGuidEntryCompare @ 0x180082758
 * Callers:
 *     EtwpInsertGuidEntry @ 0x18008375C (EtwpInsertGuidEntry.c)
 * Callees:
 *     <none>
 */

int __fastcall EtwpGuidEntryCompare(const void *a1, __int64 a2)
{
  return memcmp(a1, (const void *)(a2 + 24), 0x10uLL);
}
