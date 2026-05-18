/*
 * XREFs of strrchr @ 0x1801239A6
 * Callers:
 *     sub_180119E18 @ 0x180119E18 (sub_180119E18.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
char *__cdecl strrchr(const char *Str, int Ch)
{
  return __imp_strrchr(Str, Ch);
}
