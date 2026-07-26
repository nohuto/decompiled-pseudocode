/*
 * XREFs of ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C012CDE8
 * Callers:
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00FFB10 (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006C9C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006E8C (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0008A74 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C000DF10 (WPP_RECORDER_SF_qqL.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0012D38 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0018D70 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1C0018E88 (-ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x1C001A1C8 (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qqLd @ 0x1C001B650 (WPP_RECORDER_SF_qqLd.c)
 *     WPP_RECORDER_SF_qqZ @ 0x1C0024D94 (WPP_RECORDER_SF_qqZ.c)
 *     ?RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1C0024EC0 (-RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     ?ndisCreateFilterAdapterRegistry@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0024F80 (-ndisCreateFilterAdapterRegistry@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@QEAAXPEAUNDISWATCHDOG__@@@Z @ 0x1C002521C (-reset@-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1-ndisFreeWatchdog@@.c)
 *     ?ndisCloseRef@@YAEPEAU_REFERENCE_EX@@@Z @ 0x1C0025250 (-ndisCloseRef@@YAEPEAU_REFERENCE_EX@@@Z.c)
 *     ?ndisAllocOrFreeIterativeDataPathTrackerIfNeeded@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_PARTIAL_CHARACTERISTICS@@_N@Z @ 0x1C002529C (-ndisAllocOrFreeIterativeDataPathTrackerIfNeeded@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_PA.c)
 *     ?ndisQueueFilterOnDriver@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@@Z @ 0x1C0025300 (-ndisQueueFilterOnDriver@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@@Z.c)
 *     ?ndisFilterXStateSetFlag@@YAXPEAU_NDIS_FILTER_BLOCK@@E@Z @ 0x1C0025454 (-ndisFilterXStateSetFlag@@YAXPEAU_NDIS_FILTER_BLOCK@@E@Z.c)
 *     NdisIfAddIfStackEntry @ 0x1C0025470 (NdisIfAddIfStackEntry.c)
 *     ?ndisIfUpdateFilterIfStack@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0025674 (-ndisIfUpdateFilterIfStack@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisOpenRef@@YAXPEAU_REFERENCE_EX@@@Z @ 0x1C0025DF4 (-ndisOpenRef@@YAXPEAU_REFERENCE_EX@@@Z.c)
 *     ?ndisIndicateInitialStateToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0025E2C (-ndisIndicateInitialStateToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisReferenceFilterDriver@@YAEPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4_NDIS_LWFDRV_REFTAG@@@Z @ 0x1C0026574 (-ndisReferenceFilterDriver@@YAEPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4_NDIS_LWFDRV_REFTAG@@@Z.c)
 *     ?ndisDereferenceFilterDriver@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@EW4_NDIS_LWFDRV_REFTAG@@@Z @ 0x1C0026598 (-ndisDereferenceFilterDriver@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@EW4_NDIS_LWFDRV_REFTAG@@@Z.c)
 *     ?ndisHandleFilterHandlersChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0026650 (-ndisHandleFilterHandlersChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qqZddZD @ 0x1C0029BD0 (WPP_RECORDER_SF_qqZddZD.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C002A504 (WPP_RECORDER_SF_Zq.c)
 *     NdisNblTrackerRegisterComponent @ 0x1C002CC70 (NdisNblTrackerRegisterComponent.c)
 *     ?ndisIfCreateFilterInterface@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C002DCB8 (-ndisIfCreateFilterInterface@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C003F400 (memmove.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1C005FA88 (McTemplateK0qqq_EtwWriteTransfer.c)
 *     ?EthInitializeFilter@@YAEIPEBEPEAU_X_FILTER@@@Z @ 0x1C0064190 (-EthInitializeFilter@@YAEIPEBEPEAU_X_FILTER@@@Z.c)
 *     ?EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z @ 0x1C0065198 (-EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z.c)
 *     McTemplateK0jqxjqxdd_EtwWriteTransfer @ 0x1C0065238 (McTemplateK0jqxjqxdd_EtwWriteTransfer.c)
 *     McTemplateK0juqjzzz_EtwWriteTransfer @ 0x1C0065310 (McTemplateK0juqjzzz_EtwWriteTransfer.c)
 *     ?ndisCreateFilterInstanceRegistry@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006700C (-ndisCreateFilterInstanceRegistry@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MIN.c)
 *     ?ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0067D70 (-ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisIovGetNicSwitchList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_NDIS_NIC_SWITCH_INFO_ARRAY@@@Z @ 0x1C0077828 (-ndisIovGetNicSwitchList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_NDIS_NIC_SWITCH_INFO_ARRAY@@@Z.c)
 *     NdisIfDeleteIfStackEntry @ 0x1C00B1040 (NdisIfDeleteIfStackEntry.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FB73C (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00FD39C (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FDA50 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ @ 0x1C00FE0F8 (-ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ.c)
 *     ?ndisFInvokeAttach@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_ATTACH_PARAMETERS@@@Z @ 0x1C00FFDB0 (-ndisFInvokeAttach@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_ATTACH_PARAMETERS@@@Z.c)
 *     ?ndisPktMonFilterRegister@@YAJPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0100928 (-ndisPktMonFilterRegister@@YAJPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEB_W@Z @ 0x1C01010F8 (-Initialize@KString@Rtl@@SAPEAU12@PEB_W@Z.c)
 *     ?ndisFindAdjacentFilters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAPEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C0102624 (-ndisFindAdjacentFilters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAPEAU_NDIS_F.c)
 *     ?AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z @ 0x1C0102EEC (-AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z.c)
 *     ?ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z @ 0x1C0105E78 (-ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisInitializeZeroBasedRef@@YAXPEAU_REFERENCE_EX@@E@Z @ 0x1C0106270 (-ndisInitializeZeroBasedRef@@YAXPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C010A03C (-ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z @ 0x1C010A8F4 (-ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z.c)
 *     ?RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z @ 0x1C0122888 (-RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01230B0 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

__int64 __fastcall ndisAttachFilterInner(
        struct _NDIS_MINIPORT_BLOCK *a1,
        _NDIS_FILTER_DRIVER_BLOCK *this,
        int a3,
        struct NDIS_BIND_FILTER_LINK *a4)
{
  __int64 v7; // rdx
  int v8; // ecx
  struct _NDIS_MINIPORT_BLOCK *v9; // rsi
  struct NDIS_BIND_FILTER_LINK *v10; // r13
  struct _NDIS_FILTER_DRIVER_BLOCK *v11; // r15
  unsigned __int8 v12; // r8
  unsigned int FilterAdapterRegistry; // r14d
  PVOID PoolWithTag; // rax
  __int64 v15; // rdx
  __int64 v16; // rdi
  struct Rtl::KString *v17; // rax
  void *v18; // rcx
  unsigned __int16 v19; // bx
  _WORD *v20; // rax
  __int64 Watchdog; // rax
  int v22; // eax
  struct _NDIS_FILTER_BLOCK *v23; // r14
  struct _NDIS_FILTER_BLOCK *v24; // rbx
  KIRQL v25; // dl
  _NDIS_MINIPORT_BLOCK *BaseMiniport; // rax
  struct _NDIS_MINIPORT_BLOCK *v27; // r13
  KIRQL v28; // al
  Ndis::BindState *v29; // r12
  struct _NDIS_MINIPORT_BLOCK *v30; // rdx
  __int64 v31; // rax
  unsigned __int8 v32; // al
  UCHAR v33; // dl
  __int64 v34; // rax
  _NDIS_PHYSICAL_MEDIUM PhysicalMediaType; // eax
  __int64 v36; // rcx
  _NDIS_OFFLOAD *p_MiniportCurrentConfig; // rax
  _NDIS_HD_SPLIT_CURRENT_CONFIG *HDSplitCurrentConfig; // rax
  _NDIS_RECEIVE_FILTER_CAPABILITIES *TopReceiveFilterCurrentCapabilities; // rcx
  _NDIS_RECEIVE_FILTER_CAPABILITIES *ReceiveFilterCapabilities; // rax
  _NDIS_NIC_SWITCH_CAPABILITIES *TopNicSwitchCurrentCapabilities; // rcx
  _NDIS_NIC_SWITCH_CAPABILITIES *NicSwitchCapabilities; // rax
  _NDIS_IF_BLOCK *IfBlock; // rdx
  void *v44; // rax
  void *v45; // rcx
  void (__stdcall *v46)(NDIS_HANDLE, ULONG, PVOID, NDIS_PHYSICAL_ADDRESS); // rdx
  _NDIS_MEDIUM MediaType; // eax
  const struct _EVENT_DESCRIPTOR *v48; // rdx
  __int64 v49; // rcx
  _NET_LUID_LH *v50; // rax
  __int64 v51; // r8
  int v52; // ecx
  __int64 MiniportMediaType; // rdx
  char v54; // r12
  __int64 v55; // rcx
  __int64 v56; // rax
  NET_IFINDEX v57; // edx
  __int64 v58; // rax
  KIRQL v59; // al
  struct _NDIS_MINIPORT_BLOCK *v60; // rcx
  KIRQL v61; // bl
  __int64 v62; // rbx
  KIRQL v63; // dl
  int v64; // eax
  KIRQL v65; // dl
  PVOID v66; // r12
  char *v67; // rbx
  NTSTATUS v68; // ebx
  struct _NDIS_MINIPORT_BLOCK *v69; // rdx
  __int64 v70; // rdx
  _NDIS_MINIPORT_OFFLOAD *Offload; // rax
  KIRQL v73; // dl
  struct _NDIS_MINIPORT_BLOCK *v74; // rdx
  bool v75; // cf
  USHORT v76; // ax
  int v77; // eax
  KIRQL v78; // dl
  __int64 v79; // rax
  NET_IFINDEX IfIndex; // edx
  __int64 v81; // rcx
  _NDIS_MEDIUM v82; // ecx
  int v83; // [rsp+20h] [rbp-130h]
  struct _GUID *v84; // [rsp+28h] [rbp-128h]
  char v85[8]; // [rsp+38h] [rbp-118h]
  char v86[8]; // [rsp+40h] [rbp-110h]
  KIRQL NewIrql; // [rsp+D0h] [rbp-80h] BYREF
  char v88; // [rsp+D1h] [rbp-7Fh]
  unsigned __int8 v89; // [rsp+D2h] [rbp-7Eh]
  char v90; // [rsp+D3h] [rbp-7Dh]
  unsigned __int8 v91; // [rsp+D4h] [rbp-7Ch]
  Ndis::BindState *v92; // [rsp+D8h] [rbp-78h]
  struct _NDIS_MINIPORT_BLOCK *v93; // [rsp+E0h] [rbp-70h]
  int v94; // [rsp+E8h] [rbp-68h]
  int v95; // [rsp+ECh] [rbp-64h]
  int v96; // [rsp+F0h] [rbp-60h]
  int v97; // [rsp+F4h] [rbp-5Ch]
  int v98; // [rsp+F8h] [rbp-58h]
  int v99; // [rsp+FCh] [rbp-54h]
  int v100; // [rsp+100h] [rbp-50h]
  int v101; // [rsp+104h] [rbp-4Ch]
  int Data3; // [rsp+108h] [rbp-48h]
  int Data2; // [rsp+10Ch] [rbp-44h]
  _DWORD v104[4]; // [rsp+110h] [rbp-40h] BYREF
  struct _NDIS_FILTER_DRIVER_BLOCK *v105; // [rsp+120h] [rbp-30h]
  struct _NDIS_FILTER_BLOCK *v106; // [rsp+128h] [rbp-28h] BYREF
  struct _NDIS_FILTER_BLOCK *v107; // [rsp+130h] [rbp-20h] BYREF
  PVOID WnodeEventItem; // [rsp+138h] [rbp-18h] BYREF
  struct _NDIS_FILTER_ATTACH_PARAMETERS v109; // [rsp+140h] [rbp-10h] BYREF
  struct _UNICODE_STRING v110[10]; // [rsp+220h] [rbp+D0h] BYREF
  wchar_t v111[88]; // [rsp+2C0h] [rbp+170h] BYREF

  v94 = a3;
  v105 = this;
  v93 = a1;
  v106 = 0LL;
  v107 = 0LL;
  NewIrql = 0;
  v88 = 0;
  v92 = (Ndis::BindState *)a4;
  memset(&v109, 0, sizeof(v109));
  v104[0] = 0;
  v90 = 0;
  v91 = 0;
  v89 = 1;
  WnodeEventItem = 0LL;
  if ( !ndisReferenceFilterDriver(this, 0) )
    return 3221291010LL;
  if ( !ndisReferenceMiniport(a1, 0x27u) )
  {
    ndisDereferenceFilterDriver(this, v7, 0);
    return 3221291010LL;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x18u,
      (struct _GUID *)&WPP_3188c4384181338fe0d477b94428bcd6_Traceguids,
      (char)this,
      (char)a1,
      &this->DefaultFilterCharacteristics.FriendlyName.Length);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v8 = a4->BindDriver._p->_t.Guid.Data4[7];
  v96 = v93->InterfaceGuid.Data4[5];
  v95 = v8;
  v97 = v93->InterfaceGuid.Data4[4];
  v98 = v93->InterfaceGuid.Data4[3];
  v99 = v93->InterfaceGuid.Data4[2];
  v100 = v93->InterfaceGuid.Data4[1];
  v101 = v93->InterfaceGuid.Data4[0];
  Data3 = v93->InterfaceGuid.Data3;
  Data2 = v93->InterfaceGuid.Data2;
  v83 = Data2;
  LODWORD(v84) = Data3;
  v9 = v93;
  v10 = (struct NDIS_BIND_FILTER_LINK *)v92;
  if ( (int)RtlStringCbPrintfW(
              v111,
              0xA8uLL,
              (wchar_t *)L"{%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}-{%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}-%04u",
              v93->InterfaceGuid.Data1) < 0 )
  {
    v11 = v105;
    FilterAdapterRegistry = -1073741823;
LABEL_110:
    v16 = 0LL;
    goto LABEL_87;
  }
  ndisFindAdjacentFilters(v93, (struct NDIS_BIND_FILTER_LINK *)v92, &v107, &v106);
  v11 = v105;
  if ( v105->DefaultFilterCharacteristics.MajorNdisVersion > 6u
    || v105->DefaultFilterCharacteristics.MajorNdisVersion == 6
    && v105->DefaultFilterCharacteristics.MinorNdisVersion >= 0x28u )
  {
    v12 = v89;
  }
  else
  {
    v12 = 0;
  }
  FilterAdapterRegistry = ndisCreateFilterAdapterRegistry(&v105->DefaultFilterCharacteristics.ServiceName, v93, v12);
  if ( FilterAdapterRegistry )
    goto LABEL_110;
  if ( v93->MajorNdisVersion < 6u && (v93->LinkStateIndicationFlags & 1) == 0 )
    ndisMDoMiniportOp(v93, 1, 0x10114u, v104, 4u, 1u, 1u);
  if ( !ndisReferenceFilterDriver(v11, 3u) )
  {
    FilterAdapterRegistry = -1073676282;
    goto LABEL_110;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x358uLL, 0x6266444Eu);
  v16 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    FilterAdapterRegistry = -1073741670;
    ndisDereferenceFilterDriver(v11, v15, 3u);
    goto LABEL_87;
  }
  memset(PoolWithTag, 0, 0x358uLL);
  *(_QWORD *)(v16 + 184) = -1LL;
  *(_DWORD *)v16 = 56099077;
  *(_QWORD *)(v16 + 16) = v11;
  v17 = Rtl::KString::Initialize(v111);
  v18 = *(void **)(v16 + 40);
  *(_QWORD *)(v16 + 40) = v17;
  if ( v18 )
  {
    ExFreePoolWithTag(v18, 0x7274534Bu);
    v17 = *(struct Rtl::KString **)(v16 + 40);
  }
  if ( !v17 )
  {
    FilterAdapterRegistry = -1073741670;
    goto LABEL_122;
  }
  v19 = v11->DefaultFilterCharacteristics.FriendlyName.Length + 14 + v9->pAdapterInstanceName->Length;
  v20 = ExAllocatePoolWithTag(NonPagedPoolNx, v19 + 16LL, 0x7473444Eu);
  *(_QWORD *)(v16 + 48) = v20;
  if ( !v20 )
  {
    FilterAdapterRegistry = -1073741670;
    goto LABEL_122;
  }
  *v20 = 0;
  *(_WORD *)(*(_QWORD *)(v16 + 48) + 2LL) = v19;
  *(_QWORD *)(*(_QWORD *)(v16 + 48) + 8LL) = *(_QWORD *)(v16 + 48) + 16LL;
  RtlAppendUnicodeStringToString(*(PUNICODE_STRING *)(v16 + 48), v9->pAdapterInstanceName);
  *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 48) + 8LL) + 2 * ((unsigned __int64)**(unsigned __int16 **)(v16 + 48) >> 1)) = 45;
  **(_WORD **)(v16 + 48) += 2;
  RtlAppendUnicodeStringToString(*(PUNICODE_STRING *)(v16 + 48), &v11->DefaultFilterCharacteristics.FriendlyName);
  *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 48) + 8LL) + 2 * ((unsigned __int64)**(unsigned __int16 **)(v16 + 48) >> 1)) = 45;
  **(_WORD **)(v16 + 48) += 2;
  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 48) + 8LL) + 2 * ((unsigned __int64)**(unsigned __int16 **)(v16 + 48) >> 1)) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 40) + 8LL) + 2 * (((unsigned __int64)**(unsigned __int16 **)(v16 + 40) - 8) >> 1));
  **(_WORD **)(v16 + 48) += 8;
  *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 48) + 8LL) + 2 * ((unsigned __int64)**(unsigned __int16 **)(v16 + 48) >> 1)) = 0;
  *(_QWORD *)(v16 + 656) = NdisNblTrackerRegisterComponent(1, v16, *(_QWORD *)(v16 + 48));
  Watchdog = ndisAllocateWatchdog();
  wil::details::unique_storage<wil::details::resource_policy<NDISWATCHDOG__ *,void (*)(NDISWATCHDOG__ *),&void ndisFreeWatchdog(NDISWATCHDOG__ *),wistd::integral_constant<unsigned __int64,1>,NDISWATCHDOG__ *,__int64,-1,std::nullptr_t>>::reset(
    (__int64 *)(v16 + 184),
    Watchdog);
  KeInitializeSpinLock((PKSPIN_LOCK)(v16 + 144));
  *(_BYTE *)(v16 + 56) = 0;
  v22 = *(_DWORD *)(v16 + 56);
  if ( (v22 & 0x100) != 0 )
    v22 &= ~0x100u;
  *(_BYTE *)(v16 + 64) = 0;
  *(_DWORD *)(v16 + 56) = v22 | 8;
  ndisInitializeRef((struct _REFERENCE_EX *)(v16 + 72), 3u);
  ndisInitializeZeroBasedRef((struct _REFERENCE_EX *)(v16 + 312));
  ndisCloseRef((PKSPIN_LOCK)(v16 + 312));
  if ( ndisDatapathVerifierMode == 1 )
  {
    if ( MmIsDriverVerifying(*(struct _DRIVER_OBJECT **)(*(_QWORD *)(v16 + 16) + 16LL)) )
      *(_DWORD *)(v16 + 56) |= 0x200u;
  }
  else if ( ndisDatapathVerifierMode == 2 )
  {
    *(_DWORD *)(v16 + 56) |= 0x200u;
  }
  *(_QWORD *)(v16 + 584) = v11->DefaultFilterCharacteristics.SendNetBufferListsHandler;
  *(_QWORD *)(v16 + 592) = v11->DefaultFilterCharacteristics.SendNetBufferListsCompleteHandler;
  *(_QWORD *)(v16 + 608) = v11->DefaultFilterCharacteristics.ReceiveNetBufferListsHandler;
  *(_QWORD *)(v16 + 616) = v11->DefaultFilterCharacteristics.ReturnNetBufferListsHandler;
  *(_QWORD *)(v16 + 600) = v11->DefaultFilterCharacteristics.CancelSendNetBufferListsHandler;
  *(_QWORD *)(v16 + 168) = v16 + 160;
  *(_QWORD *)(v16 + 160) = v16 + 160;
  FilterAdapterRegistry = ndisAllocOrFreeIterativeDataPathTrackerIfNeeded(
                            (struct _NDIS_FILTER_BLOCK *)v16,
                            (struct _NDIS_FILTER_PARTIAL_CHARACTERISTICS *)(v16 + 576),
                            0);
  if ( FilterAdapterRegistry )
    goto LABEL_122;
  v23 = v107;
  *(_QWORD *)(v16 + 208) = ndisStackExpansionFallbackWorker;
  *(_QWORD *)(v16 + 192) = 0LL;
  v24 = v106;
  *(_QWORD *)(v16 + 216) = v16;
  *(_QWORD *)(v16 + 112) = v24;
  *(_QWORD *)(v16 + 120) = v23;
  if ( v24 || v23 || !v9->HighestFilter )
  {
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v9, &NewIrql);
    if ( v23 )
      v23->LowerFilter = (_NDIS_FILTER_BLOCK *)v16;
    else
      v9->HighestFilter = (_NDIS_FILTER_BLOCK *)v16;
    if ( v24 )
      v24->HigherFilter = (_NDIS_FILTER_BLOCK *)v16;
    else
      v9->LowestFilter = (_NDIS_FILTER_BLOCK *)v16;
    v25 = NewIrql;
    *(_QWORD *)(v16 + 32) = v9;
    v9->MiniportThread = 0LL;
    KeReleaseSpinLock(&v9->Lock, v25);
    BaseMiniport = v9->BaseMiniport;
    v88 = 1;
    v27 = v9;
    if ( BaseMiniport )
      v27 = BaseMiniport;
    v28 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalFilterListLock);
    *(_QWORD *)(v16 + 104) = ndisGlobalFilterList;
    NewIrql = v28;
    ndisGlobalFilterList = (PVOID)v16;
    KeReleaseSpinLock(&ndisGlobalFilterListLock, v28);
    if ( ndisQueueFilterOnDriver((struct _NDIS_FILTER_BLOCK *)v16, v11) )
    {
      if ( (v11->Bind._p->_t.FilterBindFlags & 2) == 0
        || (FilterAdapterRegistry = ndisCreateFilterInstanceRegistry(
                                      &v11->DefaultFilterCharacteristics.ServiceName,
                                      (struct _NDIS_FILTER_BLOCK *)v16,
                                      v9)) == 0 )
      {
        v29 = v92;
        *(_BYTE *)(v16 + 64) = 1;
        *(_QWORD *)(v16 + 760) = v29;
        Ndis::BindEngine::BeginPolicyUpdates(&v9->BindEngine);
        Ndis::BindState::AddBindContext(v29, (void *)v16);
        Ndis::BindEngine::EndPolicyUpdates(&v9->BindEngine, v30);
        memset(&v109, 0, sizeof(v109));
        v31 = *(_QWORD *)(v16 + 16);
        if ( *(_BYTE *)(v31 + 100) <= 6u )
        {
          v32 = *(_BYTE *)(v31 + 101);
          if ( v32 )
          {
            if ( v32 < 0x14u )
            {
              v33 = 2;
              v76 = 176;
            }
            else
            {
              if ( v32 >= 0x1Eu )
                goto LABEL_37;
              v33 = 3;
              v76 = 200;
            }
          }
          else
          {
            v33 = 1;
            v76 = 164;
          }
          v109.Header.Size = v76;
LABEL_38:
          v109.Header.Revision = v33;
          v109.Header.Type = -103;
          v109.BaseMiniportIfIndex = v27->IfIndex;
          v109.BaseMiniportNetLuid.Value = v27->NetLuid.Value;
          v109.BaseMiniportName = &v27->MiniportName;
          v109.BaseMiniportInstanceName = v27->pAdapterInstanceName;
          v34 = *(_QWORD *)(v16 + 112);
          if ( v34 )
          {
            v109.LowerIfIndex = *(_DWORD *)(v34 + 688);
            v109.LowerIfNetLuid.Value = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 112) + 696LL) + 1312LL);
          }
          else
          {
            v109.LowerIfIndex = *(_DWORD *)(*(_QWORD *)(v16 + 32) + 4056LL);
            v109.LowerIfNetLuid.Value = *(_QWORD *)(*(_QWORD *)(v16 + 32) + 4024LL);
          }
          v109.FilterModuleGuidName = *(_UNICODE_STRING **)(v16 + 40);
          v109.MiniportMediaSpecificAttributes = v9->MediaSpecificAttributes;
          if ( (v9->MacOptions & 0x80000001) == 0x80000001 )
          {
            v109.MiniportMediaType = NdisMediumWan;
          }
          else
          {
            if ( v24 )
            {
              v109.MiniportMediaType = v24->MediaType;
              PhysicalMediaType = v24->PhysicalMediaType;
              goto LABEL_43;
            }
            v109.MiniportMediaType = v9->MiniportMediaType;
          }
          PhysicalMediaType = v9->MiniportPhysicalMediumType;
LABEL_43:
          v109.MiniportPhysicalMediaType = PhysicalMediaType;
          v36 = *(_QWORD *)(v16 + 112);
          if ( v36 )
          {
            v109.MediaConnectState = *(_DWORD *)(v36 + 380);
            v109.MediaDuplexState = *(_DWORD *)(v36 + 384);
            v109.XmitLinkSpeed = *(_QWORD *)(v36 + 392);
            v109.RcvLinkSpeed = *(_QWORD *)(v36 + 400);
            p_MiniportCurrentConfig = *(_NDIS_OFFLOAD **)(v36 + 664);
          }
          else
          {
            v109.MediaConnectState = v9->MiniportMediaConnectState;
            v109.MediaDuplexState = v9->MiniportMediaDuplexState;
            v109.XmitLinkSpeed = v9->MiniportXmitLinkSpeed;
            v109.RcvLinkSpeed = v9->MiniportRcvLinkSpeed;
            Offload = v9->Offload;
            if ( !Offload || !Offload->SupportsOffload )
            {
              v109.DefaultOffloadConfiguration = 0LL;
              goto LABEL_46;
            }
            p_MiniportCurrentConfig = &Offload->MiniportCurrentConfig;
          }
          v109.DefaultOffloadConfiguration = p_MiniportCurrentConfig;
LABEL_46:
          HDSplitCurrentConfig = v109.HDSplitCurrentConfig;
          if ( v9->HDSplitCurrentConfig )
            HDSplitCurrentConfig = v9->HDSplitCurrentConfig;
          TopReceiveFilterCurrentCapabilities = v9->TopReceiveFilterCurrentCapabilities;
          v109.HDSplitCurrentConfig = HDSplitCurrentConfig;
          ReceiveFilterCapabilities = v109.ReceiveFilterCapabilities;
          if ( TopReceiveFilterCurrentCapabilities )
            ReceiveFilterCapabilities = TopReceiveFilterCurrentCapabilities;
          TopNicSwitchCurrentCapabilities = v9->TopNicSwitchCurrentCapabilities;
          v109.ReceiveFilterCapabilities = ReceiveFilterCapabilities;
          NicSwitchCapabilities = v109.NicSwitchCapabilities;
          if ( TopNicSwitchCurrentCapabilities )
            NicSwitchCapabilities = TopNicSwitchCurrentCapabilities;
          v109.NicSwitchCapabilities = NicSwitchCapabilities;
          if ( v33 >= 4u )
          {
            if ( v9->SriovCurrentCapabilities )
            {
              v109.SriovCapabilities = v9->SriovCurrentCapabilities;
              if ( (unsigned int)ndisIovGetNicSwitchList(v9, &v109.NicSwitchArray) )
              {
                FilterAdapterRegistry = -1073741823;
LABEL_135:
                v10 = (struct NDIS_BIND_FILTER_LINK *)v29;
                goto LABEL_122;
              }
            }
            v109.BaseMiniportIfConnectorPresent = v9->IfBlock->ifConnectorPresent;
          }
          IfBlock = v9->IfBlock;
          v109.MiniportPhysicalDeviceObject = v9->PhysicalDeviceObject;
          v109.MacAddressLength = IfBlock->ifPhysAddress.Length;
          memmove(v109.CurrentMacAddress, IfBlock->ifPhysAddress.Address, v109.MacAddressLength);
          *(_DWORD *)(v16 + 344) = v109.MediaConnectState;
          *(_DWORD *)(v16 + 348) = v109.MediaDuplexState;
          *(_QWORD *)(v16 + 352) = v109.XmitLinkSpeed;
          *(_QWORD *)(v16 + 360) = v109.RcvLinkSpeed;
          if ( v109.MediaConnectState == MediaConnectStateConnected )
          {
            v44 = ndisFilterIndicateReceiveNetBufferLists;
            v45 = ndisFilterSendNetBufferLists;
            v46 = (void (__stdcall *)(NDIS_HANDLE, ULONG, PVOID, NDIS_PHYSICAL_ADDRESS))ndisFilterCancelSendNetBufferLists;
          }
          else
          {
            ndisFilterXStateSetFlag((struct _NDIS_FILTER_BLOCK *)v16);
            v44 = ndisFakeFilterReceiveHandler;
            v45 = ndisFakeFilterSendHandler;
            v46 = NdisQueryOffloadState;
          }
          *(_QWORD *)(v16 + 640) = v46;
          *(_QWORD *)(v16 + 624) = v45;
          *(_QWORD *)(v16 + 632) = v44;
          if ( (v9->MacOptions & 0x80000001) == 0x80000001 )
            MediaType = v9->MediaType;
          else
            MediaType = v109.MiniportMediaType;
          *(_DWORD *)(v16 + 336) = MediaType;
          *(_DWORD *)(v16 + 340) = v109.MiniportPhysicalMediaType;
          FilterAdapterRegistry = ndisIfCreateFilterInterface((struct _NDIS_FILTER_BLOCK *)v16);
          if ( FilterAdapterRegistry )
            goto LABEL_135;
          if ( (byte_1C00E6083 & 1) != 0 )
            McTemplateK0juqjzzz_EtwWriteTransfer(
              *(_QWORD *)(v16 + 32) + 4008LL,
              *(_QWORD *)(v16 + 40),
              (const GUID *)(v16 + 672),
              v16 + 672,
              *(_BYTE *)(v16 + 64),
              6,
              *(_QWORD *)(v16 + 32) + 4008LL,
              *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v16 + 32) + 3856LL) + 8LL),
              *(const wchar_t **)(*(_QWORD *)(v16 + 40) + 8LL),
              *(const wchar_t **)(*(_QWORD *)(v16 + 48) + 8LL));
          if ( Microsoft_Windows_Networking_CorrelationEnabled )
            EtwEx_tidActivityInfoTransfer(v49, v48, (const struct _GUID *)(v16 + 672), &v9->InterfaceGuid, v83, v84, 0);
          v109.IfIndex = *(_DWORD *)(v16 + 688);
          v50 = *(_NET_LUID_LH **)(v16 + 696);
          v91 = 1;
          v109.NetLuid = v50[164];
          FilterAdapterRegistry = ndisFInvokeAttach((struct _NDIS_FILTER_BLOCK *)v16, &v109);
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            *(_QWORD *)v85 = &v11->DefaultFilterCharacteristics.FriendlyName;
            WPP_RECORDER_SF_qqZddZD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v11->DefaultFilterCharacteristics.MajorNdisVersion,
              v51,
              (__int64)&WPP_RECORDER_INITIALIZED,
              v83);
          }
          if ( FilterAdapterRegistry )
          {
            v29->AllowBindDespiteMandatory = v109.Flags & 1;
            NDIS_ACQUIRE_FILTER_SPIN_LOCK((struct _NDIS_FILTER_BLOCK *)v16, &NewIrql);
            *(_BYTE *)(v16 + 56) = 0;
            v77 = *(_DWORD *)(v16 + 56);
            if ( (v77 & 0x100) != 0 )
              v77 &= ~0x100u;
            v78 = NewIrql;
            *(_QWORD *)(v16 + 152) = 0LL;
            *(_DWORD *)(v16 + 56) = v77 | 8;
            KeReleaseSpinLock((PKSPIN_LOCK)(v16 + 144), v78);
            *(_BYTE *)(v16 + 64) = 0;
            if ( (byte_1C00E6083 & 1) != 0 )
              McTemplateK0juqjzzz_EtwWriteTransfer(
                *(_QWORD *)(v16 + 48),
                *(_QWORD *)(v16 + 40),
                (const GUID *)(v16 + 672),
                v16 + 672,
                0,
                7,
                *(_QWORD *)(v16 + 32) + 4008LL,
                *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v16 + 32) + 3856LL) + 8LL),
                *(const wchar_t **)(*(_QWORD *)(v16 + 40) + 8LL),
                *(const wchar_t **)(*(_QWORD *)(v16 + 48) + 8LL));
            goto LABEL_135;
          }
          v52 = *(_DWORD *)(v16 + 336);
          MiniportMediaType = (unsigned int)v109.MiniportMediaType;
          if ( v52 == v109.MiniportMediaType || (v9->MacOptions & 0x80000001) == 0x80000001 )
          {
            v54 = v90;
          }
          else
          {
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              *(_DWORD *)v86 = v109.MiniportMediaType;
              WPP_RECORDER_SF_qqLd(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                4u,
                0xDu,
                0x1Au,
                (struct _GUID *)&WPP_3188c4384181338fe0d477b94428bcd6_Traceguids,
                (char)v9,
                v16,
                v52,
                *(_QWORD *)v86);
              MiniportMediaType = (unsigned int)v109.MiniportMediaType;
            }
            if ( Microsoft_Windows_NDISEnableBits < 0 )
              McTemplateK0jqxjqxdd_EtwWriteTransfer(
                *(_QWORD *)(v16 + 696),
                MiniportMediaType,
                &v9->InterfaceGuid,
                (__int64)&v9->InterfaceGuid,
                v9->IfIndex,
                v9->NetLuid.Value,
                v16 + 672,
                *(_DWORD *)(v16 + 688),
                *(_QWORD *)(*(_QWORD *)(v16 + 696) + 1312LL),
                *(_DWORD *)(v16 + 336),
                MiniportMediaType);
            v54 = 1;
          }
          v55 = *(_QWORD *)(v16 + 120);
          if ( v55 )
          {
            v79 = *(_QWORD *)(v16 + 112);
            if ( v79 )
              IfIndex = *(_DWORD *)(v79 + 688);
            else
              IfIndex = v9->IfIndex;
            NdisIfDeleteIfStackEntry(*(_DWORD *)(v55 + 688), IfIndex);
          }
          v56 = *(_QWORD *)(v16 + 112);
          if ( v56 )
            v57 = *(_DWORD *)(v56 + 688);
          else
            v57 = *(_DWORD *)(*(_QWORD *)(v16 + 32) + 4056LL);
          NdisIfAddIfStackEntry(*(_DWORD *)(v16 + 688), v57);
          v58 = *(_QWORD *)(v16 + 120);
          if ( v58 )
            NdisIfAddIfStackEntry(*(_DWORD *)(v58 + 688), *(_DWORD *)(v16 + 688));
          v59 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
          v60 = *(struct _NDIS_MINIPORT_BLOCK **)(v16 + 32);
          v61 = v59;
          NewIrql = v59;
          ndisIfUpdateFilterIfStack(v60);
          KeReleaseSpinLock(&ndisIfListLock, v61);
          v62 = *(_QWORD *)(v16 + 112);
          if ( v62 )
          {
            NDIS_ACQUIRE_FILTER_SPIN_LOCK(*(struct _NDIS_FILTER_BLOCK **)(v16 + 112), &NewIrql);
            *(_DWORD *)(v16 + 344) = *(_DWORD *)(v62 + 380);
            *(_DWORD *)(v16 + 348) = *(_DWORD *)(v62 + 384);
            *(_QWORD *)(v16 + 352) = *(_QWORD *)(v62 + 392);
            *(_QWORD *)(v16 + 360) = *(_QWORD *)(v62 + 400);
            *(_DWORD *)(v16 + 368) = *(_DWORD *)(v62 + 408);
            *(_DWORD *)(v16 + 372) = *(_DWORD *)(v62 + 412);
            ndisOpenRef((PKSPIN_LOCK)(v16 + 312));
            v63 = NewIrql;
            *(_QWORD *)(v62 + 152) = 0LL;
            KeReleaseSpinLock((PKSPIN_LOCK)(v62 + 144), v63);
          }
          else
          {
            NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v9, &NewIrql);
            *(_DWORD *)(v16 + 344) = v9->MiniportMediaConnectState;
            *(_DWORD *)(v16 + 348) = v9->MiniportMediaDuplexState;
            *(_QWORD *)(v16 + 352) = v9->MiniportXmitLinkSpeed;
            *(_QWORD *)(v16 + 360) = v9->MiniportRcvLinkSpeed;
            *(_DWORD *)(v16 + 368) = v9->MiniportPauseFunctions;
            *(_DWORD *)(v16 + 372) = v9->MiniportAutoNegotiationFlags;
            ndisOpenRef((PKSPIN_LOCK)(v16 + 312));
            v73 = NewIrql;
            v9->MiniportThread = 0LL;
            KeReleaseSpinLock(&v9->Lock, v73);
          }
          *(_DWORD *)(*(_QWORD *)(v16 + 696) + 1220LL) = *(_DWORD *)(v16 + 344);
          *(_DWORD *)(*(_QWORD *)(v16 + 696) + 1224LL) = *(_DWORD *)(v16 + 348);
          *(_QWORD *)(*(_QWORD *)(v16 + 696) + 1208LL) = *(_QWORD *)(v16 + 360);
          *(_QWORD *)(*(_QWORD *)(v16 + 696) + 1200LL) = *(_QWORD *)(v16 + 352);
          ndisIndicateInitialStateToFilter((struct _NDIS_FILTER_BLOCK *)v16);
          NDIS_ACQUIRE_FILTER_SPIN_LOCK((struct _NDIS_FILTER_BLOCK *)v16, &NewIrql);
          *(_BYTE *)(v16 + 56) = 0;
          v64 = *(_DWORD *)(v16 + 56) | 4;
          *(_DWORD *)(v16 + 56) = v64;
          if ( v54 )
          {
            *(_DWORD *)(v16 + 56) = v64 | 0x8000;
            ++v9->MediaChangeFilters;
            v81 = *(_QWORD *)(v16 + 696);
            *(_DWORD *)(v16 + 336) = v109.MiniportMediaType;
            *(_DWORD *)(v16 + 340) = v109.MiniportPhysicalMediaType;
            *(_DWORD *)(v81 + 564) = *(_DWORD *)(v16 + 336);
            *(_DWORD *)(*(_QWORD *)(v16 + 696) + 568LL) = *(_DWORD *)(v16 + 340);
          }
          v65 = NewIrql;
          *(_QWORD *)(v16 + 152) = 0LL;
          KeReleaseSpinLock((PKSPIN_LOCK)(v16 + 144), v65);
          if ( v54 )
          {
            v82 = *(_DWORD *)(v16 + 336);
            v9->MediaType = v82;
            v9->PhysicalMediumType = *(_DWORD *)(v16 + 340);
            if ( v82 == NdisMedium802_3 )
            {
              if ( EthInitializeFilter(
                     v9->TopFilterRestartAttributes.MaxMulticastListSize,
                     v9->IfBlock->ifPhysAddress.Address,
                     v9->EthDB) )
              {
                v9->EthDB->Miniport = v9;
              }
            }
          }
          *(_BYTE *)(v16 + 64) = 2;
          if ( (byte_1C00E6083 & 1) != 0 )
            McTemplateK0juqjzzz_EtwWriteTransfer(
              *(_QWORD *)(v16 + 32) + 4008LL,
              *(_QWORD *)(v16 + 40),
              (const GUID *)(v16 + 672),
              v16 + 672,
              2,
              8,
              *(_QWORD *)(v16 + 32) + 4008LL,
              *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v16 + 32) + 3856LL) + 8LL),
              *(const wchar_t **)(*(_QWORD *)(v16 + 40) + 8LL),
              *(const wchar_t **)(*(_QWORD *)(v16 + 48) + 8LL));
          ndisPktMonFilterRegister((struct _NDIS_FILTER_BLOCK *)v16);
          ndisReferenceMiniport(v9, 0x28u);
          if ( v9->MajorNdisVersion < 6u && !v9->Miniport5HasNdis6Component )
            v9->Miniport5HasNdis6Component = 1;
          ndisSetupWmiNode(
            v9,
            *(const struct _UNICODE_STRING **)(v16 + 48),
            v9->BindPaths->Paths[0].Length + v11->DefaultFilterCharacteristics.UniqueName.Length + 4,
            (__int128 *)&GUID_NDIS_NOTIFY_FILTER_ARRIVAL,
            (struct tagWNODE_SINGLE_INSTANCE **)&WnodeEventItem);
          v66 = WnodeEventItem;
          if ( WnodeEventItem )
          {
            v67 = (char *)WnodeEventItem + *((unsigned int *)WnodeEventItem + 14);
            memmove(
              v67,
              v11->DefaultFilterCharacteristics.UniqueName.Buffer,
              v11->DefaultFilterCharacteristics.UniqueName.Length);
            memmove(
              &v67[v11->DefaultFilterCharacteristics.UniqueName.Length + 2],
              v9->BindPaths->Paths[0].Buffer,
              v9->BindPaths->Paths[0].Length);
            v68 = IoWMIWriteEvent(v66);
            if ( v68 < 0 )
            {
              if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  2u,
                  1u,
                  0x1Bu,
                  (struct _GUID *)&WPP_3188c4384181338fe0d477b94428bcd6_Traceguids);
              if ( (byte_1C00E6081 & 1) != 0 )
                McTemplateK0qqq_EtwWriteTransfer(
                  0LL,
                  &FilterArrivalIndicationFailed,
                  (const GUID *)(v16 + 672),
                  v68,
                  1,
                  0);
              ExFreePoolWithTag(v66, 0);
            }
          }
          Ndis::BindEngine::BeginPolicyUpdates(&v9->BindEngine);
          v10 = (struct NDIS_BIND_FILTER_LINK *)v92;
          if ( Ndis::BindState::SetPause(v92, DatapathRunning, PauseReason_InitialPause) )
          {
            memset(v110, 0, sizeof(v110));
            if ( (unsigned __int8)byte_1C00E434B >= 4u )
            {
              ndisGetBindLinkNameForTracing(v10, v110);
              if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_Zq(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  (int)v69,
                  0x1Cu,
                  0x1Cu,
                  (struct _GUID *)&WPP_3188c4384181338fe0d477b94428bcd6_Traceguids,
                  v110[0].Buffer,
                  *(_QWORD *)&v110[0].Length);
            }
          }
          Ndis::BindEngine::EndPolicyUpdates(&v9->BindEngine, v69);
          if ( v9->MajorNdisVersion < 6u && !v9->Miniport5HasNdis6Component )
            v9->Miniport5HasNdis6Component = 1;
LABEL_87:
          if ( ndisVerifierNdisDispatch
            && v16
            && MmIsDriverVerifying(*(struct _DRIVER_OBJECT **)(*(_QWORD *)(v16 + 16) + 16LL))
            && !*(_QWORD *)(v16 + 784)
            && (*((int (__fastcall **)(_DRIVER_OBJECT *, __int64, void **))ndisVerifierNdisDispatch + 1))(
                 v11->DriverObject,
                 v16,
                 &v11->FilterDriverContext) < 0
            && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              0xDu,
              0x1Du,
              (struct _GUID *)&WPP_3188c4384181338fe0d477b94428bcd6_Traceguids,
              v16);
          }
          goto LABEL_88;
        }
LABEL_37:
        v109.Header.Size = 224;
        v33 = 4;
        goto LABEL_38;
      }
    }
    else
    {
      FilterAdapterRegistry = -1073676286;
    }
    v10 = (struct NDIS_BIND_FILTER_LINK *)v92;
    goto LABEL_122;
  }
  FilterAdapterRegistry = -1073741823;
LABEL_122:
  if ( *(_QWORD *)(v16 + 760) )
  {
    Ndis::BindEngine::BeginPolicyUpdates(&v9->BindEngine);
    Ndis::BindState::RemoveBindContext(&v10->BindState, (void *)v16);
    Ndis::BindEngine::EndPolicyUpdates(&v9->BindEngine, v74);
    *(_QWORD *)(v16 + 760) = 0LL;
  }
  v75 = v88 != 0;
  v88 = -v88;
  ndisFilterAttachCleanUp((PVOID)v16, (struct _NDIS_MINIPORT_BLOCK *)((unsigned __int64)v9 & -(__int64)v75), v91);
LABEL_88:
  ndisHandleFilterHandlersChange(v9);
  if ( v109.NicSwitchArray )
  {
    ExFreePoolWithTag(v109.NicSwitchArray, 0);
    v109.NicSwitchArray = 0LL;
  }
  if ( FilterAdapterRegistry
    && !v10->BindState.AllowBindDespiteMandatory
    && (v10->BindDriver._p->_t.FilterBindFlags & 1) == 0 )
  {
    ndisNotifyBindFailureOnUnboundProtocols(v9);
  }
  ndisDereferenceMiniport(v9, 0x27u);
  ndisDereferenceFilterDriver(v11, v70, 0);
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v85 = FilterAdapterRegistry;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x1Eu,
      (struct _GUID *)&WPP_3188c4384181338fe0d477b94428bcd6_Traceguids,
      (char)v11,
      (char)v9,
      *(_QWORD *)v85);
  }
  return FilterAdapterRegistry;
}
