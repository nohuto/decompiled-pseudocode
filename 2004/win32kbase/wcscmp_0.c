/*
 * XREFs of wcscmp_0 @ 0x1C00D29C3
 * Callers:
 *     RIMGetProductString @ 0x1C0160E5C (RIMGetProductString.c)
 *     RIMVirtGetProductString @ 0x1C01632C0 (RIMVirtGetProductString.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcscmp_0(const wchar_t *Str1, const wchar_t *Str2)
{
  return wcscmp(Str1, Str2);
}
