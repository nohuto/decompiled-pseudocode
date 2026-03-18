/*
 * XREFs of wcsstr_0 @ 0x1C002B1F3
 * Callers:
 *     DpiGetDriverStorePath @ 0x1C0387230 (DpiGetDriverStorePath.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
wchar_t *__cdecl wcsstr_0(const wchar_t *Str, const wchar_t *SubStr)
{
  return wcsstr(Str, SubStr);
}
