/*
 * XREFs of sscanf @ 0x1800909D0
 * Callers:
 *     <none>
 * Callees:
 *     vscan_fn @ 0x180090A0C (vscan_fn.c)
 */

int sscanf(const char *const Buffer, const char *const Format, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, Format);
  return vscan_fn((unsigned int)input_l, (_DWORD)Buffer, (_DWORD)Format, 0, (__int64)va);
}
