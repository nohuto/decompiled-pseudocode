/*
 * XREFs of ZwQueryLicenseValue @ 0x1403FABF0
 * Callers:
 *     SepDesktopAppxSubProcessToken @ 0x1402E3978 (SepDesktopAppxSubProcessToken.c)
 *     RtlGetProductInfo @ 0x14032EBE0 (RtlGetProductInfo.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x1403A1AB4 (HalpQueryMaximumRegisteredProcessorCount.c)
 *     ExGetExpirationDate @ 0x1407A0760 (ExGetExpirationDate.c)
 *     RtlpGetWindowsPolicy @ 0x1407A4240 (RtlpGetWindowsPolicy.c)
 *     MmCreateMirror @ 0x1408C9B50 (MmCreateMirror.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x140916BA4 (RtlpGetPolicyValueForSystemCapability.c)
 *     SepIsLockedDown @ 0x14091E7BC (SepIsLockedDown.c)
 *     ExpGenuinePolicyPostProcess @ 0x1409501F0 (ExpGenuinePolicyPostProcess.c)
 *     Phase1InitializationDiscard @ 0x140A3DB24 (Phase1InitializationDiscard.c)
 *     WheapLoadPolicy @ 0x140A615F8 (WheapLoadPolicy.c)
 *     PpmInitIdlePolicy @ 0x140A6F724 (PpmInitIdlePolicy.c)
 *     InitializeDynamicPartitioningPolicy @ 0x140A76308 (InitializeDynamicPartitioningPolicy.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryLicenseValue(
        PUNICODE_STRING ValueName,
        PULONG Type,
        PVOID Data,
        ULONG DataSize,
        PULONG ResultDataSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ValueName);
}
