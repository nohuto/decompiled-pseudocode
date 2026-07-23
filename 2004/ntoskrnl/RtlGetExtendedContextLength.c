/*
 * XREFs of RtlGetExtendedContextLength @ 0x1402EA9B0
 * Callers:
 *     KiRaiseException @ 0x14051C9E0 (KiRaiseException.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x14051FCE4 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     PspGetContextThreadInternal @ 0x1406AD5A8 (PspGetContextThreadInternal.c)
 *     PspSetContextThreadInternal @ 0x1406ADEB0 (PspSetContextThreadInternal.c)
 *     PspInitializeThunkContext @ 0x1406AE068 (PspInitializeThunkContext.c)
 *     PspAllocateThread @ 0x1406AF6DC (PspAllocateThread.c)
 *     PspWow64SetContextThread @ 0x1406E572C (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x1406E5AD8 (PspWow64GetContextThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x14090B458 (PspDisassociateUmsThreadFromPrimary.c)
 *     PspSetContextState @ 0x14090BDC4 (PspSetContextState.c)
 * Callees:
 *     RtlGetExtendedContextLength2 @ 0x1402E9D60 (RtlGetExtendedContextLength2.c)
 *     RtlpValidateContextFlags @ 0x1402EA4D0 (RtlpValidateContextFlags.c)
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
