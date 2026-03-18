/*
 * XREFs of RtlInitializeExtendedContext @ 0x1402E65B0
 * Callers:
 *     KiRaiseException @ 0x1405203B0 (KiRaiseException.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x1405236B4 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     PspWow64GetContextThread @ 0x140691C20 (PspWow64GetContextThread.c)
 *     PspInitializeThunkContext @ 0x1406934F4 (PspInitializeThunkContext.c)
 *     PspSetContextThreadInternal @ 0x140693770 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140693928 (PspGetContextThreadInternal.c)
 *     PspWow64SetContextThread @ 0x1406C79EC (PspWow64SetContextThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x140911094 (PspDisassociateUmsThreadFromPrimary.c)
 *     PspSetContextState @ 0x1409119F4 (PspSetContextState.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x1402E6DF0 (RtlpValidateContextFlags.c)
 *     RtlInitializeExtendedContext2 @ 0x1402E7080 (RtlInitializeExtendedContext2.c)
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
