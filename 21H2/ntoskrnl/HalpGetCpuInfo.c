/*
 * XREFs of HalpGetCpuInfo @ 0x1403AAE80
 * Callers:
 *     HalpGetCpuVendor @ 0x1403AAE50 (HalpGetCpuVendor.c)
 *     HalpTimerConfigureQpcBypass @ 0x1403BAA84 (HalpTimerConfigureQpcBypass.c)
 *     HalpTscCheckAdjustMsrCapability @ 0x1403BAC88 (HalpTscCheckAdjustMsrCapability.c)
 *     HalpProcGetFeatureBits @ 0x1403BAD80 (HalpProcGetFeatureBits.c)
 *     HalpInterruptIsMsiSupported @ 0x1403D8A98 (HalpInterruptIsMsiSupported.c)
 *     HalpInterruptIsDeferredErrorSupported @ 0x14050910C (HalpInterruptIsDeferredErrorSupported.c)
 *     HalpIommuGetPageTableType @ 0x14051B254 (HalpIommuGetPageTableType.c)
 *     HalpSetSystemInformation @ 0x1407F8580 (HalpSetSystemInformation.c)
 *     HalpPiix4Detect @ 0x140A53294 (HalpPiix4Detect.c)
 *     HalpErrataApplyPerProcessor @ 0x140A536C8 (HalpErrataApplyPerProcessor.c)
 *     HalpLbrInitialize @ 0x140A550E0 (HalpLbrInitialize.c)
 *     HalpDpPostReplaceInitialization @ 0x140A62458 (HalpDpPostReplaceInitialization.c)
 * Callees:
 *     <none>
 */

char __fastcall HalpGetCpuInfo(char *a1, unsigned __int8 *a2, unsigned __int8 *a3, unsigned __int8 *a4)
{
  struct _KPRCB *CurrentPrcb; // r10

  CurrentPrcb = KeGetCurrentPrcb();
  if ( !CurrentPrcb->CpuID )
    return 0;
  if ( a1 )
    *a1 = CurrentPrcb->CpuType;
  if ( a2 )
    *a2 = CurrentPrcb->CpuStepping;
  if ( a3 )
    *a3 = CurrentPrcb->CpuModel;
  if ( a4 )
    *a4 = CurrentPrcb->CpuVendor;
  return 1;
}
