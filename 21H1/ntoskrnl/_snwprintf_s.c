/*
 * XREFs of _snwprintf_s @ 0x1403D2DC0
 * Callers:
 *     RtlQueryAtomInAtomTable @ 0x140638160 (RtlQueryAtomInAtomTable.c)
 * Callees:
 *     _vsnwprintf_s @ 0x1403D2DF0 (_vsnwprintf_s.c)
 */

int snwprintf_s(wchar_t *DstBuf, size_t SizeInWords, size_t MaxCount, const wchar_t *Format, ...)
{
  va_list va; // [rsp+70h] [rbp+28h] BYREF

  va_start(va, Format);
  return vsnwprintf_s(DstBuf, SizeInWords, MaxCount, Format, va);
}
