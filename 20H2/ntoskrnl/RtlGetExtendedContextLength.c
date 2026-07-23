/*
 * XREFs of RtlGetExtendedContextLength @ 0x1402E6530
 * Callers:
 *     KiRaiseException @ 0x1405203B0 (KiRaiseException.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x1405236B4 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     PspAllocateThread @ 0x14068411C (PspAllocateThread.c)
 *     PspWow64GetContextThread @ 0x140691C20 (PspWow64GetContextThread.c)
 *     PspInitializeThunkContext @ 0x1406934F4 (PspInitializeThunkContext.c)
 *     PspSetContextThreadInternal @ 0x140693770 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140693928 (PspGetContextThreadInternal.c)
 *     PspWow64SetContextThread @ 0x1406C79EC (PspWow64SetContextThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x140911094 (PspDisassociateUmsThreadFromPrimary.c)
 *     PspSetContextState @ 0x1409119F4 (PspSetContextState.c)
 * Callees:
 *     RtlGetExtendedContextLength2 @ 0x1402E6680 (RtlGetExtendedContextLength2.c)
 *     RtlpValidateContextFlags @ 0x1402E6DF0 (RtlpValidateContextFlags.c)
 */

NTSTATUS __cdecl RtlGetExtendedContextLength(ULONG ContextFlags, PULONG ContextLength)
{
  ULONG64 v3; // rbx
  NTSTATUS result; // eax
  int v6; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  v6 = 0;
  result = RtlpValidateContextFlags(ContextFlags, &v6);
  if ( result >= 0 )
  {
    if ( (v6 & 2) != 0 )
      v3 = MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708];
    return RtlGetExtendedContextLength2(ContextFlags, ContextLength, v3);
  }
  return result;
}
