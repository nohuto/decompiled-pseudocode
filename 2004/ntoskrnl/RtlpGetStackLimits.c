/*
 * XREFs of RtlpGetStackLimits @ 0x14029AE20
 * Callers:
 *     IoGetStackLimits @ 0x14029ADF0 (IoGetStackLimits.c)
 *     RtlUnwindEx @ 0x1402E70E0 (RtlUnwindEx.c)
 *     RtlWalkFrameChain @ 0x1402E7840 (RtlWalkFrameChain.c)
 *     RtlpWalkFrameChain @ 0x1402E7990 (RtlpWalkFrameChain.c)
 *     RtlEnoughStackSpaceForStackCapture @ 0x140580954 (RtlEnoughStackSpaceForStackCapture.c)
 *     PspGetSetContextInternal @ 0x1406AC990 (PspGetSetContextInternal.c)
 *     MmVerifierTrimMemory @ 0x1409C2BF4 (MmVerifierTrimMemory.c)
 *     ViKeWaitSanityChecks @ 0x1409D95FC (ViKeWaitSanityChecks.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x14029AE70 (KeQueryCurrentStackInformationEx.c)
 *     KeGetCurrentStackPointer @ 0x1403F77B0 (KeGetCurrentStackPointer.c)
 */

__int64 __fastcall RtlpGetStackLimits(__int64 a1, __int64 a2)
{
  __int64 CurrentStackPointer; // rax
  __int64 result; // rax
  char v6; // [rsp+40h] [rbp+18h] BYREF

  CurrentStackPointer = KeGetCurrentStackPointer();
  result = KeQueryCurrentStackInformationEx(CurrentStackPointer, &v6, a1, a2);
  if ( !(_BYTE)result )
    __fastfail(4u);
  return result;
}
