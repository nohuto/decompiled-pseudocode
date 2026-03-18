/*
 * XREFs of RtlpGetStackLimits @ 0x1402265A0
 * Callers:
 *     IoGetStackLimits @ 0x140226570 (IoGetStackLimits.c)
 *     RtlpWalkFrameChain @ 0x1402273F0 (RtlpWalkFrameChain.c)
 *     RtlWalkFrameChain @ 0x140228EA0 (RtlWalkFrameChain.c)
 *     RtlUnwindEx @ 0x1402E5AF0 (RtlUnwindEx.c)
 *     RtlEnoughStackSpaceForStackCapture @ 0x1405842B4 (RtlEnoughStackSpaceForStackCapture.c)
 *     PspGetSetContextInternal @ 0x140687060 (PspGetSetContextInternal.c)
 *     MmVerifierTrimMemory @ 0x1409C8C14 (MmVerifierTrimMemory.c)
 *     ViKeWaitSanityChecks @ 0x1409DF61C (ViKeWaitSanityChecks.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x1402265F0 (KeQueryCurrentStackInformationEx.c)
 *     KeGetCurrentStackPointer @ 0x1403FC380 (KeGetCurrentStackPointer.c)
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
