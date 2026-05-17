/*
 * XREFs of RtlpSanitizeContextFlags @ 0x180051D60
 * Callers:
 *     RtlpSanitizeContext @ 0x180051CA8 (RtlpSanitizeContext.c)
 *     RtlCaptureContext2 @ 0x1800A1300 (RtlCaptureContext2.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x18005212C (RtlpValidateContextFlags.c)
 */

__int64 __fastcall RtlpSanitizeContextFlags(unsigned int *a1)
{
  __int64 result; // rax
  unsigned int *v2; // r10
  char v3; // r11

  result = RtlpValidateContextFlags(*a1, 0LL);
  if ( (int)result >= 0 && (*v2 & 0x100000) == 0 )
    result = 3221225485LL;
  if ( (_DWORD)result == -1073741811 )
  {
    if ( v3 )
    {
      *v2 = *v2 & 0xD800001F | 0x100000;
      return 0LL;
    }
  }
  return result;
}
