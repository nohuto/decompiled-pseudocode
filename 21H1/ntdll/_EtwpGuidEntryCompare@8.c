/*
 * XREFs of _EtwpGuidEntryCompare@8 @ 0x4B2F1D5B
 * Callers:
 *     _EtwpFindGuidEntry@4 @ 0x4B2ADC68 (_EtwpFindGuidEntry@4.c)
 *     _EtwpInsertGuidEntry@4 @ 0x4B2F2551 (_EtwpInsertGuidEntry@4.c)
 * Callees:
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 */

int __stdcall EtwpGuidEntryCompare(void *Buf1, int a2)
{
  return memcmp(Buf1, (const void *)(a2 + 12), 0x10u);
}
