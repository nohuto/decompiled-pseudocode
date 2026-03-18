/*
 * XREFs of IdnaMemAlloc @ 0x140587E20
 * Callers:
 *     RtlpIdnToUnicodeWorker @ 0x140587E94 (RtlpIdnToUnicodeWorker.c)
 *     RtlIdnToUnicode @ 0x140913300 (RtlIdnToUnicode.c)
 *     RtlpNameprepAsciiWorker @ 0x140913390 (RtlpNameprepAsciiWorker.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
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
