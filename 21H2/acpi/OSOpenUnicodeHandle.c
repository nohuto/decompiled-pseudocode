/*
 * XREFs of OSOpenUnicodeHandle @ 0x1C008EC0C
 * Callers:
 *     OSOpenHandle @ 0x1C008EB74 (OSOpenHandle.c)
 *     ACPIThermalGetOverrideHandle @ 0x1C0096764 (ACPIThermalGetOverrideHandle.c)
 *     OSOpenLargestSubkey @ 0x1C00B2394 (OSOpenLargestSubkey.c)
 *     OSReadAcpiConfigurationData @ 0x1C00BC964 (OSReadAcpiConfigurationData.c)
 *     IrqPolicyConfigure @ 0x1C00BDD74 (IrqPolicyConfigure.c)
 *     IrqPolicyGetDistributionDisposition @ 0x1C00BDE8C (IrqPolicyGetDistributionDisposition.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001C0C (WPP_RECORDER_SF_D.c)
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
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0xBu,
      0xDu,
      (__int64)&WPP_0ff02685c5363f18e09d8afa1fc83b4b_Traceguids,
      v3);
  return (unsigned int)v3;
}
