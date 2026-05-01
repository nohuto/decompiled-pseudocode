/*
 * XREFs of malloc @ 0x180045013
 * Callers:
 *     sub_180046098 @ 0x180046098 (sub_180046098.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl malloc(size_t Size)
{
  return __imp_malloc(Size);
}
