/*
 * XREFs of wcscmp @ 0x180046846
 * Callers:
 *     sub_18003CC78 @ 0x18003CC78 (sub_18003CC78.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcscmp(const wchar_t *String1, const wchar_t *String2)
{
  return __imp_wcscmp(String1, String2);
}
