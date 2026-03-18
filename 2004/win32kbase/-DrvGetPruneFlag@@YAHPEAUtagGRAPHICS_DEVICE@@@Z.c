/*
 * XREFs of ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00343D4
 * Callers:
 *     DrvEnumDisplayDevices @ 0x1C0094400 (DrvEnumDisplayDevices.c)
 *     DrvChangeDisplaySettings @ 0x1C00B1024 (DrvChangeDisplaySettings.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C00B4AA0 (DrvUpdateGraphicsDeviceList.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00B5FC4 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00B7324 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C00963C8 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 */

__int64 __fastcall DrvGetPruneFlag(struct tagGRAPHICS_DEVICE *a1)
{
  unsigned int v1; // ebx
  int v2; // edi
  void *RegistryHandleFromDeviceMap; // rsi
  ULONG Length; // [rsp+38h] [rbp-9h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-1h] BYREF
  _OWORD KeyValueInformation[3]; // [rsp+50h] [rbp+Fh] BYREF
  __int64 v8; // [rsp+80h] [rbp+3Fh]

  Length = 52;
  v1 = 0;
  v8 = 0LL;
  v2 = 1;
  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  RegistryHandleFromDeviceMap = (void *)DrvGetRegistryHandleFromDeviceMap(a1, 0LL, 0LL, 0LL, 0, 0LL);
  if ( RegistryHandleFromDeviceMap )
  {
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"PruningMode");
    if ( ZwQueryValueKey(
           RegistryHandleFromDeviceMap,
           &DestinationString,
           KeyValueFullInformation,
           KeyValueInformation,
           Length,
           &Length) >= 0 )
      v2 = *(_DWORD *)((char *)KeyValueInformation + DWORD2(KeyValueInformation[0]));
    ZwClose(RegistryHandleFromDeviceMap);
  }
  LOBYTE(v1) = v2 != 0;
  return v1;
}
