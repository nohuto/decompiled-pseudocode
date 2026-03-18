/*
 * XREFs of ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C01EE334
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C1620 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@PEAVDXGADAPTER@@E@Z @ 0x1C02C4BD8 (-StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@PEAVDXGADAPTER@@E@Z.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C02E4B6C (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C00093C4 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0009488 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C01C44E0 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C01C8BD0 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z @ 0x1C01E9DD8 (-IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C02BFF14 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 */

char __fastcall ADAPTER_DISPLAY::ReleaseVidPnSourceOwner(PERESOURCE **this, struct DXGDEVICE *a2)
{
  char v4; // r14
  unsigned int v5; // esi
  PERESOURCE *v6; // rdx
  unsigned int v7; // esi
  PERESOURCE *v8; // rcx
  __int64 v9; // rbp

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 3092LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDevice->GetRenderCore()->IsCoreResourceExclusiveOwner()",
      3092LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 3093LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 3093LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !ADAPTER_DISPLAY::IsVidPnSourceOwner((ADAPTER_DISPLAY *)this, a2)
    && !ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner((ADAPTER_DISPLAY *)this, a2) )
  {
    WdLogSingleEntry1(1LL, 3094LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"IsVidPnSourceOwner(pDevice) || IsEmulatedVidPnSourceOwner(pDevice)",
      3094LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  WdLogSingleEntry1(4LL, a2);
  v4 = 0;
  v5 = 0;
  if ( *((_DWORD *)this + 24) )
  {
    while ( 1 )
    {
      v6 = (PERESOURCE *)*((_QWORD *)a2 + 231);
      if ( v6 == *(PERESOURCE **)(*((_QWORD *)a2 + 2) + 16LL) && a2 == (struct DXGDEVICE *)this[16][500 * v5 + 91] )
      {
        if ( this[2] != v6 )
        {
          WdLogSingleEntry1(1LL, 3112LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"this->GetAdapter() == pDevice->GetDisplayAdapter(VidPnSourceId)",
            3112LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( DXGDEVICE::IsVidPnSourcePrimaryValid(a2, v5) )
          break;
      }
      if ( ++v5 >= *((_DWORD *)this + 24) )
        goto LABEL_12;
    }
    v4 = 1;
    ADAPTER_DISPLAY::DisablePrimaryOnDevice((ADAPTER_DISPLAY *)this, a2, 0xFFFFFFFD, 0);
  }
LABEL_12:
  v7 = 0;
  if ( *((_DWORD *)this + 24) )
  {
    while ( 1 )
    {
      v8 = this[16];
      v9 = 500LL * v7;
      if ( a2 == (struct DXGDEVICE *)v8[v9 + 93] )
        break;
      if ( a2 == (struct DXGDEVICE *)v8[v9 + 91] )
      {
        if ( this[2] != *((PERESOURCE **)a2 + 231) )
        {
          WdLogSingleEntry1(1LL, 3145LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"this->GetAdapter() == pDevice->GetDisplayAdapter(VidPnSourceId)",
            3145LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        ADAPTER_DISPLAY::RemoveVidPnOwnership((ADAPTER_DISPLAY *)this, v7);
LABEL_20:
        ADAPTER_DISPLAY::UpdateGammaRamp((DXGADAPTER **)this, v7);
      }
      if ( ++v7 >= *((_DWORD *)this + 24) )
        return v4;
    }
    if ( this[2] != *((PERESOURCE **)a2 + 231) )
    {
      WdLogSingleEntry1(1LL, 3138LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"this->GetAdapter() == pDevice->GetDisplayAdapter(VidPnSourceId)",
        3138LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v8 = this[16];
    }
    v8[v9 + 93] = 0LL;
    goto LABEL_20;
  }
  return v4;
}
