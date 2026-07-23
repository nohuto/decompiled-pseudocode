/*
 * XREFs of ZwQueryLicenseValue @ 0x1403F4D90
 * Callers:
 *     RtlGetProductInfo @ 0x140320690 (RtlGetProductInfo.c)
 *     SepDesktopAppxSubProcessToken @ 0x140339778 (SepDesktopAppxSubProcessToken.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x14039EE54 (HalpQueryMaximumRegisteredProcessorCount.c)
 *     ExGetExpirationDate @ 0x140791484 (ExGetExpirationDate.c)
 *     RtlpGetWindowsPolicy @ 0x140795160 (RtlpGetWindowsPolicy.c)
 *     MmCreateMirror @ 0x1408C29C0 (MmCreateMirror.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x14090FCC4 (RtlpGetPolicyValueForSystemCapability.c)
 *     SepIsLockedDown @ 0x14091791C (SepIsLockedDown.c)
 *     ExpGenuinePolicyPostProcess @ 0x140949090 (ExpGenuinePolicyPostProcess.c)
 *     Phase1InitializationDiscard @ 0x140A382A8 (Phase1InitializationDiscard.c)
 *     WheapLoadPolicy @ 0x140A5B1F8 (WheapLoadPolicy.c)
 *     PpmInitIdlePolicy @ 0x140A68A74 (PpmInitIdlePolicy.c)
 *     InitializeDynamicPartitioningPolicy @ 0x140A6F3C4 (InitializeDynamicPartitioningPolicy.c)
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
