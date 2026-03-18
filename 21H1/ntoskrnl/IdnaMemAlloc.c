/*
 * XREFs of IdnaMemAlloc @ 0x1405876F0
 * Callers:
 *     RtlpIdnToUnicodeWorker @ 0x140587764 (RtlpIdnToUnicodeWorker.c)
 *     RtlIdnToUnicode @ 0x140911F80 (RtlIdnToUnicode.c)
 *     RtlpNameprepAsciiWorker @ 0x140912010 (RtlpNameprepAsciiWorker.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
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
