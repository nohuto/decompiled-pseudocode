/*
 * XREFs of ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C014007C
 * Callers:
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C012F3AC (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C013FBA0 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000BEAC (--3@YAXPEAX@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00115CC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ @ 0x1C0013994 (--0-$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00DEF38 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C012A464 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C012B9C0 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C012BF80 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C0140264 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x1C0140574 (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::UpdateModeWithPrimary(
        PERESOURCE **this,
        PERESOURCE **a2,
        unsigned int a3,
        struct DXGADAPTERALLOCATION *a4)
{
  __int64 v5; // rsi
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  PERESOURCE v11; // r15
  __int64 Reserved2; // rbp
  PERESOURCE *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int *v20; // rbx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rbp
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rax
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  void *v39; // [rsp+60h] [rbp+8h] BYREF

  v5 = a3;
  LODWORD(v8) = 0;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v29 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v29 + 24) = 2766LL;
    WdLogEvent5_WdAssertion(v29);
  }
  if ( (unsigned int)v5 >= *((_DWORD *)this + 20) )
  {
    v30 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v30 + 24) = 2767LL;
    WdLogEvent5_WdAssertion(v30);
  }
  if ( this[2] != a2[231] )
  {
    v31 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v31 + 24) = 2768LL;
    WdLogEvent5_WdAssertion(v31);
  }
  v11 = a2[2][2];
  Reserved2 = (__int64)v11[25].Reserved2;
  if ( !Reserved2 || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(Reserved2 + 16)) )
  {
    v32 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v32 + 24) = 2774LL;
    WdLogEvent5_WdAssertion(v32);
  }
  v13 = this[2];
  if ( v13[335] )
  {
    if ( v13 != (PERESOURCE *)v11 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v10, v9);
      *(_QWORD *)(v33 + 24) = 2781LL;
      WdLogEvent5_WdAssertion(v33);
    }
    ADAPTER_RENDER::DisableOverlays((ADAPTER_RENDER *)v11[25].Reserved2);
  }
  ADAPTER_RENDER::FlushScheduler(Reserved2, 8, v5, 0);
  if ( !DXGADAPTER::IsVSyncAvailable((DXGADAPTER *)this[2], v5) )
    return 0LL;
  if ( DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)this[2]) )
  {
    if ( v15 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(Reserved2 + 616) + 8LL) + 888LL))(
        *(_QWORD *)(Reserved2 + 624),
        (unsigned int)v5);
    }
    else
    {
      v34 = *(_QWORD *)(*(_QWORD *)(v14 + 2672) + 384LL);
      if ( v34 )
        _InterlockedExchange((volatile __int32 *)(2904 * v5 + *(_QWORD *)(v34 + 8) + 944), 1);
    }
    goto LABEL_23;
  }
  if ( !v15 )
  {
LABEL_21:
    v25 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, (unsigned int)v5, 1u, 32, 0);
    v8 = v25;
    if ( v25 < 0 )
    {
      v38 = (_QWORD *)WdLogNewEntry5_WdError(v27, v26);
      v38[3] = v8;
      v38[4] = this[2];
      v38[5] = v5;
      WdLogEvent5_WdError(v38);
    }
LABEL_23:
    ADAPTER_DISPLAY::UpdateGammaRamp((DXGADAPTER **)this, v5);
    return (unsigned int)v8;
  }
  CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>::CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>(&v39);
  v20 = (unsigned int *)v39;
  if ( v39 )
  {
    if ( !a4 )
    {
      v36 = WdLogNewEntry5_WdAssertion(v17, v16);
      *(_QWORD *)(v36 + 24) = 2835LL;
      WdLogEvent5_WdAssertion(v36);
    }
    *v20 = v5;
    *((_QWORD *)v20 + 2) = *((_QWORD *)a4 + 2);
    (*(void (__fastcall **)(_QWORD, _QWORD, unsigned int *, unsigned int *, _QWORD))(*(_QWORD *)(*(_QWORD *)(Reserved2 + 640)
                                                                                               + 8LL)
                                                                                   + 224LL))(
      *((_QWORD *)v11[25].Reserved2 + 81),
      *((_QWORD *)a4 + 1),
      v20 + 1,
      v20 + 2,
      0LL);
    v20[138] |= 1u;
    v21 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)(*(_QWORD *)(Reserved2 + 616) + 8LL) + 816LL))(
            *(_QWORD *)(Reserved2 + 624),
            v20);
    v24 = v21;
    if ( v21 >= 0 )
    {
      operator delete(v20);
      goto LABEL_21;
    }
    v37 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22);
    v37[3] = v24;
    v37[4] = this[2];
    v37[5] = v5;
    v37[6] = v20[2];
    WdLogEvent5_WdError(v37);
  }
  else
  {
    v35 = WdLogNewEntry5_WdLowResource(v17, v16, v18, v19);
    *(_QWORD *)(v35 + 24) = this;
    WdLogEvent5_WdLowResource(v35);
    LODWORD(v24) = -1073741801;
  }
  operator delete(v20);
  return (unsigned int)v24;
}
