/*
 * XREFs of memmove @ 0x18004682E
 * Callers:
 *     sub_1800317B0 @ 0x1800317B0 (sub_1800317B0.c)
 *     sub_180031B00 @ 0x180031B00 (sub_180031B00.c)
 *     sub_1800855CC @ 0x1800855CC (sub_1800855CC.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memmove(void *a1, const void *Src, size_t Size)
{
  return __imp_memmove(a1, Src, Size);
}
