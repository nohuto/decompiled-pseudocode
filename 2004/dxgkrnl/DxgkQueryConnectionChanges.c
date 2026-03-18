/*
 * XREFs of DxgkQueryConnectionChanges @ 0x1C00200B0
 * Callers:
 *     DpiFdoHandleDisplayDetectControl @ 0x1C001FE98 (DpiFdoHandleDisplayDetectControl.c)
 *     DpiDxgkDdiDisplayDetectControl @ 0x1C0174C98 (DpiDxgkDdiDisplayDetectControl.c)
 *     DpiIndicateConnectorChangeWorkItem @ 0x1C02C5DD0 (DpiIndicateConnectorChangeWorkItem.c)
 * Callees:
 *     DpiFdoGetChildDescriptor @ 0x1C00198B0 (DpiFdoGetChildDescriptor.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001E440 (DpiCheckForOutstandingD3Requests.c)
 *     DpiFdoHandleQueryConnectionChange @ 0x1C00208E8 (DpiFdoHandleQueryConnectionChange.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0pxqqqqq_EtwWriteTransfer @ 0x1C0026D58 (McTemplateK0pxqqqqq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     DpiEnableD3Requests @ 0x1C00E20CC (DpiEnableD3Requests.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C011F120 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C011F39C (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkEndDisplayCalloutBatch @ 0x1C0175054 (DxgkEndDisplayCalloutBatch.c)
 *     ?DmmUpdateHPDFilteringTelemetry@@YAXPEAXAEAU_DMM_HPD_FILTER_INFO@@PEAU_GUID@@IE@Z @ 0x1C0175104 (-DmmUpdateHPDFilteringTelemetry@@YAXPEAXAEAU_DMM_HPD_FILTER_INFO@@PEAU_GUID@@IE@Z.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C0175228 (DpiPdoHandleChildConnectionChange.c)
 *     ?DmmProcessHPDFiltering@@YA?AW4_DMM_HPD_FILTER_RESULT@@PEAXPEAU_DXGK_CONNECTION_CHANGE@@AEAU_DMM_HPD_FILTER_INFO@@EPEAU_GUID@@@Z @ 0x1C0175B64 (-DmmProcessHPDFiltering@@YA-AW4_DMM_HPD_FILTER_RESULT@@PEAXPEAU_DXGK_CONNECTION_CHANGE@@AEAU_DMM.c)
 *     DxgkStartDisplayCalloutBatch @ 0x1C0175CC8 (DxgkStartDisplayCalloutBatch.c)
 *     DxgkInvalidateVidPnDisplayModeListCache @ 0x1C0217758 (DxgkInvalidateVidPnDisplayModeListCache.c)
 *     DpiFdoHandleTargetConnectionState @ 0x1C02CA934 (DpiFdoHandleTargetConnectionState.c)
 *     ?DmmUpdateTargetLinkTrainingState@@YAJPEAXPEAU_DXGK_CONNECTION_CHANGE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C02E44E8 (-DmmUpdateTargetLinkTrainingState@@YAJPEAXPEAU_DXGK_CONNECTION_CHANGE@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     MonitorRebuildMonitorModeListCache @ 0x1C02F3E6C (MonitorRebuildMonitorModeListCache.c)
 */

__int64 __fastcall DxgkQueryConnectionChanges(__int64 a1, __int64 a2, char a3, char a4, char a5)
{
  __int64 v5; // rbx
  char v6; // r12
  char v8; // r14
  char v9; // si
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r9
  _QWORD *v18; // rdi
  char v19; // r13
  _DWORD *v20; // rax
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r14
  __int64 v26; // rax
  int v27; // r15d
  int v28; // r8d
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rcx
  int v33; // eax
  int v34; // r8d
  _QWORD *v35; // rax
  __int64 v36; // rax
  unsigned int v37; // esi
  __int64 v38; // rcx
  __int64 v39; // rax
  char v40; // si
  __int64 v41; // rdx
  _QWORD *ChildDescriptor; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r9
  _DWORD *v46; // r14
  __int64 v47; // rax
  int v48; // eax
  bool v49; // cl
  __int64 v50; // r9
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rax
  int updated; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // rax
  __int64 v63; // rax
  int v64; // [rsp+20h] [rbp-E0h]
  int v65; // [rsp+28h] [rbp-D8h]
  int v66; // [rsp+30h] [rbp-D0h]
  int v67; // [rsp+38h] [rbp-C8h]
  char v69; // [rsp+51h] [rbp-AFh]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v72[104]; // [rsp+80h] [rbp-80h] BYREF
  _OWORD v73[3]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v74[10]; // [rsp+120h] [rbp+20h] BYREF

  v5 = *(_QWORD *)(a1 + 64);
  v6 = 0;
  v8 = a3;
  v69 = 0;
  v9 = a2;
  if ( !v5 || *(_DWORD *)(v5 + 16) != 1953656900 || *(_DWORD *)(v5 + 20) != 2 )
  {
    v63 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v63 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v63);
    return 3221225485LL;
  }
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v5 + 168)) )
  {
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v5 + 484) )
      DpiCheckForOutstandingD3Requests(v5);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v5 + 168), 1u);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)(v5 + 3304), 1u);
    v6 = 1;
    v69 = 1;
  }
  if ( (unsigned int)(*(_DWORD *)(v5 + 236) - 1) > 1 || *(_DWORD *)(v5 + 3976) == 1 || *(_DWORD *)(v5 + 284) != 1 )
  {
    KeSetEvent((PRKEVENT)(v5 + 3528), 0, 0);
    LODWORD(v13) = -1073741661;
    v61 = WdLogNewEntry5_WdWarning(v59, v58, v60);
    *(_QWORD *)(v61 + 24) = -1073741661LL;
    WdLogEvent5_WdWarning(v61);
    goto LABEL_80;
  }
  if ( (*(_BYTE *)(v5 + 3904) & 1) != 0 )
  {
    LOBYTE(v11) = 1;
    v12 = DpiAcquireCoreSyncAccessSafe(a1, v11);
    v13 = v12;
    if ( v12 < 0 )
    {
      KeSetEvent((PRKEVENT)(v5 + 3528), 0, 0);
      v16 = WdLogNewEntry5_WdError(v15, v14);
      *(_QWORD *)(v16 + 24) = v13;
      WdLogEvent5_WdError(v16);
      goto LABEL_80;
    }
    DxgkStartDisplayCalloutBatch(*(_QWORD *)(v5 + 3896));
  }
  if ( v9 )
  {
    if ( (*(_BYTE *)(v5 + 3905) & 8) != 0 )
    {
      memset(v74, 0, 0x48uLL);
      EtwActivityIdControl(3u, (LPGUID)&v74[1]);
      v18 = *(_QWORD **)(v5 + 3464);
      v74[8] = MEMORY[0xFFFFF78000000014];
      LODWORD(v74[3]) = 60;
      LOBYTE(v74[6]) = -1;
      if ( v18 != (_QWORD *)(v5 + 3464) )
      {
        v19 = v8;
        do
        {
          v20 = v18 - 4;
          v18 = (_QWORD *)*v18;
          if ( v20[4] == 1 )
          {
            v21 = *v20 == 1 ? (unsigned int)v20[1] : 4294967294LL;
            LOBYTE(v17) = 1;
            LOBYTE(v67) = 1;
            LOBYTE(v66) = a5;
            LOBYTE(v65) = v19;
            LOBYTE(v64) = a4;
            v22 = DpiPdoHandleChildConnectionChange(
                    *(_QWORD *)(v5 + 24),
                    (unsigned int)v20[6],
                    v21,
                    v17,
                    v64,
                    v65,
                    v66,
                    v67,
                    v74);
            v25 = v22;
            if ( v22 < 0 )
            {
              v26 = WdLogNewEntry5_WdError(v24, v23);
              *(_QWORD *)(v26 + 24) = v25;
              WdLogEvent5_WdError(v26);
            }
          }
        }
        while ( v18 != (_QWORD *)(v5 + 3464) );
        v8 = v19;
      }
    }
  }
  do
  {
    while ( 1 )
    {
      v27 = 0;
      memset(v73, 0, sizeof(v73));
      memset(v72, 0, sizeof(v72));
      EtwActivityIdControl(3u, (LPGUID)&v72[32]);
      *(_QWORD *)&v72[88] = MEMORY[0xFFFFF78000000014];
      *(_DWORD *)&v72[48] = 60;
      v72[72] = -1;
      v72[101] = a5;
      v72[100] = v8;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 3520), &LockHandle);
      *(_DWORD *)(v5 + 3516) = 2;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v29 = *(_QWORD *)(v5 + 48);
      v30 = *(_QWORD *)(v5 + 40);
      if ( (*(_BYTE *)(v5 + 3905) & 8) != 0 )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0pxqqqqq_EtwWriteTransfer(
            0,
            (unsigned int)&EventEnterDdiQueryConnectionChange,
            v28,
            v29,
            0,
            0,
            0,
            -2,
            0,
            0);
        v33 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(v30 + 1136))(v29, v72);
        v13 = v33;
        if ( bTracingEnabled )
        {
          if ( v33 < 0 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0pxqqqqq_EtwWriteTransfer(
                0,
                (unsigned int)&EventEnterDdiQueryConnectionChange,
                v34,
                v29,
                0,
                0,
                0,
                -2,
                0,
                v33);
          }
          else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            McTemplateK0pxqqqqq_EtwWriteTransfer(
              HIBYTE(*(_DWORD *)&v72[8]) & 0xF,
              (unsigned int)&EventExitDdiQueryConnectionChange,
              v34,
              v29,
              v72[0],
              v72[8],
              v72[11] & 0xF,
              v72[12],
              v72[16],
              v33);
          }
        }
        v35 = (_QWORD *)WdLogNewEntry5_WdTrace();
        v35[3] = *(unsigned int *)v72;
        v35[4] = *(_DWORD *)&v72[8] & 0xFFFFFF;
        v35[5] = (*(_QWORD *)&v72[8] >> 24) & 0xFLL;
        v32 = *(unsigned int *)&v72[16];
        v35[6] = *(unsigned int *)&v72[16];
        v35[7] = v13;
      }
      else
      {
        LODWORD(v13) = DpiFdoHandleQueryConnectionChange(v5, v72);
      }
      if ( (int)v13 < 0 )
      {
        v36 = WdLogNewEntry5_WdError(v32, v31);
        *(_QWORD *)(v36 + 24) = (int)v13;
        WdLogEvent5_WdError(v36);
        break;
      }
      if ( (_DWORD)v13 == 255 )
        break;
      if ( v72[102] )
      {
        DxgkInvalidateVidPnDisplayModeListCache(*(_QWORD *)(v5 + 3896));
        MonitorRebuildMonitorModeListCache(*(struct DXGADAPTER **)(v5 + 3896));
      }
      else
      {
        v37 = *(_DWORD *)&v72[8] & 0xFFFFFF | (*(_DWORD *)&v72[96] << 24);
        v38 = HIBYTE(*(_DWORD *)&v72[8]) & 0xF;
        if ( (unsigned int)v38 < 4 )
        {
LABEL_48:
          v39 = WdLogNewEntry5_WdError(v38, v31);
          *(_QWORD *)(v39 + 24) = (*(_QWORD *)&v72[8] >> 24) & 0xFLL;
          *(_QWORD *)(v39 + 32) = (int)v13;
          WdLogEvent5_WdError(v39);
          LODWORD(v13) = -1073741811;
LABEL_49:
          v8 = a3;
          if ( (int)v13 < 0 )
            break;
        }
        else
        {
          if ( (unsigned int)v38 <= 6 )
          {
            updated = DpiFdoHandleTargetConnectionState(v5, v72);
          }
          else
          {
            if ( (((_DWORD)v38 - 8) & 0xFFFFFFFD) != 0 )
            {
              if ( (unsigned int)(v38 - 12) > 2 )
                goto LABEL_48;
            }
            else
            {
              ChildDescriptor = DpiFdoGetChildDescriptor(v5, v37);
              v46 = ChildDescriptor;
              if ( !ChildDescriptor )
              {
                v47 = WdLogNewEntry5_WdError(v44, v43);
                *(_QWORD *)(v47 + 24) = -1073741810LL;
LABEL_78:
                WdLogEvent5_WdError(v47);
                goto LABEL_49;
              }
              if ( *(_DWORD *)ChildDescriptor == 1 )
              {
                LOBYTE(v45) = (*(_BYTE *)(v5 + 3905) & 0x10) != 0;
                v48 = DmmProcessHPDFiltering(*(_QWORD *)(v5 + 3896), v72, v73, v45, &v72[32]);
                LODWORD(v45) = *(_DWORD *)&v72[8];
                v27 = v48;
              }
              if ( v27 != 1 )
              {
                v49 = v27 == 3 || v72[100];
                v50 = v45 & 0xF000000;
                LOBYTE(v67) = v72[103];
                LOBYTE(v50) = (_DWORD)v50 == 167772160;
                LOBYTE(v66) = v72[101];
                LOBYTE(v65) = v49;
                LOBYTE(v64) = 0;
                v51 = DpiPdoHandleChildConnectionChange(
                        *(_QWORD *)(v5 + 24),
                        v37,
                        *(unsigned int *)&v72[12],
                        v50,
                        v64,
                        v65,
                        v66,
                        v67,
                        &v72[24]);
                v13 = v51;
                if ( v51 < 0 )
                {
                  v54 = WdLogNewEntry5_WdError(v53, v52);
                  *(_QWORD *)(v54 + 24) = v13;
                  WdLogEvent5_WdError(v54);
                }
              }
              if ( *v46 == 1 )
                DmmUpdateHPDFilteringTelemetry(
                  *(void **)(v5 + 3896),
                  (struct _DMM_HPD_FILTER_INFO *)v73,
                  (struct _GUID *)&v72[32],
                  v37,
                  (_DWORD)v13 == 0x40000000);
              if ( (v27 & 0xFFFFFFFD) == 0 || v27 == 3 && (_DWORD)v13 != 0x40000000 )
                goto LABEL_49;
              v8 = a3;
            }
            updated = DmmUpdateTargetLinkTrainingState(
                        *(void **)(v5 + 3896),
                        (struct _DXGK_CONNECTION_CHANGE *)v72,
                        (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)&v72[24],
                        v27 != 0);
          }
          v13 = updated;
          if ( updated < 0 )
          {
            v47 = WdLogNewEntry5_WdError(v57, v56);
            *(_QWORD *)(v47 + 24) = v13;
            goto LABEL_78;
          }
        }
      }
    }
    v40 = 1;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 3520), &LockHandle);
    if ( (*(_DWORD *)(v5 + 3516) & 1) == 0 )
    {
      *(_DWORD *)(v5 + 3516) = 0;
      v40 = 0;
      KeSetEvent((PRKEVENT)(v5 + 3528), 0, 0);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  while ( v40 );
  v6 = v69;
  if ( (*(_BYTE *)(v5 + 3904) & 1) != 0 )
  {
    DxgkEndDisplayCalloutBatch(*(_QWORD *)(v5 + 3896));
    LOBYTE(v41) = 1;
    DpiReleaseCoreSyncAccessSafe(a1, v41);
  }
  if ( (int)v13 < 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(v5 + 3644), 0xFFFFFFFE);
    IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v5 + 152), BusRelations);
  }
LABEL_80:
  if ( v6 )
  {
    ExReleaseResourceLite((PERESOURCE)(v5 + 3304));
    KeLeaveCriticalRegion();
    if ( *(_BYTE *)(v5 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v5 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v5 + 168));
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v13;
}
