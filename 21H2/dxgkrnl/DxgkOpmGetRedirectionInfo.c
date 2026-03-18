/*
 * XREFs of DxgkOpmGetRedirectionInfo @ 0x1C02C4FFC
 * Callers:
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x1C0064B48 (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C000F16C (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1C01A7544 (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     ?DodGetOpmMftContext@ADAPTER_DISPLAY@@QEAAJIPEA_K@Z @ 0x1C02C06B8 (-DodGetOpmMftContext@ADAPTER_DISPLAY@@QEAAJIPEA_K@Z.c)
 *     ?DmmGetClientVidPnTargetModeInfo@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_SIGNAL_STANDARD@@PEAIPEAEPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAU_D3DKMDT_2DREGION@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C039AD04 (-DmmGetClientVidPnTargetModeInfo@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_SIGNAL_STANDARD@@PEAIPEAEPEAW4_D3D.c)
 */

__int64 __fastcall DxgkOpmGetRedirectionInfo(ADAPTER_DISPLAY **a1, unsigned int a2, unsigned __int64 *a3, __int64 a4)
{
  __int64 v5; // r14
  int SourceConnectedToTargetInClientVidPn; // esi
  __int64 result; // rax
  const wchar_t *v10; // r9
  __int64 v11; // rsi
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // r15
  int v13; // r8d
  int v14; // r8d
  int v15; // r8d
  struct _D3DDDI_RATIONAL v16; // [rsp+50h] [rbp-10h] BYREF
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v17; // [rsp+A0h] [rbp+40h] BYREF
  struct _D3DKMDT_2DREGION v18; // [rsp+B0h] [rbp+50h] BYREF

  v5 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a1) )
  {
    WdLogSingleEntry1(1LL, 1114LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDxgAdapter->IsCoreResourceSharedOwner()",
      1114LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  SourceConnectedToTargetInClientVidPn = 0;
  if ( !a3 )
    goto LABEL_7;
  if ( (*((_DWORD *)a1 + 109) & 0x100) == 0 )
  {
    WdLogSingleEntry1(2LL, a1);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Try to call DxgkOpmGetRedirectionInfo on a non-indirect display adapter 0x%I64x!",
      (__int64)a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225659LL;
  }
  result = ADAPTER_DISPLAY::DodGetOpmMftContext(a1[349], (unsigned int)v5, a3);
  SourceConnectedToTargetInClientVidPn = result;
  if ( (int)result >= 0 )
  {
LABEL_7:
    if ( a4 )
    {
      v17 = D3DDDI_VSSLO_UNINITIALIZED;
      SourceConnectedToTargetInClientVidPn = DmmGetSourceConnectedToTargetInClientVidPn(a1, v5, (unsigned int *)&v17);
      if ( SourceConnectedToTargetInClientVidPn >= 0 )
      {
        v11 = (unsigned int)v17;
        if ( v17 == -1 )
        {
          WdLogSingleEntry1(1LL, 1144LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"VidPnSourceId != D3DDDI_ID_UNINITIALIZED",
            1144LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(a1[349], v11);
        if ( !DisplayModeInfo )
        {
          WdLogSingleEntry2(2LL, v11, a1);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Could not find display infoSource 0x%I64x on adapter 0x%I64x!",
            v11,
            (__int64)a1,
            0LL,
            0LL,
            0LL);
          return 3221225485LL;
        }
        v18 = 0LL;
        v16 = 0LL;
        v17 = D3DDDI_VSSLO_UNINITIALIZED;
        SourceConnectedToTargetInClientVidPn = DmmGetClientVidPnTargetModeInfo(a1, v5, 0LL, 0LL, 0LL, &v17, &v18, &v16);
        if ( SourceConnectedToTargetInClientVidPn >= 0 )
        {
          *(_OWORD *)a4 = 0LL;
          *(_OWORD *)(a4 + 16) = 0LL;
          *(_QWORD *)(a4 + 32) = 0LL;
          *(_DWORD *)(a4 + 40) = 0;
          *(struct _D3DKMDT_2DREGION *)(a4 + 20) = v18;
          *(_DWORD *)(a4 + 32) = *((_DWORD *)DisplayModeInfo + 2);
          *(struct _D3DDDI_RATIONAL *)(a4 + 36) = v16;
          v13 = *((_DWORD *)DisplayModeInfo + 6);
          if ( v17 != v13 )
          {
            WdLogSingleEntry1(1LL, 1170LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"ScanLineOrder == pDisplayModeInfo->DisplayMode.ScanLineOrdering",
              1170LL,
              0LL,
              0LL,
              0LL,
              0LL);
            v13 = *((_DWORD *)DisplayModeInfo + 6);
          }
          v14 = v13 - 2;
          if ( v14 )
          {
            v15 = v14 - 1;
            if ( v15 )
            {
              if ( v15 == 252 )
                *(_DWORD *)(a4 + 28) = 0;
              else
                *(_DWORD *)(a4 + 28) = 2;
            }
            else
            {
              *(_DWORD *)(a4 + 28) = 3;
            }
          }
          else
          {
            *(_DWORD *)(a4 + 28) = 4;
          }
          return (unsigned int)SourceConnectedToTargetInClientVidPn;
        }
        WdLogSingleEntry2(2LL, v5, a1);
        v10 = L"Could not find target mode info for TargetId 0x%I64x on adapter 0x%I64x!";
      }
      else
      {
        WdLogSingleEntry2(2LL, v5, a1);
        v10 = L"Could not find SourceID for TargetId 0x%I64x on adapter 0x%I64x!";
      }
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v10, v5, (__int64)a1, 0LL, 0LL, 0LL);
    }
    return (unsigned int)SourceConnectedToTargetInClientVidPn;
  }
  return result;
}
