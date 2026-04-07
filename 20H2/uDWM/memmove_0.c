/*
 * XREFs of memmove_0 @ 0x1800563C6
 * Callers:
 *     ?ShiftLeft@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x1800895F4 (-ShiftLeft@-$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memmove_0(void *a1, const void *Src, size_t Size)
{
  return memmove(a1, Src, Size);
}
