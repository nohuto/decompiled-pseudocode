/*
 * XREFs of __snprintf_s @ 0x4B2FF650
 * Callers:
 *     _RtlIncrementCorrelationVector@4 @ 0x4B3622A0 (_RtlIncrementCorrelationVector@4.c)
 * Callees:
 *     __vsnprintf_s @ 0x4B2FF680 (__vsnprintf_s.c)
 */

int _snprintf_s(char *const Buffer, const size_t BufferCount, const size_t MaxCount, const char *const Format, ...)
{
  va_list ArgList; // [esp+18h] [ebp+18h] BYREF

  va_start(ArgList, Format);
  return _vsnprintf_s(Buffer, BufferCount, MaxCount, Format, ArgList);
}
