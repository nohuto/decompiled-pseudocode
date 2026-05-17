/*
 * XREFs of RtlpCopyMappedMemoryEx @ 0x180085450
 * Callers:
 *     RtlCopyMappedMemory @ 0x180085430 (RtlCopyMappedMemory.c)
 * Callees:
 *     memmove @ 0x1800A3EC0 (memmove.c)
 *     RtlpCopyMappedMemoryEx_ExceptionFilter @ 0x1800F65C4 (RtlpCopyMappedMemoryEx_ExceptionFilter.c)
 */

__int64 __fastcall RtlpCopyMappedMemoryEx(__int64 a1, void *a2, const void *a3, size_t a4)
{
  memmove(a2, a3, a4);
  return 0LL;
}
