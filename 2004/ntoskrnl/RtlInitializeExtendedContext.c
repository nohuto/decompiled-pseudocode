/*
 * XREFs of RtlInitializeExtendedContext @ 0x1402E9C90
 * Callers:
 *     KiRaiseException @ 0x14051C9E0 (KiRaiseException.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x14051FCE4 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     PspGetContextThreadInternal @ 0x1406AD5A8 (PspGetContextThreadInternal.c)
 *     PspSetContextThreadInternal @ 0x1406ADEB0 (PspSetContextThreadInternal.c)
 *     PspInitializeThunkContext @ 0x1406AE068 (PspInitializeThunkContext.c)
 *     PspWow64SetContextThread @ 0x1406E572C (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x1406E5AD8 (PspWow64GetContextThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x14090B458 (PspDisassociateUmsThreadFromPrimary.c)
 *     PspSetContextState @ 0x14090BDC4 (PspSetContextState.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x1402EA4D0 (RtlpValidateContextFlags.c)
 *     RtlInitializeExtendedContext2 @ 0x1402EA760 (RtlInitializeExtendedContext2.c)
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
