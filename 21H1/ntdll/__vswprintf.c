/*
 * XREFs of __vswprintf @ 0x4B2F7740
 * Callers:
 *     <none>
 * Callees:
 *     __vswprintf_l @ 0x4B2F775A (__vswprintf_l.c)
 */

int __cdecl _vswprintf(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, va_list ArgList)
{
  va_list savedregs; // [esp+0h] [ebp+0h]

  return _vswprintf_l(Buffer, BufferCount, 0, (const _locale_t)Format, savedregs);
}
