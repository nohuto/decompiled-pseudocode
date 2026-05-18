/*
 * XREFs of memcpy_0 @ 0x18000DEA3
 * Callers:
 *     memcpy_s @ 0x180001520 (memcpy_s.c)
 *     ?DoStackCapture@@YAXJIPEAX@Z @ 0x18000A7FC (-DoStackCapture@@YAXJIPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy_0(void *a1, const void *Src, size_t Size)
{
  return memcpy(a1, Src, Size);
}
