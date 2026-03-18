/*
 * XREFs of HalpIsCmciImplemented @ 0x140A5367C
 * Callers:
 *     HalpMcaResumeProcessorConfig @ 0x140A5029C (HalpMcaResumeProcessorConfig.c)
 *     HalpInitializeCmc @ 0x140A5AA64 (HalpInitializeCmc.c)
 *     HalpMcaSetFeatureFlags @ 0x140A5B19C (HalpMcaSetFeatureFlags.c)
 *     HalpCorrectMachineCheckErrSrc @ 0x140A5B7B4 (HalpCorrectMachineCheckErrSrc.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x1403AAE50 (HalpGetCpuVendor.c)
 *     HalpInterruptIsCmciSupported @ 0x1403DEB00 (HalpInterruptIsCmciSupported.c)
 *     HalpInterruptIsDeferredErrorSupported @ 0x14050910C (HalpInterruptIsDeferredErrorSupported.c)
 */

char HalpIsCmciImplemented()
{
  char CpuVendor; // al
  bool IsCmciSupported; // bl
  signed __int32 v3[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( !HalpCmciImplementationChecked )
  {
    CpuVendor = HalpGetCpuVendor();
    if ( CpuVendor == 2 )
    {
      IsCmciSupported = HalpInterruptIsCmciSupported();
    }
    else if ( CpuVendor == 1 )
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
    _InterlockedOr(v3, 0);
    HalpCmciImplementationChecked = 1;
  }
  return HalpCmciImplementationPresent;
}
