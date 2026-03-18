/*
 * XREFs of ?DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z @ 0x1C002B6C4
 * Callers:
 *     DrvEnumDisplaySettings @ 0x1C002B060 (DrvEnumDisplaySettings.c)
 * Callees:
 *     ?Fill@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C002B820 (-Fill@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     ?Free@QDC_AUTO_BUFFERS@@QEAAXXZ @ 0x1C002B934 (-Free@QDC_AUTO_BUFFERS@@QEAAXXZ.c)
 *     ?DrvGetDisplayDriverDpiSetting@@YAXPEAU_devicemodeW@@@Z @ 0x1C00ACDEC (-DrvGetDisplayDriverDpiSetting@@YAXPEAU_devicemodeW@@@Z.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 */

__int64 __fastcall DrvGetDevModeForLddmPath(struct tagGRAPHICS_DEVICE *a1, int a2, struct _devicemodeW *a3, bool *a4)
{
  unsigned int v8; // edx
  int v9; // ebx
  unsigned int v10; // ecx
  bool v11; // bp
  _DWORD *v12; // rsi
  _DWORD v14[4]; // [rsp+20h] [rbp-1E8h] BYREF
  _BYTE v15[400]; // [rsp+30h] [rbp-1D8h] BYREF
  unsigned int v16; // [rsp+1C0h] [rbp-48h]
  __int64 v17; // [rsp+1C8h] [rbp-40h]

  memset(v15, 0, sizeof(v15));
  v16 = 0;
  v17 = 0LL;
  if ( a2 == -1 )
  {
    v8 = 18;
  }
  else
  {
    if ( a2 != -2 )
    {
      v9 = -1073741811;
      goto LABEL_14;
    }
    v8 = 20;
  }
  v14[0] = 0;
  v9 = QDC_AUTO_BUFFERS::Fill((QDC_AUTO_BUFFERS *)v15, v8, (enum DISPLAYCONFIG_TOPOLOGY_ID *)v14);
  if ( v9 >= 0 )
  {
    v10 = 0;
    v9 = -1073741275;
    if ( v16 )
    {
      v11 = 1;
      while ( 1 )
      {
        v12 = (_DWORD *)(v17 + 200LL * v10);
        if ( *((_DWORD *)a1 + 64) == v12[6] && *((_DWORD *)a1 + 62) == v12[4] && *((_DWORD *)a1 + 63) == v12[5] )
          break;
        if ( ++v10 >= v16 )
          goto LABEL_13;
      }
      v9 = 0;
      if ( !a3
        || (v9 = ((__int64 (__fastcall *)(__int64, struct _devicemodeW *))qword_1C0252B10)(v17 + 200LL * v10, a3),
            v9 >= 0) )
      {
        if ( a4 )
        {
          if ( v12[12] != -2 || v12[13] != -2 )
            v11 = 0;
          *a4 = v11;
        }
      }
    }
  }
LABEL_13:
  if ( v9 == -1073741275 && a2 == -2 && a3 )
  {
    memset(a3, 0, sizeof(struct _devicemodeW));
    *(_DWORD *)&a3->dmSpecVersion = 67175425;
    a3->dmSize = 220;
    a3->dmFields = 410910848;
    DrvGetDisplayDriverDpiSetting(a3);
    v9 = 0;
  }
LABEL_14:
  QDC_AUTO_BUFFERS::Free((QDC_AUTO_BUFFERS *)v15);
  return (unsigned int)v9;
}
