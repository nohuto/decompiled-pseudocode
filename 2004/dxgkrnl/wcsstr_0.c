/*
 * XREFs of wcsstr_0 @ 0x1C00243D3
 * Callers:
 *     DpiGetDriverStorePath @ 0x1C02C6358 (DpiGetDriverStorePath.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
wchar_t *__cdecl wcsstr_0(const wchar_t *Str, const wchar_t *SubStr)
{
  return wcsstr(Str, SubStr);
}
