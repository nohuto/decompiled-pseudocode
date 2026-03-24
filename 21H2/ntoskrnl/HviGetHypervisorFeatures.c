/*
 * XREFs of HviGetHypervisorFeatures @ 0x1403AE200
 * Callers:
 *     KiDetectHardwareSpecControlFeatures @ 0x1403ADD1C (KiDetectHardwareSpecControlFeatures.c)
 *     HvlpTryConfigureInterface @ 0x1403AE640 (HvlpTryConfigureInterface.c)
 *     KiIsHyperVCr3RspErrataPresent @ 0x1403F3760 (KiIsHyperVCr3RspErrataPresent.c)
 *     HvlSvmGetSystemCapabilities @ 0x1404F7060 (HvlSvmGetSystemCapabilities.c)
 *     HvlpDetermineEnlightenments @ 0x1404FA3C4 (HvlpDetermineEnlightenments.c)
 *     PopIsRunningInVm @ 0x140568D00 (PopIsRunningInVm.c)
 *     HvipApertureDetectParameters @ 0x140594784 (HvipApertureDetectParameters.c)
 *     HviGetIptFeatures @ 0x1405BF0D8 (HviGetIptFeatures.c)
 *     HvlQueryDetailInfo @ 0x14088E328 (HvlQueryDetailInfo.c)
 *     HalpLbrInitialize @ 0x14099B704 (HalpLbrInitialize.c)
 *     KiInitializeKernel @ 0x14099D7C0 (KiInitializeKernel.c)
 *     EtwpTraceSystemInitialization @ 0x140A428C8 (EtwpTraceSystemInitialization.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x1403AE240 (HviIsHypervisorMicrosoftCompatible.c)
 */

__int64 __fastcall HviGetHypervisorFeatures(_DWORD *a1)
{
  __int64 result; // rax

  result = HviIsHypervisorMicrosoftCompatible();
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
