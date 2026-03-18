/*
 * XREFs of RtlGetExtendedContextLength @ 0x14032FAF0
 * Callers:
 *     KiRaiseException @ 0x14051C390 (KiRaiseException.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x14051F694 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     PspGetContextThreadInternal @ 0x1406F2448 (PspGetContextThreadInternal.c)
 *     PspSetContextThreadInternal @ 0x1406F2D50 (PspSetContextThreadInternal.c)
 *     PspInitializeThunkContext @ 0x1406F2F08 (PspInitializeThunkContext.c)
 *     PspWow64SetContextThread @ 0x1406FC94C (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x1406FCCF8 (PspWow64GetContextThread.c)
 *     PspAllocateThread @ 0x14070559C (PspAllocateThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x14090A1A8 (PspDisassociateUmsThreadFromPrimary.c)
 *     PspSetContextState @ 0x14090AB14 (PspSetContextState.c)
 * Callees:
 *     RtlGetExtendedContextLength2 @ 0x14032EEA0 (RtlGetExtendedContextLength2.c)
 *     RtlpValidateContextFlags @ 0x14032F610 (RtlpValidateContextFlags.c)
 */

__int64 __fastcall RtlGetExtendedContextLength(unsigned int a1, _DWORD *a2)
{
  __int64 v3; // rbx
  __int64 result; // rax
  int v6; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  v6 = 0;
  result = RtlpValidateContextFlags(a1, &v6);
  if ( (int)result >= 0 )
  {
    if ( (v6 & 2) != 0 )
      v3 = MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708];
    return RtlGetExtendedContextLength2(a1, a2, v3);
  }
  return result;
}
