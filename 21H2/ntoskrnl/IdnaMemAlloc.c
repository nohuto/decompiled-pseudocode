/*
 * XREFs of IdnaMemAlloc @ 0x14058D190
 * Callers:
 *     RtlpIdnToUnicodeWorker @ 0x14058D204 (RtlpIdnToUnicodeWorker.c)
 *     RtlIdnToUnicode @ 0x140916600 (RtlIdnToUnicode.c)
 *     RtlpNameprepAsciiWorker @ 0x140916690 (RtlpNameprepAsciiWorker.c)
 * Callees:
 *     memset @ 0x140414200 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
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
