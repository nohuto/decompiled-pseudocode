/*
 * XREFs of ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C01BB044
 * Callers:
 *     DxgkEscape @ 0x1C0179FA0 (DxgkEscape.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C017D520 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C01B41A0 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C01B468C (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B85D0 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C01C1110 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C01C5840 (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C01C66CC (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C01C69E4 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C01C7E74 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     DxgkFlushPresentHistory @ 0x1C01E6FB0 (DxgkFlushPresentHistory.c)
 *     ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1C01EF9A0 (-ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z.c)
 *     ?AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z @ 0x1C02B9A0C (-AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z.c)
 *     ?PrepareToRemove@DXGADAPTER@@QEAAXXZ @ 0x1C02BCB2C (-PrepareToRemove@DXGADAPTER@@QEAAXXZ.c)
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02BDA44 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C02BE1F8 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C02BFF14 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02C452C (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?ResumeMemorySegments@ADAPTER_RENDER@@QEAAJXZ @ 0x1C02C4878 (-ResumeMemorySegments@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C02C49B8 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?SuspendMemorySegments@ADAPTER_RENDER@@QEAAJXZ @ 0x1C02C4D14 (-SuspendMemorySegments@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z @ 0x1C02DD060 (-DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z.c)
 *     ?NotifyShutdown@DXGGLOBAL@@QEAAXXZ @ 0x1C030AEB0 (-NotifyShutdown@DXGGLOBAL@@QEAAXXZ.c)
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C030C1C8 (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C03A4D40 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000A924 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C0044D64 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C0179770 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z @ 0x1C01BADA4 (-SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z.c)
 *     ?ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C01BAE50 (-ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?VmBusSendFlushAdapter@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@I@Z @ 0x1C0377578 (-VmBusSendFlushAdapter@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@I@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::FlushScheduler(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
  __int64 v5; // rbp
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned __int8 IsDxgmms2; // r15
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // r14d
  __int64 v17; // rdx
  int v18; // ebx
  int v19; // ebx
  int v20; // ebx
  int v21; // ebx
  int v22; // eax
  unsigned int v23; // ebx
  int v24; // [rsp+80h] [rbp+8h] BYREF

  v5 = a3;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = (int)a2;
  if ( *(_BYTE *)(v6 + 209) )
    return DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendFlushAdapter(v6 + 4344, a2, a3);
  IsDxgmms2 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(a1 + 16));
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pqq_EtwWriteTransfer(v9, &Dxgk_FlushScheduler, v10);
  WdLogSingleEntry2(4LL, v7, v5);
  v15 = 1;
  if ( (int)v7 > 6 )
  {
    if ( (_DWORD)v7 == 7 )
    {
LABEL_7:
      if ( !a4 && !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
      {
        WdLogSingleEntry1(1LL, 2688LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"ExclusiveAccessHeld || IsCoreResourceExclusiveOwner()",
          2688LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      LOBYTE(v12) = a4 != 0;
      ADAPTER_RENDER::ResumeScheduler((ADAPTER_RENDER *)a1, v12, (_DWORD)v7 == 10);
      return 0LL;
    }
    if ( (_DWORD)v7 == 8 )
    {
      if ( !a4 && !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
      {
        WdLogSingleEntry1(1LL, 2693LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"ExclusiveAccessHeld || IsCoreResourceExclusiveOwner()",
          2693LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( !IsDxgmms2 && (*DXGADAPTER::GetAdapterType(*(DXGADAPTER **)(a1 + 16), &v24) & 0x10) != 0 )
        return 0LL;
      v17 = 1LL;
      LOBYTE(v14) = a4 != 0;
      goto LABEL_25;
    }
    if ( (_DWORD)v7 != 9 )
    {
      if ( (_DWORD)v7 == 10 )
        goto LABEL_7;
      goto LABEL_42;
    }
LABEL_13:
    if ( !a4 && !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
    {
      WdLogSingleEntry1(1LL, 2647LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"ExclusiveAccessHeld || IsCoreResourceExclusiveOwner()",
        2647LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( IsDxgmms2 )
    {
      if ( (_DWORD)v5 == -1 )
      {
LABEL_18:
        LOBYTE(v13) = (_DWORD)v7 == 9;
        ADAPTER_RENDER::SuspendScheduler((ADAPTER_RENDER *)a1, a4 != 0, v13);
        return 0LL;
      }
    }
    else if ( (*DXGADAPTER::GetAdapterType(*(DXGADAPTER **)(a1 + 16), &v24) & 0x10) != 0 )
    {
      goto LABEL_18;
    }
    LOBYTE(v14) = a4 != 0;
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 624) + 8LL) + 776LL))(
      *(_QWORD *)(a1 + 632),
      1LL,
      (unsigned int)v5,
      v14);
    goto LABEL_18;
  }
  if ( (_DWORD)v7 == 6 )
    goto LABEL_13;
  v18 = v7 - 1;
  if ( !v18 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
    {
      WdLogSingleEntry1(1LL, 2629LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"IsCoreResourceExclusiveOwner()",
        2629LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    LOBYTE(v14) = a4 != 0;
    v17 = 0LL;
LABEL_25:
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 624) + 8LL) + 776LL))(
      *(_QWORD *)(a1 + 632),
      v17,
      (unsigned int)v5,
      v14);
    return 0LL;
  }
  v19 = v18 - 1;
  if ( !v19 )
    goto LABEL_43;
  v20 = v19 - 1;
  if ( !v20 )
  {
    v15 = 8;
    goto LABEL_43;
  }
  v21 = v20 - 1;
  if ( !v21 )
  {
    v15 = 9;
    goto LABEL_43;
  }
  if ( v21 == 1 )
  {
    v15 = 17;
    goto LABEL_43;
  }
LABEL_42:
  WdLogSingleEntry1(1LL, 2719LL);
  DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Invalid flush reason!", 2719LL, 0LL, 0LL, 0LL, 0LL);
LABEL_43:
  if ( DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16))
    && *(_DWORD *)(*(_QWORD *)(a1 + 16) + 176LL) != 2 )
  {
    WdLogSingleEntry1(1LL, 2735LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetAdapter()->m_ExclusiveAccessReason == DXGADAPTER_EXCLUSIVEACCESS_FLUSHSCHEDULER",
      2735LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 624) + 8LL) + 40LL))(
          *(_QWORD *)(a1 + 632),
          v15);
  v23 = v22;
  if ( v15 >= 8 && v22 < 0 )
  {
    WdLogSingleEntry1(1LL, 2742LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", 2742LL, 0LL, 0LL, 0LL, 0LL);
  }
  return v23;
}
