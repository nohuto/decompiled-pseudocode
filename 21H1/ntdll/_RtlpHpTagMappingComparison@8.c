/*
 * XREFs of _RtlpHpTagMappingComparison@8 @ 0x4B3701EA
 * Callers:
 *     _RtlpHpTagContextAllocateTag@16 @ 0x4B36FD50 (_RtlpHpTagContextAllocateTag@16.c)
 *     _RtlpHpTagContextGetTag@8 @ 0x4B36FF45 (_RtlpHpTagContextGetTag@8.c)
 *     _RtlpHpTagQueryTags@12 @ 0x4B370317 (_RtlpHpTagQueryTags@12.c)
 * Callees:
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 */

BOOL __stdcall RtlpHpTagMappingComparison(int a1, void *Buf1)
{
  size_t _FFFFFFFC; // [esp-4h] [ebp-4h]

  LODWORD(_FFFFFFFC) = 16;
  return memcmp(Buf1, (const void *)(a1 + 8), _FFFFFFFC) == 0;
}
