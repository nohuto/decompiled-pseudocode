/*
 * XREFs of DxgkConvertDisplayConfigToDevMode @ 0x1C0153F60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z @ 0x1C000978C (-GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@QEAU_devicemodeW@@@Z @ 0x1C00DF55C (-PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C01254E0 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     DxgkConvertDisplayConfigCScalingToDdiScaling @ 0x1C01540C0 (DxgkConvertDisplayConfigCScalingToDdiScaling.c)
 */

__int64 __fastcall DxgkConvertDisplayConfigToDevMode(struct _D3DDDI_RATIONAL *a1, struct _devicemodeW *a2, __int64 a3)
{
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v5; // edi
  __int64 v6; // rdx
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING Denominator; // r12d
  __int64 Numerator; // rcx
  __int64 v9; // rdx
  int v10; // esi
  unsigned int BitsPerPixel; // eax
  __int64 v12; // rdx
  DWORD v13; // r8d
  DWORD v14; // r9d
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v18; // rax
  int v19; // [rsp+40h] [rbp-20h] BYREF
  __int64 v20; // [rsp+48h] [rbp-18h]
  char v21; // [rsp+50h] [rbp-10h]
  struct _D3DDDI_RATIONAL v22; // [rsp+90h] [rbp+30h] BYREF

  v19 = -1;
  v20 = 0LL;
  v5 = D3DKMDT_VPPR_IDENTITY;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v21 = 1;
    v19 = 2178;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2178);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v19, 2178LL);
  if ( (a1->Numerator & 0x30387LL) == 0x30387 )
  {
    Denominator = a1[9].Denominator;
    if ( *(_QWORD *)&a1[6] != 0xFFFFFFFEFFFFFFFEuLL )
    {
      v22 = a1[6];
      DmmMapVSyncFromRationalToInteger(&v22, (unsigned int)Denominator, 0LL);
    }
    Numerator = a1[14].Numerator;
    v22.Numerator = 0;
    v10 = DxgkConvertDisplayConfigCScalingToDdiScaling(Numerator, &a1[2], &v22);
    if ( v10 >= 0 )
    {
      if ( a1[13].Numerator != 1 )
      {
        switch ( a1[13].Numerator )
        {
          case 2u:
            v5 = D3DKMDT_VPPR_ROTATE90;
            break;
          case 3u:
            v5 = D3DKMDT_VPPR_ROTATE180;
            break;
          case 4u:
            v5 = D3DKMDT_VPPR_ROTATE270;
            break;
        }
      }
      BitsPerPixel = GetBitsPerPixel(a1[12].Numerator);
      v10 = VIDPN_MGR::PopulatePublicGdiDisplayModeInfo(
              BitsPerPixel,
              v12,
              v13,
              v14,
              Denominator,
              v5,
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING)v22.Numerator,
              a2);
      if ( v10 >= 0 )
      {
        a2->dmFields |= 0x20u;
        a2->dmPosition.x = a1[14].Denominator;
        a2->dmPosition.y = a1[15].Numerator;
      }
    }
  }
  else
  {
    v18 = WdLogNewEntry5_WdAssertion(197511LL, v6);
    *(_QWORD *)(v18 + 24) = 1683LL;
    WdLogEvent5_WdAssertion(v18);
    v10 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19, v9);
  if ( v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, v16, v19);
  return (unsigned int)v10;
}
