/*
 * XREFs of RtlpSanitizeContextFlags @ 0x1402E6634
 * Callers:
 *     KiRaiseException @ 0x1405203B0 (KiRaiseException.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x1405236B4 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     PspSetContextThreadInternal @ 0x140693770 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140693928 (PspGetContextThreadInternal.c)
 *     KeCopyContextFromUch @ 0x1408C09C0 (KeCopyContextFromUch.c)
 *     KeCopyContextFromUmsContext @ 0x1408C0C7C (KeCopyContextFromUmsContext.c)
 *     KeCopyContextToUch @ 0x1408C0E30 (KeCopyContextToUch.c)
 *     KeCopyContextToUmsContext @ 0x1408C109C (KeCopyContextToUmsContext.c)
 *     NtCreateThread @ 0x140909860 (NtCreateThread.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x1402E6DF0 (RtlpValidateContextFlags.c)
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
