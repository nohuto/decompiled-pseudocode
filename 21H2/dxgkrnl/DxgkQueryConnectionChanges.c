/*
 * XREFs of DxgkQueryConnectionChanges @ 0x1C0024C50
 * Callers:
 *     DpiFdoHandleDisplayDetectControl @ 0x1C0024A9C (DpiFdoHandleDisplayDetectControl.c)
 *     DpiDxgkDdiDisplayDetectControl @ 0x1C01F3488 (DpiDxgkDdiDisplayDetectControl.c)
 *     DpiIndicateConnectorChangeWorkItem @ 0x1C01F3910 (DpiIndicateConnectorChangeWorkItem.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0012AB4 (_tlgKeywordOn.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C0012BA4 (DpiCheckForOutstandingD3Requests.c)
 *     DpiFdoGetChildDescriptor @ 0x1C001E234 (DpiFdoGetChildDescriptor.c)
 *     DpiDxgkDdiQueryConnectionChange @ 0x1C002557C (DpiDxgkDdiQueryConnectionChange.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3444@Z @ 0x1C00602F8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U2@U2@U2@@-$_tlgWriteTemplate@$$A6.c)
 *     MonitorQuerySkippedRemovalState @ 0x1C015772C (MonitorQuerySkippedRemovalState.c)
 *     DpiEnableD3Requests @ 0x1C016E8A8 (DpiEnableD3Requests.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01B32DC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C01B40A0 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C01B445C (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkEndDisplayCalloutBatch @ 0x1C01F3A78 (DxgkEndDisplayCalloutBatch.c)
 *     DxgkStartDisplayCalloutBatch @ 0x1C01F3B34 (DxgkStartDisplayCalloutBatch.c)
 *     ?DmmProcessHPDFiltering@@YA?AW4_DMM_HPD_FILTER_RESULT@@PEAXPEAU_DXGK_CONNECTION_CHANGE@@AEAU_DMM_HPD_FILTER_INFO@@EPEAU_GUID@@@Z @ 0x1C02061E4 (-DmmProcessHPDFiltering@@YA-AW4_DMM_HPD_FILTER_RESULT@@PEAXPEAU_DXGK_CONNECTION_CHANGE@@AEAU_DMM.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C02164B8 (DpiPdoHandleChildConnectionChange.c)
 *     ?DmmUpdateHPDFilteringTelemetry@@YAXPEAXAEAU_DMM_HPD_FILTER_INFO@@PEAU_GUID@@IE@Z @ 0x1C021683C (-DmmUpdateHPDFilteringTelemetry@@YAXPEAXAEAU_DMM_HPD_FILTER_INFO@@PEAU_GUID@@IE@Z.c)
 *     DxgkInvalidateVidPnDisplayModeListCache @ 0x1C02C4FD8 (DxgkInvalidateVidPnDisplayModeListCache.c)
 *     DpiFdoHandleTargetConnectionState @ 0x1C038A234 (DpiFdoHandleTargetConnectionState.c)
 *     ?DmmUpdateTargetLinkTrainingState@@YAJPEAXPEAU_DXGK_CONNECTION_CHANGE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C03A4A78 (-DmmUpdateTargetLinkTrainingState@@YAJPEAXPEAU_DXGK_CONNECTION_CHANGE@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     MonitorRebuildMonitorModeListCache @ 0x1C03B0A28 (MonitorRebuildMonitorModeListCache.c)
 */

__int64 __fastcall DxgkQueryConnectionChanges(__int64 a1, char a2, char a3, char a4, BOOLEAN a5, char a6)
{
  __int64 v6; // rbx
  char v8; // r12
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rdi
  __int64 v14; // rcx
  _QWORD *v15; // rdi
  _QWORD *v16; // rax
  int v17; // eax
  KSPIN_LOCK *v18; // rsi
  int v19; // r15d
  int v20; // eax
  D3DDDI_VIDEO_PRESENT_TARGET_ID v21; // r14d
  unsigned int v22; // ecx
  char v23; // si
  bool v24; // zf
  _QWORD *v25; // rsi
  __int64 v26; // r13
  __int64 v27; // rcx
  _QWORD *v28; // r14
  __int64 v29; // rdx
  int v30; // ecx
  unsigned __int64 v31; // rdx
  _QWORD *ChildDescriptor; // rax
  __int64 v33; // r9
  _DWORD *v34; // r12
  struct _DXGK_CONNECTION_CHANGE *v35; // rsi
  int v36; // ecx
  int v37; // r8d
  int v38; // r9d
  char v39; // cl
  int v40; // eax
  int updated; // eax
  __int64 v42; // rdx
  int v44; // [rsp+20h] [rbp-E0h]
  char v45; // [rsp+50h] [rbp-B0h] BYREF
  char v46; // [rsp+51h] [rbp-AFh]
  int ConnectionChangeId_high; // [rsp+54h] [rbp-ACh] BYREF
  int ConnectionChangeId; // [rsp+58h] [rbp-A8h] BYREF
  int v49; // [rsp+5Ch] [rbp-A4h] BYREF
  int v50; // [rsp+60h] [rbp-A0h] BYREF
  int v51[2]; // [rsp+68h] [rbp-98h]
  __int64 v52; // [rsp+70h] [rbp-90h] BYREF
  __int64 v53; // [rsp+78h] [rbp-88h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-80h] BYREF
  struct _DXGK_CONNECTION_CHANGE v55[5]; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v56[8]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v57; // [rsp+140h] [rbp+40h]
  __int64 v58; // [rsp+148h] [rbp+48h]
  int v59; // [rsp+150h] [rbp+50h]
  int v60; // [rsp+154h] [rbp+54h]
  int v61; // [rsp+158h] [rbp+58h]
  int v62; // [rsp+15Ch] [rbp+5Ch]
  __int64 v63; // [rsp+160h] [rbp+60h]
  _OWORD v64[3]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v65[10]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v66[10]; // [rsp+1F0h] [rbp+F0h] BYREF

  v6 = *(_QWORD *)(a1 + 64);
  v45 = a3;
  *(_QWORD *)v51 = a1;
  v46 = 0;
  v8 = a3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !v6 || *(_DWORD *)(v6 + 16) != 1953656900 || *(_DWORD *)(v6 + 20) != 2 )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    return 3221225485LL;
  }
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v6 + 168)) )
  {
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v6 + 484) )
      DpiCheckForOutstandingD3Requests(v6);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v6 + 168), 1u);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)(v6 + 3304), 1u);
    v46 = 1;
  }
  if ( (unsigned int)(*(_DWORD *)(v6 + 236) - 1) > 1 || *(_DWORD *)(v6 + 3984) == 1 || *(_DWORD *)(v6 + 284) != 1 )
  {
    KeSetEvent((PRKEVENT)(v6 + 3528), 0, 0);
    v14 = 3LL;
    v13 = -1073741661LL;
    goto LABEL_81;
  }
  if ( (*(_BYTE *)(v6 + 3904) & 1) != 0 )
  {
    LOBYTE(v11) = 1;
    v12 = DpiAcquireCoreSyncAccessSafe(a1, v11);
    v13 = v12;
    if ( v12 < 0 )
    {
      KeSetEvent((PRKEVENT)(v6 + 3528), 0, 0);
      v14 = 2LL;
LABEL_81:
      WdLogSingleEntry1(v14, v13);
      goto LABEL_82;
    }
    DxgkStartDisplayCalloutBatch(*(_QWORD *)(v6 + 3896));
  }
  if ( a2 )
  {
    if ( (*(_BYTE *)(v6 + 3905) & 8) != 0 )
    {
      memset(v65, 0, 0x48uLL);
      EtwActivityIdControl(3u, (LPGUID)&v65[1]);
      v15 = *(_QWORD **)(v6 + 3464);
      v65[8] = MEMORY[0xFFFFF78000000014];
      LODWORD(v65[3]) = 60;
      LOBYTE(v65[6]) = -1;
      while ( v15 != (_QWORD *)(v6 + 3464) )
      {
        v16 = v15 - 4;
        v15 = (_QWORD *)*v15;
        if ( *((_DWORD *)v16 + 4) == 1 )
        {
          LOBYTE(v44) = a4;
          v17 = DpiPdoHandleChildConnectionChange(
                  *(_QWORD *)(v6 + 24),
                  *((_DWORD *)v16 + 6),
                  v44,
                  v8,
                  a5,
                  1,
                  0LL,
                  (__int64)v65);
          if ( v17 < 0 )
            WdLogSingleEntry1(2LL, v17);
        }
      }
    }
  }
  v18 = (KSPIN_LOCK *)(v6 + 3520);
  do
  {
    while ( 1 )
    {
      v19 = 0;
      memset(v64, 0, sizeof(v64));
      memset(v55, 0, sizeof(v55));
      EtwActivityIdControl(3u, (LPGUID)&v55[2]);
      *((_QWORD *)&v55[4] + 1) = MEMORY[0xFFFFF78000000014];
      *((_BYTE *)&v55[4].12 + 9) = a5;
      v55[2].TargetConnect.NewTargetId = 60;
      LOBYTE(v55[3].TargetJoin.NewTargetId) = -1;
      *((_BYTE *)&v55[4].12 + 8) = v8;
      KeAcquireInStackQueuedSpinLock(v18, &LockHandle);
      *(_DWORD *)(v6 + 3516) = 2;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v20 = DpiDxgkDdiQueryConnectionChange(v6, *(_QWORD *)(v6 + 40), *(_QWORD *)(v6 + 48), v55);
      v13 = v20;
      if ( v20 < 0 )
      {
LABEL_24:
        WdLogSingleEntry1(2LL, v13);
        break;
      }
      if ( v20 == 255 )
        break;
      if ( *((_BYTE *)&v55[4].12 + 10) )
      {
        DxgkInvalidateVidPnDisplayModeListCache(*(_QWORD *)(v6 + 3896));
        MonitorRebuildMonitorModeListCache(*(struct DXGADAPTER **)(v6 + 3896));
      }
      else
      {
        v21 = *((_DWORD *)v55 + 2) & 0xFFFFFF | (v55[4].TargetConnect.NewTargetId << 24);
        v22 = HIBYTE(*((_DWORD *)v55 + 2)) & 0xF;
        if ( v22 < 4 )
          goto LABEL_32;
        if ( v22 <= 6 )
        {
          updated = DpiFdoHandleTargetConnectionState(v6, v55);
          goto LABEL_72;
        }
        if ( ((v22 - 8) & 0xFFFFFFFD) != 0 )
        {
          if ( v22 - 12 > 2 )
          {
LABEL_32:
            WdLogSingleEntry2(2LL, (*((_QWORD *)v55 + 1) >> 24) & 0xFLL, v20);
            LODWORD(v13) = -1073741811;
            break;
          }
          goto LABEL_68;
        }
        ChildDescriptor = DpiFdoGetChildDescriptor(v6, v21);
        v34 = ChildDescriptor;
        if ( ChildDescriptor )
        {
          if ( *(_DWORD *)ChildDescriptor != 1 )
            goto LABEL_48;
          LOBYTE(v33) = (*(_BYTE *)(v6 + 3905) & 0x10) != 0;
          v19 = DmmProcessHPDFiltering(*(_QWORD *)(v6 + 3896), v55, v64, v33, &v55[2]);
          if ( v19 != 1 )
          {
            LODWORD(v33) = *((_DWORD *)v55 + 2);
LABEL_48:
            v35 = 0LL;
            if ( (v33 & 0xF000000) == 0xA000000 && (v55[0].TargetJoin.NewTargetId & 1) != 0 )
            {
              if ( (*(_DWORD *)(v6 + 3916) & 0x40) != 0 )
              {
                v35 = &v55[1];
              }
              else
              {
                if ( (unsigned int)dword_1C012F8A8 > 5 && tlgKeywordOn((__int64)&dword_1C012F8A8, 0x400000000002LL) )
                {
                  ConnectionChangeId_high = HIDWORD(v55[1].ConnectionChangeId);
                  ConnectionChangeId = v55[1].ConnectionChangeId;
                  v52 = *(_QWORD *)(v6 + 2672);
                  v49 = v38 & 0xFFFFFF;
                  v50 = 1;
                  v53 = 16779264LL;
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                    v36,
                    (unsigned int)&unk_1C0099C64,
                    v37,
                    v38 & 0xFFFFFF,
                    (__int64)&v53,
                    (__int64)&v50,
                    (__int64)&v52,
                    (__int64)&v49,
                    (__int64)&ConnectionChangeId,
                    (__int64)&ConnectionChangeId_high);
                }
                WdLogSingleEntry1(2LL, v13);
              }
            }
            v39 = v19 == 3 || *((_BYTE *)&v55[4].12 + 8);
            LOBYTE(v44) = 0;
            v40 = DpiPdoHandleChildConnectionChange(
                    *(_QWORD *)(v6 + 24),
                    v21,
                    v44,
                    v39,
                    *((BOOLEAN *)&v55[4].12 + 9),
                    *((char *)&v55[4].12 + 11),
                    (__int64)v35,
                    (__int64)&v55[1].TargetJoin.NewTargetId);
            LODWORD(v13) = v40;
            if ( v40 < 0 )
              WdLogSingleEntry1(2LL, v40);
          }
          if ( *v34 == 1 )
            DmmUpdateHPDFilteringTelemetry(
              *(void **)(v6 + 3896),
              (struct _DMM_HPD_FILTER_INFO *)v64,
              (struct _GUID *)&v55[2],
              v21,
              (_DWORD)v13 == 0x40000000);
          if ( (v19 & 0xFFFFFFFD) != 0 && (v19 != 3 || (_DWORD)v13 == 0x40000000) )
          {
            v8 = v45;
            v18 = (KSPIN_LOCK *)(v6 + 3520);
LABEL_68:
            updated = DmmUpdateTargetLinkTrainingState(
                        *(void **)(v6 + 3896),
                        v55,
                        (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)&v55[1].TargetJoin.NewTargetId,
                        v19 != 0);
LABEL_72:
            v13 = updated;
            if ( updated < 0 )
              goto LABEL_24;
          }
          else
          {
            v8 = v45;
            v18 = (KSPIN_LOCK *)(v6 + 3520);
            if ( (int)v13 < 0 )
              break;
          }
        }
        else
        {
          WdLogSingleEntry1(2LL, -1073741810LL);
          v8 = v45;
        }
      }
    }
    v23 = 1;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 3520), &LockHandle);
    if ( (*(_DWORD *)(v6 + 3516) & 1) == 0 )
    {
      *(_DWORD *)(v6 + 3516) = 0;
      v23 = 0;
      KeSetEvent((PRKEVENT)(v6 + 3528), 0, 0);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v8 = v45;
    v24 = v23 == 0;
    v18 = (KSPIN_LOCK *)(v6 + 3520);
  }
  while ( !v24 );
  if ( a6 )
  {
    memset(v66, 0, 0x48uLL);
    EtwActivityIdControl(3u, (LPGUID)&v66[1]);
    v25 = *(_QWORD **)(v6 + 3464);
    v26 = *(_QWORD *)v51;
    v66[8] = MEMORY[0xFFFFF78000000014];
    LODWORD(v66[3]) = 68;
    LOBYTE(v66[6]) = -1;
    while ( v25 != (_QWORD *)(v6 + 3464) )
    {
      v27 = *(_QWORD *)(v6 + 3896);
      v28 = v25;
      v29 = *((unsigned int *)v25 - 2);
      v25 = (_QWORD *)*v25;
      v45 = 0;
      if ( (int)MonitorQuerySkippedRemovalState(v27, v29, &v45) >= 0 && v45 )
      {
        LOBYTE(v44) = 0;
        v30 = DpiPdoHandleChildConnectionChange(v26, *((_DWORD *)v28 - 2), v44, 0, 0, 0, 0LL, (__int64)v66);
        if ( v30 < 0 )
        {
          WdLogSingleEntry1(2LL, (int)v13);
          break;
        }
        v31 = *(_QWORD *)(v6 + 5728);
        v61 = v30;
        v60 = *((_DWORD *)v28 - 2);
        v63 = *(_QWORD *)(v6 + 2672);
        v58 = 0LL;
        v56[0] = 30;
        v56[1] = 72;
        v57 = 0LL;
        memset(&v56[2], 0, 24);
        v59 = 126;
        v62 = 0;
        DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v56, v31);
      }
    }
  }
  else
  {
    v26 = *(_QWORD *)v51;
  }
  if ( (*(_BYTE *)(v6 + 3904) & 1) != 0 )
  {
    DxgkEndDisplayCalloutBatch(*(_QWORD *)(v6 + 3896));
    LOBYTE(v42) = 1;
    DpiReleaseCoreSyncAccessSafe(v26, v42);
  }
  if ( (int)v13 < 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(v6 + 3644), 0xFFFFFFFE);
    IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v6 + 152), BusRelations);
  }
LABEL_82:
  if ( v46 )
  {
    ExReleaseResourceLite((PERESOURCE)(v6 + 3304));
    KeLeaveCriticalRegion();
    if ( *(_BYTE *)(v6 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v6 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v6 + 168));
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v13;
}
