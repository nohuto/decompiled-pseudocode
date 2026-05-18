/*
 * XREFs of strchr @ 0x1801239A0
 * Callers:
 *     sub_18011A440 @ 0x18011A440 (sub_18011A440.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
char *__cdecl strchr(const char *Str, int Val)
{
  return __imp_strchr(Str, Val);
}
