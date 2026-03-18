/*
 * XREFs of wcscmp_0 @ 0x1C00D1F63
 * Callers:
 *     RIMGetProductString @ 0x1C01671AC (RIMGetProductString.c)
 *     RIMVirtGetProductString @ 0x1C0169610 (RIMVirtGetProductString.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcscmp_0(const wchar_t *Str1, const wchar_t *Str2)
{
  return wcscmp(Str1, Str2);
}
