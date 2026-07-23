/*
 * XREFs of IdnaMemAlloc @ 0x14058D3C0
 * Callers:
 *     RtlpIdnToUnicodeWorker @ 0x14058D434 (RtlpIdnToUnicodeWorker.c)
 *     RtlIdnToUnicode @ 0x140916760 (RtlIdnToUnicode.c)
 *     RtlpNameprepAsciiWorker @ 0x1409167F0 (RtlpNameprepAsciiWorker.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall IdnaMemAlloc(size_t Size)
{
  PVOID PoolWithTag; // rax
  PVOID v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, Size, 0x456E6449u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, Size);
  return v3;
}
