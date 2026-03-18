/*
 * XREFs of HviGetHypervisorFeatures @ 0x1403A9C70
 * Callers:
 *     KiDetectHardwareSpecControlFeatures @ 0x1403A9A34 (KiDetectHardwareSpecControlFeatures.c)
 *     HvlpTryConfigureInterface @ 0x1403AA0B0 (HvlpTryConfigureInterface.c)
 *     HvlSvmGetSystemCapabilities @ 0x1404F1600 (HvlSvmGetSystemCapabilities.c)
 *     HvlpDetermineEnlightenments @ 0x1404F4964 (HvlpDetermineEnlightenments.c)
 *     PopIsRunningInVm @ 0x140563200 (PopIsRunningInVm.c)
 *     HvipApertureDetectParameters @ 0x14058EBA8 (HvipApertureDetectParameters.c)
 *     HviGetIptFeatures @ 0x1405B9408 (HviGetIptFeatures.c)
 *     HvlQueryDetailInfo @ 0x140889F18 (HvlQueryDetailInfo.c)
 *     HalpLbrInitialize @ 0x140996D74 (HalpLbrInitialize.c)
 *     KiInitializeKernel @ 0x140998980 (KiInitializeKernel.c)
 *     EtwpTraceSystemInitialization @ 0x140A46978 (EtwpTraceSystemInitialization.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x1403A9CB0 (HviIsHypervisorMicrosoftCompatible.c)
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
