/*
 * XREFs of UpdateMonitorDevices @ 0x1C0096760
 * Callers:
 *     DrvGetSuggestedPhysicalMonitorArraySize @ 0x1C002AE30 (DrvGetSuggestedPhysicalMonitorArraySize.c)
 *     ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C002B960 (-DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z @ 0x1C002C468 (-PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z.c)
 *     DrvSetMonitorsDimState @ 0x1C0053EF8 (DrvSetMonitorsDimState.c)
 *     DrvSetMonitorBrightness @ 0x1C0054054 (DrvSetMonitorBrightness.c)
 *     DrvEnumDisplayDevices @ 0x1C0091330 (DrvEnumDisplayDevices.c)
 *     DrvUpdateDisplayDriverParameters @ 0x1C0097074 (DrvUpdateDisplayDriverParameters.c)
 *     DrvCreatePhysicalMonitorObjects @ 0x1C00C6C80 (DrvCreatePhysicalMonitorObjects.c)
 *     DrvPVPGetFirstActiveMonitor @ 0x1C01517D8 (DrvPVPGetFirstActiveMonitor.c)
 *     GetMonitorPhysicalDimensions @ 0x1C01520F0 (GetMonitorPhysicalDimensions.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C008D744 (PALLOCMEM2.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C0096544 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 */

void __fastcall UpdateMonitorDevices(__int64 a1, __int64 a2, PVOID a3)
{
  wchar_t *i; // rbx
  int v4; // esi
  struct _DEVICE_OBJECT *v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // r8
  PVOID v10; // rdx
  __int64 v11; // rcx
  void *v12; // rax
  unsigned int v13; // [rsp+70h] [rbp+20h] BYREF
  PVOID P; // [rsp+78h] [rbp+28h] BYREF

  for ( i = gpGraphicsDeviceList; i; i = (wchar_t *)*((_QWORD *)i + 16) )
  {
    P = 0LL;
    v4 = 1;
    v5 = (struct _DEVICE_OBJECT *)*((_QWORD *)i + 17);
    if ( !v5 )
      goto LABEL_10;
    if ( (int)GreDeviceIoControlImpl(v5, 0x23201Bu, 0LL, 0, &P, 8u, &v13, 1u, 1) < 0 )
      goto LABEL_10;
    a3 = P;
    if ( !P )
      goto LABEL_10;
    LODWORD(v6) = 0;
    if ( (*(_DWORD *)P & 0x20000000) != 0 )
    {
      do
        v6 = (unsigned int)(v6 + 1);
      while ( (*((_DWORD *)P + 5 * v6) & 0x20000000) != 0 );
    }
    if ( *((_DWORD *)i + 54) < (unsigned int)v6 )
    {
      v11 = *((_QWORD *)i + 28);
      if ( v11 )
        Win32FreePool(v11, a2, (__int64)P);
      v12 = PALLOCMEM2((unsigned int)(20 * v6), 0x76646747u, 1);
      *((_QWORD *)i + 28) = v12;
      if ( !v12 )
      {
        *((_DWORD *)i + 54) = 0;
        ExFreePoolWithTag(P, 0);
        return;
      }
      a3 = P;
    }
    *((_DWORD *)i + 54) = v6;
    if ( (_DWORD)v6 )
    {
      v4 = 0;
      v8 = (unsigned int)v6;
      v9 = 0LL;
      do
      {
        *(_DWORD *)(v9 + *((_QWORD *)i + 28)) = 0;
        v10 = P;
        if ( (*(_DWORD *)((_BYTE *)P + v9) & 1) != 0 )
        {
          *(_DWORD *)(v9 + *((_QWORD *)i + 28)) |= 1u;
          v10 = P;
        }
        if ( (*(_DWORD *)((_BYTE *)v10 + v9) & 2) == 0 )
        {
          *(_DWORD *)(v9 + *((_QWORD *)i + 28)) |= 2u;
          v10 = P;
        }
        if ( *(int *)((char *)v10 + v9) >= 0 )
        {
          *(_DWORD *)(v9 + *((_QWORD *)i + 28)) |= 0x80000000;
          v10 = P;
        }
        if ( (*(_DWORD *)((_BYTE *)v10 + v9) & 0x40000000) == 0 )
        {
          *(_DWORD *)(v9 + *((_QWORD *)i + 28)) |= 0x40000000u;
          v10 = P;
        }
        *(_DWORD *)(v9 + *((_QWORD *)i + 28) + 4) = *(_DWORD *)((char *)v10 + v9 + 4);
        *(_QWORD *)(v9 + *((_QWORD *)i + 28) + 8) = *(_QWORD *)((char *)P + v9 + 8);
        *(_BYTE *)(v9 + *((_QWORD *)i + 28) + 16) = *((_BYTE *)P + v9 + 16);
        v9 += 20LL;
        --v8;
      }
      while ( v8 );
      a3 = P;
    }
    ExFreePoolWithTag(a3, 0);
    if ( v4 )
    {
LABEL_10:
      v7 = *((_QWORD *)i + 28);
      if ( v7 )
        Win32FreePool(v7, a2, (__int64)a3);
      *((_DWORD *)i + 54) = 0;
      *((_QWORD *)i + 28) = 0LL;
    }
  }
}
