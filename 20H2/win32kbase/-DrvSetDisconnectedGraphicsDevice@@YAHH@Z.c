/*
 * XREFs of ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C0052FA0
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x1C00522D0 (DrvUpdateGraphicsDeviceList.c)
 * Callees:
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C0013030 (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     PALLOCMEM2 @ 0x1C003C5B0 (PALLOCMEM2.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C0056EB4 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     ?DrvAddAdapterLuid@@YAJU_LUID@@@Z @ 0x1C0086924 (-DrvAddAdapterLuid@@YAJU_LUID@@@Z.c)
 *     DrvCleanupOneGraphicsDevice @ 0x1C0086A10 (DrvCleanupOneGraphicsDevice.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 */

__int64 __fastcall DrvSetDisconnectedGraphicsDevice(int a1)
{
  unsigned int v2; // r15d
  char *v4; // rbx
  WCHAR v5; // ax
  WCHAR *RegistryHandleFromDeviceMap; // rax
  WCHAR *v7; // rsi
  void *v8; // rax
  void *v9; // rax
  int v10; // [rsp+30h] [rbp-40h] BYREF
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
  v4 = (char *)PALLOCMEM2(0x138uLL, 1986291527LL, 1);
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
  RegistryHandleFromDeviceMap = (WCHAR *)DrvGetRegistryHandleFromDeviceMap(v4, 0LL, 0LL, 0LL, 0, &v10);
  v7 = RegistryHandleFromDeviceMap;
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
        v8 = PALLOCMEM2(0x20uLL, 1936876615LL, 0);
        *((_QWORD *)v4 + 26) = v8;
        if ( v8 )
        {
          v9 = (void *)DrvGetRegistryHandleFromDeviceMap(v4, 0LL, 0LL, v8, 16, &v10);
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
  DrvCleanupOneGraphicsDevice(v4);
  return 0LL;
}
