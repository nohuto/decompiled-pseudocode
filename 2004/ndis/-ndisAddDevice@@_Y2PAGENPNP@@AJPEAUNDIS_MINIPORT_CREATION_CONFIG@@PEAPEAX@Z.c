/*
 * XREFs of ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1C012C504
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x1C0031570 (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z.c)
 *     ?ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0115518 (-ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006E8C (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E000 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qZ @ 0x1C0012BE8 (WPP_RECORDER_SF_qZ.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0017940 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0018D30 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     NdisConvertNdisStatusToNtStatus @ 0x1C0018F70 (NdisConvertNdisStatusToNtStatus.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D018 (WPP_RECORDER_SF_qd.c)
 *     ?ndisSetDeviceNames@@YAXPEAU_UNICODE_STRING@@00PEAE@Z @ 0x1C0020FC8 (-ndisSetDeviceNames@@YAXPEAU_UNICODE_STRING@@00PEAE@Z.c)
 *     ??$out_param@V?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@wil@@YA?AU?$out_param_t@V?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@details@0@AEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@Z @ 0x1C002103C (--$out_param@V-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@@@@wistd@@@wil@@YA-A.c)
 *     ?ndisMFindNumaDistances@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0021054 (-ndisMFindNumaDistances@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIfFindInterfaceByInterfaceGuid@@YAPEAU_NDIS_IF_BLOCK@@PEBU_GUID@@@Z @ 0x1C0021260 (-ndisIfFindInterfaceByInterfaceGuid@@YAPEAU_NDIS_IF_BLOCK@@PEBU_GUID@@@Z.c)
 *     ?ndisMUpdateHiddenFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z @ 0x1C00212B0 (-ndisMUpdateHiddenFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z.c)
 *     ?ndisIfUpdateInterfaceOnAddDevice@@YAHPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0021304 (-ndisIfUpdateInterfaceOnAddDevice@@YAHPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAllocateDefaultQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0021560 (-ndisAllocateDefaultQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?NdisTraceLoggingDeviceAdded@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@PEBUNDIS_MINIPORT_CREATION_CONFIG@@JPEB_WE@Z @ 0x1C0021CA0 (-NdisTraceLoggingDeviceAdded@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@PEBUNDI.c)
 *     ?ndisQueryDeviceFlags@@YAXPEB_WPEA_K@Z @ 0x1C0023B68 (-ndisQueryDeviceFlags@@YAXPEB_WPEA_K@Z.c)
 *     ?ndisReadRssKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00274BC (-ndisReadRssKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C002A744 (WPP_RECORDER_SF_Zq.c)
 *     ?ndisMInitializeMiniportBlock@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C0031BA8 (-ndisMInitializeMiniportBlock@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisCreateSecurityDescriptor@@YAJPEAU_DEVICE_OBJECT@@PEAPEAXK@Z @ 0x1C0036210 (-ndisCreateSecurityDescriptor@@YAJPEAU_DEVICE_OBJECT@@PEAPEAXK@Z.c)
 *     ?ndisMInvokeAddDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003D28C (-ndisMInvokeAddDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C003D700 (__security_check_cookie.c)
 *     ??$attach_to_smart_pointer@V?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@X@wil@@YAXAEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@PEAU_UNICODE_STRING@@@Z @ 0x1C003D814 (--$attach_to_smart_pointer@V-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@@@@wis.c)
 *     _guard_dispatch_icall_nop @ 0x1C003FB60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C003FE40 (memset.c)
 *     ?ndisQueryReferenceBusInterface@@YAJPEAU_DEVICE_OBJECT@@PEAPEAUBUS_INTERFACE_REFERENCE@@@Z @ 0x1C005FFF4 (-ndisQueryReferenceBusInterface@@YAJPEAU_DEVICE_OBJECT@@PEAPEAUBUS_INTERFACE_REFERENCE@@@Z.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1C0060108 (McTemplateK0qqq_EtwWriteTransfer.c)
 *     McTemplateK0z_EtwWriteTransfer @ 0x1C0060184 (McTemplateK0z_EtwWriteTransfer.c)
 *     ?ndisMDeleteMiniportBlockOnRemove@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006E6B0 (-ndisMDeleteMiniportBlockOnRemove@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInvokeRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006F804 (-ndisMInvokeRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?Initialize@BindEngine@Ndis@@QEAAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00F87E4 (-Initialize@BindEngine@Ndis@@QEAAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FB73C (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00FD39C (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FDA50 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x1C01036B8 (-ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z.c)
 *     ?ndisIfUpdateInterfaceHiddenFlag@@YAXPEAU_NDIS_IF_BLOCK@@_N@Z @ 0x1C01069FC (-ndisIfUpdateInterfaceHiddenFlag@@YAXPEAU_NDIS_IF_BLOCK@@_N@Z.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C0107AE8 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     ?ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z @ 0x1C0108F1C (-ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z.c)
 *     ?ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0109FBC (-ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAllocateEventLog@@YAPEAUNDIS_EVENT_LOG_HANDLE__@@W4_NDIS_EVENT_LOG_SIZE@@G@Z @ 0x1C010AA7C (-ndisAllocateEventLog@@YAPEAUNDIS_EVENT_LOG_HANDLE__@@W4_NDIS_EVENT_LOG_SIZE@@G@Z.c)
 *     ?ndisMiniportQueryDevicePropertyData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@AEBU_DEVPROPKEY@@PEAPEA_W@Z @ 0x1C010AC40 (-ndisMiniportQueryDevicePropertyData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@AEBU_DEVPROPKEY@@PEAPEA_W@Z.c)
 *     ?ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C010AFDC (-ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C0123200 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisIfRemoveIfBlockMiniportAssociation@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NET_IF_ADMIN_STATUS@@@Z @ 0x1C0126940 (-ndisIfRemoveIfBlockMiniportAssociation@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NET.c)
 */

__int64 __fastcall ndisAddDevice(struct _GUID *a1, void **a2)
{
  int appended; // edi
  char *DeviceExtension; // rbx
  char v5; // r15
  _DEVICE_OBJECT *v6; // rax
  char v7; // r12
  __int64 v8; // r8
  struct _NDIS_M_DRIVER_BLOCK *v9; // r13
  unsigned int v10; // r14d
  KIRQL v11; // al
  struct _NDIS_M_DRIVER_BLOCK *i; // r15
  unsigned int v13; // ecx
  ULONG v14; // r15d
  BOOLEAN v15; // al
  unsigned __int16 Flags; // ax
  PDEVICE_OBJECT v17; // rdx
  LOGICAL IsDriverVerifying; // eax
  PVOID PoolWithTag; // rax
  __int64 v20; // rax
  const struct _DEVPROPKEY *v21; // rdx
  int DevicePropertyData; // edi
  char v23; // al
  __int64 v24; // rcx
  int SecurityDescriptor; // eax
  PVOID v26; // rcx
  unsigned __int16 **v27; // r15
  __int64 v28; // rdx
  int *v29; // rcx
  __int64 v30; // rax
  void *v31; // rcx
  int updated; // eax
  Ndis::BindEngine *v33; // rcx
  KIRQL v34; // r9
  struct _NDIS_IF_BLOCK *v35; // r12
  char v36; // r13
  __int64 v37; // rax
  void *v38; // rcx
  KIRQL v39; // al
  __int64 v40; // rdx
  void *v42; // rcx
  _NDIS_WDF_CX_DRIVER_BLOCK *v43; // rbx
  _DEVICE_OBJECT *v44; // rax
  void *v45; // rcx
  _DEVICE_OBJECT *v46; // rax
  int *v47; // rcx
  PVOID v48; // rcx
  int *v49; // rcx
  PVOID v50; // rcx
  struct _NDIS_MINIPORT_BLOCK *v51; // rdx
  _DWORD *v52; // rax
  __int128 v53; // xmm0
  void *v54; // rcx
  unsigned __int16 *v55; // rax
  __int128 v56; // xmm1
  _NDIS_WDF_CX_DRIVER_BLOCK *v57; // rax
  NTSTATUS v58; // eax
  _UNICODE_STRING *v59; // rcx
  NTSTATUS v60; // eax
  _DEVICE_OBJECT *v61; // rcx
  signed __int32 v62[8]; // [rsp+0h] [rbp-100h] BYREF
  ULONG DeviceCharacteristics[2]; // [rsp+20h] [rbp-E0h]
  BOOLEAN Exclusive[8]; // [rsp+28h] [rbp-D8h]
  PDEVICE_OBJECT *DeviceObject; // [rsp+30h] [rbp-D0h]
  char v66; // [rsp+40h] [rbp-C0h]
  char v67; // [rsp+41h] [rbp-BFh]
  char v68; // [rsp+42h] [rbp-BEh]
  char v69; // [rsp+43h] [rbp-BDh]
  char v70; // [rsp+44h] [rbp-BCh]
  char v71; // [rsp+45h] [rbp-BBh]
  PVOID P; // [rsp+48h] [rbp-B8h] BYREF
  PDEVICE_OBJECT SourceDevice; // [rsp+50h] [rbp-B0h] BYREF
  struct _NDIS_IF_BLOCK *InterfaceByInterfaceGuid; // [rsp+58h] [rbp-A8h]
  PDEVICE_OBJECT v75; // [rsp+60h] [rbp-A0h]
  _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  PDEVICE_OBJECT TargetDevice; // [rsp+78h] [rbp-88h]
  struct _NDIS_MINIPORT_BLOCK *v78; // [rsp+80h] [rbp-80h] BYREF
  PDRIVER_OBJECT DriverObject; // [rsp+88h] [rbp-78h]
  struct BUS_INTERFACE_REFERENCE *v80; // [rsp+90h] [rbp-70h] BYREF
  _UNICODE_STRING String; // [rsp+98h] [rbp-68h] BYREF
  _NDIS_WDF_CX_DRIVER_BLOCK *CxBlock; // [rsp+A8h] [rbp-58h]
  void **v83; // [rsp+B0h] [rbp-50h]
  void **v84[2]; // [rsp+B8h] [rbp-48h] BYREF
  char v85; // [rsp+C8h] [rbp-38h]
  _NET_LUID_LH v86; // [rsp+D0h] [rbp-30h] BYREF
  _NDIS_MEDIUM MediaType; // [rsp+D8h] [rbp-28h]
  int v88; // [rsp+DCh] [rbp-24h]
  __int128 v89; // [rsp+E0h] [rbp-20h]
  __int128 v90; // [rsp+F0h] [rbp-10h]
  char v91[160]; // [rsp+100h] [rbp+0h] BYREF
  char v92; // [rsp+1A0h] [rbp+A0h] BYREF
  char v93; // [rsp+1C8h] [rbp+C8h] BYREF

  v83 = a2;
  appended = -1073741823;
  v75 = 0LL;
  DeviceExtension = 0LL;
  SourceDevice = 0LL;
  v5 = 0;
  v6 = *(_DEVICE_OBJECT **)&a1[2].Data1;
  v7 = 0;
  TargetDevice = v6;
  InterfaceByInterfaceGuid = 0LL;
  v68 = 0;
  v67 = 0;
  v69 = 0;
  v70 = 0;
  v71 = 0;
  v66 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x44u,
      (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
      v6);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v9 = *(struct _NDIS_M_DRIVER_BLOCK **)&a1[6].Data1;
  v10 = 1;
  if ( !v9 )
  {
    appended = -1073741670;
LABEL_81:
    v15 = 0;
    v36 = 0;
    goto LABEL_64;
  }
  DriverObject = v9->DriverObject;
  v11 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  for ( i = ndisMiniDriverList; i && i != v9; i = i->NextDriver )
    ;
  KeReleaseSpinLock(&ndisMiniDriverListLock, v11);
  v10 = 2;
  if ( i != v9 )
  {
LABEL_151:
    v5 = 0;
    v15 = 0;
    v36 = 0;
    goto LABEL_64;
  }
  v10 = 3;
  if ( v9->MajorNdisVersion >= 6u && !a1[2].Data4[0] )
  {
    appended = -1073741491;
    goto LABEL_80;
  }
  v10 = 4;
  v13 = (**(unsigned __int16 **)a1[3].Data4 + 5923) & 0xFFFFFFF8;
  *(_QWORD *)&String.Length = 2621440LL;
  *(_QWORD *)&DestinationString.Length = 3932160LL;
  v14 = v13 + 8 * ndisMaxNumberOfProcessors;
  String.Buffer = (wchar_t *)&v92;
  DestinationString.Buffer = (wchar_t *)&v93;
  RtlCopyUnicodeString(&DestinationString, &ndisFdoDeviceStr);
  appended = RtlIntegerToUnicodeString(_InterlockedIncrement((volatile signed __int32 *)&ndisFdoIndex), 0xAu, &String);
  if ( appended )
  {
LABEL_80:
    v5 = 0;
    goto LABEL_81;
  }
  appended = RtlAppendUnicodeStringToString(&DestinationString, &String);
  v15 = 0;
  if ( appended )
    goto LABEL_85;
  Flags = v9->Flags;
  if ( (Flags & 0xC0) == 0 )
  {
    v10 = 5;
    appended = IoCreateDevice(DriverObject, v14, &DestinationString, 0x17u, 0x100u, 0, &SourceDevice);
    v15 = 0;
    if ( appended >= 0 )
    {
      v10 = 6;
      v17 = TargetDevice;
      SourceDevice->Flags |= 0x10u;
      v17->Flags &= ~0x80u;
      SourceDevice->Flags |= 0x2000u;
      v75 = IoAttachDeviceToDeviceStack(SourceDevice, v17);
      v15 = 0;
      if ( v75 )
      {
        DeviceExtension = (char *)SourceDevice->DeviceExtension;
        ndisMInitializeMiniportBlock(v9, (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension, v14);
        goto LABEL_16;
      }
      appended = -1073741823;
    }
LABEL_85:
    v5 = 0;
    v36 = 0;
    goto LABEL_64;
  }
  if ( (Flags & 0x40) != 0 )
  {
    v42 = *(void **)&a1[5].Data1;
    v66 = 1;
    v78 = 0LL;
    CxBlock = v9->CxBlock;
    appended = CxBlock->Chars.EvtCxAllocateMiniportBlock(v42, v14, (void **)&v78);
    if ( appended )
    {
      v5 = 0;
      v36 = 0;
      goto LABEL_63;
    }
    v43 = CxBlock;
    v44 = CxBlock->Chars.EvtCxGetDeviceObject(*(_QWORD *)&a1[5].Data1);
    v45 = *(void **)&a1[5].Data1;
    SourceDevice = v44;
    v46 = v43->Chars.EvtCxGetNextDeviceObject(v45);
    DeviceExtension = (char *)v78;
    v75 = v46;
    ndisMInitializeMiniportBlock(v9, v78, v14);
    *((_DWORD *)DeviceExtension + 30) |= 0x80u;
    *((_QWORD *)DeviceExtension + 3) = *(_QWORD *)&a1[5].Data1;
    goto LABEL_16;
  }
  if ( (Flags & 0x80u) == 0 )
  {
    appended = -1073741811;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(DeviceObject) = v9->Flags;
      WPP_RECORDER_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xDu,
        0x45u,
        (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
        (char)v9,
        DeviceObject);
    }
    goto LABEL_151;
  }
  DeviceExtension = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (int)v14, 0x776C444Eu);
  v15 = 0;
  if ( !DeviceExtension )
  {
    appended = -1073741670;
    goto LABEL_85;
  }
  ndisMInitializeMiniportBlock(v9, (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension, v14);
  *((_DWORD *)DeviceExtension + 30) |= 0x100u;
  *((_DWORD *)DeviceExtension + 1476) = *(_DWORD *)&a1[5].Data4[4];
LABEL_16:
  *(struct _GUID *)(DeviceExtension + 4008) = *a1;
  *((_QWORD *)DeviceExtension + 559) = ndisAllocateEventLog(2u, 1);
  if ( a1[5].Data4[1] )
    IsDriverVerifying = (v9->Flags >> 1) & 1;
  else
    IsDriverVerifying = MmIsDriverVerifying(DriverObject);
  if ( ndisVerifierNdisDispatch )
  {
    if ( IsDriverVerifying )
    {
      v10 = 1;
      appended = (*((__int64 (__fastcall **)(PDEVICE_OBJECT, char *, char *, char *))ndisVerifierNdisDispatch + 1))(
                   SourceDevice,
                   DeviceExtension,
                   DeviceExtension + 24,
                   DeviceExtension + 4960);
      if ( appended < 0 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0xDu,
            0x46u,
            (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
            DeviceExtension);
        goto LABEL_97;
      }
    }
  }
  ndisSetDeviceNames(
    *(PCUNICODE_STRING *)a1[3].Data4,
    (PUNICODE_STRING)DeviceExtension + 238,
    (struct _UNICODE_STRING *)DeviceExtension + 237,
    (wchar_t *)DeviceExtension + 2956);
  if ( !a1[5].Data4[1] )
  {
    *((_QWORD *)DeviceExtension + 479) = TargetDevice;
    *((_QWORD *)DeviceExtension + 478) = SourceDevice;
    *((_QWORD *)DeviceExtension + 480) = v75;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, DestinationString.Length + 2LL, 0x6E61444Eu);
    *((_QWORD *)DeviceExtension + 526) = PoolWithTag;
    if ( PoolWithTag )
    {
      *((_WORD *)DeviceExtension + 2101) = DestinationString.Length + 2;
      RtlCopyUnicodeString((PUNICODE_STRING)(DeviceExtension + 4200), &DestinationString);
      P = 0LL;
      v20 = wil::out_param<wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>>((__int64)v84, (__int64)&P);
      DevicePropertyData = ndisMiniportQueryDevicePropertyData(
                             (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension,
                             v21,
                             (wchar_t **)(v20 + 8));
      if ( v85 )
        wil::attach_to_smart_pointer<wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>,void>(v84[0], v84[1]);
      if ( !DevicePropertyData )
      {
        *((_QWORD *)DeviceExtension + 670) = P;
        P = 0LL;
      }
      v10 = 8;
      appended = IoRegisterDeviceInterface(
                   *((PDEVICE_OBJECT *)DeviceExtension + 479),
                   &GUID_DEVINTERFACE_NET,
                   (PUNICODE_STRING)((unsigned __int64)(DeviceExtension + 3792) & -(__int64)(v66 != 0)),
                   (PUNICODE_STRING)(DeviceExtension + 4152));
      if ( appended >= 0 )
      {
        v23 = v66;
        v10 = 7;
        v67 = 1;
        if ( v66 )
        {
          appended = IoCreateSymbolicLink(
                       (PUNICODE_STRING)(DeviceExtension + 4200),
                       (PUNICODE_STRING)(DeviceExtension + 4152));
          if ( appended )
          {
            v49 = &WPP_RECORDER_INITIALIZED;
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                2u,
                0xDu,
                0x48u,
                (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
                DeviceExtension);
            if ( (Microsoft_Windows_NDISEnableBits & 0x40) == 0 )
              goto LABEL_114;
            *(_DWORD *)Exclusive = (_DWORD)DeviceExtension;
            DeviceCharacteristics[0] = 65538;
            goto LABEL_113;
          }
          v23 = v66;
          v69 = 1;
        }
        appended = IoCreateSymbolicLink(
                     *(PUNICODE_STRING *)a1[3].Data4,
                     (PUNICODE_STRING)&DeviceExtension[(-(__int64)(v23 != 0) & 0xFFFFFFFFFFFFFFD0uLL) + 4200]);
        if ( !appended )
        {
          v7 = 1;
          *((_QWORD *)DeviceExtension + 619) = 0LL;
          v24 = *(_QWORD *)&a1[3].Data1;
          if ( v24 && *(_WORD *)v24 )
            ndisQueryDeviceFlags(*(const wchar_t **)(v24 + 8), (unsigned __int64 *)DeviceExtension + 619);
          if ( a1[4].Data4[0] )
            *((_DWORD *)DeviceExtension + 31) |= 0x2000u;
          if ( a1[4].Data4[1] )
            *((_DWORD *)DeviceExtension + 31) |= 2u;
          if ( a1[4].Data4[2] )
            *((_DWORD *)DeviceExtension + 31) |= 0x200000u;
          if ( a1[4].Data4[0] )
          {
            v10 = 4;
            v80 = 0LL;
            appended = ndisQueryReferenceBusInterface(TargetDevice, (PVOID *)&v80);
            if ( appended < 0 )
            {
              v26 = P;
              P = 0LL;
              goto LABEL_125;
            }
            *((_QWORD *)DeviceExtension + 498) = v80;
          }
          v10 = 4;
          SecurityDescriptor = ndisCreateSecurityDescriptor(
                                 *((struct _DEVICE_OBJECT **)DeviceExtension + 478),
                                 (void **)DeviceExtension + 473,
                                 5u);
          v26 = P;
          appended = SecurityDescriptor;
          P = 0LL;
          if ( SecurityDescriptor >= 0 )
          {
            if ( v26 )
              ExFreePoolWithTag(v26, 0);
            goto LABEL_41;
          }
LABEL_125:
          if ( v26 )
            ExFreePoolWithTag(v26, 0);
          goto LABEL_127;
        }
        v49 = &WPP_RECORDER_INITIALIZED;
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0xDu,
            0x49u,
            (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
            DeviceExtension);
        if ( (Microsoft_Windows_NDISEnableBits & 0x40) == 0 )
        {
LABEL_114:
          v50 = P;
          P = 0LL;
          if ( v50 )
            ExFreePoolWithTag(v50, 0);
          v5 = v67;
          goto LABEL_99;
        }
        *(_DWORD *)Exclusive = (_DWORD)DeviceExtension;
        DeviceCharacteristics[0] = 65539;
LABEL_113:
        McTemplateK0qqq_EtwWriteTransfer(
          (__int64)v49,
          &AddDeviceFailed,
          (const GUID *)&NDIS_PROVIDER_ID,
          appended,
          DeviceCharacteristics[0],
          Exclusive[0]);
        goto LABEL_114;
      }
      v47 = &WPP_RECORDER_INITIALIZED;
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xDu,
          0x47u,
          (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
          DeviceExtension);
      if ( (Microsoft_Windows_NDISEnableBits & 0x40) != 0 )
        McTemplateK0qqq_EtwWriteTransfer(
          (__int64)v47,
          &AddDeviceFailed,
          (const GUID *)&NDIS_PROVIDER_ID,
          appended,
          1,
          (char)DeviceExtension);
      v48 = P;
      P = 0LL;
      if ( !v48 )
      {
        v5 = 0;
        goto LABEL_99;
      }
      ExFreePoolWithTag(v48, 0);
    }
    else
    {
      appended = -1073741670;
      v10 = 1;
    }
LABEL_97:
    v5 = 0;
LABEL_99:
    v36 = 0;
LABEL_63:
    v15 = v66;
    goto LABEL_64;
  }
LABEL_41:
  v27 = (unsigned __int16 **)(DeviceExtension + 3856);
  v10 = 4;
  v7 = v67;
  appended = ndisCreateAdapterInstanceName(
               (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension,
               (struct _UNICODE_STRING **)DeviceExtension + 482,
               (struct _UNICODE_STRING **)DeviceExtension + 551);
  if ( appended < 0 )
  {
LABEL_127:
    v5 = v7;
LABEL_130:
    v36 = v68;
    goto LABEL_63;
  }
  v29 = &WPP_RECORDER_INITIALIZED;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v28,
      0xDu,
      0x4Au,
      (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
      (char)DeviceExtension,
      *v27);
  if ( (Microsoft_Windows_NDISEnableBits & 0x20) != 0 )
    McTemplateK0z_EtwWriteTransfer((__int64)v29, &AddDevice, v8, *((const wchar_t **)*v27 + 1));
  *((_DWORD *)DeviceExtension + 1015) = 1;
  v30 = *(_QWORD *)a1[3].Data4;
  *(_QWORD *)a1[3].Data4 = 0LL;
  v31 = (void *)*((_QWORD *)DeviceExtension + 522);
  *((_QWORD *)DeviceExtension + 522) = v30;
  if ( v31 )
    ExFreePoolWithTag(v31, 0x7274534Bu);
  updated = ndisInitializeConfiguration((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension, *(const WCHAR **)a1[1].Data4);
  if ( updated )
    goto LABEL_128;
  Ndis::BindEngine::Initialize(
    (Ndis::BindEngine *)(DeviceExtension + 5104),
    (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
  if ( (*((_DWORD *)DeviceExtension + 30) & 0x80u) != 0 )
  {
    Ndis::BindEngine::BeginPolicyUpdates(v33);
    if ( Ndis::BindState::SetPause((Ndis::BindState *)(DeviceExtension + 5032), DatapathPaused, PauseReason_Wdf) )
    {
      memset(v91, 0, sizeof(v91));
      if ( (unsigned __int8)byte_1C00E448B >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension,
          (struct NDIS_PNPTRACE_LOCALS *)v91);
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)v51,
            0x1Cu,
            0x4Bu,
            (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
            *(unsigned __int16 **)&v91[8],
            *(_QWORD *)v91);
      }
    }
    Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(DeviceExtension + 5104), v51);
  }
  v71 = 1;
  v7 = v67;
  appended = ndisPDReadKeywords((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
  if ( appended < 0 )
    goto LABEL_127;
  ndisMFindNumaDistances((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
  ndisReadRssKeywords((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
  if ( v9->AddDeviceHandler )
  {
    v10 = 10;
    updated = ndisMInvokeAddDevice((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
    if ( !updated )
    {
      v68 = 1;
      goto LABEL_54;
    }
LABEL_128:
    appended = NdisConvertNdisStatusToNtStatus(updated);
LABEL_129:
    v5 = v67;
    v7 = v67;
    goto LABEL_130;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x4Cu,
      (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
      (char)v9,
      DeviceExtension);
LABEL_54:
  if ( (v9->Flags & 1) != 0 && (unsigned __int8)DeviceExtension[32] >= 6u )
  {
    v52 = (_DWORD *)*((_QWORD *)DeviceExtension + 471);
    if ( !v52 )
    {
      appended = -1073741823;
LABEL_139:
      v10 = 3;
      goto LABEL_129;
    }
    if ( *v52 > 1u )
    {
      appended = -1073741637;
      goto LABEL_139;
    }
  }
  KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  InterfaceByInterfaceGuid = (struct _NDIS_IF_BLOCK *)ndisIfFindInterfaceByInterfaceGuid(a1);
  if ( InterfaceByInterfaceGuid )
  {
    if ( InterfaceByInterfaceGuid->NetLuid.Value == *(_QWORD *)&a1[1].Data1 )
      goto LABEL_57;
    InterfaceByInterfaceGuid = 0LL;
  }
  appended = -1073741072;
LABEL_57:
  KeReleaseSpinLock(&ndisIfListLock, v34);
  v7 = v67;
  v10 = 4;
  if ( appended )
    goto LABEL_127;
  ndisMUpdateHiddenFlag((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension, a1[4].Data4[3]);
  v35 = InterfaceByInterfaceGuid;
  ndisIfUpdateInterfaceHiddenFlag(InterfaceByInterfaceGuid, a1[4].Data4[3]);
  v15 = v66;
  if ( !v66 )
  {
LABEL_59:
    updated = ndisIfUpdateInterfaceOnAddDevice(v35, (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
    v5 = 0;
    if ( !updated )
    {
      v70 = 1;
      updated = ndisAllocateDefaultQueue((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
      if ( !updated )
      {
        v36 = 0;
        v69 = 0;
        v7 = 0;
        v70 = 0;
        if ( !a1[5].Data4[1] )
        {
          _InterlockedOr(v62, 0);
          SourceDevice->Flags &= ~0x80u;
        }
        goto LABEL_63;
      }
    }
    goto LABEL_128;
  }
  if ( !a1[5].Data4[0] )
    *((_DWORD *)DeviceExtension + 142) |= 8u;
  if ( v35->IsWDFMiniportInterface )
  {
    v53 = *((_OWORD *)DeviceExtension + 237);
    v54 = *(void **)&a1[5].Data1;
    v88 = 0;
    MediaType = v35->MediaType;
    v86.Value = (ULONG64)v35->NetLuid;
    v55 = *v27;
    v89 = v53;
    v56 = *(_OWORD *)v55;
    v57 = v9->CxBlock;
    v90 = v56;
    v57->Chars.EvtCxMiniportCompleteAdd(v54, (_NDIS_WDF_COMPLETE_ADD_PARAMS *)&v86);
    goto LABEL_59;
  }
  v5 = v67;
  appended = -1073741811;
  v36 = v68;
  v7 = v67;
LABEL_64:
  if ( dword_1C00E3108 )
  {
    Exclusive[0] = v15;
    NdisTraceLoggingDeviceAdded(
      (__int64)InterfaceByInterfaceGuid,
      v10,
      (__int64)a1,
      (unsigned int)appended,
      *((void **)DeviceExtension + 670));
  }
  if ( appended < 0 )
  {
    if ( DeviceExtension )
    {
      if ( v71 )
      {
        Ndis::BindRegistry::Reload(
          (Ndis::BindRegistry *)DeviceExtension,
          0LL,
          (enum Ndis::ReadBindingsOptions::Flags)v8);
        ndisNotifyBindFailureOnUnboundProtocols((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
      }
      if ( v36 )
        ndisMInvokeRemoveDevice((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
      if ( v5 )
      {
        RtlFreeUnicodeString((PUNICODE_STRING)(DeviceExtension + 4152));
        *((_QWORD *)DeviceExtension + 520) = 0LL;
      }
      if ( v69 )
      {
        v58 = IoDeleteSymbolicLink((PUNICODE_STRING)(DeviceExtension + 4200));
        if ( v58 )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LODWORD(DeviceObject) = v58;
            WPP_RECORDER_SF_qd(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0xDu,
              0x4Du,
              (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
              (char)DeviceExtension,
              DeviceObject);
          }
        }
      }
      if ( v7 )
      {
        v59 = *(_UNICODE_STRING **)a1[3].Data4;
        if ( !v59 )
          v59 = (_UNICODE_STRING *)*((_QWORD *)DeviceExtension + 522);
        v60 = IoDeleteSymbolicLink(v59);
        if ( v60 && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LODWORD(DeviceObject) = v60;
          WPP_RECORDER_SF_qd(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xDu,
            0x4Eu,
            (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
            (char)DeviceExtension,
            DeviceObject);
        }
      }
      if ( v70 )
        ndisIfRemoveIfBlockMiniportAssociation(
          *((struct _NDIS_IF_BLOCK **)DeviceExtension + 505),
          (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension,
          NET_IF_ADMIN_STATUS_DOWN);
      ndisMDeleteMiniportBlockOnRemove((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
      LOBYTE(DeviceExtension) = 0;
    }
    if ( !v66 )
    {
      v61 = SourceDevice;
      if ( SourceDevice )
      {
        if ( v75 )
        {
          IoDetachDevice(v75);
          v61 = SourceDevice;
        }
        IoDeleteDevice(v61);
        SourceDevice = 0LL;
      }
    }
  }
  else
  {
    *((_DWORD *)DeviceExtension + 1042) = *(_DWORD *)&a1[2].Data4[4];
    v37 = *(_QWORD *)&a1[4].Data1;
    *(_QWORD *)&a1[4].Data1 = 0LL;
    v38 = (void *)*((_QWORD *)DeviceExtension + 523);
    *((_QWORD *)DeviceExtension + 523) = v37;
    if ( v38 )
      ExFreePoolWithTag(v38, 0x7274534Bu);
    v39 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
    *((_QWORD *)DeviceExtension + 481) = ndisMiniportList;
    ndisMiniportList = (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension;
    KeReleaseSpinLock(&ndisMiniportListLock, v39);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qZ(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v40,
        9u,
        0x4Fu,
        (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
        (char)DeviceExtension,
        *((unsigned __int16 **)DeviceExtension + 482));
    ndisLogMiniportEvent((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension, NdisMEvent_DeviceAdded);
    if ( v83 )
      *v83 = DeviceExtension;
  }
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(DeviceObject) = appended;
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x50u,
      (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
      (char)DeviceExtension,
      DeviceObject);
  }
  return (unsigned int)appended;
}
