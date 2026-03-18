/*
 * XREFs of ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C0094060
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x1C0093390 (DrvUpdateGraphicsDeviceList.c)
 * Callees:
 *     ?DrvAddAdapterLuid@@YAJU_LUID@@@Z @ 0x1C000E2F4 (-DrvAddAdapterLuid@@YAJU_LUID@@@Z.c)
 *     DrvCleanupOneGraphicsDevice @ 0x1C000E3E0 (DrvCleanupOneGraphicsDevice.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C008CFC0 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     PALLOCMEM2 @ 0x1C008D744 (PALLOCMEM2.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C00978D8 (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 */

__int64 __fastcall DrvSetDisconnectedGraphicsDevice(int a1)
{
  unsigned int v2; // r15d
  char *v4; // rbx
  WCHAR v5; // ax
  const WCHAR *RegistryHandleFromDeviceMap; // rax
  WCHAR *v7; // rsi
  wchar_t *v8; // rax
  HANDLE v9; // rax
  NTSTATUS v10; // [rsp+30h] [rbp-40h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-38h] BYREF
  WCHAR ValueName[16]; // [rsp+48h] [rbp-28h] BYREF

  v2 = 0;
  v10 = 0;
  wcscpy(ValueName, L"\\Device\\Disc");
  if ( a1 )
  {
    if ( gpLocalDiscGraphicsDevice )
      return 1LL;
  }
  else if ( gpRemoteDiscGraphicsDevice )
  {
    return 1LL;
  }
  v4 = (char *)PALLOCMEM2(0x138uLL, 0x76646747u, 1);
  if ( !v4 )
    return v2;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\Machine\\System\\CurrentControlSet\\Services\\TSDDD\\Device0");
  RtlWriteRegistryValue(4u, L"VIDEO", ValueName, 1u, DestinationString.Buffer, DestinationString.Length + 2);
  *(_OWORD *)v4 = *(_OWORD *)ValueName;
  *((_QWORD *)v4 + 2) = *(_QWORD *)&ValueName[8];
  v5 = ValueName[12];
  *((_DWORD *)v4 + 40) |= 0x2000000u;
  *((_WORD *)v4 + 12) = v5;
  *((_WORD *)v4 + 110) = -1;
  *((_DWORD *)v4 + 54) = 0;
  *((_QWORD *)v4 + 28) = 0LL;
  RegistryHandleFromDeviceMap = (const WCHAR *)DrvGetRegistryHandleFromDeviceMap(
                                                 (unsigned __int16 *)v4,
                                                 0,
                                                 0LL,
                                                 0LL,
                                                 0,
                                                 &v10);
  v7 = (WCHAR *)RegistryHandleFromDeviceMap;
  if ( v10 >= 0 )
  {
    if ( RegistryHandleFromDeviceMap )
    {
      DrvGetDeviceConfigurationInformation(v4, RegistryHandleFromDeviceMap, 0);
      ZwClose(v7);
      v2 = 1;
    }
    if ( v10 >= 0 )
    {
      if ( !*((_QWORD *)v4 + 26) )
      {
        v8 = (wchar_t *)PALLOCMEM2(0x20uLL, 0x73726447u, 0);
        *((_QWORD *)v4 + 26) = v8;
        if ( v8 )
        {
          v9 = DrvGetRegistryHandleFromDeviceMap((unsigned __int16 *)v4, 0, 0LL, v8, 0x10u, &v10);
          if ( v9 )
            ZwClose(v9);
        }
        else
        {
          v10 = -1073741670;
        }
      }
      if ( v10 >= 0 )
      {
        swprintf_s((wchar_t *)v4 + 32, 0x20uLL, L"WinDisc");
        *((_QWORD *)v4 + 17) = 0LL;
        if ( gpGraphicsDeviceList )
          *((_QWORD *)gpGraphicsDeviceListLast + 16) = v4;
        else
          gpGraphicsDeviceList = (wchar_t *)v4;
        gpGraphicsDeviceListLast = (struct tagGRAPHICS_DEVICE *)v4;
        if ( a1 )
          gpLocalDiscGraphicsDevice = (struct tagGRAPHICS_DEVICE *)v4;
        else
          gpRemoteDiscGraphicsDevice = (struct tagGRAPHICS_DEVICE *)v4;
        if ( (*((_DWORD *)v4 + 40) & 0x800000) != 0 )
          DrvAddAdapterLuid(*(struct _LUID *)(v4 + 248));
        return v2;
      }
    }
  }
  DrvCleanupOneGraphicsDevice((__int64)v4);
  return 0LL;
}
