/*
 * XREFs of RtlpSanitizeContextFlags @ 0x14032EE54
 * Callers:
 *     KiRaiseException @ 0x14051C390 (KiRaiseException.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x14051F694 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     PspGetContextThreadInternal @ 0x1406F2448 (PspGetContextThreadInternal.c)
 *     PspSetContextThreadInternal @ 0x1406F2D50 (PspSetContextThreadInternal.c)
 *     KeCopyContextFromUch @ 0x1408B9940 (KeCopyContextFromUch.c)
 *     KeCopyContextFromUmsContext @ 0x1408B9BFC (KeCopyContextFromUmsContext.c)
 *     KeCopyContextToUch @ 0x1408B9DB0 (KeCopyContextToUch.c)
 *     KeCopyContextToUmsContext @ 0x1408BA01C (KeCopyContextToUmsContext.c)
 *     NtCreateThread @ 0x140901470 (NtCreateThread.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x14032F610 (RtlpValidateContextFlags.c)
 */

__int64 __fastcall RtlpSanitizeContextFlags(unsigned int *a1, char a2)
{
  __int64 result; // rax

  result = RtlpValidateContextFlags(*a1, 0LL);
  if ( (int)result >= 0 && (*a1 & 0x100000) == 0 )
    result = 3221225485LL;
  if ( (_DWORD)result == -1073741811 )
  {
    if ( a2 )
    {
      *a1 = *a1 & 0xD800001F | 0x100000;
      return 0LL;
    }
  }
  return result;
}
