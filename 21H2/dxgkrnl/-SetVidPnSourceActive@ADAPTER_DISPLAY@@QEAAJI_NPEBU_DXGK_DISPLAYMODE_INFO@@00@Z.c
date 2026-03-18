/*
 * XREFs of ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z @ 0x1C01C79D8
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B85D0 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z @ 0x1C03A478C (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C03A4D40 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0013B54 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ??0?$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0EA@@@QEAA@XZ @ 0x1C0021C60 (--0-$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0EA@@@QEAA@XZ.c)
 *     ?GetVSyncTimeCounters@DXGADAPTER@@QEAAXIW4VSYNC_TIME_STATS_TYPE@@PEAUVSYNC_TIME_COUNTERS@@@Z @ 0x1C00259B8 (-GetVSyncTimeCounters@DXGADAPTER@@QEAAXIW4VSYNC_TIME_STATS_TYPE@@PEAUVSYNC_TIME_COUNTERS@@@Z.c)
 *     ?MonitorPowerStateChange@VSYNC_TIME_STATS@@QEAAXW4VSYNC_TIME_STATS_TYPE@@@Z @ 0x1C0025AB4 (-MonitorPowerStateChange@VSYNC_TIME_STATS@@QEAAXW4VSYNC_TIME_STATS_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     McTemplateK0qtxxxxxx_EtwWriteTransfer @ 0x1C00464D8 (McTemplateK0qtxxxxxx_EtwWriteTransfer.c)
 *     ?EnableVSync@BLTQUEUE@@QEAAXXZ @ 0x1C016051C (-EnableVSync@BLTQUEUE@@QEAAXXZ.c)
 *     MonitorGetLinkInfoFromTarget @ 0x1C01A6260 (MonitorGetLinkInfoFromTarget.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C01BE8BC (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkStatusChangeNotify @ 0x1C01C26A0 (DxgkStatusChangeNotify.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C01C3758 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C01C4B58 (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C01C69E4 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?DisableVSync@BLTQUEUE@@QEAAXXZ @ 0x1C03BC100 (-DisableVSync@BLTQUEUE@@QEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetVidPnSourceActive(
        PERESOURCE **this,
        unsigned int a2,
        unsigned __int8 a3,
        const struct _DXGK_DISPLAYMODE_INFO *a4,
        bool a5,
        unsigned __int8 a6)
{
  int v7; // ebx
  __int64 v9; // rsi
  const struct _DXGK_DISPLAYMODE_INFO *v10; // r12
  PERESOURCE *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r15
  bool v14; // zf
  int v15; // r13d
  __int64 v16; // rcx
  bool v17; // r14
  _QWORD *v18; // rax
  unsigned int v19; // eax
  int LinkInfoFromTarget; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rdx
  PERESOURCE *v25; // r12
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  struct DXGADAPTERALLOCATION *v34; // r12
  _QWORD *v35; // rbx
  int v36; // eax
  unsigned int v37; // r12d
  int v38; // eax
  __int64 v39; // rsi
  ULONG v40; // eax
  __int64 v41; // r9
  char *v42; // r15
  PDRIVER_OBJECT v43; // rcx
  PERESOURCE *v44; // rax
  struct _KTHREAD **v45; // rcx
  PERESOURCE *v46; // rcx
  __int64 v47; // rdi
  const wchar_t *v48; // r9
  __int64 v49; // rsi
  __int64 v50; // r8
  PERESOURCE *v51; // rcx
  _QWORD *v52; // [rsp+60h] [rbp-69h]
  unsigned int v53; // [rsp+68h] [rbp-61h]
  void *v54; // [rsp+70h] [rbp-59h] BYREF
  int v55; // [rsp+78h] [rbp-51h]
  __int64 v56; // [rsp+80h] [rbp-49h] BYREF
  __int64 v57; // [rsp+88h] [rbp-41h]
  __int64 v58; // [rsp+90h] [rbp-39h]
  __int64 v59; // [rsp+98h] [rbp-31h] BYREF
  __int64 v60; // [rsp+A0h] [rbp-29h]
  __int64 v61; // [rsp+A8h] [rbp-21h]
  __int64 v62; // [rsp+B0h] [rbp-19h]
  __int64 v63; // [rsp+B8h] [rbp-11h] BYREF
  __int64 v64; // [rsp+C0h] [rbp-9h]

  v7 = a3;
  v9 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 437LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 437LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (unsigned int)v9 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry1(1LL, 438LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < m_NumVidPnSources",
      438LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v10 = (const struct _DXGK_DISPLAYMODE_INFO *)&unk_1C009BD90;
  if ( a4 )
    v10 = a4;
  if ( (_BYTE)v7 && (!*(_DWORD *)v10 || !*((_DWORD *)v10 + 1)) )
  {
    WdLogSingleEntry1(1LL, 451LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!Active || ((pDisplayModeInfo->DisplayMode.Width != 0) && (pDisplayModeInfo->DisplayMode.Height != 0))",
      451LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v11 = this[16];
  v12 = 4000 * v9;
  v52 = 0LL;
  v13 = v9;
  v62 = v12;
  v14 = LOBYTE(v11[500 * v9 + 95]) == 0;
  v15 = 0x40000;
  *((_BYTE *)v11 + v12 + 760) = v7;
  LODWORD(v54) = v7 ^ 1;
  v16 = (__int64)this[2];
  v17 = v14 != (v7 ^ 1);
  v55 = v14;
  v18 = *(_QWORD **)(v16 + 2800);
  if ( v18 )
  {
    v52 = *(_QWORD **)(v16 + 2800);
    v63 = 0LL;
    LODWORD(v64) = 0;
    if ( (_BYTE)v7 )
    {
      v19 = *(_DWORD *)((char *)this[16] + v12 + 1088);
      v53 = v19;
      if ( v19 == -1 )
      {
        WdLogSingleEntry1(1LL, 472LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"TargetId != D3DDDI_ID_UNINITIALIZED",
          472LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v16 = (__int64)this[2];
        v19 = -1;
      }
      LinkInfoFromTarget = MonitorGetLinkInfoFromTarget(v16, v19, (__int64)&v63);
      if ( LinkInfoFromTarget < 0 )
        WdLogSingleEntry3(3LL, LinkInfoFromTarget, v9, v53);
      v18 = v52;
    }
    LOBYTE(v12) = v7;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, const struct _DXGK_DISPLAYMODE_INFO *, char *))(*(_QWORD *)(v18[78] + 8LL) + 520LL))(
      v52[79],
      (unsigned int)v9,
      v12,
      v10,
      (char *)&v63 + 4);
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(v52[78] + 8LL) + 880LL))(v52[79], (unsigned int)v9);
    if ( v55 != (_DWORD)v54 )
    {
      v25 = this[2];
      if ( (unsigned int)v9 >= *((_DWORD *)v25 + 386) )
      {
        WdLogSingleEntry2(2LL, v9, *((unsigned int *)v25 + 386));
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid VidPnSourceId:%u. Should be less than :%u",
          v9,
          *((unsigned int *)v25 + 386),
          0LL,
          0LL,
          0LL);
      }
      else
      {
        VSYNC_TIME_STATS::MonitorPowerStateChange(
          (__int64)v25[511] + 112 * (((_DWORD)v25[333] & 0x10) != 0 ? v9 : 0),
          (v7 ^ 1) + 1);
      }
      if ( bTracingEnabled )
      {
        v26 = (__int64)this[2];
        v59 = 0LL;
        v60 = 0LL;
        v61 = 0LL;
        v56 = 0LL;
        v57 = 0LL;
        v58 = 0LL;
        DXGADAPTER::GetVSyncTimeCounters(v26, v9, 1, (__int64)&v59);
        DXGADAPTER::GetVSyncTimeCounters((__int64)this[2], v9, 2, (__int64)&v56);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100000000LL) != 0 )
          McTemplateK0qtxxxxxx_EtwWriteTransfer(v28, v27, v29, v9, v7, v59, v60, v61, v56, v57, v58);
      }
    }
  }
  else
  {
    v44 = this[56];
    v54 = v44;
    if ( v44 )
    {
      v45 = (struct _KTHREAD **)((char *)v44[1] + 2920 * v9);
      if ( (_BYTE)v7 )
        BLTQUEUE::EnableVSync(v45);
      else
        BLTQUEUE::DisableVSync((BLTQUEUE *)v45);
      _InterlockedExchange((volatile __int32 *)(*((_QWORD *)v54 + 1) + 2920 * v9 + 960), 0);
    }
  }
  if ( (_BYTE)v7 )
  {
    if ( DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)this[2]) )
    {
      if ( !(unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((ADAPTER_DISPLAY *)this, v9) )
      {
        if ( ADAPTER_DISPLAY::GetCddPrimaryAllocation((ADAPTER_DISPLAY *)this, v9, 0) )
        {
          v40 = IoSizeofWorkItem();
          v42 = (char *)operator new[](v40 + 12LL, 0x4B677844u, 64LL, v41);
          if ( !v42 )
          {
            WdLogSingleEntry1(6LL, this);
            DxgkLogInternalTriageEvent(
              0LL,
              262145,
              -1,
              (__int64)L"Failed to allocate work item for delay presnet CDD primary for adapter 0x%I64x",
              (__int64)this,
              0LL,
              0LL,
              0LL,
              0LL);
            return 3221225495LL;
          }
          *(_QWORD *)v42 = *(PERESOURCE *)((char *)this[2] + 404);
          v43 = g_pDriverObject;
          *((_DWORD *)v42 + 2) = v9;
          IoInitializeWorkItem(v43, (PIO_WORKITEM)(v42 + 12));
          IoQueueWorkItemEx(
            (PIO_WORKITEM)(v42 + 12),
            (PIO_WORKITEM_ROUTINE_EX)DxgkpDelayPresentCddPrimary,
            DelayedWorkQueue,
            v42);
        }
        goto LABEL_22;
      }
      v46 = this[2];
LABEL_53:
      v23 = v62;
      if ( !*((_BYTE *)this[16] + v62 + 761) )
        v17 = 1;
      if ( v46[350] )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(v52[78] + 8LL) + 888LL))(v52[79], (unsigned int)v9);
      }
      else
      {
        v51 = this[56];
        if ( v51 )
        {
          v23 = 2920 * v9;
          _InterlockedExchange((volatile __int32 *)&v51[1][9].ActiveCount + 730 * v9, 1);
        }
      }
      goto LABEL_22;
    }
    if ( *(_QWORD *)(v21 + 2800) )
    {
      DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation((DXGADAPTER **)this, v9);
      v34 = DisplayedPrimaryAllocation;
      if ( !DisplayedPrimaryAllocation || (*((_DWORD *)DisplayedPrimaryAllocation + 1) & 0x10) != 0 )
      {
        WdLogSingleEntry3(2LL, this[2], v9, -1071775482LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to set VidPn source 0x%I64x on adapter 0x%I64x to be active since there is no displayed primar"
                    "y, returning 0x%I64x.",
          (__int64)this[2],
          v9,
          -1071775482LL,
          0LL,
          0LL);
        return 3223191814LL;
      }
      CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,64>::CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,64>(
        &v54,
        v31,
        v32,
        v33);
      v35 = v54;
      if ( v54 )
      {
        memset(v54, 0, 0x840uLL);
        *(_DWORD *)v35 = v9;
        v35[2] = *((_QWORD *)v34 + 2);
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD *, _QWORD))(*(_QWORD *)(v52[81] + 8LL) + 224LL))(
          v52[82],
          *((_QWORD *)v34 + 1),
          (__int64)v35 + 4,
          v35 + 1,
          0LL);
        *((_DWORD *)v35 + 138) |= 1u;
        v36 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)(v52[78] + 8LL) + 816LL))(v52[79], v35);
        v37 = v36;
        if ( v36 >= 0 )
        {
          operator delete(v35);
          goto LABEL_38;
        }
        v50 = v9;
        v49 = v36;
        WdLogSingleEntry3(2LL, this[2], v50, v36);
        v47 = (__int64)this[2];
        v48 = L"Failed to set VidPn source address on VidPn source 0x%I64x on adapter 0x%I64x (Status = 0x%I64x).";
      }
      else
      {
        v47 = 614LL;
        WdLogSingleEntry1(6LL, 614LL);
        v13 = 0LL;
        v48 = L"Out of memory allocating DXGKARG_SETVIDPNSOURCEADDRESS";
        v49 = 0LL;
        v37 = -1073741801;
        v15 = 262145;
      }
      DxgkLogInternalTriageEvent(0LL, v15, -1, (__int64)v48, v47, v13, v49, 0LL, 0LL);
      operator delete(v35);
      return v37;
    }
LABEL_38:
    if ( ((_DWORD)this[64] & 2) == 0
      && (!a5 || (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((ADAPTER_DISPLAY *)this, v9) != 1)
      || (v46 = this[2], *((_DWORD *)v46 + 103) == 1297040209) && *((int *)v46 + 673) <= 1300 )
    {
      v38 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v9, 1u, 2048, a6);
      v39 = v38;
      if ( v38 < 0 )
      {
        WdLogSingleEntry3(2LL, this[2], v13, v38);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to set VidPn source visibility on VidPn source 0x%I64x on adapter 0x%I64x (Status = 0x%I64x).",
          (__int64)this[2],
          v13,
          v39,
          0LL,
          0LL);
        return (unsigned int)v39;
      }
      goto LABEL_22;
    }
    goto LABEL_53;
  }
  ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v9, 0, 2048, a6);
LABEL_22:
  if ( v17 )
  {
    v63 = 1LL;
    v64 = 0LL;
    if ( (int)DxgkStatusChangeNotify((int *)&v63, v23, v22) < 0 )
    {
      WdLogSingleEntry1(1LL, 744LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(NotificationStatus)", 744LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  return 0LL;
}
