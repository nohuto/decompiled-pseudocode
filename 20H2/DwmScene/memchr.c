/*
 * XREFs of memchr @ 0x18011E0CA
 * Callers:
 *     ??$_Traits_find@U?$char_traits@D@std@@@std@@YA_KQEBD_K101@Z @ 0x1800FD8E4 (--$_Traits_find@U-$char_traits@D@std@@@std@@YA_KQEBD_K101@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memchr(const void *Buf, int Val, size_t MaxCount)
{
  return __imp_memchr(Buf, Val, MaxCount);
}
