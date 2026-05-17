/*
 * XREFs of _sscanf @ 0x4B2F9980
 * Callers:
 *     <none>
 * Callees:
 *     vscan_fn @ 0x4B2F99A0 (vscan_fn.c)
 */

int sscanf(const char *const Buffer, const char *const Format, ...)
{
  va_list va; // [esp+10h] [ebp+10h] BYREF

  va_start(va, Format);
  return vscan_fn(_input_l, Buffer, Format, 0, va);
}
