/*
 * XREFs of ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C01C44E0
 * Callers:
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C01C3D18 (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C01C5840 (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C01C80AC (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C01EE334 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z @ 0x1C02C18E4 (-ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1C02C1AEC (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1C0012C4C (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0021A48 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ColorSpaceTransformInitIdentityTransform @ 0x1C0074330 (ColorSpaceTransformInitIdentityTransform.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C01A30A0 (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z @ 0x1C01BADA4 (-SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z.c)
 *     ?ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C01BAE50 (-ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     MonitorNotifyDXGIGammaRampChange @ 0x1C01C4688 (MonitorNotifyDXGIGammaRampChange.c)
 *     ?DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C01C486C (-DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?AdjustFullscreenGammaRamp@ADAPTER_DISPLAY@@QEAAJPEBUDXGK_GAMMA_RAMP@@PEAU2@PEAUDXGK_GAMMA_ADJUSTMENT@@@Z @ 0x1C02BF124 (-AdjustFullscreenGammaRamp@ADAPTER_DISPLAY@@QEAAJPEBUDXGK_GAMMA_RAMP@@PEAU2@PEAUDXGK_GAMMA_ADJUS.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::UpdateGammaRamp(DXGADAPTER **this, unsigned int a2)
{
  __int64 v3; // r12
  __int64 v4; // r9
  DXGADAPTER *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdi
  struct DXGK_GAMMA_ADJUSTMENT *v9; // r15
  __int64 v10; // rsi
  unsigned int v11; // r14d
  __int64 v12; // r8
  int v13; // eax
  PERESOURCE *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r14
  __int64 v18; // rax
  int inited; // eax
  ADAPTER_DISPLAY *v20; // rcx
  unsigned int v21; // [rsp+80h] [rbp+8h] BYREF

  v3 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 7339LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 7339LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_DWORD *)this[2] + 534) )
  {
    v5 = this[16];
    v6 = 4000 * v3;
    if ( *((_DWORD *)v5 + 1000 * v3 + 184) != 1 || (v7 = *(_QWORD *)((char *)v5 + v6 + 744)) == 0 )
    {
      v7 = *(_QWORD *)((char *)v5 + v6 + 728);
      v8 = 0LL;
      if ( !v7 )
        goto LABEL_10;
    }
    v9 = *(struct DXGK_GAMMA_ADJUSTMENT **)(v7 + 8 * v3 + 1656);
    v8 = *(_QWORD *)(v7 + 8 * v3 + 1528);
    if ( !v9 )
    {
      if ( v8 )
        _InterlockedAdd((volatile signed __int32 *)(v8 + 8), 1u);
LABEL_10:
      if ( !*((_BYTE *)this + 291) || !DXGADAPTER::IsFullWDDMAdapter(this[2]) )
        goto LABEL_11;
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(v15) )
      {
        WdLogSingleEntry1(1LL, 7452LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"IsCoreResourceExclusiveOwner()",
          7452LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      LODWORD(v10) = ADAPTER_RENDER::SuspendScheduler(*((ADAPTER_RENDER **)this[2] + 350), 0, 0LL);
      if ( (int)v10 < 0 )
      {
        WdLogSingleEntry1(2LL, this);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to suspend scheduler for setting gammaramp in adapter 0x%I64x",
          (__int64)this,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      else
      {
LABEL_11:
        LODWORD(v10) = DmmUpdateGammaRampOnVidPnSource(this[2], v3, (const struct DXGK_GAMMA_RAMP *)v8);
        v21 = 0;
        v11 = 0;
        while ( 1 )
        {
          v12 = v11++;
          if ( (int)DmmEnumClientVidPnPathTargetsFromSource(this[2], v3, v12, &v21) < 0 || v21 == -1 )
            break;
          v13 = MonitorNotifyDXGIGammaRampChange(this[2]);
          v10 = v13;
          if ( v13 < 0 )
          {
            WdLogSingleEntry1(2LL, v13);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to DXGI gamma ramp, (Status == 0x%I64x)!",
              v10,
              0LL,
              0LL,
              0LL,
              0LL);
          }
        }
        if ( *((_BYTE *)this + 291) && DXGADAPTER::IsFullWDDMAdapter(this[2]) )
          ADAPTER_RENDER::ResumeScheduler(*(ADAPTER_RENDER **)(v16 + 2800), 0LL, 0);
      }
      if ( !v8 )
        return (unsigned int)v10;
      goto LABEL_39;
    }
    v17 = *(_QWORD *)(v7 + 8 * v3 + 1528);
    if ( v8 && *(_DWORD *)(v8 + 16) == 1 )
      v17 = 0LL;
    v18 = operator new[](0x30uLL, 0x4B677844u, 256LL, v4);
    v8 = v18;
    if ( !v18 )
    {
      WdLogSingleEntry1(6LL, v7);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Device 0x%I64x: Unable to allocate gamma ramp.",
        v7,
        0LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v10) = -1073741801;
      return (unsigned int)v10;
    }
    *(_WORD *)(v18 + 40) = 0;
    *(_QWORD *)v18 = &ReferenceCounted::`vftable';
    *(_QWORD *)v18 = &DXGK_GAMMA_RAMP::`vftable';
    *(_DWORD *)(v18 + 8) = 1;
    *(_DWORD *)(v18 + 16) = 1;
    *(_QWORD *)(v18 + 24) = 0LL;
    *(_QWORD *)(v18 + 32) = 0LL;
    if ( v17 )
    {
      inited = DXGK_GAMMA_RAMP::Initialize(
                 (DXGK_GAMMA_RAMP *)v18,
                 (enum _D3DDDI_GAMMARAMP_TYPE)*(_DWORD *)(v17 + 16),
                 *(const void **)(v17 + 32));
    }
    else
    {
      LODWORD(v10) = DXGK_GAMMA_RAMP::Initialize((DXGK_GAMMA_RAMP *)v18, D3DDDI_GAMMARAMP_RGB256x3x16, 0LL);
      if ( (int)v10 < 0 )
        goto LABEL_39;
      inited = ColorSpaceTransformInitIdentityTransform(v8 + 16);
    }
    LODWORD(v10) = inited;
    if ( inited >= 0 )
    {
      LODWORD(v10) = ADAPTER_DISPLAY::AdjustFullscreenGammaRamp(
                       v20,
                       (const struct DXGK_GAMMA_RAMP *)v17,
                       (struct DXGK_GAMMA_RAMP *)v8,
                       v9);
      if ( (int)v10 >= 0 )
        goto LABEL_10;
    }
LABEL_39:
    ReferenceCounted::Release((ReferenceCounted *)v8);
    return (unsigned int)v10;
  }
  return 0LL;
}
