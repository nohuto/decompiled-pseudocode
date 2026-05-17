/*
 * XREFs of __vscwprintf @ 0x4B2F7710
 * Callers:
 *     <none>
 * Callees:
 *     __vscprintf_helper @ 0x4B2F761C (__vscprintf_helper.c)
 */

int __cdecl _vscwprintf(const wchar_t *const Format, va_list ArgList)
{
  return _vscprintf_helper((int (__cdecl *)(_DWORD *, int, int, int))_woutput_l, (int)Format, 0, (int)ArgList);
}
