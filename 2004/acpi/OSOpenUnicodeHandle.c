/*
 * XREFs of OSOpenUnicodeHandle @ 0x1C008F940
 * Callers:
 *     OSOpenHandle @ 0x1C008F8A8 (OSOpenHandle.c)
 *     ACPIThermalGetOverrideHandle @ 0x1C0098748 (ACPIThermalGetOverrideHandle.c)
 *     OSOpenLargestSubkey @ 0x1C00B2794 (OSOpenLargestSubkey.c)
 *     IsHypervisorCpcCapable @ 0x1C00B5190 (IsHypervisorCpcCapable.c)
 *     OSReadAcpiConfigurationData @ 0x1C00BC24C (OSReadAcpiConfigurationData.c)
 *     IrqPolicyConfigure @ 0x1C00BC714 (IrqPolicyConfigure.c)
 *     IrqPolicyGetDistributionDisposition @ 0x1C00BC930 (IrqPolicyGetDistributionDisposition.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C000270C (WPP_RECORDER_SF_L.c)
 */

__int64 __fastcall OSOpenUnicodeHandle(struct _UNICODE_STRING *a1, void *a2, void **a3)
{
  NTSTATUS v3; // ebx
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.ObjectName = a1;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  v3 = ZwOpenKey(a3, 0x20019u, &ObjectAttributes);
  if ( v3 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_L(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0xBu,
      0xDu,
      (__int64)&WPP_6006670290f3383f41c779ffdcc42ff2_Traceguids,
      v3);
  return (unsigned int)v3;
}
