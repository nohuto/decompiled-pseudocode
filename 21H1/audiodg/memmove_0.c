/*
 * XREFs of memmove_0 @ 0x14001F44B
 * Callers:
 *     memmove_s @ 0x1400377E4 (memmove_s.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memmove_0(void *a1, const void *Src, size_t Size)
{
  return memmove(a1, Src, Size);
}
