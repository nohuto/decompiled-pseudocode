/*
 * XREFs of ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x1C001C6C8
 * Callers:
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001A890 (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001AE74 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ?ndisIndicateInitialStateToBinding@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0033354 (-ndisIndicateInitialStateToBinding@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisUpdateOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003AE28 (-ndisUpdateOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisMIndicateStatus @ 0x1C00718F0 (NdisMIndicateStatus.c)
 *     ?ndisSendSystemPowerStateIndication@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@@Z @ 0x1C0083678 (-ndisSendSystemPowerStateIndication@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006D8C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006F38 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000DD60 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     NdisReferenceWithTag @ 0x1C000DF00 (NdisReferenceWithTag.c)
 *     NdisDereferenceWithTag @ 0x1C000F0A0 (NdisDereferenceWithTag.c)
 *     ?ndisMRestoreOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0015CF8 (-ndisMRestoreOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     WPP_RECORDER_SF_qLq @ 0x1C0018F6C (WPP_RECORDER_SF_qLq.c)
 *     ?ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00191A0 (-ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     WPP_RECORDER_SF_d @ 0x1C001935C (WPP_RECORDER_SF_d.c)
 *     ?ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z @ 0x1C00194F0 (-ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z.c)
 *     ?ndisInvokeStatus@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001952C (-ndisInvokeStatus@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0019A3C (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qLLL @ 0x1C0019AFC (WPP_RECORDER_SF_qLLL.c)
 *     ?ndisCancelMediaDisconnectTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0019F1C (-ndisCancelMediaDisconnectTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001A084 (-ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C001A3E0 (-ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1C001B924 (-ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferenceTopMiniportByNameForNsi@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU1@KKEW4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C001BA78 (-ndisReferenceTopMiniportByNameForNsi@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU1@KKEW4_NDIS_NSI_REFTAG@@.c)
 *     ?ndisWriteWmiStatusIndication@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@PEBU_NDIS_STATUS_INDICATION@@HPEBXK@Z @ 0x1C001BDCC (-ndisWriteWmiStatusIndication@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@PEBU_NDIS_STATU.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D228 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_qdq @ 0x1C001D300 (WPP_RECORDER_SF_qdq_ea_1C001D300.c)
 *     ?ndisIndicateOffloadChangeInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXK@Z @ 0x1C00315E0 (-ndisIndicateOffloadChangeInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXK@Z.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C003BC68 (WPP_RECORDER_SF_qdL.c)
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00403C0 (memset.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1C0060308 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x1C00675E8 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     ?ndisMIndicateHwTimestampCapabilitiesChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKEPEAE@Z @ 0x1C006F244 (-ndisMIndicateHwTimestampCapabilitiesChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKEPEAE@Z.c)
 *     ?ndisMIndicateNicSwitchCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z @ 0x1C006F4F8 (-ndisMIndicateNicSwitchCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z.c)
 *     ?ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z @ 0x1C006F574 (-ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z.c)
 *     ?ndisMIndicateReceiveFilterCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z @ 0x1C006F918 (-ndisMIndicateReceiveFilterCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x1C00713EC (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     ?ndisUpdateMiniportPortStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00827CC (-ndisUpdateMiniportPortStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisTopTcpConnectionOffloadStatus@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C008F19C (-ndisTopTcpConnectionOffloadStatus@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisDeletePatternEntry@@YAEPEAU_SINGLE_LIST_ENTRY@@K@Z @ 0x1C008FCB4 (-ndisDeletePatternEntry@@YAEPEAU_SINGLE_LIST_ENTRY@@K@Z.c)
 *     ?ndisOpenIndicatePMCapabilities@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0092770 (-ndisOpenIndicatePMCapabilities@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisUpdateAndIndicatePMCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00952E0 (-ndisUpdateAndIndicatePMCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMAllocateRequest@@YAPEAU_NDIS_OID_REQUEST@@PEAXKW4_NDIS_REQUEST_TYPE@@0K@Z @ 0x1C009AAB4 (-ndisMAllocateRequest@@YAPEAU_NDIS_OID_REQUEST@@PEAXKW4_NDIS_REQUEST_TYPE@@0K@Z.c)
 *     ?ndisQueueRequestOnTopAsync@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C009F180 (-ndisQueueRequestOnTopAsync@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisIfScheduleTimestampCapabilityChangeNotification@@YAEPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00B3360 (-ndisIfScheduleTimestampCapabilityChangeNotification@@YAEPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C01387F4 (-ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 */

void __fastcall ndisIndicateStatusInternal(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_STATUS_INDICATION *a2)
{
  void *StatusBuffer; // r14
  unsigned int StatusBufferSize; // eax
  void *DestinationHandle; // rbx
  unsigned int StatusCode; // r12d
  int v8; // r13d
  KIRQL v9; // si
  int v10; // edx
  int v11; // r8d
  _BYTE *v12; // rax
  bool v13; // zf
  __int128 v14; // xmm1
  __int128 v15; // xmm1
  __int128 v16; // xmm1
  KIRQL v17; // dl
  int v18; // r14d
  _NDIS_MINIPORT_BLOCK *BaseMiniport; // rsi
  __int64 v20; // r8
  struct _NDIS_MINIPORT_BLOCK *v21; // rax
  struct _NDIS_MINIPORT_BLOCK *v22; // rbx
  KIRQL v23; // al
  ULONG_PTR NsiRefCountTracker; // rcx
  struct _KEVENT *NsiRequestsCompletedEvent; // rcx
  KIRQL v26; // dl
  char v27; // bl
  bool v28; // cl
  unsigned int v29; // edx
  int v30; // r8d
  char v31; // bl
  _NDIS_OPEN_BLOCK *OpenQueue; // rsi
  _NDIS_OPEN_BLOCK *v33; // rax
  _NDIS_OPEN_BLOCK *MiniportNextOpen; // r14
  KIRQL v35; // bl
  int v36; // edx
  int v37; // ebx
  int v38; // edx
  int v39; // ebx
  unsigned int Flags; // ebx
  bool v41; // bl
  int v42; // eax
  _NET_IF_MEDIA_CONNECT_STATE v43; // ecx
  bool v44; // cf
  _DWORD *v45; // rbx
  int v46; // ecx
  unsigned int v47; // ecx
  unsigned __int16 v48; // ax
  char v49; // bl
  unsigned int v50; // ecx
  unsigned int v51; // ecx
  unsigned int v52; // ecx
  _NDIS_IF_BLOCK *IfBlock; // rcx
  unsigned __int64 MaxXmitLinkSpeed; // rax
  unsigned __int64 MaxRcvLinkSpeed; // rax
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rax
  int v58; // edx
  struct _NDIS_OID_REQUEST *v59; // rax
  struct _NDIS_OID_REQUEST *v60; // rsi
  int v61; // ebx
  char v62; // al
  struct _NDIS_WORK_ITEM *p_WorkItem; // rbx
  struct _SINGLE_LIST_ENTRY *p_WOLPatternList; // rcx
  int v65; // eax
  __int64 v66; // r9
  void *v67; // r8
  void (__fastcall *StatusCompleteHandler)(void *); // rax
  unsigned int PnPFlags; // eax
  enum _NDIS_MP_REFTAG v70[8]; // [rsp+28h] [rbp-D8h]
  char v71; // [rsp+50h] [rbp-B0h]
  bool v72; // [rsp+51h] [rbp-AFh]
  bool v73; // [rsp+52h] [rbp-AEh]
  KIRQL NewIrql[8]; // [rsp+58h] [rbp-A8h] BYREF
  char v75; // [rsp+60h] [rbp-A0h]
  bool v76; // [rsp+61h] [rbp-9Fh]
  char v77; // [rsp+62h] [rbp-9Eh]
  char v78[4]; // [rsp+64h] [rbp-9Ch]
  char v79; // [rsp+68h] [rbp-98h]
  char v80; // [rsp+69h] [rbp-97h]
  unsigned __int8 v81; // [rsp+6Ah] [rbp-96h] BYREF
  char v82; // [rsp+6Bh] [rbp-95h]
  char v83; // [rsp+6Ch] [rbp-94h]
  KIRQL v84; // [rsp+6Dh] [rbp-93h]
  void *Src; // [rsp+70h] [rbp-90h]
  char v86[8]; // [rsp+78h] [rbp-88h]
  void *v87; // [rsp+88h] [rbp-78h]
  struct _NDIS_STATUS_INDICATION v88; // [rsp+90h] [rbp-70h] BYREF
  struct _NDIS_STATUS_INDICATION v89; // [rsp+100h] [rbp+0h] BYREF
  __int64 v90; // [rsp+170h] [rbp+70h] BYREF
  unsigned int ifOperStatusFlags; // [rsp+178h] [rbp+78h]
  __int128 v92; // [rsp+180h] [rbp+80h] BYREF
  __int128 v93; // [rsp+190h] [rbp+90h]
  __int64 v94; // [rsp+1A0h] [rbp+A0h]

  StatusBuffer = a2->StatusBuffer;
  StatusBufferSize = a2->StatusBufferSize;
  DestinationHandle = a2->DestinationHandle;
  StatusCode = a2->StatusCode;
  v8 = 0;
  v77 = 0;
  v9 = 2;
  v73 = 0;
  v83 = 0;
  v75 = 0;
  v79 = 0;
  NewIrql[0] = 2;
  Src = StatusBuffer;
  *(_DWORD *)v78 = StatusBufferSize;
  v87 = DestinationHandle;
  memset(&v89, 0, sizeof(v89));
  v90 = 0LL;
  ifOperStatusFlags = 0;
  v72 = 0;
  v71 = 0;
  v82 = 0;
  v76 = 0;
  v92 = 0LL;
  v94 = 0LL;
  v93 = 0LL;
  v80 = 0;
  v81 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)&v70[4] = HIDWORD(a1);
    WPP_RECORDER_SF_qdq(*((_QWORD *)WPP_GLOBAL_Control + 8), v10, v11, 55);
  }
  v12 = 0LL;
  if ( DestinationHandle != &ndisIntReqWmi )
    v12 = DestinationHandle;
  *(_QWORD *)v86 = v12;
  if ( v12 )
  {
    v13 = *v12 == 18;
    *(_QWORD *)v86 = v12;
    if ( !v13 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0x18u,
          0x38u,
          (struct _GUID *)&WPP_155eeae1e7503765e0b6eba6f413c090_Traceguids,
          a1);
      *(_QWORD *)v86 = 0LL;
    }
  }
  v14 = *(_OWORD *)&a2->PortNumber;
  *(_OWORD *)&v88.Header.Type = *(_OWORD *)&a2->Header.Type;
  *(_OWORD *)&v88.PortNumber = v14;
  v15 = *(_OWORD *)&a2->StatusBuffer;
  *(_OWORD *)&v88.DestinationHandle = *(_OWORD *)&a2->DestinationHandle;
  *(_OWORD *)&v88.StatusBuffer = v15;
  v16 = *(_OWORD *)a2->NdisReserved;
  *(_OWORD *)&v88.Guid.Data2 = *(_OWORD *)&a2->Guid.Data2;
  *(_OWORD *)v88.NdisReserved = v16;
  *(_OWORD *)&v88.NdisReserved[2] = *(_OWORD *)&a2->NdisReserved[2];
  if ( StatusCode - 1073807371 > 1 )
  {
    if ( StatusCode == 1073807383 )
    {
      Flags = a2->Flags;
      a1->LinkStateIndicationFlags |= 7u;
      v41 = (Flags & 8) != 0;
      v73 = v41;
      if ( !StatusBuffer )
        goto LABEL_13;
      v42 = *(_DWORD *)v78;
      v73 = v41;
      if ( *(_DWORD *)v78 < 0x28u )
        goto LABEL_13;
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0x18u,
          0x39u,
          (struct _GUID *)&WPP_155eeae1e7503765e0b6eba6f413c090_Traceguids,
          (char)a1,
          *((_DWORD *)StatusBuffer + 1));
        v42 = *(_DWORD *)v78;
      }
      if ( v42 == -2 )
      {
        *(_DWORD *)v78 = 40;
        a2->StatusBufferSize = 40;
      }
      v43 = *((_DWORD *)StatusBuffer + 1);
      if ( v43 == MediaConnectStateConnected )
      {
        v8 = 1073807371;
        v72 = a1->MediaConnectState == MediaConnectStateConnected;
        v76 = a1->MediaConnectState != MediaConnectStateConnected;
      }
      else if ( v43 == MediaConnectStateDisconnected )
      {
        v8 = 1073807372;
        v72 = a1->MediaConnectState != MediaConnectStateConnected;
        v76 = a1->MediaConnectState == MediaConnectStateConnected;
      }
      else
      {
        v72 = 1;
      }
      v44 = a1->MajorNdisVersion < 6u;
      a1->MediaConnectState = v43;
      a1->MediaDuplexState = *((_DWORD *)StatusBuffer + 2);
      a1->RcvLinkSpeed = *((_QWORD *)StatusBuffer + 3);
      a1->XmitLinkSpeed = *((_QWORD *)StatusBuffer + 2);
      a1->PauseFunctions = *((_DWORD *)StatusBuffer + 8);
      if ( v44 )
      {
        MaxXmitLinkSpeed = a1->MaxXmitLinkSpeed;
        if ( MaxXmitLinkSpeed == 0x40000000 || MaxXmitLinkSpeed < *((_QWORD *)StatusBuffer + 2) )
          a1->MaxXmitLinkSpeed = *((_QWORD *)StatusBuffer + 2);
        MaxRcvLinkSpeed = a1->MaxRcvLinkSpeed;
        if ( MaxRcvLinkSpeed == 0x40000000 || MaxRcvLinkSpeed < *((_QWORD *)StatusBuffer + 3) )
          a1->MaxRcvLinkSpeed = *((_QWORD *)StatusBuffer + 3);
        v56 = a1->TopFilterRestartAttributes.MaxXmitLinkSpeed;
        if ( v56 == 0x40000000 || v56 < *((_QWORD *)StatusBuffer + 2) )
          a1->TopFilterRestartAttributes.MaxXmitLinkSpeed = *((_QWORD *)StatusBuffer + 2);
        v57 = a1->TopFilterRestartAttributes.MaxRcvLinkSpeed;
        if ( v57 == 0x40000000 || v57 < *((_QWORD *)StatusBuffer + 3) )
          a1->TopFilterRestartAttributes.MaxRcvLinkSpeed = *((_QWORD *)StatusBuffer + 3);
      }
      a1->AutoNegotiationFlags = *((_DWORD *)StatusBuffer + 9);
      v75 = ndisIfSetInterfaceState(a1, 1, 2u);
      v73 = v41;
    }
    if ( StatusCode != 1073807394 )
    {
LABEL_10:
      if ( StatusCode == 1073807379 )
      {
        a1->LinkStateIndicationFlags |= 2u;
        v59 = ndisMAllocateRequest(&ndisIntReqGeneric, 0x10107u, NdisRequestQueryInformation, 0LL, 4u);
        v60 = v59;
        if ( v59 )
        {
          *(_DWORD *)&v59->NdisReserved[16] |= 2u;
          a1->MiniportThread = 0LL;
          KeReleaseSpinLock(&a1->Lock, 2u);
          v61 = ndisQueueRequestOnTopAsync(a1, v60);
          NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, NewIrql);
          if ( v61 != 259 )
            ExFreePoolWithTag(v60, 0);
        }
        v9 = NewIrql[0];
        v83 = 1;
      }
      if ( ((StatusCode - 1073872897) & 0xFFFFFFFD) == 0 && !ndisTopTcpConnectionOffloadStatus(a1, a2) )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          *(_DWORD *)v70 = StatusCode;
          WPP_RECORDER_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0x18u,
            0x3Bu,
            (struct _GUID *)&WPP_155eeae1e7503765e0b6eba6f413c090_Traceguids,
            *(_QWORD *)v70);
        }
        return;
      }
      if ( StatusCode == 1073807384 && (a2->Flags & 4) != 0 )
      {
        v76 = 1;
        a1->MediaConnectState = MediaConnectStateConnected;
        v8 = 1073807371;
        v62 = ndisIfSetInterfaceState(a1, 1, v9);
        HIDWORD(v92) = 0;
        v88.Flags |= 0x1000u;
        v75 = v62;
        DWORD2(v92) = a1->MiniportMediaDuplexState;
        v93 = *(_OWORD *)&a1->MiniportXmitLinkSpeed;
        v94 = *(_QWORD *)&a1->MiniportPauseFunctions;
        v88.StatusBuffer = &v92;
        *(_QWORD *)&v92 = 0x100280180LL;
        v88.StatusCode = 1073807383;
        v88.StatusBufferSize = 40;
      }
LABEL_13:
      if ( v75 )
      {
        IfBlock = a1->IfBlock;
        LODWORD(v90) = 786816;
        v79 = 1;
        HIDWORD(v90) = IfBlock->ifOperStatus;
        ifOperStatusFlags = IfBlock->ifOperStatusFlags;
        v89.StatusBuffer = &v90;
        v89.Header = (_NDIS_OBJECT_HEADER)7340440;
        v89.SourceHandle = a1;
        v89.StatusCode = 1073807395;
        v89.StatusBufferSize = 12;
      }
      v17 = NewIrql[0];
      v18 = 0;
      BaseMiniport = a1;
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v17);
      v21 = ndisReferenceTopMiniportByNameForNsi(
              a1,
              0x200000,
              v20,
              a1->MiniportMediaType == NdisMediumNative802_11,
              NSIREF_STATUS,
              MPREF_SI_NSI);
      v22 = v21;
      if ( v21 )
      {
        if ( v21 == a1 )
        {
          if ( ndisReferenceMiniportByHandle(a1->BaseMiniport, 0, 0x38u) )
          {
            BaseMiniport = a1->BaseMiniport;
            v80 = 1;
          }
        }
        else
        {
          v18 = -1073741823;
        }
        v23 = KeAcquireSpinLockRaiseToDpc(&v22->Lock);
        v22->MiniportThread = KeGetCurrentThread();
        NsiRefCountTracker = (ULONG_PTR)v22->NsiRefCountTracker;
        v84 = v23;
        NdisDereferenceWithTag(NsiRefCountTracker, 1u);
        v13 = v22->NsiOpenReferences-- == 1;
        if ( v13 )
        {
          NsiRequestsCompletedEvent = v22->NsiRequestsCompletedEvent;
          if ( NsiRequestsCompletedEvent )
            KeSetEvent(NsiRequestsCompletedEvent, 0, 0);
        }
        v26 = v84;
        v22->MiniportThread = 0LL;
        KeReleaseSpinLock(&v22->Lock, v26);
        ndisDereferenceMiniport(v22, 0x39u);
      }
      else
      {
        v18 = -1073741823;
      }
      v27 = 0;
      if ( !v18 )
        v27 = v79;
      ndisWriteWmiStatusIndication(
        BaseMiniport,
        BaseMiniport->pAdapterInstanceName,
        a2,
        StatusCode,
        (int *)Src,
        *(unsigned int *)v78);
      v28 = 0;
      if ( !v18 )
        v28 = v76;
      if ( v28 )
        ndisWriteWmiStatusIndication(BaseMiniport, BaseMiniport->pAdapterInstanceName, a2, v8, 0LL, 0);
      if ( v27 )
        ndisWriteWmiStatusIndication(
          BaseMiniport,
          BaseMiniport->pAdapterInstanceName,
          a2,
          0x40010023u,
          (int *)&v90,
          0xCu);
      NewIrql[0] = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
      a1->MiniportThread = KeGetCurrentThread();
      if ( v80 )
        ndisDereferenceMiniport(BaseMiniport, 0x38u);
      if ( StatusCode != 1073807383 )
        v8 = StatusCode;
      if ( v8 == 1073807384 )
      {
        v8 = 1073807384;
        if ( (a2->Flags & 4) == 0 )
          goto LABEL_38;
        v8 = 1073807371;
      }
      if ( v8 == 1073872902 )
      {
        v31 = 1;
        v71 = 1;
        ndisIndicateOffloadChangeInternal(a1, Src, *(unsigned int *)v78);
LABEL_43:
        if ( v87 != &ndisIntReqWmi )
        {
          OpenQueue = a1->OpenQueue;
          if ( OpenQueue )
          {
            v33 = *(_NDIS_OPEN_BLOCK **)v86;
            while ( v33 && v33 != OpenQueue )
            {
              MiniportNextOpen = OpenQueue->MiniportNextOpen;
LABEL_69:
              v31 = v71;
              OpenQueue = MiniportNextOpen;
              if ( !MiniportNextOpen )
                goto LABEL_70;
            }
            KeAcquireSpinLockAtDpcLevel(&OpenQueue->SpinLock);
            if ( (OpenQueue->OpenFlags & 0x8000) != 0 )
              goto LABEL_168;
            if ( v31 && OpenQueue->ProtocolHandle->MajorNdisVersion < 6u )
            {
              if ( !v82 )
              {
                p_WorkItem = &OpenQueue->StatusUnbindWorkItem->WorkItem;
                if ( p_WorkItem )
                {
                  ndisReferenceMiniportNoCheck(a1, 0x36u);
                  OpenQueue->StatusUnbindWorkItem = 0LL;
                  v82 = 1;
                  ndisScheduleWorkItemInternal(p_WorkItem);
                }
              }
              goto LABEL_168;
            }
            if ( v8 == 1073938515 )
              ndisOpenIndicatePMCapabilities(OpenQueue, a2);
            if ( v8 == 1073938513 )
            {
              if ( a2->StatusBufferSize < 4 )
                goto LABEL_168;
              p_WOLPatternList = &OpenQueue->WOLPatternList;
            }
            else
            {
              if ( v8 != 1073938514 )
              {
LABEL_55:
                v35 = KeAcquireSpinLockRaiseToDpc(&OpenQueue->RefCountLock);
                NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)OpenQueue->RefCountTracker, 7u);
                ++OpenQueue->References;
                KeReleaseSpinLock(&OpenQueue->RefCountLock, v35);
                KeReleaseSpinLockFromDpcLevel(&OpenQueue->SpinLock);
                if ( OpenQueue->StatusHandler )
                {
                  KeAcquireSpinLockAtDpcLevel(&OpenQueue->SpinLock);
                  OpenQueue->OpenFlags |= 0x100u;
                  KeReleaseSpinLockFromDpcLevel(&OpenQueue->SpinLock);
                  a1->MiniportThread = 0LL;
                  KeReleaseSpinLockFromDpcLevel(&a1->Lock);
                  if ( OpenQueue->ProtocolHandle->MajorNdisVersion < 6u )
                  {
                    if ( !v72 && !a2->PortNumber )
                    {
                      v65 = a2->StatusCode;
                      if ( v65 == 1073807383 || v65 == 1073807384 && (a2->Flags & 4) != 0 )
                      {
                        v66 = 0LL;
                        v67 = 0LL;
                      }
                      else
                      {
                        v66 = *(unsigned int *)v78;
                        v67 = Src;
                      }
                      OpenQueue->StatusHandler(OpenQueue->ProtocolBindingContext, v8, v67, v66);
                      StatusCompleteHandler = OpenQueue->StatusCompleteHandler;
                      if ( StatusCompleteHandler )
                        StatusCompleteHandler(OpenQueue->ProtocolBindingContext);
                    }
                  }
                  else if ( !v83 )
                  {
                    v37 = a2->StatusCode;
                    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                    {
                      LOBYTE(v36) = 4;
                      WPP_RECORDER_SF_qd(
                        *((_QWORD *)WPP_GLOBAL_Control + 8),
                        v36,
                        24,
                        105,
                        (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
                        (char)OpenQueue,
                        a2->StatusCode);
                    }
                    ((void (__fastcall *)(void *, struct _NDIS_STATUS_INDICATION *))OpenQueue->StatusHandler)(
                      OpenQueue->ProtocolBindingContext,
                      a2);
                    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                    {
                      LOBYTE(v38) = 4;
                      WPP_RECORDER_SF_qd(
                        *((_QWORD *)WPP_GLOBAL_Control + 8),
                        v38,
                        24,
                        106,
                        (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
                        (char)OpenQueue,
                        v37);
                    }
                    if ( a2->StatusCode == 1073807384 && (a2->Flags & 4) != 0 )
                      ndisInvokeStatus(OpenQueue, &v88);
                    if ( v75 )
                      ndisInvokeStatus(OpenQueue, &v89);
                  }
                  KeAcquireSpinLockAtDpcLevel(&a1->Lock);
                  a1->MiniportThread = KeGetCurrentThread();
                  KeAcquireSpinLockAtDpcLevel(&OpenQueue->SpinLock);
                  OpenQueue->OpenFlags &= ~0x100u;
                  KeReleaseSpinLockFromDpcLevel(&OpenQueue->SpinLock);
                }
                MiniportNextOpen = OpenQueue->MiniportNextOpen;
                KeAcquireSpinLockAtDpcLevel(&OpenQueue->RefCountLock);
                NdisDereferenceWithTag((ULONG_PTR)OpenQueue->RefCountTracker, 7u);
                v39 = --OpenQueue->References;
                KeReleaseSpinLockFromDpcLevel(&OpenQueue->RefCountLock);
                if ( !v39 )
                  ndisMFinishClose(OpenQueue);
                goto LABEL_68;
              }
              if ( a2->StatusBufferSize < 4 )
              {
LABEL_168:
                MiniportNextOpen = OpenQueue->MiniportNextOpen;
                KeReleaseSpinLockFromDpcLevel(&OpenQueue->SpinLock);
LABEL_68:
                v33 = *(_NDIS_OPEN_BLOCK **)v86;
                goto LABEL_69;
              }
              p_WOLPatternList = &OpenQueue->PMProtocolOffloadList;
            }
            if ( ndisDeletePatternEntry(p_WOLPatternList, *(_DWORD *)a2->StatusBuffer) )
            {
              --LODWORD(a2->NdisReserved[2]);
              goto LABEL_55;
            }
            goto LABEL_168;
          }
LABEL_70:
          if ( v8 == 1073938516 )
            ndisUpdateAndIndicatePMCapabilities(a1);
          if ( v77 && (a2->Flags & 2) == 0 )
          {
            PnPFlags = a1->PnPFlags;
            if ( v8 == 1073807371 )
            {
              a1->PnPFlags = PnPFlags & 0xEFFFFFFF;
              ndisMRestoreOpenHandlers(a1, 2u);
              a1->PacketIndicateHandler = a1->SavedPacketIndicateHandler;
              a1->ReceivePathEnabled = a1->SavedReceivePathEnabled;
            }
            else
            {
              a1->PnPFlags = PnPFlags | 0x10000000;
              ndisMSwapOpenHandlers(a1, 2u);
              a1->ReceivePathEnabled = 0;
              a1->PacketIndicateHandler = ndisMDummyIndicatePacket;
            }
          }
        }
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qdq(*((_QWORD *)WPP_GLOBAL_Control + 8), v29, v30, 63);
        return;
      }
      if ( v8 > 1073872902 )
      {
        if ( v8 == 1073872912 )
        {
          ndisMIndicateReceiveFilterCapsChange(a1, 1073872912, Src, *(unsigned int *)v78, 1u);
        }
        else
        {
          v29 = 1073872960;
          if ( v8 == 1073872960 )
          {
            ndisMIndicateNicSwitchCapsChange(a1, 1073872960, Src, *(unsigned int *)v78, 1u);
          }
          else if ( v8 > 1073873055 )
          {
            if ( v8 <= 1073873057 )
            {
              ndisMIndicateQosParametersChange(a1, v8, (struct _NDIS_QOS_PARAMETERS *)Src, v78[0]);
            }
            else if ( v8 > 1074073599 && v8 <= 1074073601 )
            {
              ndisMIndicateHwTimestampCapabilitiesChange(a1, v8, Src, *(unsigned int *)v78, 1, &v81);
              if ( v8 == 1074073601 )
              {
                if ( v81 )
                  ndisIfScheduleTimestampCapabilityChangeNotification(a1, NewIrql[0]);
              }
            }
          }
        }
        goto LABEL_42;
      }
LABEL_38:
      switch ( v8 )
      {
        case 1073807371:
          v51 = a1->Flags;
          ++a1->MediaSenseConnectCount;
          if ( (v51 & 0x20000000) == 0 )
          {
            v77 = 1;
            v29 = v51;
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              WPP_RECORDER_SF_qLLL(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v51,
                0x18u,
                0x3Du,
                (struct _GUID *)&WPP_155eeae1e7503765e0b6eba6f413c090_Traceguids,
                (char)a1,
                v51,
                a1->PnPFlags,
                a1->CurrentDevicePowerState);
              v29 = a1->Flags;
            }
            v51 = v29;
            if ( byte_1C00E6184 < 0 )
            {
              McTemplateK0jqxddq_EtwWriteTransfer(
                v29,
                (unsigned int)&MiniportStatusIndicationConnect,
                (_DWORD)a1 + 4008,
                (_DWORD)a1 + 4008,
                a1->IfIndex,
                a1->NetLuid.Value,
                v29,
                a1->PnPFlags,
                a1->CurrentDevicePowerState);
              v51 = a1->Flags;
            }
          }
          v52 = v51 | 0x20000000;
          a1->MediaConnectState = MediaConnectStateConnected;
          a1->Flags = v52;
          if ( !v73 )
          {
            a1->Flags = v52 | 0x4000000;
            ndisCancelMediaDisconnectTimer(a1);
          }
          break;
        case 1073807372:
          v47 = a1->Flags;
          v48 = a1->MediaSenseDisconnectCount + 1;
          a1->MediaSenseDisconnectCount = v48;
          if ( (v47 & 0x20000000) != 0 || v48 == 1 )
          {
            v49 = 1;
            v77 = 1;
            v29 = v47;
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              WPP_RECORDER_SF_qLLL(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v47,
                0x18u,
                0x3Cu,
                (struct _GUID *)&WPP_155eeae1e7503765e0b6eba6f413c090_Traceguids,
                (char)a1,
                v47,
                a1->PnPFlags,
                a1->CurrentDevicePowerState);
              v29 = a1->Flags;
            }
            v47 = v29;
            if ( byte_1C00E6184 < 0 )
            {
              McTemplateK0jqxddq_EtwWriteTransfer(
                v29,
                (unsigned int)&MiniportStatusIndicationDisconnect,
                (_DWORD)a1 + 4008,
                (_DWORD)a1 + 4008,
                a1->IfIndex,
                a1->NetLuid.Value,
                v29,
                a1->PnPFlags,
                a1->CurrentDevicePowerState);
              v47 = a1->Flags;
            }
          }
          else
          {
            v49 = 0;
          }
          v50 = v47 & 0xDFFFFFFF;
          a1->MediaConnectState = MediaConnectStateDisconnected;
          a1->Flags = v50;
          if ( !v73 )
          {
            a1->Flags = v50 | 0x4000000;
            if ( v49 )
              ndisSetMediaDisconnectTimer(a1);
          }
          break;
        case 1073807384:
          v72 = 1;
          if ( *(_DWORD *)v78 >= 4u && (byte_1C00E6185 & 1) != 0 )
            McTemplateK0jqxd_EtwWriteTransfer(
              0,
              (unsigned int)&MiniportStatusIndicationNetworkChange,
              (_DWORD)a1 + 4008,
              (_DWORD)a1 + 4008,
              a1->IfIndex,
              a1->NetLuid.Value,
              *(_DWORD *)Src);
          break;
        case 1073807395:
          v72 = 1;
          if ( *(_DWORD *)v78 >= 0xCu )
          {
            v45 = Src;
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_qdL(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v29,
                24,
                62,
                (struct _GUID *)&WPP_155eeae1e7503765e0b6eba6f413c090_Traceguids,
                (char)a1,
                *((_DWORD *)Src + 1),
                *((_DWORD *)Src + 2));
            v46 = v45[1];
            if ( v46 == 1 )
            {
              if ( (byte_1C00E6185 & 1) != 0 )
                McTemplateK0jqxqq_EtwWriteTransfer(
                  1,
                  (unsigned int)&MiniportStatusIndicationOperStatusUp,
                  (_DWORD)a1 + 4008,
                  (_DWORD)a1 + 4008,
                  a1->IfIndex,
                  a1->NetLuid.Value,
                  1,
                  v45[2]);
            }
            else if ( (byte_1C00E6185 & 1) != 0 )
            {
              McTemplateK0jqxqq_EtwWriteTransfer(
                v46,
                (unsigned int)&MiniportStatusIndicationOperStatusNotUp,
                (_DWORD)a1 + 4008,
                (_DWORD)a1 + 4008,
                a1->IfIndex,
                a1->NetLuid.Value,
                v46,
                v45[2]);
            }
          }
          break;
      }
LABEL_42:
      v31 = 0;
      goto LABEL_43;
    }
    if ( !(unsigned int)ndisUpdateMiniportPortStates(a1, a2) )
    {
      if ( a2->PortNumber )
        goto LABEL_13;
      v75 = ndisIfSetInterfaceState(a1, 1, 2u);
      goto LABEL_10;
    }
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qLq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v58,
        0x18u,
        0x3Au,
        (struct _GUID *)&WPP_155eeae1e7503765e0b6eba6f413c090_Traceguids,
        (char)a1,
        34,
        *(_QWORD *)v86);
  }
}
