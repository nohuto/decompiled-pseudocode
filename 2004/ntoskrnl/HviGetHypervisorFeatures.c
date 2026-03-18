/*
 * XREFs of HviGetHypervisorFeatures @ 0x1403A5FA0
 * Callers:
 *     KiDetectHardwareSpecControlFeatures @ 0x1403A5D64 (KiDetectHardwareSpecControlFeatures.c)
 *     HvlpTryConfigureInterface @ 0x1403A63E0 (HvlpTryConfigureInterface.c)
 *     HvlSvmGetSystemCapabilities @ 0x1404F1C50 (HvlSvmGetSystemCapabilities.c)
 *     HvlpDetermineEnlightenments @ 0x1404F4FB4 (HvlpDetermineEnlightenments.c)
 *     PopIsRunningInVm @ 0x140563850 (PopIsRunningInVm.c)
 *     HvipApertureDetectParameters @ 0x14058F298 (HvipApertureDetectParameters.c)
 *     HviGetIptFeatures @ 0x1405B9B28 (HviGetIptFeatures.c)
 *     HvlQueryDetailInfo @ 0x14088B238 (HvlQueryDetailInfo.c)
 *     KiInitializeKernel @ 0x1409999E0 (KiInitializeKernel.c)
 *     HalpLbrInitialize @ 0x14099B2E4 (HalpLbrInitialize.c)
 *     EtwpTraceSystemInitialization @ 0x140A61E04 (EtwpTraceSystemInitialization.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x1403A5FE0 (HviIsHypervisorMicrosoftCompatible.c)
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
