/*
 * XREFs of wcscmp @ 0x18007441B
 * Callers:
 *     sub_180038C20 @ 0x180038C20 (sub_180038C20.c)
 *     sub_18005F460 @ 0x18005F460 (sub_18005F460.c)
 *     sub_18013AF20 @ 0x18013AF20 (sub_18013AF20.c)
 *     sub_18013B508 @ 0x18013B508 (sub_18013B508.c)
 *     sub_18013BAA8 @ 0x18013BAA8 (sub_18013BAA8.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcscmp(const wchar_t *String1, const wchar_t *String2)
{
  return __imp_wcscmp(String1, String2);
}
