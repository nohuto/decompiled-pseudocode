/*
 * XREFs of DxgkGetDeviceStateInternal @ 0x1C017C6C0
 * Callers:
 *     ?UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1C0008030 (-UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 *     DxgkGetDeviceState @ 0x1C017C680 (DxgkGetDeviceState.c)
 *     NtDxgkUpdateTrackedWorkload @ 0x1C0346F60 (NtDxgkUpdateTrackedWorkload.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0009904 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000A924 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x1C0044CF4 (McTemplateK0pt_EtwWriteTransfer.c)
 *     McTemplateK0pqqqqxx_EtwWriteTransfer @ 0x1C004505C (McTemplateK0pqqqqxx_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z @ 0x1C01BECBC (-GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z.c)
 *     ?QueryLastCompletedPresentIdDWM@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS_DWM2@@@Z @ 0x1C02230AA (-QueryLastCompletedPresentIdDWM@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS_DWM2@@@Z.c)
 *     ?QueryLastCompletedPresentId@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z @ 0x1C02E688C (-QueryLastCompletedPresentId@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C03099FC (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?VmBusSendGetDeviceState@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_GETDEVICESTATE@@@Z @ 0x1C0377DE4 (-VmBusSendGetDeviceState@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3.c)
 */

__int64 __fastcall DxgkGetDeviceStateInternal(ULONG64 a1, char a2, __int64 a3)
{
  int v5; // esi
  unsigned int LastCompletedPresentIdDWM; // r12d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v13; // rbx
  __int64 v14; // r13
  _D3DKMT_GETDEVICESTATE *v15; // rbx
  _D3DKMT_GETDEVICESTATE *v16; // rax
  volatile signed __int64 *v17; // rcx
  __int64 v18; // r8
  struct DXGADAPTER *v19; // rcx
  D3DKMT_DEVICESTATE_TYPE v20; // ecx
  __int64 v21; // rax
  __int64 VidPnSourceId; // rcx
  DXGGLOBAL **v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int32 v27; // ecx
  D3DKMT_DEVICEPRESENT_STATE *p_PresentState; // r13
  int v29; // edx
  int v30; // ecx
  bool v31; // al
  int v32; // ecx
  __int64 v33; // rcx
  __int64 v34; // r8
  struct DXGTHREAD *Current; // rax
  D3DKMT_DEVICESTATE_TYPE StateType; // edx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  D3DKMT_DEVICESTATE_TYPE v39; // eax
  __int32 v40; // ecx
  int v41; // ecx
  _QWORD *v42; // rdx
  __int64 v43; // rax
  int v44; // edx
  int v45; // edx
  __int64 v46; // [rsp+20h] [rbp-138h]
  __int64 v47; // [rsp+28h] [rbp-130h]
  __int64 v48; // [rsp+30h] [rbp-128h]
  __int64 v49; // [rsp+38h] [rbp-120h]
  struct DXGDEVICE *v50; // [rsp+50h] [rbp-108h] BYREF
  int v51; // [rsp+58h] [rbp-100h] BYREF
  int v52; // [rsp+60h] [rbp-F8h] BYREF
  __int64 v53; // [rsp+68h] [rbp-F0h]
  char v54; // [rsp+70h] [rbp-E8h]
  struct DXGDEVICE *v55; // [rsp+78h] [rbp-E0h]
  struct DXGADAPTER *v56; // [rsp+80h] [rbp-D8h]
  struct DXGDEVICE *v57; // [rsp+88h] [rbp-D0h] BYREF
  volatile signed __int64 *v58; // [rsp+90h] [rbp-C8h]
  volatile signed __int64 *v59; // [rsp+98h] [rbp-C0h]
  DXGSESSIONMGR *v60; // [rsp+A0h] [rbp-B8h]
  volatile signed __int64 *v61; // [rsp+A8h] [rbp-B0h]
  _D3DKMT_GETDEVICESTATE v62; // [rsp+B0h] [rbp-A8h] BYREF
  __int128 v63; // [rsp+E8h] [rbp-70h] BYREF
  __int128 v64; // [rsp+F8h] [rbp-60h]
  __int128 v65; // [rsp+108h] [rbp-50h]
  __int64 v66; // [rsp+118h] [rbp-40h]

  v52 = -1;
  v5 = 0;
  v53 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v54 = 1;
    v52 = 2028;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2028);
  }
  else
  {
    v54 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v52, 2028);
  LastCompletedPresentIdDWM = 0;
  CurrentProcess = PsGetCurrentProcess(v8, v7, v9, v10);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v13 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v14 = *((_QWORD *)Current + 3)) == 0 )
  {
    v14 = v13;
    if ( !v13 )
    {
      LastCompletedPresentIdDWM = -1073741811;
      WdLogSingleEntry1(2LL, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid process context, returning 0x%I64x",
        -1073741811LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52);
      if ( !v54 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
        return LastCompletedPresentIdDWM;
      goto LABEL_124;
    }
  }
  memset(&v62, 0, sizeof(v62));
  v15 = &v62;
  if ( a2 )
  {
    v16 = (_D3DKMT_GETDEVICESTATE *)a1;
    if ( a1 >= MmUserProbeAddress )
      v16 = (_D3DKMT_GETDEVICESTATE *)MmUserProbeAddress;
    v62 = *v16;
  }
  else
  {
    v15 = (_D3DKMT_GETDEVICESTATE *)a1;
  }
  if ( !a2 || v15->StateType != D3DKMT_DEVICESTATE_RESET )
  {
    v50 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v57, v15->hDevice, (struct _KTHREAD **)v14, &v50);
    v55 = v50;
    if ( !v50 )
    {
      LastCompletedPresentIdDWM = -1073741811;
      WdLogSingleEntry2(2LL, v15->hDevice, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
        v15->hDevice,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      if ( v57 && _InterlockedExchangeAdd64((volatile signed __int64 *)v57 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v57 + 2), v57);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52);
      if ( !v54 )
        return LastCompletedPresentIdDWM;
      v24 = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
        return LastCompletedPresentIdDWM;
LABEL_124:
      McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v52);
      return LastCompletedPresentIdDWM;
    }
    v17 = *(volatile signed __int64 **)(*((_QWORD *)v50 + 2) + 16LL);
    v56 = (struct DXGADAPTER *)v17;
    v61 = v17;
    v58 = v17 + 3;
    _InterlockedIncrement64(v17 + 3);
    v59 = v17 + 17;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v59, 0LL);
    v19 = v56;
    if ( !*((_BYTE *)v56 + 209) )
      goto LABEL_14;
    StateType = v15->StateType;
    if ( ((StateType - 1) & 0xFFFFFFFA) != 0 || StateType == D3DKMT_DEVICESTATE_PRESENT )
    {
      if ( *((_DWORD *)DXGGLOBAL_GetGlobal() + 450) < 0x20u
        || ((v60 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122)) == 0LL
          ? (SessionDataForSpecifiedSession = 0LL)
          : (CurrentProcessSessionId = PsGetCurrentProcessSessionId(),
             SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                v60,
                                                CurrentProcessSessionId)),
            !*((_DWORD *)SessionDataForSpecifiedSession + 4738) || v15->StateType != D3DKMT_DEVICESTATE_PRESENT_DWM) )
      {
LABEL_14:
        v20 = v15->StateType;
        if ( v20 == D3DKMT_DEVICESTATE_PRESENT_DWM )
        {
          if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v55 + 2) + 16LL) + 200LL) == 1 )
          {
            v21 = *((_QWORD *)v50 + 231);
            if ( !v21
              || (VidPnSourceId = v15->PresentState.VidPnSourceId,
                  (unsigned int)VidPnSourceId < *(_DWORD *)(*(_QWORD *)(v21 + 2792) + 96LL)) )
            {
              v63 = 0LL;
              v64 = 0LL;
              v65 = 0LL;
              v66 = 0LL;
              LastCompletedPresentIdDWM = DXGDEVICE::QueryLastCompletedPresentIdDWM(
                                            v50,
                                            v15->PresentState.VidPnSourceId,
                                            (struct _D3DKMT_PRESENT_STATS_DWM2 *)&v63);
              *((_QWORD *)&v15->PresentQueueState + 1) = *(_QWORD *)((char *)&v63 + 4);
              v15->PresentStateDWM.PresentStatsDWM.PresentQPCTime.QuadPart = v64;
              v15->PresentState.PresentStats.SyncQPCTime.LowPart = DWORD2(v64);
              v15->PresentState.PresentStats.SyncGPUTime.QuadPart = v65;
              v15->PresentStateDWM.PresentStatsDWM.CustomPresentDuration = DWORD2(v65);
              goto LABEL_19;
            }
            goto LABEL_103;
          }
          LastCompletedPresentIdDWM = -1073741130;
          goto LABEL_19;
        }
        v27 = v20 - 1;
        if ( !v27 )
        {
          p_PresentState = &v15->PresentState;
          LastCompletedPresentIdDWM = 0;
          v51 = 0;
          if ( v15 == (_D3DKMT_GETDEVICESTATE *)-8LL )
          {
            WdLogSingleEntry1(1LL, 10076LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"pExecutionState != NULL",
              10076LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          v18 = 1LL;
          v29 = *((_DWORD *)v50 + 144);
          if ( v29 == 1 )
          {
            if ( (*((_BYTE *)v50 + 1869) & 1) != 0 )
            {
              v30 = *(_DWORD *)(*((_QWORD *)v50 + 56) + 16LL);
            }
            else
            {
              LastCompletedPresentIdDWM = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v55 + 2) + 624LL)
                                                                                               + 8LL)
                                                                                   + 192LL))(
                                            *((_QWORD *)v50 + 96),
                                            &v51);
              v30 = v51;
              v18 = 1LL;
            }
            v31 = v30 < 0;
            v32 = v30 & 0x7FFFFFFF;
            v51 = v32;
            if ( (LastCompletedPresentIdDWM & 0x80000000) == 0 )
            {
              if ( v32 )
              {
                switch ( v32 )
                {
                  case 2:
                  case 11:
                  case 12:
                  case 13:
                    p_PresentState->VidPnSourceId = 5;
                    break;
                  case 6:
                    p_PresentState->VidPnSourceId = 6;
                    break;
                  case 7:
                    goto LABEL_117;
                  case 9:
                  case 10:
                  case 15:
                  case 16:
                  case 17:
                  case 18:
                  case 19:
                  case 24:
                    p_PresentState->VidPnSourceId = 7;
                    break;
                  case 14:
                  case 22:
                  case 25:
                    goto LABEL_110;
                  default:
                    WdLogSingleEntry1(1LL, 10163LL);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      -1,
                      (__int64)L"Unexpected device error!",
                      10163LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                    p_PresentState->VidPnSourceId = 5;
                    break;
                }
              }
              else
              {
                if ( v31 || *((_BYTE *)v50 + 73) )
                  v18 = 2LL;
                p_PresentState->VidPnSourceId = v18;
              }
            }
          }
          else
          {
            v44 = v29 - 2;
            if ( v44 )
            {
              v45 = v44 - 1;
              if ( v45 )
              {
                if ( v45 != 1 )
                {
                  WdLogSingleEntry1(1LL, 10175LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"Unexpected device execution state!",
                    10175LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
LABEL_110:
                p_PresentState->VidPnSourceId = 4;
              }
              else
              {
LABEL_117:
                p_PresentState->VidPnSourceId = 3;
              }
            }
            else
            {
              p_PresentState->VidPnSourceId = 2;
            }
          }
          goto LABEL_19;
        }
        v40 = v27 - 1;
        if ( v40 )
        {
          v41 = v40 - 3;
          if ( v41 )
          {
            if ( v41 == 1 )
            {
              if ( *((_DWORD *)v50 + 144) == 1 )
              {
                LastCompletedPresentIdDWM = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v55 + 2) + 624LL) + 8LL)
                                                                                              + 184LL))(
                                              *((_QWORD *)v50 + 96),
                                              v15->PresentState.VidPnSourceId,
                                              0LL);
                v15->PresentQueueState.bQueuedPresentLimitReached = 0;
                if ( LastCompletedPresentIdDWM == -1071775486 )
                {
                  LastCompletedPresentIdDWM = 0;
                  v15->PresentQueueState.bQueuedPresentLimitReached = 1;
                }
              }
              else
              {
                LastCompletedPresentIdDWM = -1073741130;
              }
            }
            else
            {
              LastCompletedPresentIdDWM = -1073741811;
            }
          }
          else if ( *((_DWORD *)v50 + 144) == 1 )
          {
            if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)v55 + 2) + 16LL)) )
            {
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v18 + 624) + 8LL) + 200LL))(*((_QWORD *)v50 + 96));
            }
            else
            {
              *v42 = -1LL;
              v15->PresentState.PresentStats.PresentCount = 0;
              v15->PresentState.PresentStats.PresentRefreshCount = -1;
              v15->PresentState.PresentStats.SyncRefreshCount = 0;
              v15->PresentState.PresentStats.SyncQPCTime.QuadPart = 0LL;
            }
          }
          else
          {
            LastCompletedPresentIdDWM = -1073741130;
          }
          goto LABEL_19;
        }
        if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v55 + 2) + 16LL) + 200LL) == 1 )
        {
          v43 = *((_QWORD *)v50 + 231);
          if ( v43 )
          {
            VidPnSourceId = v15->PresentState.VidPnSourceId;
            if ( (unsigned int)VidPnSourceId >= *(_DWORD *)(*(_QWORD *)(v43 + 2792) + 96LL) )
            {
LABEL_103:
              LastCompletedPresentIdDWM = -1073741811;
              WdLogSingleEntry2(3LL, VidPnSourceId, -1073741811LL);
              goto LABEL_19;
            }
          }
          LastCompletedPresentIdDWM = DXGDEVICE::QueryLastCompletedPresentId(
                                        v50,
                                        v15->PresentState.VidPnSourceId,
                                        &v15->PresentState.PresentStats);
LABEL_19:
          if ( bTracingEnabled )
          {
            if ( v15->StateType == D3DKMT_DEVICESTATE_EXECUTION )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              {
                LODWORD(v46) = v15->ExecutionState;
                McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &DeviceStateEvent, v18, v50, v46);
              }
            }
            else if ( v15->StateType == D3DKMT_DEVICESTATE_PRESENT && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            {
              LODWORD(v49) = v15->PresentState.PresentStats.SyncRefreshCount;
              LODWORD(v48) = v15->PresentState.PresentStats.PresentRefreshCount;
              LODWORD(v47) = v15->PresentState.PresentStats.PresentCount;
              LODWORD(v46) = v15->ExecutionState;
              McTemplateK0pqqqqxx_EtwWriteTransfer(
                (unsigned int)(v15->StateType - 1),
                &DevicePresentStateEvent,
                v18,
                v50,
                v46,
                v47,
                v48,
                v49,
                v15->PresentState.PresentStats.SyncQPCTime.QuadPart,
                v15->PresentState.PresentStats.SyncGPUTime.QuadPart);
            }
          }
          if ( (LastCompletedPresentIdDWM & 0x80000000) == 0 && a2 )
          {
            if ( a1 + 56 > MmUserProbeAddress || a1 + 56 <= a1 )
              *(_BYTE *)MmUserProbeAddress = 0;
            *(_OWORD *)a1 = *(_OWORD *)&v15->hDevice;
            *(_OWORD *)(a1 + 16) = *(_OWORD *)(&v15->PresentQueueState + 1);
            *(_OWORD *)(a1 + 32) = *(_OWORD *)(&v15->PresentQueueState + 3);
            *(_QWORD *)(a1 + 48) = *((_QWORD *)&v15->PresentQueueState + 5);
            v23 = (DXGGLOBAL **)v56;
          }
          else
          {
            v23 = (DXGGLOBAL **)v56;
          }
          ExReleasePushLockSharedEx(v59, 0LL);
          KeLeaveCriticalRegion();
          if ( _InterlockedExchangeAdd64(v58, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(v23[2], (struct DXGADAPTER *)v23);
          if ( v57 && _InterlockedExchangeAdd64((volatile signed __int64 *)v57 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v57 + 2), v57);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52);
          if ( !v54 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
            return LastCompletedPresentIdDWM;
          goto LABEL_124;
        }
LABEL_104:
        LastCompletedPresentIdDWM = -1073741130;
        goto LABEL_19;
      }
      v19 = v56;
    }
    LOBYTE(v5) = *((_DWORD *)v19 + 50) == 1;
    v39 = v15->StateType;
    if ( v5 )
    {
      if ( v39 == D3DKMT_DEVICESTATE_EXECUTION )
      {
        if ( *((_DWORD *)DXGGLOBAL_GetGlobal() + 450) >= 0x20u )
          LastCompletedPresentIdDWM = DXGDEVICE::GetDeviceExecutionState(v50, &v15->ExecutionState);
        else
          v15->PresentState.VidPnSourceId = 1;
      }
      else
      {
        LastCompletedPresentIdDWM = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetDeviceState(
                                      (struct DXGADAPTER *)((char *)v19 + 4344),
                                      (struct DXGPROCESS *)v14,
                                      v50,
                                      v15);
      }
      goto LABEL_19;
    }
    if ( v39 == D3DKMT_DEVICESTATE_EXECUTION )
    {
      v15->PresentState.VidPnSourceId = 4;
      goto LABEL_19;
    }
    goto LABEL_104;
  }
  if ( !(*(unsigned int (**)(void))(*(_QWORD *)(v14 + 88) + 208LL))() )
    v5 = 1;
  *(_DWORD *)(a1 + 8) = v5;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52);
  if ( v54 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v33, &EventProfilerExit, v34, v52);
  return 0LL;
}
