/*
 * XREFs of DxgkGetDeviceStateInternal @ 0x1C00F6630
 * Callers:
 *     ?UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1C0011CD0 (-UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 *     DxgkGetDeviceState @ 0x1C00F65F0 (DxgkGetDeviceState.c)
 *     NtDxgkUpdateTrackedWorkload @ 0x1C02BCFD0 (NtDxgkUpdateTrackedWorkload.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006B34 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0007264 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C00393B4 (McTemplateK0pq_EtwWriteTransfer.c)
 *     McTemplateK0pqqqqxx_EtwWriteTransfer @ 0x1C0039724 (McTemplateK0pqqqqxx_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E2FD4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00F9DB0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?VmBusSendGetDeviceState@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_GETDEVICESTATE@@@Z @ 0x1C02478AC (-VmBusSendGetDeviceState@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3.c)
 *     ?QueryLastCompletedPresentId@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z @ 0x1C0254E50 (-QueryLastCompletedPresentId@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z.c)
 *     ?QueryLastCompletedPresentIdDWM@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z @ 0x1C0254F20 (-QueryLastCompletedPresentIdDWM@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0267C8C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkGetDeviceStateInternal(ULONG64 a1, char a2, __int64 a3)
{
  int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // r13
  _D3DKMT_GETDEVICESTATE *v14; // rbx
  _D3DKMT_GETDEVICESTATE *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  volatile signed __int64 *v18; // rcx
  __int64 v19; // r8
  struct DXGADAPTER *v20; // rdx
  __int64 v21; // rcx
  D3DKMT_DEVICEPRESENT_STATE *p_PresentState; // r13
  int v23; // ecx
  int v24; // ecx
  bool v25; // al
  int v26; // ecx
  int v27; // eax
  int DeviceState; // r13d
  __int64 v29; // rcx
  DXGGLOBAL **v30; // rbx
  volatile signed __int64 *v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  int v35; // ecx
  int v36; // ecx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  struct DXGTHREAD *Current; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rax
  __int64 v49; // rdx
  D3DKMT_DEVICESTATE_TYPE StateType; // ecx
  D3DKMT_DEVICESTATE_TYPE v51; // eax
  int v52; // ecx
  _QWORD *v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rax
  int v56; // ecx
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v62; // [rsp+58h] [rbp-B0h]
  char v63; // [rsp+60h] [rbp-A8h]
  struct DXGDEVICE *v64; // [rsp+68h] [rbp-A0h]
  __int64 v65; // [rsp+70h] [rbp-98h]
  struct DXGADAPTER *v66; // [rsp+78h] [rbp-90h]
  struct DXGDEVICE *v67; // [rsp+80h] [rbp-88h] BYREF
  volatile signed __int64 *v68; // [rsp+88h] [rbp-80h]
  volatile signed __int64 *v69; // [rsp+90h] [rbp-78h]
  volatile signed __int64 *v70; // [rsp+98h] [rbp-70h]
  _D3DKMT_GETDEVICESTATE v71; // [rsp+A0h] [rbp-68h] BYREF
  int v72; // [rsp+120h] [rbp+18h] BYREF
  struct DXGDEVICE *v73; // [rsp+128h] [rbp+20h] BYREF

  LODWORD(v61) = -1;
  v5 = 0;
  v62 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v63 = 1;
    LODWORD(v61) = 2028;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2028);
  }
  else
  {
    v63 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v61, 2028LL);
  v65 = 0LL;
  CurrentProcess = PsGetCurrentProcess(v7, v6);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v12 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v13 = *((_QWORD *)Current + 1)) == 0 )
  {
    v13 = v12;
    if ( !v12 )
    {
      v44 = WdLogNewEntry5_WdError(v11, v10);
      *(_QWORD *)(v44 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v44);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v61, v45);
      if ( !v63 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
        return 3221225485LL;
      goto LABEL_77;
    }
  }
  memset(&v71, 0, sizeof(v71));
  v14 = &v71;
  if ( a2 )
  {
    v15 = (_D3DKMT_GETDEVICESTATE *)a1;
    if ( a1 >= MmUserProbeAddress )
      v15 = (_D3DKMT_GETDEVICESTATE *)MmUserProbeAddress;
    v71 = *v15;
  }
  else
  {
    v14 = (_D3DKMT_GETDEVICESTATE *)a1;
  }
  if ( !a2 || v14->StateType != D3DKMT_DEVICESTATE_RESET )
  {
    v73 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v67, v14->hDevice, (struct _KTHREAD **)v13, &v73);
    v64 = v73;
    if ( v73 )
    {
      v18 = *(volatile signed __int64 **)(*((_QWORD *)v73 + 2) + 16LL);
      v66 = (struct DXGADAPTER *)v18;
      v70 = v18;
      v69 = v18 + 3;
      _InterlockedIncrement64(v18 + 3);
      v68 = v18 + 17;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v68, 0LL);
      v20 = v66;
      if ( *((_BYTE *)v66 + 209) )
      {
        StateType = v14->StateType;
        if ( ((StateType - 1) & 0xFFFFFFFA) == 0 && StateType != D3DKMT_DEVICESTATE_PRESENT )
        {
          LOBYTE(v5) = *((_DWORD *)v66 + 50) == 1;
          v51 = v14->StateType;
          if ( v5 )
          {
            if ( v51 == D3DKMT_DEVICESTATE_EXECUTION )
            {
              v14->PresentState.VidPnSourceId = 1;
              DeviceState = v65;
            }
            else
            {
              DeviceState = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetDeviceState(
                              (struct DXGADAPTER *)((char *)v66 + 4240),
                              (struct DXGPROCESS *)v13,
                              v73,
                              v14);
            }
            goto LABEL_26;
          }
          if ( v51 == D3DKMT_DEVICESTATE_EXECUTION )
          {
            v14->PresentState.VidPnSourceId = 4;
            DeviceState = v65;
            goto LABEL_26;
          }
LABEL_102:
          DeviceState = -1073741130;
          goto LABEL_26;
        }
      }
      v21 = (unsigned int)v14->StateType;
      if ( (_DWORD)v21 != 1 )
      {
        v35 = v21 - 2;
        if ( v35 )
        {
          v36 = v35 - 2;
          if ( v36 )
          {
            v52 = v36 - 1;
            if ( !v52 )
            {
              if ( *((_DWORD *)v73 + 144) == 1 )
              {
                if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)v64 + 2) + 16LL)) )
                {
                  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v19 + 616) + 8LL) + 200LL))(*((_QWORD *)v73 + 96));
                }
                else
                {
                  *v53 = -1LL;
                  v14->PresentState.PresentStats.PresentCount = 0;
                  v14->PresentState.PresentStats.PresentRefreshCount = -1;
                  v14->PresentState.PresentStats.SyncRefreshCount = 0;
                  v14->PresentState.PresentStats.SyncQPCTime.QuadPart = 0LL;
                }
                DeviceState = v65;
              }
              else
              {
                DeviceState = -1073741130;
              }
              goto LABEL_26;
            }
            if ( v52 != 1 )
            {
              DeviceState = -1073741811;
              goto LABEL_26;
            }
            if ( *((_DWORD *)v73 + 144) != 1 )
            {
              DeviceState = -1073741130;
              goto LABEL_26;
            }
            DeviceState = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v64 + 2) + 616LL)
                                                                                        + 8LL)
                                                                            + 184LL))(
                            *((_QWORD *)v73 + 96),
                            v14->PresentState.VidPnSourceId,
                            0LL);
            v14->PresentQueueState.bQueuedPresentLimitReached = 0;
            if ( DeviceState != -1071775486 )
              goto LABEL_26;
            v14->PresentQueueState.bQueuedPresentLimitReached = 1;
            goto LABEL_25;
          }
          if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v64 + 2) + 16LL) + 200LL) != 1 )
          {
            DeviceState = -1073741130;
            goto LABEL_26;
          }
          v37 = *((_QWORD *)v73 + 231);
          if ( !v37
            || (v38 = *(unsigned int *)(*(_QWORD *)(v37 + 2696) + 80LL),
                v14->PresentState.VidPnSourceId < (unsigned int)v38) )
          {
            DeviceState = DXGDEVICE::QueryLastCompletedPresentIdDWM(
                            v73,
                            v14->PresentState.VidPnSourceId,
                            &v14->PresentStateDWM.PresentStatsDWM);
            goto LABEL_26;
          }
        }
        else
        {
          if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v64 + 2) + 16LL) + 200LL) != 1 )
            goto LABEL_102;
          v42 = *((_QWORD *)v73 + 231);
          if ( !v42
            || (v38 = *(unsigned int *)(*(_QWORD *)(v42 + 2696) + 80LL),
                v14->PresentState.VidPnSourceId < (unsigned int)v38) )
          {
            DeviceState = DXGDEVICE::QueryLastCompletedPresentId(
                            v73,
                            v14->PresentState.VidPnSourceId,
                            &v14->PresentState.PresentStats);
            goto LABEL_26;
          }
        }
        v54 = WdLogNewEntry5_WdWarning(v38, v66, v19);
        *(_QWORD *)(v54 + 24) = v14->PresentState.VidPnSourceId;
        DeviceState = -1073741811;
        *(_QWORD *)(v54 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v54);
        goto LABEL_26;
      }
      p_PresentState = &v14->PresentState;
      v72 = 0;
      if ( v14 == (_D3DKMT_GETDEVICESTATE *)-8LL )
      {
        v55 = WdLogNewEntry5_WdAssertion(v21, v66);
        *(_QWORD *)(v55 + 24) = 9962LL;
        WdLogEvent5_WdAssertion(v55);
      }
      v23 = *((_DWORD *)v73 + 144);
      if ( v23 == 1 )
      {
        if ( (*((_BYTE *)v73 + 1869) & 1) != 0 )
        {
          v24 = *(_DWORD *)(*((_QWORD *)v73 + 56) + 16LL);
        }
        else
        {
          v5 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v64 + 2) + 616LL) + 8LL)
                                                        + 192LL))(
                 *((_QWORD *)v73 + 96),
                 &v72);
          v24 = v72;
        }
        v25 = v24 < 0;
        v26 = v24 & 0x7FFFFFFF;
        v72 = v26;
        if ( v5 < 0 )
          goto LABEL_25;
        if ( v26 )
        {
          v59 = (unsigned int)(v26 - 2);
          switch ( (int)v59 )
          {
            case 0:
            case 9:
            case 10:
            case 11:
              p_PresentState->VidPnSourceId = 5;
              break;
            case 4:
              p_PresentState->VidPnSourceId = 6;
              break;
            case 5:
              goto LABEL_113;
            case 7:
            case 8:
            case 13:
            case 14:
            case 15:
            case 16:
            case 17:
            case 22:
              p_PresentState->VidPnSourceId = 7;
              break;
            case 12:
            case 20:
            case 23:
              goto LABEL_114;
            default:
              v60 = WdLogNewEntry5_WdAssertion(v59, 0x1C0000000uLL);
              *(_QWORD *)(v60 + 24) = 10045LL;
              WdLogEvent5_WdAssertion(v60);
              v5 = -1073741823;
              p_PresentState->VidPnSourceId = 5;
              break;
          }
          goto LABEL_25;
        }
        if ( !v25 )
        {
          v27 = 1;
LABEL_24:
          p_PresentState->VidPnSourceId = v27;
LABEL_25:
          DeviceState = v5;
LABEL_26:
          if ( bTracingEnabled )
          {
            v29 = (unsigned int)(v14->StateType - 1);
            if ( v14->StateType == D3DKMT_DEVICESTATE_EXECUTION )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0pq_EtwWriteTransfer(v29, &DeviceStateEvent, v19, v73, v14->PresentState.VidPnSourceId);
            }
            else if ( v14->StateType == D3DKMT_DEVICESTATE_PRESENT && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            {
              McTemplateK0pqqqqxx_EtwWriteTransfer(
                v29,
                &DevicePresentStateEvent,
                v19,
                v73,
                v14->PresentState.VidPnSourceId,
                v14->PresentState.PresentStats.PresentCount,
                v14->PresentState.PresentStats.PresentRefreshCount,
                v14->PresentState.PresentStats.SyncRefreshCount,
                v14->PresentState.PresentStats.SyncQPCTime.QuadPart,
                v14->PresentState.PresentStats.SyncGPUTime.QuadPart,
                v61,
                v62);
            }
          }
          if ( DeviceState >= 0 && a2 )
          {
            if ( a1 + 56 > MmUserProbeAddress || a1 + 56 <= a1 )
              *(_BYTE *)MmUserProbeAddress = 0;
            *(_OWORD *)a1 = *(_OWORD *)&v14->hDevice;
            *(_OWORD *)(a1 + 16) = *(_OWORD *)(&v14->PresentQueueState + 1);
            *(_OWORD *)(a1 + 32) = *(_OWORD *)(&v14->PresentQueueState + 3);
            *(_QWORD *)(a1 + 48) = *((_QWORD *)&v14->PresentQueueState + 5);
            v30 = (DXGGLOBAL **)v66;
          }
          else
          {
            v30 = (DXGGLOBAL **)v66;
          }
          ExReleasePushLockSharedEx(v68, 0LL);
          KeLeaveCriticalRegion();
          v31 = v69;
          if ( _InterlockedExchangeAdd64(v69, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(v30[2], (struct DXGADAPTER *)v30);
          if ( v67 && _InterlockedExchangeAdd64((volatile signed __int64 *)v67 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v67 + 2), v67);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v61, (__int64)v31);
          if ( v63 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v32, &EventProfilerExit, v33, v61);
          }
          return (unsigned int)DeviceState;
        }
      }
      else
      {
        v56 = v23 - 2;
        if ( v56 )
        {
          v57 = (unsigned int)(v56 - 1);
          if ( (_DWORD)v57 )
          {
            if ( (_DWORD)v57 == 1 )
            {
LABEL_114:
              p_PresentState->VidPnSourceId = 4;
            }
            else
            {
              v58 = WdLogNewEntry5_WdAssertion(v57, v20);
              *(_QWORD *)(v58 + 24) = 10058LL;
              WdLogEvent5_WdAssertion(v58);
              p_PresentState->VidPnSourceId = 4;
              v5 = -1073741823;
            }
          }
          else
          {
LABEL_113:
            p_PresentState->VidPnSourceId = 3;
          }
          goto LABEL_25;
        }
      }
      v27 = 2;
      goto LABEL_24;
    }
    v48 = WdLogNewEntry5_WdError(v17, v16);
    *(_QWORD *)(v48 + 24) = v14->hDevice;
    *(_QWORD *)(v48 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v48);
    if ( v67 && _InterlockedExchangeAdd64((volatile signed __int64 *)v67 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v67 + 2), v67);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v61, v49);
    if ( !v63 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
LABEL_77:
    McTemplateK0q_EtwWriteTransfer(v46, &EventProfilerExit, v47, v61);
    return 3221225485LL;
  }
  if ( !(*(unsigned int (**)(void))(*(_QWORD *)(v13 + 88) + 208LL))() )
    v5 = 1;
  *(_DWORD *)(a1 + 8) = v5;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v61, v39);
  if ( v63 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v40, &EventProfilerExit, v41, v61);
  return 0LL;
}
