/*
 * XREFs of ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0139CC8
 * Callers:
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00E1740 (-DxgkCddDisable@@YAJIII@Z.c)
 *     DxgkEscape @ 0x1C00F8350 (DxgkEscape.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00FD2E0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C011F214 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C011F5A4 (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C013BF44 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C013C4DC (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C0148508 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C014A55C (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C014A790 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     DxgkFlushPresentHistory @ 0x1C0167360 (DxgkFlushPresentHistory.c)
 *     ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1C0172E34 (-ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z.c)
 *     ?AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z @ 0x1C020B768 (-AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z.c)
 *     ?PrepareToRemove@DXGADAPTER@@QEAAXXZ @ 0x1C020E53C (-PrepareToRemove@DXGADAPTER@@QEAAXXZ.c)
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C020F310 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C020FA84 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C0211B58 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0216B40 (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?ResumeMemorySegments@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0216DE4 (-ResumeMemorySegments@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C0216FBC (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?SuspendMemorySegments@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0217328 (-SuspendMemorySegments@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z @ 0x1C022DDD0 (-DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z.c)
 *     ?NotifyShutdown@DXGGLOBAL@@QEAAXXZ @ 0x1C026A088 (-NotifyShutdown@DXGGLOBAL@@QEAAXXZ.c)
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C026B02C (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C02E4814 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0007264 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B3EC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C003957C (McTemplateK0pqq_EtwWriteTransfer.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C00F71B0 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z @ 0x1C0139ED8 (-SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z.c)
 *     ?ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C0139F80 (-ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C024D3DC (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_M.c)
 */

__int64 __fastcall ADAPTER_RENDER::FlushScheduler(__int64 a1, int a2, unsigned int a3, int a4)
{
  __int64 v5; // r14
  __int64 v6; // r9
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int8 IsDxgmms2; // r15
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r9
  unsigned int v17; // ebp
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  int v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // rcx
  DXG_VMBUS_CHANNEL_BASE *v29; // rcx
  struct _MDL *v30; // r9
  int v31; // ebx
  int v32; // ebx
  int v33; // ebx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  unsigned int v42; // ebx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // [rsp+30h] [rbp-48h] BYREF
  int v48; // [rsp+38h] [rbp-40h]
  int v49; // [rsp+3Ch] [rbp-3Ch]
  int v50; // [rsp+40h] [rbp-38h]
  int v51; // [rsp+48h] [rbp-30h]
  int v52; // [rsp+4Ch] [rbp-2Ch]
  unsigned int v53; // [rsp+50h] [rbp-28h]
  int v54; // [rsp+80h] [rbp+8h] BYREF

  v5 = a3;
  v6 = *(_QWORD *)(a1 + 16);
  v8 = a2;
  if ( *(_BYTE *)(v6 + 209) )
  {
    v29 = (DXG_VMBUS_CHANNEL_BASE *)(v6 + 4240);
    v30 = (struct _MDL *)*(unsigned int *)(*(_QWORD *)(v6 + 4304) + 4312LL);
    v47 = 0LL;
    v48 = 0;
    v49 = 0;
    v50 = 43;
    v51 = (int)v30;
    v52 = a2;
    v53 = a3;
    return DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(
             v29,
             (struct DXGKVMB_COMMAND_BASE *)&v47,
             0x28u,
             v30);
  }
  IsDxgmms2 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(a1 + 16));
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0pqq_EtwWriteTransfer(v10, &Dxgk_FlushScheduler, v11);
  v13 = WdLogNewEntry5_WdEvent(v10, v9);
  *(_QWORD *)(v13 + 24) = v8;
  *(_QWORD *)(v13 + 32) = v5;
  WdLogEvent5_WdEvent(v13);
  v17 = 1;
  if ( (int)v8 > 6 )
  {
    if ( (_DWORD)v8 == 7 )
    {
LABEL_7:
      if ( !a4 && !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
      {
        v46 = WdLogNewEntry5_WdAssertion(v19, v18);
        *(_QWORD *)(v46 + 24) = 2644LL;
        WdLogEvent5_WdAssertion(v46);
      }
      ADAPTER_RENDER::ResumeScheduler((ADAPTER_RENDER *)a1, a4 != 0, (_DWORD)v8 == 10);
      return 0LL;
    }
    if ( (_DWORD)v8 == 8 )
    {
      if ( !a4 && !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
      {
        v45 = WdLogNewEntry5_WdAssertion(v24, v23);
        *(_QWORD *)(v45 + 24) = 2649LL;
        WdLogEvent5_WdAssertion(v45);
      }
      if ( !IsDxgmms2 && (*DXGADAPTER::GetAdapterType(*(DXGADAPTER **)(a1 + 16), &v54) & 0x10) != 0 )
        return 0LL;
      v25 = 1LL;
      LOBYTE(v16) = a4 != 0;
      goto LABEL_27;
    }
    v15 = (unsigned int)(v8 - 9);
    if ( (_DWORD)v8 != 9 )
    {
      if ( (_DWORD)v8 == 10 )
        goto LABEL_7;
      goto LABEL_45;
    }
LABEL_13:
    if ( !a4 && !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
    {
      v44 = WdLogNewEntry5_WdAssertion(v22, v21);
      *(_QWORD *)(v44 + 24) = 2603LL;
      WdLogEvent5_WdAssertion(v44);
    }
    if ( IsDxgmms2 )
    {
      if ( (_DWORD)v5 == -1 )
        goto LABEL_19;
    }
    else if ( (*DXGADAPTER::GetAdapterType(*(DXGADAPTER **)(a1 + 16), &v54) & 0x10) != 0 )
    {
LABEL_19:
      ADAPTER_RENDER::SuspendScheduler((ADAPTER_RENDER *)a1, a4 != 0, (_DWORD)v8 == 9);
      return 0LL;
    }
    LOBYTE(v16) = a4 != 0;
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 616) + 8LL) + 776LL))(
      *(_QWORD *)(a1 + 624),
      1LL,
      (unsigned int)v5,
      v16);
    goto LABEL_19;
  }
  if ( (_DWORD)v8 == 6 )
    goto LABEL_13;
  v26 = v8 - 1;
  if ( !v26 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
    {
      v34 = WdLogNewEntry5_WdAssertion(v28, v27);
      *(_QWORD *)(v34 + 24) = 2585LL;
      WdLogEvent5_WdAssertion(v34);
    }
    LOBYTE(v16) = a4 != 0;
    v25 = 0LL;
LABEL_27:
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 616) + 8LL) + 776LL))(
      *(_QWORD *)(a1 + 624),
      v25,
      (unsigned int)v5,
      v16);
    return 0LL;
  }
  v31 = v26 - 1;
  if ( !v31 )
    goto LABEL_46;
  v32 = v31 - 1;
  if ( !v32 )
  {
    v17 = 6;
    goto LABEL_46;
  }
  v33 = v32 - 1;
  if ( !v33 )
  {
    v17 = 7;
    goto LABEL_46;
  }
  if ( v33 == 1 )
  {
    v17 = 15;
    goto LABEL_46;
  }
LABEL_45:
  v35 = WdLogNewEntry5_WdAssertion(v15, v14);
  *(_QWORD *)(v35 + 24) = 2675LL;
  WdLogEvent5_WdAssertion(v35);
LABEL_46:
  if ( DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16))
    && *(_DWORD *)(*(_QWORD *)(a1 + 16) + 176LL) != 2 )
  {
    v38 = WdLogNewEntry5_WdAssertion(v37, v36);
    *(_QWORD *)(v38 + 24) = 2691LL;
    WdLogEvent5_WdAssertion(v38);
  }
  v39 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 616) + 8LL) + 40LL))(
          *(_QWORD *)(a1 + 624),
          v17);
  v42 = v39;
  if ( v17 >= 6 && v39 < 0 )
  {
    v43 = WdLogNewEntry5_WdAssertion(v41, v40);
    *(_QWORD *)(v43 + 24) = 2698LL;
    WdLogEvent5_WdAssertion(v43);
  }
  return v42;
}
