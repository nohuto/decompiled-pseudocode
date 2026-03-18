/*
 * XREFs of ?GetDxgiGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C01E15EC
 * Callers:
 *     ?GetDxgiGammaRamp@DXGMONITOR@@UEBAJPEAPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C01E15C0 (-GetDxgiGammaRamp@DXGMONITOR@@UEBAJPEAPEBUDXGK_GAMMA_RAMP@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1C0012C4C (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ColorSpaceTransformInitIdentityTransform @ 0x1C0074330 (ColorSpaceTransformInitIdentityTransform.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1C01A7544 (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     ?AdjustFullscreenGammaRamp@ADAPTER_DISPLAY@@QEAAJPEBUDXGK_GAMMA_RAMP@@PEAU2@PEAUDXGK_GAMMA_ADJUSTMENT@@@Z @ 0x1C02BF124 (-AdjustFullscreenGammaRamp@ADAPTER_DISPLAY@@QEAAJPEBUDXGK_GAMMA_RAMP@@PEAU2@PEAUDXGK_GAMMA_ADJUS.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetDxgiGammaRamp(
        DXGADAPTER **this,
        unsigned int a2,
        const struct DXGK_GAMMA_RAMP **a3)
{
  __int64 v4; // rbp
  __int64 v6; // rbx
  DXGADAPTER *v7; // rcx
  int SourceConnectedToTargetInClientVidPn; // edi
  __int64 v9; // r9
  DXGADAPTER *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // rax
  struct DXGK_GAMMA_ADJUSTMENT *v14; // r14
  __int64 v16; // rsi
  __int64 v17; // rax
  int inited; // eax
  ADAPTER_DISPLAY *v19; // rcx
  unsigned int v20; // [rsp+80h] [rbp+8h] BYREF

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 7674LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 7674LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a3 )
  {
    WdLogSingleEntry1(1LL, 7675LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL != ppDxgiGammaRamp", 7675LL, 0LL, 0LL, 0LL, 0LL);
  }
  *a3 = 0LL;
  v6 = 0LL;
  v7 = this[2];
  if ( *((_DWORD *)v7 + 534) )
  {
    v20 = 0;
    SourceConnectedToTargetInClientVidPn = DmmGetSourceConnectedToTargetInClientVidPn(v7, v4, &v20);
    if ( SourceConnectedToTargetInClientVidPn < 0 )
    {
      WdLogSingleEntry2(2LL, v4, this[2]);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Could not find SourceID for TargetId 0x%I64x on adapter 0x%I64x!",
        v4,
        (__int64)this[2],
        0LL,
        0LL,
        0LL);
      return (unsigned int)SourceConnectedToTargetInClientVidPn;
    }
    if ( v20 == -1 )
    {
      WdLogSingleEntry1(1LL, 7697LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"VidPnSourceId != D3DDDI_ID_UNINITIALIZED",
        7697LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v10 = this[16];
    v11 = 4000LL * v20;
    if ( *(_DWORD *)((char *)v10 + v11 + 736) == 1 && (v12 = *(_QWORD *)((char *)v10 + v11 + 744)) != 0 )
    {
      v13 = *(_QWORD *)((char *)v10 + v11 + 744);
    }
    else
    {
      v12 = *(_QWORD *)((char *)v10 + v11 + 728);
      v13 = v12;
      if ( !v12 )
      {
LABEL_15:
        *a3 = (const struct DXGK_GAMMA_RAMP *)v6;
        return (unsigned int)SourceConnectedToTargetInClientVidPn;
      }
    }
    v14 = *(struct DXGK_GAMMA_ADJUSTMENT **)(v12 + 8LL * v20 + 1656);
    v6 = *(_QWORD *)(v13 + 8LL * v20 + 1528);
    if ( !v14 )
    {
      if ( v6 )
        _InterlockedAdd((volatile signed __int32 *)(v6 + 8), 1u);
      goto LABEL_15;
    }
    v16 = *(_QWORD *)(v13 + 8LL * v20 + 1528);
    if ( v6 && *(_DWORD *)(v6 + 16) == 1 )
      v16 = 0LL;
    v17 = operator new[](0x30uLL, 0x4B677844u, 256LL, v9);
    v6 = v17;
    if ( !v17 )
    {
      WdLogSingleEntry1(6LL, v12);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Device 0x%I64x: Unable to allocate gamma ramp.",
        v12,
        0LL,
        0LL,
        0LL,
        0LL);
      return (unsigned int)-1073741801;
    }
    *(_WORD *)(v17 + 40) = 0;
    *(_QWORD *)v17 = &ReferenceCounted::`vftable';
    *(_QWORD *)v17 = &DXGK_GAMMA_RAMP::`vftable';
    *(_DWORD *)(v17 + 8) = 1;
    *(_DWORD *)(v17 + 16) = 1;
    *(_QWORD *)(v17 + 24) = 0LL;
    *(_QWORD *)(v17 + 32) = 0LL;
    if ( v16 )
    {
      inited = DXGK_GAMMA_RAMP::Initialize(
                 (DXGK_GAMMA_RAMP *)v17,
                 (enum _D3DDDI_GAMMARAMP_TYPE)*(_DWORD *)(v16 + 16),
                 *(const void **)(v16 + 32));
    }
    else
    {
      SourceConnectedToTargetInClientVidPn = DXGK_GAMMA_RAMP::Initialize(
                                               (DXGK_GAMMA_RAMP *)v17,
                                               D3DDDI_GAMMARAMP_RGB256x3x16,
                                               0LL);
      if ( SourceConnectedToTargetInClientVidPn < 0 )
        goto LABEL_32;
      inited = ColorSpaceTransformInitIdentityTransform(v6 + 16);
    }
    SourceConnectedToTargetInClientVidPn = inited;
    if ( inited >= 0 )
    {
      SourceConnectedToTargetInClientVidPn = ADAPTER_DISPLAY::AdjustFullscreenGammaRamp(
                                               v19,
                                               (const struct DXGK_GAMMA_RAMP *)v16,
                                               (struct DXGK_GAMMA_RAMP *)v6,
                                               v14);
      if ( SourceConnectedToTargetInClientVidPn >= 0 )
        goto LABEL_15;
    }
LABEL_32:
    ReferenceCounted::Release((ReferenceCounted *)v6);
    return (unsigned int)SourceConnectedToTargetInClientVidPn;
  }
  return 0LL;
}
