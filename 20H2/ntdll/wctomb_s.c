/*
 * XREFs of wctomb_s @ 0x180096188
 * Callers:
 *     _output_l @ 0x1800928B0 (_output_l.c)
 * Callees:
 *     _wctomb_s_l @ 0x1800960D0 (_wctomb_s_l.c)
 */

errno_t __cdecl wctomb_s(int *SizeConverted, char *MbCh, rsize_t SizeInBytes, wchar_t WCh)
{
  return wctomb_s_l(SizeConverted, MbCh, SizeInBytes, WCh, 0LL);
}
