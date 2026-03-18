/*
 * XREFs of _snprintf_s @ 0x1403D3AF0
 * Callers:
 *     RtlIncrementCorrelationVector @ 0x140912E10 (RtlIncrementCorrelationVector.c)
 * Callees:
 *     _vsnprintf_s @ 0x1403D3B20 (_vsnprintf_s.c)
 */

int snprintf_s(char *DstBuf, size_t SizeInBytes, size_t MaxCount, const char *Format, ...)
{
  va_list va; // [rsp+70h] [rbp+28h] BYREF

  va_start(va, Format);
  return vsnprintf_s(DstBuf, SizeInBytes, MaxCount, Format, va);
}
