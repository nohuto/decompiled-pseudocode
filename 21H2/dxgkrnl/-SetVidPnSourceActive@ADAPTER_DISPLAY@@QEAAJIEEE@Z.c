/*
 * XREFs of ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z @ 0x1C014D3A8
 * Callers:
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z @ 0x1C00DDE1C (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C013FB1C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C02E4B54 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0002824 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B73C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000BB90 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C000D22C (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ??0?$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ @ 0x1C000D470 (--0-$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ?EnableVSync@BLTQUEUE@@QEAAXXZ @ 0x1C00DF974 (-EnableVSync@BLTQUEUE@@QEAAXXZ.c)
 *     MonitorGetLinkInfoFromTarget @ 0x1C0129624 (MonitorGetLinkInfoFromTarget.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C013F584 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     DxgkStatusChangeNotify @ 0x1C01450A0 (DxgkStatusChangeNotify.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C014C588 (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C014CE50 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C014ECC4 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?DisableVSync@BLTQUEUE@@QEAAXXZ @ 0x1C02FD504 (-DisableVSync@BLTQUEUE@@QEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetVidPnSourceActive(
        PERESOURCE **this,
        unsigned int a2,
        char a3,
        char a4,
        unsigned __int8 a5)
{
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  PERESOURCE *v10; // rdx
  __int64 v11; // r8
  _QWORD *v12; // r13
  bool v13; // zf
  __int64 v14; // rcx
  bool v15; // bp
  __int64 v16; // rbx
  int LinkInfoFromTarget; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdi
  _QWORD *v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rbx
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // r8
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct DXGADAPTERALLOCATION *v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  _QWORD *v37; // rbx
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdi
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rbx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  PERESOURCE *v52; // rbx
  struct _KTHREAD **v53; // rcx
  ULONG v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  char *v57; // rdi
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rax
  PDRIVER_OBJECT v61; // rcx
  PERESOURCE *v62; // rcx
  __int64 v63; // rax
  _QWORD *v64; // rax
  _QWORD *v65; // rax
  PERESOURCE *v66; // rcx
  PERESOURCE *v67; // rcx
  __int64 v68; // rax
  void *v70; // [rsp+38h] [rbp-70h] BYREF
  __int64 v71; // [rsp+40h] [rbp-68h]
  _QWORD v72[2]; // [rsp+48h] [rbp-60h] BYREF
  __int64 v73; // [rsp+58h] [rbp-50h] BYREF
  int v74; // [rsp+60h] [rbp-48h]

  v7 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v49 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v49 + 24) = 434LL;
    WdLogEvent5_WdAssertion(v49);
  }
  if ( (unsigned int)v7 >= *((_DWORD *)this + 20) )
  {
    v50 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v50 + 24) = 435LL;
    WdLogEvent5_WdAssertion(v50);
  }
  v10 = this[14];
  v11 = 496 * v7;
  v12 = 0LL;
  v71 = v11 * 8;
  v13 = LOBYTE(v10[496 * v7 + 90]) == 0;
  LOBYTE(v10[v11 + 90]) = a3;
  v14 = (__int64)this[2];
  v15 = v13 != (a3 == 0);
  if ( *(_QWORD *)(v14 + 2704) )
  {
    v12 = *(_QWORD **)(v14 + 2704);
    v73 = 0LL;
    v74 = 0;
    if ( a3 )
    {
      v16 = HIDWORD(this[14][v11 + 133]);
      if ( (_DWORD)v16 == -1 )
      {
        v51 = WdLogNewEntry5_WdAssertion(v14, v10);
        *(_QWORD *)(v51 + 24) = 456LL;
        WdLogEvent5_WdAssertion(v51);
        v14 = (__int64)this[2];
      }
      LinkInfoFromTarget = MonitorGetLinkInfoFromTarget(v14, (unsigned int)v16, (__int64)&v73);
      v21 = LinkInfoFromTarget;
      if ( LinkInfoFromTarget < 0 )
      {
        v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v20);
        v22[3] = v21;
        v22[4] = v7;
        v22[5] = v16;
        WdLogEvent5_WdWarning(v22);
      }
    }
    v23 = v12[78];
    v24 = v12[77];
    DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo((ADAPTER_DISPLAY *)this, (unsigned int)v7);
    LOBYTE(v26) = a3;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, const struct _DXGK_DISPLAYMODE_INFO *, char *))(*(_QWORD *)(v24 + 8) + 520LL))(
      v23,
      (unsigned int)v7,
      v26,
      DisplayModeInfo,
      (char *)&v73 + 4);
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(v12[77] + 8LL) + 880LL))(v12[78], (unsigned int)v7);
  }
  else
  {
    v52 = this[49];
    if ( v52 )
    {
      v53 = (struct _KTHREAD **)((char *)v52[1] + 2904 * v7);
      if ( a3 )
        BLTQUEUE::EnableVSync(v53);
      else
        BLTQUEUE::DisableVSync((BLTQUEUE *)v53);
      _InterlockedExchange((volatile __int32 *)&v52[1][9].SystemResourcesList.Blink + 726 * v7, 0);
    }
  }
  if ( !a3 )
  {
    ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, (unsigned int)v7, 0, 2048, a5);
    goto LABEL_23;
  }
  if ( DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)this[2]) )
  {
    if ( !(unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((ADAPTER_DISPLAY *)this, (unsigned int)v7) )
    {
      if ( ADAPTER_DISPLAY::GetCddPrimaryAllocation((ADAPTER_DISPLAY *)this, (unsigned int)v7, 0) )
      {
        v54 = IoSizeofWorkItem();
        v57 = (char *)operator new[](v54 + 12LL, 0x4B677844u, (POOL_TYPE)512);
        if ( !v57 )
        {
          v60 = WdLogNewEntry5_WdLowResource(v56, v55, v58, v59);
          *(_QWORD *)(v60 + 24) = this;
          WdLogEvent5_WdLowResource(v60);
          return 3221225495LL;
        }
        *(_QWORD *)v57 = *(PERESOURCE *)((char *)this[2] + 316);
        v61 = g_pDriverObject;
        *((_DWORD *)v57 + 2) = v7;
        IoInitializeWorkItem(v61, (PIO_WORKITEM)(v57 + 12));
        IoQueueWorkItemEx((PIO_WORKITEM)(v57 + 12), DxgkpDelayPresentCddPrimary, DelayedWorkQueue, v57);
      }
      goto LABEL_23;
    }
    v62 = this[2];
    goto LABEL_49;
  }
  if ( *(_QWORD *)(v27 + 2704) )
  {
    DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation((DXGADAPTER **)this, v7);
    v32 = DisplayedPrimaryAllocation;
    if ( !DisplayedPrimaryAllocation || (v31 = *((unsigned int *)DisplayedPrimaryAllocation + 1), (v31 & 0x10) != 0) )
    {
      v65 = (_QWORD *)WdLogNewEntry5_WdError(v31, v30);
      v45 = -1071775482LL;
LABEL_46:
      v66 = this[2];
      v65[4] = v7;
      v65[3] = v66;
      v65[5] = v45;
      WdLogEvent5_WdError(v65);
      return (unsigned int)v45;
    }
    CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>::CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>(&v70);
    v37 = v70;
    if ( v70 )
    {
      memset(v70, 0, 0x840uLL);
      *(_DWORD *)v37 = v7;
      v37[2] = *((_QWORD *)v32 + 2);
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD *, _QWORD))(*(_QWORD *)(v12[80] + 8LL) + 224LL))(
        v12[81],
        *((_QWORD *)v32 + 1),
        (__int64)v37 + 4,
        v37 + 1,
        0LL);
      *((_DWORD *)v37 + 138) |= 1u;
      v38 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)(v12[77] + 8LL) + 816LL))(v12[78], v37);
      v41 = v38;
      if ( v38 >= 0 )
      {
        operator delete(v37);
        goto LABEL_20;
      }
      v64 = (_QWORD *)WdLogNewEntry5_WdError(v40, v39);
      v64[3] = this[2];
      v64[4] = v7;
      v64[5] = v41;
      WdLogEvent5_WdError(v64);
    }
    else
    {
      v63 = WdLogNewEntry5_WdLowResource(v34, v33, v35, v36);
      *(_QWORD *)(v63 + 24) = 572LL;
      WdLogEvent5_WdLowResource(v63);
      LODWORD(v41) = -1073741801;
    }
    operator delete(v37);
    return (unsigned int)v41;
  }
LABEL_20:
  if ( ((_DWORD)this[56] & 2) != 0
    || a4 && (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((ADAPTER_DISPLAY *)this, (unsigned int)v7) == 1 )
  {
    v62 = this[2];
    if ( *((_DWORD *)v62 + 81) != 1297040209 || *((int *)v62 + 649) > 1300 )
    {
LABEL_49:
      v43 = v71;
      if ( !*((_BYTE *)this[14] + v71 + 721) )
        v15 = 1;
      if ( v62[338] )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(v12[77] + 8LL) + 888LL))(v12[78], (unsigned int)v7);
      }
      else
      {
        v67 = this[49];
        if ( v67 )
        {
          v43 = 2904 * v7;
          _InterlockedExchange((volatile __int32 *)&v67[1][9].SystemResourcesList.Blink + 726 * v7, 1);
        }
      }
      goto LABEL_23;
    }
  }
  v42 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, (unsigned int)v7, 1u, 2048, a5);
  v45 = v42;
  if ( v42 < 0 )
  {
    v65 = (_QWORD *)WdLogNewEntry5_WdError(v44, v43);
    goto LABEL_46;
  }
LABEL_23:
  if ( v15 )
  {
    v72[1] = 0LL;
    v72[0] = 1LL;
    if ( (int)DxgkStatusChangeNotify((int *)v72, v43, v28) < 0 )
    {
      v68 = WdLogNewEntry5_WdAssertion(v48, v47);
      *(_QWORD *)(v68 + 24) = 702LL;
      WdLogEvent5_WdAssertion(v68);
    }
  }
  return 0LL;
}
