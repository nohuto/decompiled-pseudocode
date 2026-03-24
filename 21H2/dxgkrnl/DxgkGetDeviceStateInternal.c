/*
 * XREFs of DxgkGetDeviceStateInternal @ 0x1C00F80D0
 * Callers:
 *     ?UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1C0011D60 (-UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 *     DxgkGetDeviceState @ 0x1C00F8090 (DxgkGetDeviceState.c)
 *     NtDxgkUpdateTrackedWorkload @ 0x1C02BE360 (NtDxgkUpdateTrackedWorkload.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006DE4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0007514 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     Feature_3895685435__private_IsEnabledDeviceUsage @ 0x1C00276A0 (Feature_3895685435__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C003A2E0 (McTemplateK0pq_EtwWriteTransfer.c)
 *     McTemplateK0pqqqqxx_EtwWriteTransfer @ 0x1C003A650 (McTemplateK0pqqqqxx_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E49F4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBBF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?VmBusSendGetDeviceState@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_GETDEVICESTATE@@@Z @ 0x1C02487BC (-VmBusSendGetDeviceState@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3.c)
 *     ?QueryLastCompletedPresentId@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z @ 0x1C0255F38 (-QueryLastCompletedPresentId@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z.c)
 *     ?QueryLastCompletedPresentIdDWM@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z @ 0x1C0256008 (-QueryLastCompletedPresentIdDWM@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0268F1C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkGetDeviceStateInternal(ULONG64 a1, char a2, __int64 a3)
{
  int v5; // esi
  int DeviceState; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  struct DXGTHREAD *Current; // rax
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  bool v20; // zf
  _D3DKMT_GETDEVICESTATE *v21; // rdi
  _D3DKMT_GETDEVICESTATE *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  struct DXGDEVICE *v29; // r13
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // r8
  D3DKMT_DEVICESTATE_TYPE *v34; // rcx
  DXGGLOBAL **v35; // r13
  D3DKMT_DEVICESTATE_TYPE v36; // eax
  __int64 StateType; // rcx
  int v38; // ecx
  int v39; // ecx
  int v40; // ecx
  _QWORD *v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  D3DKMT_DEVICEPRESENT_STATE *p_PresentState; // rbx
  int v47; // r15d
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rcx
  struct DXGADAPTER *v54; // [rsp+50h] [rbp-B8h]
  struct DXGDEVICE *v55; // [rsp+58h] [rbp-B0h] BYREF
  int v56; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v57; // [rsp+68h] [rbp-A0h]
  char v58; // [rsp+70h] [rbp-98h]
  struct DXGDEVICE *v59; // [rsp+78h] [rbp-90h] BYREF
  char *v60; // [rsp+80h] [rbp-88h]
  struct DXGADAPTER *v61; // [rsp+88h] [rbp-80h]
  volatile signed __int64 *v62; // [rsp+90h] [rbp-78h]
  _D3DKMT_GETDEVICESTATE v63; // [rsp+98h] [rbp-70h] BYREF
  unsigned int v65; // [rsp+120h] [rbp+18h] BYREF
  D3DKMT_DEVICESTATE_TYPE *p_StateType; // [rsp+128h] [rbp+20h]

  v56 = -1;
  v5 = 0;
  v57 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v58 = 1;
    v56 = 2028;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2028);
  }
  else
  {
    v58 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v56, 2028LL);
  DeviceState = 0;
  CurrentProcess = PsGetCurrentProcess(v8, v7);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v13 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v15 = *((_QWORD *)Current + 1)) == 0 )
  {
    v15 = v13;
    if ( !v13 )
    {
      v16 = WdLogNewEntry5_WdError(v12, v11);
      DeviceState = -1073741811;
      *(_QWORD *)(v16 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v16);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56, v17);
      v20 = v58 == 0;
LABEL_107:
      if ( !v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v56);
      return (unsigned int)DeviceState;
    }
  }
  memset(&v63, 0, sizeof(v63));
  v21 = &v63;
  if ( a2 )
  {
    v22 = (_D3DKMT_GETDEVICESTATE *)a1;
    if ( a1 >= MmUserProbeAddress )
      v22 = (_D3DKMT_GETDEVICESTATE *)MmUserProbeAddress;
    v63 = *v22;
  }
  else
  {
    v21 = (_D3DKMT_GETDEVICESTATE *)a1;
  }
  p_StateType = &v21->StateType;
  if ( !a2 )
  {
    p_StateType = &v21->StateType;
LABEL_25:
    v55 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v59, v21->hDevice, (struct _KTHREAD **)v15, &v55);
    v29 = v55;
    if ( !v55 )
    {
      v30 = WdLogNewEntry5_WdError(v28, v27);
      *(_QWORD *)(v30 + 24) = v21->hDevice;
      DeviceState = -1073741811;
      *(_QWORD *)(v30 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v30);
LABEL_103:
      if ( v59 && _InterlockedExchangeAdd64((volatile signed __int64 *)v59 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v59 + 2), v59);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56, v31);
      v20 = v58 == 0;
      goto LABEL_107;
    }
    v54 = *(struct DXGADAPTER **)(*((_QWORD *)v55 + 2) + 16LL);
    v61 = v54;
    v62 = (volatile signed __int64 *)((char *)v54 + 24);
    _InterlockedIncrement64((volatile signed __int64 *)v54 + 3);
    v60 = (char *)v54 + 136;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v60, 0LL);
    if ( *((_BYTE *)v54 + 209) )
    {
      v34 = p_StateType;
      v32 = *(unsigned int *)p_StateType;
      if ( (((_DWORD)v32 - 1) & 0xFFFFFFFA) == 0 && (_DWORD)v32 != 2 )
      {
        v35 = (DXGGLOBAL **)v54;
        LOBYTE(v5) = *((_DWORD *)v54 + 50) == 1;
        v36 = *p_StateType;
        if ( !v5 )
        {
          if ( v36 == D3DKMT_DEVICESTATE_EXECUTION )
            v21->PresentState.VidPnSourceId = 4;
          else
            DeviceState = -1073741130;
          goto LABEL_88;
        }
        if ( v36 == D3DKMT_DEVICESTATE_EXECUTION )
          v21->PresentState.VidPnSourceId = 1;
        else
          DeviceState = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetDeviceState(
                          (struct DXGADAPTER *)((char *)v54 + 4240),
                          (struct DXGPROCESS *)v15,
                          v55,
                          v21);
LABEL_87:
        v34 = p_StateType;
LABEL_88:
        if ( bTracingEnabled )
        {
          v53 = (unsigned int)(*v34 - 1);
          if ( (_DWORD)v53 )
          {
            if ( (_DWORD)v53 == 1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0pqqqqxx_EtwWriteTransfer(
                v53,
                &DevicePresentStateEvent,
                v33,
                v55,
                v21->PresentState.VidPnSourceId,
                v21->PresentState.PresentStats.PresentCount,
                v21->PresentState.PresentStats.PresentRefreshCount,
                v21->PresentState.PresentStats.SyncRefreshCount,
                v21->PresentState.PresentStats.SyncQPCTime.QuadPart,
                v21->PresentState.PresentStats.SyncGPUTime.QuadPart);
          }
          else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            McTemplateK0pq_EtwWriteTransfer(v53, &DeviceStateEvent, v33, v55, v21->PresentState.VidPnSourceId);
          }
        }
        if ( DeviceState >= 0 && a2 )
        {
          if ( a1 + 56 > MmUserProbeAddress || a1 + 56 <= a1 )
            *(_BYTE *)MmUserProbeAddress = 0;
          *(_OWORD *)a1 = *(_OWORD *)&v21->hDevice;
          *(_OWORD *)(a1 + 16) = *(_OWORD *)(&v21->PresentQueueState + 1);
          *(_OWORD *)(a1 + 32) = *(_OWORD *)(&v21->PresentQueueState + 3);
          *(_QWORD *)(a1 + 48) = *((_QWORD *)&v21->PresentQueueState + 5);
        }
        ExReleasePushLockSharedEx(v60, 0LL);
        KeLeaveCriticalRegion();
        if ( _InterlockedExchangeAdd64(v62, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(v35[2], (struct DXGADAPTER *)v35);
        goto LABEL_103;
      }
    }
    StateType = (unsigned int)v21->StateType;
    if ( (_DWORD)StateType != 1 )
    {
      v38 = StateType - 2;
      if ( v38 )
      {
        v39 = v38 - 2;
        if ( v39 )
        {
          v40 = v39 - 1;
          if ( v40 )
          {
            if ( v40 == 1 )
            {
              if ( *((_DWORD *)v55 + 144) == 1 )
              {
                DeviceState = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v29 + 2) + 616LL)
                                                                                            + 8LL)
                                                                                + 184LL))(
                                *((_QWORD *)v55 + 96),
                                v21->PresentState.VidPnSourceId,
                                0LL);
                v21->PresentQueueState.bQueuedPresentLimitReached = 0;
                if ( DeviceState == -1071775486 )
                {
                  DeviceState = 0;
                  v21->PresentQueueState.bQueuedPresentLimitReached = 1;
                }
              }
              else
              {
                DeviceState = -1073741130;
              }
            }
            else
            {
              DeviceState = -1073741811;
            }
          }
          else if ( *((_DWORD *)v55 + 144) == 1 )
          {
            if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)v29 + 2) + 16LL)) )
            {
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v33 + 616) + 8LL) + 200LL))(*((_QWORD *)v55 + 96));
            }
            else
            {
              *v41 = -1LL;
              v21->PresentState.PresentStats.PresentCount = 0;
              v21->PresentState.PresentStats.PresentRefreshCount = -1;
              v21->PresentState.PresentStats.SyncRefreshCount = 0;
              v21->PresentState.PresentStats.SyncQPCTime.QuadPart = 0LL;
            }
          }
          else
          {
            DeviceState = -1073741130;
          }
          goto LABEL_86;
        }
        if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v29 + 2) + 16LL) + 200LL) != 1 )
        {
          DeviceState = -1073741130;
LABEL_86:
          v35 = (DXGGLOBAL **)v54;
          goto LABEL_87;
        }
        v42 = *((_QWORD *)v55 + 231);
        if ( !v42
          || (v43 = *(unsigned int *)(*(_QWORD *)(v42 + 2696) + 80LL),
              v21->PresentState.VidPnSourceId < (unsigned int)v43) )
        {
          DeviceState = DXGDEVICE::QueryLastCompletedPresentIdDWM(
                          v55,
                          v21->PresentState.VidPnSourceId,
                          &v21->PresentStateDWM.PresentStatsDWM);
          goto LABEL_86;
        }
      }
      else
      {
        if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v29 + 2) + 16LL) + 200LL) != 1 )
        {
          DeviceState = -1073741130;
          goto LABEL_86;
        }
        v45 = *((_QWORD *)v55 + 231);
        if ( !v45
          || (v43 = *(unsigned int *)(*(_QWORD *)(v45 + 2696) + 80LL),
              v21->PresentState.VidPnSourceId < (unsigned int)v43) )
        {
          DeviceState = DXGDEVICE::QueryLastCompletedPresentId(
                          v55,
                          v21->PresentState.VidPnSourceId,
                          &v21->PresentState.PresentStats);
          goto LABEL_86;
        }
      }
      v44 = WdLogNewEntry5_WdWarning(v43, v32, v33);
      *(_QWORD *)(v44 + 24) = v21->PresentState.VidPnSourceId;
      DeviceState = -1073741811;
      *(_QWORD *)(v44 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v44);
      goto LABEL_86;
    }
    p_PresentState = &v21->PresentState;
    v47 = 0;
    v65 = 0;
    if ( v21 == (_D3DKMT_GETDEVICESTATE *)-8LL )
    {
      v48 = WdLogNewEntry5_WdAssertion(StateType, v32);
      *(_QWORD *)(v48 + 24) = 10076LL;
      WdLogEvent5_WdAssertion(v48);
    }
    if ( *((_DWORD *)v55 + 144) != 1 )
    {
      switch ( *((_DWORD *)v55 + 144) )
      {
        case 2:
          p_PresentState->VidPnSourceId = 2;
          break;
        case 3:
LABEL_80:
          p_PresentState->VidPnSourceId = 3;
          break;
        case 4:
LABEL_82:
          p_PresentState->VidPnSourceId = 4;
          break;
        default:
          v49 = WdLogNewEntry5_WdAssertion((unsigned int)(*((_DWORD *)v55 + 144) - 3), v32);
          *(_QWORD *)(v49 + 24) = 10183LL;
          WdLogEvent5_WdAssertion(v49);
          p_PresentState->VidPnSourceId = 4;
LABEL_84:
          v47 = -1073741823;
          break;
      }
LABEL_85:
      DeviceState = v47;
      goto LABEL_86;
    }
    if ( (*((_BYTE *)v55 + 1869) & 1) != 0 )
    {
      v50 = *(unsigned int *)(*((_QWORD *)v55 + 56) + 16LL);
    }
    else
    {
      v47 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v29 + 2) + 616LL)
                                                                          + 8LL)
                                                              + 192LL))(
              *((_QWORD *)v55 + 96),
              &v65);
      v50 = v65;
    }
    v51 = (unsigned int)v50 & 0x80000000;
    LODWORD(v50) = v50 & 0x7FFFFFFF;
    v65 = v50;
    if ( v47 < 0 )
      goto LABEL_85;
    v33 = 0x1C0000000uLL;
    switch ( (int)v50 )
    {
      case 0:
        LOBYTE(v5) = (_DWORD)v51 != 0;
        p_PresentState->VidPnSourceId = v5 + 1;
        goto LABEL_85;
      case 2:
      case 11:
      case 12:
      case 13:
        p_PresentState->VidPnSourceId = 5;
        goto LABEL_85;
      case 6:
        p_PresentState->VidPnSourceId = 6;
        goto LABEL_85;
      case 7:
        goto LABEL_80;
      case 9:
      case 10:
      case 15:
      case 16:
      case 17:
      case 18:
      case 19:
      case 24:
        p_PresentState->VidPnSourceId = 7;
        goto LABEL_85;
      case 14:
      case 22:
      case 25:
        goto LABEL_82;
      case 27:
        if ( (unsigned int)Feature_3895685435__private_IsEnabledDeviceUsage() )
          goto LABEL_82;
        goto LABEL_83;
      default:
LABEL_83:
        v52 = WdLogNewEntry5_WdAssertion(v50, v51);
        *(_QWORD *)(v52 + 24) = 10170LL;
        WdLogEvent5_WdAssertion(v52);
        p_PresentState->VidPnSourceId = 5;
        break;
    }
    goto LABEL_84;
  }
  if ( v21->StateType != D3DKMT_DEVICESTATE_RESET )
    goto LABEL_25;
  if ( !(*(unsigned int (**)(void))(*(_QWORD *)(v15 + 88) + 208LL))() )
    v5 = 1;
  *(_DWORD *)(a1 + 8) = v5;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56, v23);
  if ( v58 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v56);
  return 0LL;
}
