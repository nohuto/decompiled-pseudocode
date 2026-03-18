/*
 * XREFs of wctomb_s @ 0x1403D3CC4
 * Callers:
 *     _output_l @ 0x1403D4A5C (_output_l.c)
 * Callees:
 *     _wctomb_s_l @ 0x1403D3BC4 (_wctomb_s_l.c)
 */

errno_t __cdecl wctomb_s(int *SizeConverted, char *MbCh, rsize_t SizeInBytes, wchar_t WCh)
{
  return wctomb_s_l(SizeConverted, MbCh, SizeInBytes, WCh, 0LL);
}
