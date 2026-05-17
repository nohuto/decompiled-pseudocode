/*
 * XREFs of __flsbuf_s @ 0x4B2FB99A
 * Callers:
 *     __snprintf @ 0x4B2F7080 (__snprintf.c)
 *     __snwprintf @ 0x4B2F7110 (__snwprintf.c)
 *     _swprintf @ 0x4B2F7560 (_swprintf.c)
 *     __vsprintf_l @ 0x4B2F766F (__vsprintf_l.c)
 *     __vswprintf_l @ 0x4B2F775A (__vswprintf_l.c)
 *     __vsnprintf_l @ 0x4B2F781D (__vsnprintf_l.c)
 *     __vsnwprintf_l @ 0x4B2F78CD (__vsnwprintf_l.c)
 *     _sprintf @ 0x4B2F9900 (_sprintf.c)
 *     write_char @ 0x4B2FC2B8 (write_char.c)
 *     __soutput_s @ 0x4B3012D8 (__soutput_s.c)
 *     __swoutput_s @ 0x4B301EAA (__swoutput_s.c)
 * Callees:
 *     <none>
 */

int __cdecl _flsbuf_s(int a1, int a2)
{
  *(_DWORD *)(a2 + 12) |= 0x20u;
  return -1;
}
