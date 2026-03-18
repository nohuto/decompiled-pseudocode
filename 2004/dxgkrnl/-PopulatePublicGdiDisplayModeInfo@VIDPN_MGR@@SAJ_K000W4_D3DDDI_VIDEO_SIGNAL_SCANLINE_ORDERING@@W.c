/*
 * XREFs of ?PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@QEAU_devicemodeW@@@Z @ 0x1C01460A0
 * Callers:
 *     DxgkConvertDisplayConfigToDevMode @ 0x1C0145D10 (DxgkConvertDisplayConfigToDevMode.c)
 *     ?PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z @ 0x1C0145F04 (-PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z.c)
 * Callees:
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000A564 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ConvertDMMScalingToGdiScaling @ 0x1C0146188 (ConvertDMMScalingToGdiScaling.c)
 */

__int64 __fastcall VIDPN_MGR::PopulatePublicGdiDisplayModeInfo(
        __int64 a1,
        __int64 a2,
        DWORD a3,
        DWORD a4,
        enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING a5,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a6,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING a7,
        struct _devicemodeW *const a8)
{
  DWORD v10; // edi
  DWORD v11; // ebp
  __int64 v12; // rdx
  int v13; // r10d
  __int64 v14; // rcx
  DWORD v15; // eax
  int v16; // r10d
  DWORD v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v21; // rax
  int v22; // r10d
  int v23; // r10d
  int v24; // r10d
  __int64 v25; // rax
  __int64 v26; // rax

  v10 = a2;
  v11 = a1;
  if ( !a8 )
  {
    v21 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v21);
  }
  a8->dmBitsPerPel = v11;
  *(_QWORD *)a8->dmDeviceName = 0x4400440043LL;
  *(_DWORD *)&a8->dmSpecVersion = 67175425;
  *(_DWORD *)&a8->dmSize = 1573084;
  v13 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(a6);
  v14 = (unsigned int)(v13 - 1);
  if ( (v14 & 0xFFFFFFFD) != 0 )
  {
    v15 = a3;
  }
  else
  {
    v15 = v10;
    v10 = a3;
  }
  a8->dmPelsHeight = v10;
  a8->dmPelsWidth = v15;
  v16 = v13 - 1;
  if ( !v16 )
    goto LABEL_6;
  v22 = v16 - 1;
  if ( v22 )
  {
    v23 = v22 - 1;
    if ( v23 )
    {
      v24 = v23 - 1;
      if ( v24 )
      {
        if ( v24 != 251 )
        {
          v25 = WdLogNewEntry5_WdError(v14, v12);
          *(_QWORD *)(v25 + 24) = a6;
          WdLogEvent5_WdError(v25);
        }
LABEL_6:
        v17 = 0;
        goto LABEL_7;
      }
      v17 = 3;
    }
    else
    {
      v17 = 2;
    }
  }
  else
  {
    v17 = 1;
  }
LABEL_7:
  a8->dmDisplayOrientation = v17;
  ConvertDMMScalingToGdiScaling((unsigned int)a7, &a8->dmDisplayFixedOutput);
  a8->dmDisplayFrequency = a4;
  if ( a5 == D3DDDI_VSSLO_PROGRESSIVE )
  {
    a8->dmDisplayFlags = 0;
LABEL_9:
    a8->dmFields = 544997504;
    return 0LL;
  }
  if ( (unsigned int)(a5 - 2) <= 1 )
  {
    a8->dmDisplayFlags |= 2u;
    goto LABEL_9;
  }
  v26 = WdLogNewEntry5_WdError(v19, v18);
  *(_QWORD *)(v26 + 24) = a5;
  WdLogEvent5_WdError(v26);
  return 3223192402LL;
}
