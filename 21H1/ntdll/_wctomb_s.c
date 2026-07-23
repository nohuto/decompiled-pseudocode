/*
 * XREFs of _wctomb_s @ 0x4B2FEDF3
 * Callers:
 *     __output_l @ 0x4B2FB9B0 (__output_l.c)
 * Callees:
 *     __wctomb_s_l @ 0x4B2FED67 (__wctomb_s_l.c)
 */

errno_t __cdecl wctomb_s(int *SizeConverted, char *MbCh, rsize_t SizeInBytes, wchar_t WCh)
{
  __crt_locale_pointers *savedregs; // [esp+0h] [ebp+0h]

  return _wctomb_s_l(SizeConverted, MbCh, SizeInBytes, 0, savedregs);
}
