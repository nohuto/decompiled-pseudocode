/*
 * XREFs of ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00B8CF4
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00B5FC4 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C00963C8 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     UserIsCurrentProcessDwm @ 0x1C009D410 (UserIsCurrentProcessDwm.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     memset @ 0x1C00D3880 (memset.c)
 */

__int64 __fastcall DrvGetDriverAccelerationsLevel(struct tagGRAPHICS_DEVICE *a1)
{
  __int64 v2; // rdx
  unsigned int v3; // edi
  unsigned int v4; // ebx
  int v5; // eax
  HANDLE RegistryHandleFromDeviceMap; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  ULONG Length; // [rsp+30h] [rbp-59h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-51h] BYREF
  _DWORD KeyValueInformation[20]; // [rsp+50h] [rbp-39h] BYREF
  WCHAR SourceString[20]; // [rsp+A0h] [rbp+17h] BYREF

  memset(KeyValueInformation, 0, 0x48uLL);
  v3 = -1;
  v4 = 0;
  Length = 66;
  DestinationString = 0LL;
  wcscpy(SourceString, L"Acceleration.Level");
  if ( a1 != (struct tagGRAPHICS_DEVICE *)-4LL )
  {
    v5 = *((_DWORD *)a1 + 40);
    if ( (v5 & 0x800000) == 0
      && ((v5 & 0x4000000) == 0
       || (unsigned __int16)(gProtocolType - 1) > 0xFFFDu
       || !qword_1C024D240
       || (PVOID)PsGetCurrentProcess(65533LL, v2) == gpepCSRSS
       || UserIsCurrentProcessDwm(v9, v8)) )
    {
      RegistryHandleFromDeviceMap = DrvGetRegistryHandleFromDeviceMap((unsigned __int16 *)a1, 0, 0LL, 0LL, 0, 0LL);
      if ( RegistryHandleFromDeviceMap )
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        if ( ZwQueryValueKey(
               RegistryHandleFromDeviceMap,
               &DestinationString,
               KeyValueFullInformation,
               KeyValueInformation,
               Length,
               &Length) >= 0 )
          v3 = *(_DWORD *)((char *)KeyValueInformation + KeyValueInformation[2]);
        ZwClose(RegistryHandleFromDeviceMap);
        if ( v3 != -1 )
        {
          if ( v3 > 5 )
            return 5;
          return v3;
        }
      }
    }
  }
  return v4;
}
