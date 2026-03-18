/*
 * XREFs of DrvSetPruneFlag @ 0x1C0149330
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C006BCA4 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 * Callees:
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C0056EB4 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     DrvGetDeviceFromName @ 0x1C005EB10 (DrvGetDeviceFromName.c)
 *     ?DrvIsPermanentSettingChangesDisabled@@YAHXZ @ 0x1C006F1A0 (-DrvIsPermanentSettingChangesDisabled@@YAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvSetPruneFlag(const UNICODE_STRING *a1, unsigned __int8 a2, int a3)
{
  int v3; // esi
  wchar_t *DeviceFromName; // rax
  wchar_t *v6; // rdi
  HANDLE RegistryHandleFromDeviceMap; // rbp
  NTSTATUS v9; // ebx
  __int64 v10; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int Data; // [rsp+50h] [rbp+8h] BYREF

  v3 = a2;
  if ( !a1 )
    return 4294967291LL;
  DeviceFromName = DrvGetDeviceFromName(a1);
  v6 = DeviceFromName;
  if ( !DeviceFromName || a3 && !*((_QWORD *)DeviceFromName + 17) && (*((_DWORD *)DeviceFromName + 40) & 0x6000008) == 0 )
    return 4294967291LL;
  if ( DrvIsPermanentSettingChangesDisabled() )
    return 4294967293LL;
  Data = v3;
  RegistryHandleFromDeviceMap = DrvGetRegistryHandleFromDeviceMap(v6, 0, 0LL, 0LL, 0, 0LL);
  if ( !RegistryHandleFromDeviceMap )
    return 0xFFFFFFFFLL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"PruningMode");
  v9 = ZwSetValueKey(RegistryHandleFromDeviceMap, &DestinationString, 0, 4u, &Data, 4u);
  ZwClose(RegistryHandleFromDeviceMap);
  if ( v9 < 0 )
    return 0xFFFFFFFFLL;
  if ( (*((_DWORD *)v6 + 40) & 0x800000) != 0
    && (LOBYTE(v10) = (_BYTE)v3 == 0, (int)((__int64 (__fastcall *)(__int64))qword_1C024A970)(v10) < 0) )
  {
    return 0xFFFFFFFFLL;
  }
  else
  {
    return 0LL;
  }
}
