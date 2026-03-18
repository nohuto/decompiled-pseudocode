/*
 * XREFs of wcscmp_0 @ 0x1C00D2893
 * Callers:
 *     RIMGetProductString @ 0x1C015E8FC (RIMGetProductString.c)
 *     RIMVirtGetProductString @ 0x1C0160D60 (RIMVirtGetProductString.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcscmp_0(const wchar_t *Str1, const wchar_t *Str2)
{
  return wcscmp(Str1, Str2);
}
