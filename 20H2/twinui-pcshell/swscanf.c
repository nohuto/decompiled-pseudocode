/*
 * XREFs of swscanf @ 0x18008DB84
 * Callers:
 *     ?TryGetLastInteractionDate@ShellFeedsExperienceHelpers@@YA_NPEAU_SYSTEMTIME@@@Z @ 0x18009D6C8 (-TryGetLastInteractionDate@ShellFeedsExperienceHelpers@@YA_NPEAU_SYSTEMTIME@@@Z.c)
 * Callees:
 *     __local_stdio_scanf_options @ 0x18008C744 (__local_stdio_scanf_options.c)
 *     _o___stdio_common_vswscanf_0 @ 0x18008D94A (_o___stdio_common_vswscanf_0.c)
 */

int swscanf(const wchar_t *const Buffer, const wchar_t *const Format, ...)
{
  unsigned __int64 *v4; // rax
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, Format);
  v4 = _local_stdio_scanf_options();
  return o___stdio_common_vswscanf_0(*v4, Buffer, 0xFFFFFFFFFFFFFFFFuLL, Format, 0LL, va);
}
