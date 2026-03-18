/*
 * XREFs of DrvUpdateDisplayDriverParameters @ 0x1C0097074
 * Callers:
 *     ApplyPathModalityToCdsRegistryStore @ 0x1C0097784 (ApplyPathModalityToCdsRegistryStore.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00AF6FC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C008CFC0 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     PALLOCMEM2 @ 0x1C008D744 (PALLOCMEM2.c)
 *     UpdateMonitorDevices @ 0x1C0096760 (UpdateMonitorDevices.c)
 *     ?DrvWriteDisplayDriverParameters@@YAJPEAUtagGRAPHICS_DEVICE@@KPEBGQEAU_devicemodeW@@HH@Z @ 0x1C00972F4 (-DrvWriteDisplayDriverParameters@@YAJPEAUtagGRAPHICS_DEVICE@@KPEBGQEAU_devicemodeW@@HH@Z.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 */

__int64 __fastcall DrvUpdateDisplayDriverParameters(
        struct tagGRAPHICS_DEVICE *a1,
        struct _devicemodeW *a2,
        __int64 a3,
        int a4)
{
  int v5; // r15d
  int v7; // r13d
  int v9; // r14d
  const unsigned __int16 *RegistryHandleFromDeviceMap; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  void *v13; // r8
  unsigned __int16 *v14; // rbp
  __int64 v16; // rcx
  unsigned int v17; // ebp
  _OWORD *v18; // rax
  __int64 v19; // rbp
  __int64 v20; // rdx
  const unsigned __int16 *v21; // rax
  unsigned int v22; // edx
  unsigned __int16 *v23; // r12
  int v24; // [rsp+28h] [rbp-20h]
  int v25; // [rsp+28h] [rbp-20h]
  int v27; // [rsp+70h] [rbp+28h]

  v5 = -1073741823;
  v27 = -1073741823;
  v7 = a3;
  v9 = 2;
  if ( (unsigned __int16)(gProtocolType - 1) > 0xFFFDu )
  {
    while ( 1 )
    {
      RegistryHandleFromDeviceMap = (const unsigned __int16 *)DrvGetRegistryHandleFromDeviceMap(
                                                                (unsigned __int16 *)a1,
                                                                v9,
                                                                0LL,
                                                                0LL,
                                                                0,
                                                                0LL);
      v14 = (unsigned __int16 *)RegistryHandleFromDeviceMap;
      if ( RegistryHandleFromDeviceMap )
      {
        v27 = DrvWriteDisplayDriverParameters(a1, v11, RegistryHandleFromDeviceMap, a2, v7, v24);
        v5 = v27;
        ZwClose(v14);
      }
      if ( v5 >= 0 )
        break;
      if ( v9 != 2 )
        goto LABEL_6;
      v9 = 0;
    }
    if ( a4 )
    {
      UpdateMonitorDevices(v12, v11, v13);
      v19 = 0LL;
      if ( *((_DWORD *)a1 + 54) )
      {
        do
        {
          v20 = *((_QWORD *)a1 + 28);
          if ( (*(_BYTE *)(v20 + 20 * v19) & 3) == 3 )
          {
            v21 = (const unsigned __int16 *)DrvGetRegistryHandleFromDeviceMap(
                                              (unsigned __int16 *)a1,
                                              v9,
                                              (unsigned int *)(v20 + 4 * (5 * v19 + 1)),
                                              0LL,
                                              0,
                                              0LL);
            v23 = (unsigned __int16 *)v21;
            if ( v21 )
            {
              DrvWriteDisplayDriverParameters(a1, v22, v21, a2, v7, v25);
              ZwClose(v23);
            }
          }
          v19 = (unsigned int)(v19 + 1);
        }
        while ( (unsigned int)v19 < *((_DWORD *)a1 + 54) );
        v5 = v27;
      }
    }
LABEL_6:
    if ( (unsigned __int16)(gProtocolType - 1) > 0xFFFDu )
      return (unsigned int)v5;
    return 0LL;
  }
  *((_DWORD *)a1 + 65) = a3 == 0;
  if ( (*((_DWORD *)a1 + 40) & 8) == 0 || !a2 )
    return 0LL;
  v16 = *((_QWORD *)a1 + 34);
  v17 = a2->dmDriverExtra + a2->dmSize;
  if ( v16 )
  {
    Win32FreePool(v16, (__int64)a2, a3);
    *((_QWORD *)a1 + 34) = 0LL;
  }
  v18 = PALLOCMEM2(v17, 0x73726447u, 0);
  *((_QWORD *)a1 + 34) = v18;
  if ( v18 )
  {
    *v18 = *(_OWORD *)a2->dmDeviceName;
    v18[1] = *(_OWORD *)&a2->dmDeviceName[8];
    v18[2] = *(_OWORD *)&a2->dmDeviceName[16];
    v18[3] = *(_OWORD *)&a2->dmDeviceName[24];
    v18[4] = *(_OWORD *)&a2->dmSpecVersion;
    v18[5] = *(union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)((char *)&a2->76 + 4);
    v18[6] = *(_OWORD *)&a2->dmYResolution;
    v18[7] = *(_OWORD *)&a2->dmFormName[5];
    v18[8] = *(_OWORD *)&a2->dmFormName[13];
    v18[9] = *(_OWORD *)&a2->dmFormName[21];
    v18[10] = *(_OWORD *)&a2->dmFormName[29];
    v18[11] = *(_OWORD *)&a2->dmPelsHeight;
    v18[12] = *(_OWORD *)&a2->dmICMIntent;
    *((_QWORD *)v18 + 26) = *(_QWORD *)&a2->dmReserved2;
    *((_DWORD *)v18 + 54) = a2->dmPanningHeight;
    memmove((void *)(*((_QWORD *)a1 + 34) + 220LL), &a2[1], a2->dmDriverExtra);
    return 0LL;
  }
  return 3221225495LL;
}
