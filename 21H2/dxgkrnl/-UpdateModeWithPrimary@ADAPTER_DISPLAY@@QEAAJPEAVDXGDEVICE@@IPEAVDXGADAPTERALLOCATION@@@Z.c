/*
 * XREFs of ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C01C5840
 * Callers:
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C01BB50C (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C4C30 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0EA@@@QEAA@XZ @ 0x1C0021C60 (--0-$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0EA@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C01BB044 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C01BE8BC (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C01C44E0 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C01C5974 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x1C01C5A1C (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C01C69E4 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::UpdateModeWithPrimary(
        PERESOURCE **this,
        DXGADAPTER **a2,
        unsigned int a3,
        struct DXGADAPTERALLOCATION *a4)
{
  DXGADAPTER **v4; // r14
  __int64 v5; // rsi
  __int64 v6; // rbp
  __int64 v8; // r12
  __int64 *v9; // r13
  __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v15; // rdx
  char *v16; // rbx
  DXGADAPTER *v17; // rax
  const wchar_t *v18; // r9
  __int64 v19; // rdi
  int v20; // edx
  __int64 v21; // rcx
  unsigned int v22; // r15d
  struct DXGADAPTERALLOCATION *v23; // r10
  unsigned int *v24; // r12
  int v25; // eax
  int v26; // eax
  void *v27; // [rsp+90h] [rbp+8h] BYREF
  struct DXGADAPTERALLOCATION *v28; // [rsp+A8h] [rbp+20h]

  v28 = a4;
  v4 = (DXGADAPTER **)(this + 2);
  v5 = a3;
  v6 = (__int64)this;
  LODWORD(v8) = 0;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 2808LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"this->IsCoreResourceExclusiveOwner()",
      2808LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (unsigned int)v5 >= *(_DWORD *)(v6 + 96) )
  {
    WdLogSingleEntry1(1LL, 2809LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < m_NumVidPnSources",
      2809LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *v4 != a2[231] )
  {
    WdLogSingleEntry1(1LL, 2810LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"this->GetAdapter() == pDevice->GetDisplayAdapter(VidPnSourceId)",
      2810LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v9 = (__int64 *)*((_QWORD *)a2[2] + 2);
  v10 = v9[350];
  if ( !v10 || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(v10 + 16)) )
  {
    WdLogSingleEntry1(1LL, 2816LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pRenderAdapter != NULL) && pRenderAdapter->IsRenderAdapter() && pRenderCore->IsCoreResourceExclusiveOwner()",
      2816LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_QWORD *)*v4 + 350) )
  {
    if ( *v4 != (DXGADAPTER *)v9 )
    {
      WdLogSingleEntry1(1LL, 2823LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"this->GetAdapter() == pRenderAdapter",
        2823LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    ADAPTER_RENDER::DisableOverlays((ADAPTER_RENDER *)v9[350]);
  }
  ADAPTER_RENDER::FlushScheduler(v10, 8u, v5, 0);
  if ( !DXGADAPTER::IsVSyncAvailable(*v4, v5) )
    return 0LL;
  if ( DXGADAPTER::UsingSetTimingsFromVidPn(*v4) )
  {
    if ( *(_QWORD *)(v11 + 2800) )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v10 + 624) + 8LL) + 888LL))(
        *(_QWORD *)(v10 + 632),
        (unsigned int)v5);
    }
    else
    {
      v15 = *(_QWORD *)(*(_QWORD *)(v11 + 2792) + 448LL);
      if ( v15 )
        _InterlockedExchange((volatile __int32 *)(2920 * v5 + *(_QWORD *)(v15 + 8) + 960), 1);
    }
LABEL_17:
    ADAPTER_DISPLAY::UpdateGammaRamp((DXGADAPTER **)v6, v5);
    return (unsigned int)v8;
  }
  if ( !*(_QWORD *)(v11 + 2800) )
    goto LABEL_31;
  CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,64>::CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,64>(
    &v27,
    v11,
    v12,
    v13);
  v16 = (char *)v27;
  if ( v27 )
  {
    v23 = v28;
    if ( !v28 )
    {
      WdLogSingleEntry1(1LL, 2877LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pPrimaryAllocation != NULL", 2877LL, 0LL, 0LL, 0LL, 0LL);
      v23 = v28;
    }
    v24 = (unsigned int *)(v16 + 8);
    *(_DWORD *)v16 = v5;
    *((_QWORD *)v16 + 2) = *((_QWORD *)v23 + 2);
    (*(void (__fastcall **)(_QWORD, _QWORD, char *, char *, _QWORD))(*(_QWORD *)(*(_QWORD *)(v10 + 648) + 8LL) + 224LL))(
      *(_QWORD *)(v9[350] + 656),
      *((_QWORD *)v23 + 1),
      v16 + 4,
      v16 + 8,
      0LL);
    *((_DWORD *)v16 + 138) |= 1u;
    v25 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)(*(_QWORD *)(v10 + 624) + 8LL) + 816LL))(
            *(_QWORD *)(v10 + 632),
            v16);
    v22 = v25;
    if ( v25 < 0 )
    {
      v19 = v5;
      v6 = v25;
      WdLogSingleEntry4(2LL, v25, *v4, v5, *v24);
      v17 = *v4;
      v18 = L"Status=0x%I64x Adapter 0x%I64x: DdiSetVidPnSourceAddress failed 0x%I64x 0x%I64x";
      v21 = *v24;
      v20 = 0x40000;
      goto LABEL_29;
    }
    operator delete(v16);
LABEL_31:
    v26 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)v6, v5, 1u, 0x20u, 0);
    v8 = v26;
    if ( v26 < 0 )
    {
      WdLogSingleEntry3(2LL, v26, *v4, v5);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Status=0x%I64x Adapter 0x%I64x: SetVidPnSourceVisibility TRUE failed 0x%I64x",
        v8,
        (__int64)*v4,
        v5,
        0LL,
        0LL);
    }
    goto LABEL_17;
  }
  WdLogSingleEntry1(6LL, v6);
  v17 = 0LL;
  v18 = L"Adapter 0x%I64x: Out of memory allocating DXGKARG_SETVIDPNSOURCEADDRESS";
  v19 = 0LL;
  v20 = 262145;
  v21 = 0LL;
  v22 = -1073741801;
LABEL_29:
  DxgkLogInternalTriageEvent(0LL, v20, -1, (__int64)v18, v6, (__int64)v17, v19, v21, 0LL);
  operator delete(v16);
  return v22;
}
