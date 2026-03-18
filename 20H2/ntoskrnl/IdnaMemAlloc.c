/*
 * XREFs of IdnaMemAlloc @ 0x14058B780
 * Callers:
 *     RtlpIdnToUnicodeWorker @ 0x14058B7F4 (RtlpIdnToUnicodeWorker.c)
 *     RtlIdnToUnicode @ 0x140918E40 (RtlIdnToUnicode.c)
 *     RtlpNameprepAsciiWorker @ 0x140918ED0 (RtlpNameprepAsciiWorker.c)
 * Callees:
 *     memset @ 0x140411300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
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
