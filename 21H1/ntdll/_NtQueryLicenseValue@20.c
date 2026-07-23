/*
 * XREFs of _NtQueryLicenseValue@20 @ 0x4B2F3EB0
 * Callers:
 *     _RtlGetVersion@4 @ 0x4B2AFEF0 (_RtlGetVersion@4.c)
 *     _SwitchedRtlGetVersion@4 @ 0x4B2B0445 (_SwitchedRtlGetVersion@4.c)
 *     _RtlpGetWindowsPolicy@16 @ 0x4B2D8BA1 (_RtlpGetWindowsPolicy@16.c)
 *     _RtlpGetDeviceFamilyInfoEnum@12 @ 0x4B2EB980 (_RtlpGetDeviceFamilyInfoEnum@12.c)
 *     _RtlGetProductInfo@20 @ 0x4B2ED220 (_RtlGetProductInfo@20.c)
 *     _RtlpGetPolicyValueForSystemCapability@8 @ 0x4B2EF60F (_RtlpGetPolicyValueForSystemCapability@8.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtQueryLicenseValue(
        PUNICODE_STRING ValueName,
        PULONG Type,
        PVOID Data,
        ULONG DataSize,
        PULONG ResultDataSize)
{
  return Wow64SystemServiceCall();
}
