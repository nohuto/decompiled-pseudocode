/*
 * XREFs of _RtlpCopyMappedMemoryEx@24 @ 0x4B35C5E9
 * Callers:
 *     _RtlCopyMappedMemory@12 @ 0x4B35C5D0 (_RtlCopyMappedMemory@12.c)
 * Callees:
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlpCopyMappedMemoryEx_ExceptionFilter@32 @ 0x4B35C648 (_RtlpCopyMappedMemoryEx_ExceptionFilter@32.c)
 */

int __fastcall RtlpCopyMappedMemoryEx(int a1, void *a2, void *Src, size_t Size, int a5)
{
  size_t v6; // [esp-4h] [ebp-34h]

  LODWORD(v6) = Size;
  memcpy(a2, Src, v6);
  return 0;
}
