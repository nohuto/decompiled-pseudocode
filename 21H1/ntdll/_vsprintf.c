/*
 * XREFs of _vsprintf @ 0x4B2F76F0
 * Callers:
 *     <none>
 * Callees:
 *     __vsprintf_l @ 0x4B2F766F (__vsprintf_l.c)
 */

int __cdecl vsprintf(char *const Buffer, const char *const Format, va_list ArgList)
{
  return _vsprintf_l(Buffer, Format, 0, ArgList);
}
