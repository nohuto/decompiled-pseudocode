/*
 * XREFs of HalpIsCmciImplemented @ 0x140999C64
 * Callers:
 *     HalpMcaResumeProcessorConfig @ 0x140995A40 (HalpMcaResumeProcessorConfig.c)
 *     HalpInitializeCmc @ 0x1409A11B8 (HalpInitializeCmc.c)
 *     HalpMcaSetFeatureFlags @ 0x1409A1434 (HalpMcaSetFeatureFlags.c)
 *     HalpCorrectMachineCheckErrSrc @ 0x1409A17F4 (HalpCorrectMachineCheckErrSrc.c)
 * Callees:
 *     HalpGetCpuInfo @ 0x1403A0F70 (HalpGetCpuInfo.c)
 *     HalpInterruptIsCmciSupported @ 0x1403CF864 (HalpInterruptIsCmciSupported.c)
 *     HalpInterruptIsDeferredErrorSupported @ 0x1404BC698 (HalpInterruptIsDeferredErrorSupported.c)
 */

char HalpIsCmciImplemented()
{
  char CpuInfo; // al
  unsigned __int8 v2; // cl
  bool IsCmciSupported; // bl
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int8 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  if ( !HalpCmciImplementationChecked )
  {
    CpuInfo = HalpGetCpuInfo(0LL, 0LL, 0LL, &v5);
    v2 = CpuInfo != 0 ? v5 : 0;
    v5 = v2;
    if ( v2 == 2 )
    {
      IsCmciSupported = HalpInterruptIsCmciSupported();
    }
    else if ( v2 == 1 )
    {
      IsCmciSupported = HalpInterruptIsCmciSupported();
      if ( IsCmciSupported )
        HalpDeferredErrorInterruptPresent = HalpInterruptIsDeferredErrorSupported();
    }
    else
    {
      IsCmciSupported = 0;
    }
    HalpCmciImplementationPresent = IsCmciSupported;
    _InterlockedOr(v4, 0);
    HalpCmciImplementationChecked = 1;
  }
  return HalpCmciImplementationPresent;
}
