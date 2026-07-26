/*
 * XREFs of ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x1C009743C
 * Callers:
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C011FCA8 (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 *     NdisOpenAdapter @ 0x1C013AD90 (NdisOpenAdapter.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006D8C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006F38 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006F7C (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qqqL @ 0x1C000E1D0 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000E2D0 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00191A0 (-ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z @ 0x1C00291EC (-ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qZZ @ 0x1C0029F0C (WPP_RECORDER_SF_qZZ.c)
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x1C002A318 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C002AAA4 (WPP_RECORDER_SF_Zq.c)
 *     ?ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x1C002AC7C (-ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z.c)
 *     ?ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002AF30 (-ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C002D040 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisAllocateOpenBlock@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x1C002D0B4 (-ndisAllocateOpenBlock@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLO.c)
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00403C0 (memset.c)
 *     ?ndisFreeOpenBlock@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C006CB64 (-ndisFreeOpenBlock@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisRemoveOpenFromGlobalList@@YAEPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0071208 (-ndisRemoveOpenFromGlobalList@@YAEPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ @ 0x1C00F8988 (-GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FB8EC (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00FD4C4 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FDC00 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00FDE60 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?ndisPktMonOpenRegister@@YAJPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0100A50 (-ndisPktMonOpenRegister@@YAJPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z @ 0x1C0102EBC (-AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z.c)
 *     ?ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z @ 0x1C010A968 (-ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z.c)
 *     ?ndisInvokeOpenAdapterComplete@@_Y2PAGE@@AXPEAU_NDIS_OPEN_BLOCK@@H@Z @ 0x1C011FA68 (-ndisInvokeOpenAdapterComplete@@_Y2PAGE@@AXPEAU_NDIS_OPEN_BLOCK@@H@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01231A4 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_NDIS_MINIPORT_BLOCK@@W4Flags@BindSource@2@@Z @ 0x1C01231E0 (-CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV-$KRef@UNDIS_BIND_PRO.c)
 *     ?ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012EA30 (-ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisFindRootDevice @ 0x1C013A3B8 (ndisFindRootDevice.c)
 */

void __fastcall ndisOpenAdapterLegacyProtocol(
        int *a1,
        int *a2,
        void **a3,
        unsigned int *a4,
        enum _NDIS_MEDIUM *a5,
        unsigned int a6,
        struct _NDIS_PROTOCOL_BLOCK *NewIrql,
        void *a8,
        struct _UNICODE_STRING *a9,
        char a10,
        struct _NDIS_MINIPORT_BLOCK *a11,
        int *a12)
{
  struct _NDIS_OPEN_BLOCK *OpenBlock; // rsi
  struct _STRING *BindingAdapter; // rbx
  char v15; // r15
  struct _UNICODE_STRING *v17; // r12
  struct _NDIS_PROTOCOL_BLOCK *v18; // r14
  int v19; // edx
  int v20; // r9d
  char v21; // r12
  _UNICODE_STRING *BindDeviceName; // r15
  _UNICODE_STRING *RootDeviceName; // r12
  struct NDIS_BIND_PROTOCOL_LINK *DynamicBinding; // r15
  int v25; // edx
  int v26; // edx
  int v27; // r9d
  KIRQL v28; // al
  __int64 v29; // rcx
  enum _NDIS_MEDIUM *v30; // rax
  _DWORD *v31; // r12
  int *v32; // r15
  int v33; // ecx
  char *PoolWithTag; // r13
  KIRQL v35; // dl
  struct NDIS_BIND_LINK_BASE *CurrentLink; // rax
  int v37; // edx
  __int64 v38; // rcx
  int *v39; // rcx
  __int64 v40; // rdx
  struct _NDIS_MINIPORT_BLOCK *v41; // rcx
  _NDIS_STATUS_UNBIND_WORKITEM *StatusUnbindWorkItem; // rcx
  int v43; // edx
  int v44; // [rsp+20h] [rbp-E0h]
  __int64 v45; // [rsp+50h] [rbp-B0h] BYREF
  _UNICODE_STRING *v46; // [rsp+58h] [rbp-A8h]
  char *v47; // [rsp+60h] [rbp-A0h]
  _UNICODE_STRING *v48; // [rsp+68h] [rbp-98h]
  int *p_Buffer; // [rsp+70h] [rbp-90h]
  UNICODE_STRING String1; // [rsp+78h] [rbp-88h] BYREF
  int *v51; // [rsp+90h] [rbp-70h] BYREF
  void **v52; // [rsp+98h] [rbp-68h]
  unsigned int *v53; // [rsp+A0h] [rbp-60h]
  enum _NDIS_MEDIUM *v54; // [rsp+A8h] [rbp-58h]
  unsigned int v55; // [rsp+B0h] [rbp-50h]
  int v56; // [rsp+B4h] [rbp-4Ch]
  struct _NDIS_PROTOCOL_BLOCK *v57; // [rsp+B8h] [rbp-48h]
  void *v58; // [rsp+C0h] [rbp-40h]
  struct _UNICODE_STRING *v59; // [rsp+C8h] [rbp-38h]
  char v60[208]; // [rsp+D0h] [rbp-30h] BYREF
  char v61; // [rsp+1B0h] [rbp+B0h]

  *(_QWORD *)&String1.Length = 2359330LL;
  OpenBlock = 0LL;
  a11 = 0LL;
  BindingAdapter = 0LL;
  v47 = 0LL;
  v46 = 0LL;
  v15 = 0;
  v61 = 0;
  a10 = 0;
  v45 = 0LL;
  String1.Buffer = L"\\??\\ROOT#VMS_VSMP";
  v17 = a9;
  v18 = NewIrql;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)a2,
      (__int64)a3,
      0x17u,
      v44,
      (char)NewIrql,
      &NewIrql->Name.Length,
      &a9->Length);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  *a3 = 0LL;
  if ( !ndisReferenceProtocol(v18, 9u) )
  {
    *a1 = -1073676286;
    v21 = 0;
    goto LABEL_81;
  }
  BindDeviceName = v18->BindDeviceName;
  v48 = BindDeviceName;
  if ( BindDeviceName )
  {
    RootDeviceName = v18->RootDeviceName;
    BindingAdapter = (struct _STRING *)v18->BindingAdapter;
    v46 = RootDeviceName;
    a11 = (struct _NDIS_MINIPORT_BLOCK *)BindingAdapter;
LABEL_19:
    v18->BindDeviceName = 0LL;
    if ( BindingAdapter
      && (p_Buffer = (int *)&BindingAdapter[7].Buffer, ((__int64)BindingAdapter[7].Buffer & 0x10000) != 0) )
    {
      if ( RtlPrefixUnicodeString(&String1, (PCUNICODE_STRING)&BindingAdapter[22].Buffer, 1u) )
      {
        *a1 = -1073676281;
      }
      else
      {
        OpenBlock = ndisAllocateOpenBlock((struct _NDIS_MINIPORT_BLOCK *)BindingAdapter, v18, 0);
        if ( OpenBlock )
        {
          v28 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
          OpenBlock->NextGlobalOpen = ndisGlobalOpenList;
          LOBYTE(NewIrql) = v28;
          ndisGlobalOpenList = OpenBlock;
          v61 = 1;
          KeReleaseSpinLock(&ndisGlobalOpenListLock, v28);
          v19 = a6;
          OpenBlock->ProtocolBindingContext = a8;
          OpenBlock->BindDeviceName = BindDeviceName;
          OpenBlock->RootDeviceName = RootDeviceName;
          OpenBlock->MiniportHandle = (_NDIS_MINIPORT_BLOCK *)BindingAdapter;
          OpenBlock->ProtocolHandle = v18;
          *a3 = OpenBlock;
          if ( ((__int64)BindingAdapter[35].Buffer & 0x80000001) == 0x80000001 )
          {
            LODWORD(v29) = 0;
            if ( a6 )
            {
              v30 = a5;
              do
              {
                if ( *v30 == NdisMediumWan )
                  break;
                LODWORD(v29) = v29 + 1;
                ++v30;
              }
              while ( (unsigned int)v29 < a6 );
            }
          }
          else
          {
            v29 = 0LL;
            if ( a6 )
            {
              v20 = (int)a5;
              do
              {
                if ( a5[v29] == *(_DWORD *)&BindingAdapter[29].Length )
                  break;
                v29 = (unsigned int)(v29 + 1);
              }
              while ( (unsigned int)v29 < a6 );
            }
          }
          if ( (_DWORD)v29 == a6 )
          {
            *a1 = -1073676263;
          }
          else
          {
            v31 = (_DWORD *)&BindingAdapter[7].Buffer + 1;
            *a4 = v29;
            if ( (HIDWORD(BindingAdapter[7].Buffer) & 0x40000000) != 0
              && (v45 = 0x100080180LL,
                  (unsigned int)ndisMDoMiniportOp(
                                  (struct _NDIS_MINIPORT_BLOCK *)BindingAdapter,
                                  0,
                                  0x1021Eu,
                                  &v45,
                                  8,
                                  1,
                                  1u)) )
            {
              *a1 = -1073741823;
            }
            else
            {
              NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(
                (struct _NDIS_MINIPORT_BLOCK *)BindingAdapter,
                (unsigned __int8 *)&NewIrql);
              v32 = p_Buffer;
              if ( (*p_Buffer & 0x40000) == 0 )
              {
                while ( BYTE1(BindingAdapter[5].Buffer) )
                {
                  BindingAdapter[32].Buffer = 0LL;
                  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)&BindingAdapter[6].Length);
                  KeStallExecutionProcessor(1u);
                  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)&BindingAdapter[6].Length);
                  BindingAdapter[32].Buffer = (char *)KeGetCurrentThread();
                }
                BYTE1(BindingAdapter[5].Buffer) = 1;
                BindingAdapter = (struct _STRING *)a11;
                a11->LockThread = KeGetCurrentThread();
              }
              ndisMOpenAdapter(a1, OpenBlock, (struct _NDIS_MINIPORT_BLOCK *)BindingAdapter);
              if ( *a1 )
                goto LABEL_59;
              if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_qqq(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  4u,
                  6u,
                  0x19u,
                  (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
                  (char)OpenBlock,
                  (char)v18,
                  BindingAdapter);
              if ( a10 )
              {
                BindingAdapter = (struct _STRING *)a11;
                OpenBlock->OpenFlags |= 0x400000u;
              }
              v33 = *v32;
              if ( (*v32 & 0x20000000) == 0 && (*v32 & 0x20000) == 0 )
              {
                ndisMSwapOpenHandlers((struct _NDIS_MINIPORT_BLOCK *)BindingAdapter, 2u);
                v33 = *v32;
              }
              if ( (v33 & 0x20000) != 0 && OpenBlock->ProtocolHandle->CoAfRegisterNotifyHandler )
              {
                PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x6977444Eu);
                if ( PoolWithTag )
                {
                  ndisMReferenceOpen((__int64)OpenBlock, 0);
                  _InterlockedIncrement(&OpenBlock->PendingAfNotifications);
                  *((_QWORD *)PoolWithTag + 1) = 0LL;
                  BindingAdapter = (struct _STRING *)a11;
                  *((_QWORD *)PoolWithTag + 3) = ndisMFinishQueuedPendingOpen;
                  *(_QWORD *)PoolWithTag = OpenBlock;
                  *((_QWORD *)PoolWithTag + 4) = PoolWithTag;
                }
                else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                {
                  WPP_RECORDER_SF_q(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    2u,
                    0x13u,
                    0x1Au,
                    (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
                    OpenBlock);
                }
              }
              else
              {
LABEL_59:
                PoolWithTag = v47;
              }
              if ( (*v32 & 0x40000) == 0 )
              {
                BYTE1(BindingAdapter[5].Buffer) = 0;
                BindingAdapter[116].Buffer = 0LL;
              }
              v35 = (unsigned __int8)NewIrql;
              BindingAdapter[32].Buffer = 0LL;
              KeReleaseSpinLock((PKSPIN_LOCK)&BindingAdapter[6].Length, v35);
              if ( !*a1 )
              {
                Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)&BindingAdapter[319]);
                CurrentLink = Ndis::BindEngine::GetCurrentLink((Ndis::BindEngine *)&BindingAdapter[319]);
                OpenBlock->Bind = (NDIS_BIND_PROTOCOL_LINK *)CurrentLink;
                if ( !Ndis::BindState::AddBindContext(&CurrentLink->BindState, OpenBlock) )
                  *a1 = -1073741670;
                Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)&BindingAdapter[319]);
                if ( !*a1 )
                {
                  v37 = 0;
                  if ( (*v31 & 0x2000) != 0 )
                  {
                    v38 = *(_QWORD *)&BindingAdapter[249].Length;
                    if ( v38 )
                    {
                      (*(void (__fastcall **)(_QWORD, _QWORD))(v38 + 32))(*(_QWORD *)(v38 + 8), 0LL);
                      v37 = *a1;
                    }
                  }
                  v39 = a12;
                  if ( a12 )
                  {
                    a12 = 0LL;
                    *v39 = v37;
                  }
                  ndisPktMonOpenRegister(OpenBlock);
                  if ( PoolWithTag )
                  {
                    v40 = (unsigned int)*a1;
                    if ( v18->MajorNdisVersion < 6u )
                      OpenBlock->ProtocolHandle->OpenAdapterCompleteHandler(OpenBlock->ProtocolBindingContext, v40, v40);
                    else
                      ndisInvokeOpenAdapterComplete(OpenBlock, v40);
                    ndisUpdateCheckForLoopbackFlag((struct _NDIS_MINIPORT_BLOCK *)BindingAdapter);
                    v15 = a10;
                    if ( a10 )
                    {
                      ndisNotifyWmiBindUnbind(v41, v18, 1u);
                      v15 = 0;
                    }
                    ExQueueWorkItem((PWORK_QUEUE_ITEM)(PoolWithTag + 8), (WORK_QUEUE_TYPE)40);
                    *a1 = 259;
                    goto LABEL_80;
                  }
                }
              }
            }
          }
        }
        else
        {
          *a1 = -1073741670;
        }
      }
    }
    else
    {
      *a1 = -1073676282;
    }
    v15 = a10;
LABEL_80:
    v21 = 1;
    goto LABEL_81;
  }
  ndisFindRootDevice((__int64)v17, (__int64)&a11, MPREF_PT_OPENING);
  BindingAdapter = (struct _STRING *)a11;
  if ( !a11 )
  {
    BindDeviceName = v48;
    RootDeviceName = v46;
    a10 = 1;
    goto LABEL_19;
  }
  v56 = 0;
  v52 = a3;
  v54 = a5;
  v59 = v17;
  v55 = a6;
  v58 = a8;
  v51 = a1;
  v53 = a4;
  v57 = v18;
  Ndis::BindEngine::BeginPolicyUpdates(&a11->BindEngine);
  DynamicBinding = (struct NDIS_BIND_PROTOCOL_LINK *)Ndis::BindStack::CreateDynamicBinding(
                                                       &BindingAdapter[312].Buffer,
                                                       &v18->Bind,
                                                       BindingAdapter,
                                                       4LL);
  if ( DynamicBinding )
  {
    DynamicBinding->BindState.m_AdditionalContext = &v51;
    if ( Ndis::BindState::SetBinding(
           &DynamicBinding->BindState,
           BindingEnabled,
           Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed) )
    {
      memset(v60, 0, 0xA0uLL);
      if ( (unsigned __int8)byte_1C00E444B >= 4u )
      {
        ndisGetBindLinkNameForTracing(DynamicBinding, (struct NDIS_PNPTRACE_LOCALS *)v60);
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v25,
            0x1Cu,
            0x18u,
            (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
            *(unsigned __int16 **)&v60[8],
            *(_QWORD *)v60);
      }
    }
  }
  else
  {
    *a1 = -1073741670;
  }
  Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)&BindingAdapter[319]);
  Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)&BindingAdapter[319], RunSynchronous, 0);
  if ( !*v52 && !*a1 )
    *a1 = -1073676271;
  v21 = 0;
  ndisDereferenceProtocol(v18, v26, 9u, v27);
  ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)BindingAdapter, 0x2Cu);
  v15 = 0;
LABEL_81:
  if ( a12 )
    *a12 = *a1;
  if ( *a1 )
  {
    if ( *a1 != 259 )
    {
      if ( v21 )
        ndisDereferenceProtocol(v18, v19, 9u, v20);
      if ( v61 )
        ndisRemoveOpenFromGlobalList(OpenBlock);
      if ( OpenBlock )
      {
        StatusUnbindWorkItem = OpenBlock->StatusUnbindWorkItem;
        if ( StatusUnbindWorkItem )
        {
          ExFreePoolWithTag(StatusUnbindWorkItem, 0);
          OpenBlock->StatusUnbindWorkItem = 0LL;
        }
        ndisFreeOpenBlock(OpenBlock);
      }
      *a3 = 0LL;
    }
  }
  else if ( v15 && BindingAdapter )
  {
    ndisNotifyWmiBindUnbind((struct _NDIS_MINIPORT_BLOCK *)BindingAdapter, v18, 1u);
  }
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v43,
      6u,
      0x1Bu,
      (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
      (char)v18,
      (char)a11,
      (char)OpenBlock,
      *a1);
}
