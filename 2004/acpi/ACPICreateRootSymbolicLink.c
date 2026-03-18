/*
 * XREFs of ACPICreateRootSymbolicLink @ 0x1C009F1B4
 * Callers:
 *     ACPIDispatchAddDevice @ 0x1C0025000 (ACPIDispatchAddDevice.c)
 * Callees:
 *     <none>
 */

void __fastcall ACPICreateRootSymbolicLink(PDEVICE_OBJECT DeviceObject)
{
  WCHAR *PoolWithTag; // rbx
  ULONG v3; // r8d
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp+10h] BYREF

  ResultLength = 0;
  DestinationString = 0LL;
  if ( IoGetDeviceProperty(DeviceObject, DevicePropertyPhysicalDeviceObjectName, 0, 0LL, &ResultLength) == -1073741789 )
  {
    PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(NonPagedPoolNx, ResultLength + 2LL, 0x53706341u);
    if ( PoolWithTag )
    {
      v3 = (unsigned __int16)(ResultLength + 2);
      ResultLength = v3;
      if ( IoGetDeviceProperty(DeviceObject, DevicePropertyPhysicalDeviceObjectName, v3, PoolWithTag, &ResultLength) >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, PoolWithTag);
        IoCreateSymbolicLink(&ACPISymbolicLinkName, &DestinationString);
      }
      ExFreePoolWithTag(PoolWithTag, 0);
    }
  }
}
