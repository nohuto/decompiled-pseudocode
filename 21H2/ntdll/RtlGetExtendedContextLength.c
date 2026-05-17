/*
 * XREFs of RtlGetExtendedContextLength @ 0x180052CB0
 * Callers:
 *     PsspCaptureThreadInformation @ 0x18011661C (PsspCaptureThreadInformation.c)
 * Callees:
 *     RtlGetExtendedContextLength2 @ 0x180052E60 (RtlGetExtendedContextLength2.c)
 *     RtlpValidateContextFlags @ 0x1800531DC (RtlpValidateContextFlags.c)
 */

__int64 __fastcall RtlGetExtendedContextLength(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // r10d
  __int64 v3; // r11
  __int64 v4; // r8
  char v5; // [rsp+40h] [rbp+18h] BYREF

  result = RtlpValidateContextFlags(a1, &v5);
  v4 = 0LL;
  if ( (int)result >= 0 )
  {
    if ( (v5 & 2) != 0 )
      v4 = MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8];
    return RtlGetExtendedContextLength2(v2, v3, v4);
  }
  return result;
}
