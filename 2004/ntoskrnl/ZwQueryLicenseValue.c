/*
 * XREFs of ZwQueryLicenseValue @ 0x1403F6020
 * Callers:
 *     SepDesktopAppxSubProcessToken @ 0x140269A78 (SepDesktopAppxSubProcessToken.c)
 *     RtlGetProductInfo @ 0x14035E280 (RtlGetProductInfo.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x14039F5E4 (HalpQueryMaximumRegisteredProcessorCount.c)
 *     RtlpGetWindowsPolicy @ 0x14078AF30 (RtlpGetWindowsPolicy.c)
 *     ExGetExpirationDate @ 0x140793FD4 (ExGetExpirationDate.c)
 *     MmCreateMirror @ 0x1408C3D10 (MmCreateMirror.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x140911064 (RtlpGetPolicyValueForSystemCapability.c)
 *     SepIsLockedDown @ 0x140918B8C (SepIsLockedDown.c)
 *     ExpGenuinePolicyPostProcess @ 0x14094A430 (ExpGenuinePolicyPostProcess.c)
 *     Phase1InitializationDiscard @ 0x140A37B24 (Phase1InitializationDiscard.c)
 *     WheapLoadPolicy @ 0x140A5A298 (WheapLoadPolicy.c)
 *     PpmInitIdlePolicy @ 0x140A68EF4 (PpmInitIdlePolicy.c)
 *     InitializeDynamicPartitioningPolicy @ 0x140A6FDE8 (InitializeDynamicPartitioningPolicy.c)
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
