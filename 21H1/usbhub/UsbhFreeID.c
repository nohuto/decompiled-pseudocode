/*
 * XREFs of UsbhFreeID @ 0x1C0050D40
 * Callers:
 *     UsbhReset2Complete @ 0x1C0010540 (UsbhReset2Complete.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C00162A8 (UsbhSyncResetDeviceInternal.c)
 *     UsbhFdoReturnDeviceConfigInfo @ 0x1C00309F4 (UsbhFdoReturnDeviceConfigInfo.c)
 *     UsbhSetupDevice @ 0x1C0039198 (UsbhSetupDevice.c)
 *     UsbhSetEnumerationFailed @ 0x1C004E668 (UsbhSetEnumerationFailed.c)
 *     UsbhBuildUnknownIds @ 0x1C0050A44 (UsbhBuildUnknownIds.c)
 *     UsbhGetProductIdString @ 0x1C0051210 (UsbhGetProductIdString.c)
 *     UsbhGetSerialNumber @ 0x1C00513E0 (UsbhGetSerialNumber.c)
 *     UsbhRemoveAndDeletePdo @ 0x1C0058108 (UsbhRemoveAndDeletePdo.c)
 *     UsbhQueryParentHubConfig @ 0x1C005B388 (UsbhQueryParentHubConfig.c)
 *     UsbhUpdateUxdSettings @ 0x1C005B7C4 (UsbhUpdateUxdSettings.c)
 * Callees:
 *     <none>
 */

void __fastcall UsbhFreeID(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 8);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_DWORD *)(a1 + 4) = 0;
  }
}
