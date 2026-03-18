/*
 * XREFs of RtlpSanitizeContextFlags @ 0x1402E9D14
 * Callers:
 *     KiRaiseException @ 0x14051C9E0 (KiRaiseException.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x14051FCE4 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     PspGetContextThreadInternal @ 0x1406AD5A8 (PspGetContextThreadInternal.c)
 *     PspSetContextThreadInternal @ 0x1406ADEB0 (PspSetContextThreadInternal.c)
 *     KeCopyContextFromUch @ 0x1408BAC60 (KeCopyContextFromUch.c)
 *     KeCopyContextFromUmsContext @ 0x1408BAF1C (KeCopyContextFromUmsContext.c)
 *     KeCopyContextToUch @ 0x1408BB0D0 (KeCopyContextToUch.c)
 *     KeCopyContextToUmsContext @ 0x1408BB33C (KeCopyContextToUmsContext.c)
 *     NtCreateThread @ 0x140903C40 (NtCreateThread.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x1402EA4D0 (RtlpValidateContextFlags.c)
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
