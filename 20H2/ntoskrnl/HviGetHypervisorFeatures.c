/*
 * XREFs of HviGetHypervisorFeatures @ 0x1403A8520
 * Callers:
 *     KiDetectHardwareSpecControlFeatures @ 0x1403A8164 (KiDetectHardwareSpecControlFeatures.c)
 *     HvlpTryConfigureInterface @ 0x1403A881C (HvlpTryConfigureInterface.c)
 *     KiIsHyperVCr3RspErrataPresent @ 0x1403F1EB0 (KiIsHyperVCr3RspErrataPresent.c)
 *     HvlSvmGetSystemCapabilities @ 0x1404F54C0 (HvlSvmGetSystemCapabilities.c)
 *     HvlpDetermineEnlightenments @ 0x1404F8824 (HvlpDetermineEnlightenments.c)
 *     PopIsRunningInVm @ 0x140567230 (PopIsRunningInVm.c)
 *     HvipApertureDetectParameters @ 0x140592D3C (HvipApertureDetectParameters.c)
 *     HviGetIptFeatures @ 0x1405BD688 (HviGetIptFeatures.c)
 *     HvlQueryDetailInfo @ 0x140890D88 (HvlQueryDetailInfo.c)
 *     KiInitializeKernel @ 0x14099FB00 (KiInitializeKernel.c)
 *     HalpLbrInitialize @ 0x1409A13E4 (HalpLbrInitialize.c)
 *     EtwpTraceSystemInitialization @ 0x140A691C4 (EtwpTraceSystemInitialization.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x1403A8560 (HviIsHypervisorMicrosoftCompatible.c)
 */

__int64 __fastcall HviGetHypervisorFeatures(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = HviIsHypervisorMicrosoftCompatible(a1, a2, a3, a4);
  if ( (_BYTE)result )
  {
    _RAX = 1073741827LL;
    __asm { cpuid }
    *a1 = result;
    a1[1] = _RBX;
    a1[2] = _RCX;
    a1[3] = _RDX;
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    *((_QWORD *)a1 + 1) = 0LL;
  }
  return result;
}
