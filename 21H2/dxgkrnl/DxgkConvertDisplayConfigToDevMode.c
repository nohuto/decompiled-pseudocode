/*
 * XREFs of DxgkConvertDisplayConfigToDevMode @ 0x1C01D3C30
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@QEAU_devicemodeW@@@Z @ 0x1C01BE1E4 (-PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C01BE360 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     DxgkConvertDisplayConfigCScalingToDdiScaling @ 0x1C01D3DA0 (DxgkConvertDisplayConfigCScalingToDdiScaling.c)
 */

__int64 __fastcall DxgkConvertDisplayConfigToDevMode(__int64 a1, struct _devicemodeW *a2, __int64 a3)
{
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v5; // edi
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v6; // r12d
  DWORD v7; // r15d
  __int64 v8; // rcx
  int v9; // esi
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  DWORD v13; // r8d
  DWORD v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  int v18; // ecx
  int v19; // ecx
  int v20; // [rsp+50h] [rbp-20h] BYREF
  __int64 v21; // [rsp+58h] [rbp-18h]
  char v22; // [rsp+60h] [rbp-10h]
  struct _D3DDDI_RATIONAL v23; // [rsp+A0h] [rbp+30h] BYREF

  v20 = -1;
  v21 = 0LL;
  v5 = D3DKMDT_VPPR_IDENTITY;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v22 = 1;
    v20 = 2178;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2178);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v20, 2178);
  if ( (*(_QWORD *)a1 & 0x100001030387LL) == 0x100001030387LL )
  {
    v6 = *(_DWORD *)(a1 + 76);
    if ( *(_QWORD *)(a1 + 196) == 0xFFFFFFFEFFFFFFFEuLL )
    {
      v7 = 64;
    }
    else
    {
      v23 = *(struct _D3DDDI_RATIONAL *)(a1 + 196);
      v7 = DmmMapVSyncFromRationalToInteger(&v23, v6, 0LL);
    }
    v8 = *(unsigned int *)(a1 + 112);
    v23.Numerator = 0;
    v9 = DxgkConvertDisplayConfigCScalingToDdiScaling(v8, a1 + 16, &v23);
    if ( v9 >= 0 )
    {
      v10 = *(_DWORD *)(a1 + 104);
      v11 = v10 - 2;
      v12 = v10 - 1;
      if ( v12 )
      {
        v18 = v12 - 1;
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( v19 )
          {
            if ( v19 == 1 )
              v5 = D3DKMDT_VPPR_ROTATE270;
          }
          else
          {
            v5 = D3DKMDT_VPPR_ROTATE180;
          }
        }
        else
        {
          v5 = D3DKMDT_VPPR_ROTATE90;
        }
      }
      if ( (v11 & 0xFFFFFFFD) != 0 )
      {
        v13 = *(_DWORD *)(a1 + 128);
        v14 = *(_DWORD *)(a1 + 124);
      }
      else
      {
        v13 = *(_DWORD *)(a1 + 124);
        v14 = *(_DWORD *)(a1 + 128);
      }
      v9 = VIDPN_MGR::PopulatePublicGdiDisplayModeInfo(
             0x20u,
             v14,
             v13,
             v7,
             v6,
             v5,
             (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING)v23.Numerator,
             a2);
      if ( v9 >= 0 )
      {
        a2->dmFields |= 0x20u;
        a2->dmPosition.x = *(_DWORD *)(a1 + 116);
        a2->dmPosition.y = *(_DWORD *)(a1 + 120);
      }
    }
  }
  else
  {
    WdLogSingleEntry1(1LL, 1702LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"An invalid path was passed to DxgkConvertDisplayConfigToDevMode, missing required flags.",
      1702LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v9 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
  if ( v22 )
  {
    LOBYTE(v15) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, v16, v20);
  }
  return (unsigned int)v9;
}
