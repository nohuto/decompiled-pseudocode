/*
 * XREFs of memcpy @ 0x180045C83
 * Callers:
 *     sub_1800018E0 @ 0x1800018E0 (sub_1800018E0.c)
 *     sub_180041864 @ 0x180041864 (sub_180041864.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy(void *a1, const void *Src, size_t Size)
{
  return __imp_memcpy(a1, Src, Size);
}
