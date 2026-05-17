/*
 * XREFs of __vscprintf @ 0x4B2F7600
 * Callers:
 *     <none>
 * Callees:
 *     __vscprintf_helper @ 0x4B2F761C (__vscprintf_helper.c)
 */

int __cdecl _vscprintf(const char *const Format, va_list ArgList)
{
  return _vscprintf_helper(_output_l, Format, 0, ArgList);
}
