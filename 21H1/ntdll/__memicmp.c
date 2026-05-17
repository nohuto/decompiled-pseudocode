/*
 * XREFs of __memicmp @ 0x4B2F7070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl _memicmp(const void *Buf1, const void *Buf2, size_t Size)
{
  return __ascii_memicmp(Buf1, Buf2, Size);
}
