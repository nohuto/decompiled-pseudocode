/*
 * XREFs of wcstol @ 0x18008DA44
 * Callers:
 *     ?LoadFont@MultitaskingViewUtils@@YA_NAEAUtagLOGFONTW@@IIII@Z @ 0x180395B18 (-LoadFont@MultitaskingViewUtils@@YA_NAEAUtagLOGFONTW@@IIII@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcstol(const wchar_t *String, wchar_t **EndPtr, int Radix)
{
  return __imp_wcstol(String, EndPtr, Radix);
}
