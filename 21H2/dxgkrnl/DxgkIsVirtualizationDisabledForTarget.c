/*
 * XREFs of DxgkIsVirtualizationDisabledForTarget @ 0x1C01D7DA0
 * Callers:
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C01658E0 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01A0EB0 (DxgkDisplayConfigDeviceInfo.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C01AC3D4 (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     ?MakeCloneGroupContentResolutionValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C01D774C (-MakeCloneGroupContentResolutionValid@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C03AE4D0 (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?DmmGetTargetUsage@@YA?AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@IPEA_N@Z @ 0x1C01A03F0 (-DmmGetTargetUsage@@YA-AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@IPEA_N@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01A442C (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C01AFF60 (IsVirtualizationDisabledForTarget.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C01B4890 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 */

__int64 __fastcall DxgkIsVirtualizationDisabledForTarget(
        struct _LUID a1,
        unsigned int a2,
        bool *a3,
        bool *a4,
        char *a5,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a6,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a7,
        _DWORD *a8)
{
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v13; // rax
  DXGADAPTER *v14; // rdi
  __int64 v15; // rsi
  int VideoOutputTechnology; // eax
  unsigned __int64 v18; // [rsp+50h] [rbp-48h] BYREF
  _BYTE v19[8]; // [rsp+58h] [rbp-40h] BYREF
  DXGADAPTER *v20; // [rsp+60h] [rbp-38h]
  char v21; // [rsp+68h] [rbp-30h]
  LONG HighPart; // [rsp+A4h] [rbp+Ch]

  HighPart = a1.HighPart;
  Global = DXGGLOBAL_GetGlobal();
  v13 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, &v18);
  v14 = v13;
  if ( v13 )
  {
    if ( DXGADAPTER::IsCoreResourceSharedOwner(v13) )
    {
      WdLogSingleEntry1(1LL, 8697LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"!pAdapterIn->IsCoreResourceSharedOwner()",
        8697LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v20 = v14;
    v21 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v19);
    DXGADAPTER::ReleaseReference(v14);
    if ( *((_DWORD *)v14 + 50) == 1 )
    {
      if ( a6
        && (VideoOutputTechnology = DmmGetVideoOutputTechnology(v14, a2, a6, a7),
            v15 = VideoOutputTechnology,
            VideoOutputTechnology < 0) )
      {
        WdLogSingleEntry2(2LL, v14, VideoOutputTechnology);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to find output technology type for adapter 0x%I64x with status 0x%I64x",
          (__int64)v14,
          v15,
          0LL,
          0LL,
          0LL);
      }
      else
      {
        if ( a8 )
          *a8 = DmmGetTargetUsage((__int64)v14, a2, 0LL);
        LODWORD(v15) = IsVirtualizationDisabledForTarget((__int64)v14, a2, a3, a4, a5);
      }
    }
    else
    {
      LODWORD(v15) = -1073741130;
    }
    if ( v21 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v19);
    return (unsigned int)v15;
  }
  else
  {
    WdLogSingleEntry2(2LL, HighPart, a1.LowPart);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to reference adapter by LUID (0x%I64x%08I64x) in DxgkIsVirtualModeDisabledForPath function.",
      HighPart,
      a1.LowPart,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
