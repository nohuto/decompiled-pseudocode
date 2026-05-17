/*
 * XREFs of _snprintf_s @ 0x180096AE0
 * Callers:
 *     RtlIncrementCorrelationVector @ 0x1800838D0 (RtlIncrementCorrelationVector.c)
 * Callees:
 *     _vsnprintf_s @ 0x180096B10 (_vsnprintf_s.c)
 */

int snprintf_s(char *const Buffer, const size_t BufferCount, const size_t MaxCount, const char *const Format, ...)
{
  va_list va; // [rsp+70h] [rbp+28h] BYREF

  va_start(va, Format);
  return vsnprintf_s(Buffer, BufferCount, MaxCount, Format, va);
}
