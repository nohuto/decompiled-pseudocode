/*
 * XREFs of RtlpGetStackLimits @ 0x140208310
 * Callers:
 *     IoGetStackLimits @ 0x1402082E0 (IoGetStackLimits.c)
 *     RtlUnwindEx @ 0x14032C220 (RtlUnwindEx.c)
 *     RtlWalkFrameChain @ 0x14032C980 (RtlWalkFrameChain.c)
 *     RtlpWalkFrameChain @ 0x14032CAD0 (RtlpWalkFrameChain.c)
 *     RtlEnoughStackSpaceForStackCapture @ 0x1405801D4 (RtlEnoughStackSpaceForStackCapture.c)
 *     PspGetSetContextInternal @ 0x1406F1830 (PspGetSetContextInternal.c)
 *     MmVerifierTrimMemory @ 0x1409C2BE4 (MmVerifierTrimMemory.c)
 *     ViKeWaitSanityChecks @ 0x1409D959C (ViKeWaitSanityChecks.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x140208360 (KeQueryCurrentStackInformationEx.c)
 *     KeGetCurrentStackPointer @ 0x1403F6520 (KeGetCurrentStackPointer.c)
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
