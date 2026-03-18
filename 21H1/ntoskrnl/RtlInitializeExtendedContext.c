/*
 * XREFs of RtlInitializeExtendedContext @ 0x14032EDD0
 * Callers:
 *     KiRaiseException @ 0x14051C390 (KiRaiseException.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x14051F694 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     PspGetContextThreadInternal @ 0x1406F2448 (PspGetContextThreadInternal.c)
 *     PspSetContextThreadInternal @ 0x1406F2D50 (PspSetContextThreadInternal.c)
 *     PspInitializeThunkContext @ 0x1406F2F08 (PspInitializeThunkContext.c)
 *     PspWow64SetContextThread @ 0x1406FC94C (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x1406FCCF8 (PspWow64GetContextThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x14090A1A8 (PspDisassociateUmsThreadFromPrimary.c)
 *     PspSetContextState @ 0x14090AB14 (PspSetContextState.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x14032F610 (RtlpValidateContextFlags.c)
 *     RtlInitializeExtendedContext2 @ 0x14032F8A0 (RtlInitializeExtendedContext2.c)
 */

__int64 __fastcall RtlInitializeExtendedContext(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 result; // rax
  int v8; // [rsp+48h] [rbp+20h] BYREF

  v5 = 0LL;
  v8 = 0;
  result = RtlpValidateContextFlags(a2, &v8);
  if ( (int)result >= 0 )
  {
    if ( (v8 & 2) != 0 )
      v5 = MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708];
    return RtlInitializeExtendedContext2(a1, a2, a3, v5);
  }
  return result;
}
