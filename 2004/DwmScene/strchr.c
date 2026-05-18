/*
 * XREFs of strchr @ 0x18011E0D0
 * Callers:
 *     sub_180114B70 @ 0x180114B70 (sub_180114B70.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
char *__cdecl strchr(const char *Str, int Val)
{
  return __imp_strchr(Str, Val);
}
