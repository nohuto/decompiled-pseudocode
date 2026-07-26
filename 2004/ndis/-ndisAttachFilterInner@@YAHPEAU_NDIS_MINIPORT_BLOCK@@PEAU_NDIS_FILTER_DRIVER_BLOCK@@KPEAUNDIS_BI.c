/*
 * XREFs of ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C012D1DC
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
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0018D30 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1C0018E48 (-ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x1C001A188 (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qqLd @ 0x1C001B610 (WPP_RECORDER_SF_qqLd.c)
 *     WPP_RECORDER_SF_qqZ @ 0x1C0024ED0 (WPP_RECORDER_SF_qqZ.c)
 *     ?RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1C0024FFC (-RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     ?ndisCreateFilterAdapterRegistry@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00250BC (-ndisCreateFilterAdapterRegistry@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@QEAAXPEAUNDISWATCHDOG__@@@Z @ 0x1C0025358 (-reset@-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1-ndisFreeWatchdog@@.c)
 *     ?ndisCloseRef@@YAEPEAU_REFERENCE_EX@@@Z @ 0x1C002538C (-ndisCloseRef@@YAEPEAU_REFERENCE_EX@@@Z.c)
 *     ?ndisAllocOrFreeIterativeDataPathTrackerIfNeeded@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_PARTIAL_CHARACTERISTICS@@_N@Z @ 0x1C00253D8 (-ndisAllocOrFreeIterativeDataPathTrackerIfNeeded@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_PA.c)
 *     ?ndisQueueFilterOnDriver@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@@Z @ 0x1C002543C (-ndisQueueFilterOnDriver@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@@Z.c)
 *     ?ndisFilterXStateSetFlag@@YAXPEAU_NDIS_FILTER_BLOCK@@E@Z @ 0x1C0025590 (-ndisFilterXStateSetFlag@@YAXPEAU_NDIS_FILTER_BLOCK@@E@Z.c)
 *     NdisIfAddIfStackEntry @ 0x1C00255B0 (NdisIfAddIfStackEntry.c)
 *     ?ndisIfUpdateFilterIfStack@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00257B4 (-ndisIfUpdateFilterIfStack@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisOpenRef@@YAXPEAU_REFERENCE_EX@@@Z @ 0x1C0025F34 (-ndisOpenRef@@YAXPEAU_REFERENCE_EX@@@Z.c)
 *     ?ndisIndicateInitialStateToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0025F6C (-ndisIndicateInitialStateToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisReferenceFilterDriver@@YAEPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4_NDIS_LWFDRV_REFTAG@@@Z @ 0x1C0026538 (-ndisReferenceFilterDriver@@YAEPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4_NDIS_LWFDRV_REFTAG@@@Z.c)
 *     ?ndisDereferenceFilterDriver@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@EW4_NDIS_LWFDRV_REFTAG@@@Z @ 0x1C002655C (-ndisDereferenceFilterDriver@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@EW4_NDIS_LWFDRV_REFTAG@@@Z.c)
 *     ?ndisHandleFilterHandlersChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0026614 (-ndisHandleFilterHandlersChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qqZddZD @ 0x1C0029E10 (WPP_RECORDER_SF_qqZddZD.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C002A744 (WPP_RECORDER_SF_Zq.c)
 *     NdisNblTrackerRegisterComponent @ 0x1C002CEB0 (NdisNblTrackerRegisterComponent.c)
 *     ?ndisIfCreateFilterInterface@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C002DEF8 (-ndisIfCreateFilterInterface@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C003D700 (__security_check_cookie.c)
 *     ?NDIS_RELEASE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@E@Z @ 0x1C003D888 (-NDIS_RELEASE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@E@Z.c)
 *     ?FILTER_CLEAR_ALL_STATE_FLAGS@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C003DE04 (-FILTER_CLEAR_ALL_STATE_FLAGS@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C003FB60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C003FB80 (memmove.c)
 *     memset @ 0x1C003FE40 (memset.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1C0060108 (McTemplateK0qqq_EtwWriteTransfer.c)
 *     ?EthInitializeFilter@@YAEIPEBEPEAU_X_FILTER@@@Z @ 0x1C0064850 (-EthInitializeFilter@@YAEIPEBEPEAU_X_FILTER@@@Z.c)
 *     ?EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z @ 0x1C0065858 (-EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z.c)
 *     McTemplateK0jqxjqxdd_EtwWriteTransfer @ 0x1C00658F8 (McTemplateK0jqxjqxdd_EtwWriteTransfer.c)
 *     McTemplateK0juqjzzz_EtwWriteTransfer @ 0x1C00659D0 (McTemplateK0juqjzzz_EtwWriteTransfer.c)
 *     ?ndisCreateFilterInstanceRegistry@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00676CC (-ndisCreateFilterInstanceRegistry@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MIN.c)
 *     ?ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0068450 (-ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisIovGetNicSwitchList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_NDIS_NIC_SWITCH_INFO_ARRAY@@@Z @ 0x1C0077F08 (-ndisIovGetNicSwitchList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_NDIS_NIC_SWITCH_INFO_ARRAY@@@Z.c)
 *     NdisIfDeleteIfStackEntry @ 0x1C00B1500 (NdisIfDeleteIfStackEntry.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FB73C (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00FD39C (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FDA50 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ @ 0x1C00FE0F8 (-ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ.c)
 *     ?ndisFInvokeAttach@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_ATTACH_PARAMETERS@@@Z @ 0x1C00FFFE0 (-ndisFInvokeAttach@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_ATTACH_PARAMETERS@@@Z.c)
 *     ?ndisPktMonFilterRegister@@YAJPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0100894 (-ndisPktMonFilterRegister@@YAJPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEB_W@Z @ 0x1C0101064 (-Initialize@KString@Rtl@@SAPEAU12@PEB_W@Z.c)
 *     ?ndisFindAdjacentFilters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAPEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C0102590 (-ndisFindAdjacentFilters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAPEAU_NDIS_F.c)
 *     ?AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z @ 0x1C0102E5C (-AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z.c)
 *     ?ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z @ 0x1C0105DE8 (-ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisInitializeZeroBasedRef@@YAXPEAU_REFERENCE_EX@@E@Z @ 0x1C01061E0 (-ndisInitializeZeroBasedRef@@YAXPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0109FBC (-ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z @ 0x1C010A908 (-ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z.c)
 *     ?RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z @ 0x1C0122898 (-RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01230C0 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

__int64 __fastcall ndisAttachFilterInner(
        struct _NDIS_MINIPORT_BLOCK *a1,
        _NDIS_FILTER_DRIVER_BLOCK *this,
        int a3,
        struct NDIS_BIND_FILTER_LINK *a4)
{
  __int64 v8; // rdx
  int v9; // ecx
  struct _NDIS_MINIPORT_BLOCK *v10; // rsi
  struct NDIS_BIND_FILTER_LINK *v11; // r13
  struct _NDIS_FILTER_DRIVER_BLOCK *v12; // r15
  unsigned int FilterAdapterRegistry; // r14d
  __int64 v14; // rdi
  unsigned __int8 v15; // r8
  PVOID PoolWithTag; // rax
  __int64 v17; // rdx
  struct Rtl::KString *v18; // rax
  void *v19; // rcx
  unsigned __int16 v20; // bx
  _WORD *v21; // rax
  __int64 Watchdog; // rax
  struct _NDIS_FILTER_BLOCK *v23; // rcx
  int v24; // eax
  KIRQL v25; // dl
  struct _NDIS_FILTER_BLOCK *v26; // r14
  struct _NDIS_FILTER_BLOCK *v27; // rbx
  KIRQL v28; // dl
  _NDIS_MINIPORT_BLOCK *BaseMiniport; // rax
  struct _NDIS_MINIPORT_BLOCK *v30; // r13
  KIRQL v31; // al
  struct _NDIS_MINIPORT_BLOCK *v32; // rdx
  bool v33; // cf
  __int64 v34; // rdx
  Ndis::BindState *v35; // r12
  struct _NDIS_MINIPORT_BLOCK *v36; // rdx
  __int64 v37; // rax
  unsigned __int8 v38; // al
  UCHAR v39; // dl
  USHORT v40; // ax
  __int64 v41; // rax
  _NDIS_PHYSICAL_MEDIUM PhysicalMediaType; // eax
  __int64 v43; // rcx
  _NDIS_OFFLOAD *p_MiniportCurrentConfig; // rax
  _NDIS_MINIPORT_OFFLOAD *Offload; // rax
  _NDIS_HD_SPLIT_CURRENT_CONFIG *HDSplitCurrentConfig; // rax
  _NDIS_RECEIVE_FILTER_CAPABILITIES *TopReceiveFilterCurrentCapabilities; // rcx
  _NDIS_RECEIVE_FILTER_CAPABILITIES *ReceiveFilterCapabilities; // rax
  _NDIS_NIC_SWITCH_CAPABILITIES *TopNicSwitchCurrentCapabilities; // rcx
  _NDIS_NIC_SWITCH_CAPABILITIES *NicSwitchCapabilities; // rax
  _NDIS_IF_BLOCK *IfBlock; // rdx
  void *v52; // rax
  void *v53; // rcx
  void (__stdcall *v54)(NDIS_HANDLE, ULONG, PVOID, NDIS_PHYSICAL_ADDRESS); // rdx
  _NDIS_MEDIUM MediaType; // eax
  const struct _EVENT_DESCRIPTOR *v56; // rdx
  __int64 v57; // rcx
  _NET_LUID_LH *v58; // rax
  __int64 v59; // r8
  struct _NDIS_FILTER_BLOCK *v60; // rcx
  int v61; // eax
  KIRQL v62; // dl
  int v63; // ecx
  __int64 MiniportMediaType; // rdx
  char v65; // r12
  __int64 v66; // rcx
  __int64 v67; // rax
  NET_IFINDEX IfIndex; // edx
  __int64 v69; // rax
  NET_IFINDEX v70; // edx
  __int64 v71; // rax
  KIRQL v72; // al
  struct _NDIS_MINIPORT_BLOCK *v73; // rcx
  KIRQL v74; // bl
  __int64 v75; // rbx
  KIRQL v76; // dl
  int v77; // eax
  __int64 v78; // rcx
  _NDIS_MEDIUM v79; // ecx
  PVOID v80; // r12
  char *v81; // rbx
  NTSTATUS v82; // ebx
  struct _NDIS_MINIPORT_BLOCK *v83; // rdx
  int v84; // [rsp+20h] [rbp-130h]
  struct _GUID *v85; // [rsp+28h] [rbp-128h]
  char v86[8]; // [rsp+38h] [rbp-118h]
  char v87[8]; // [rsp+40h] [rbp-110h]
  KIRQL NewIrql; // [rsp+D0h] [rbp-80h] BYREF
  char v89; // [rsp+D1h] [rbp-7Fh]
  unsigned __int8 v90; // [rsp+D2h] [rbp-7Eh]
  char v91; // [rsp+D3h] [rbp-7Dh]
  unsigned __int8 v92; // [rsp+D4h] [rbp-7Ch]
  Ndis::BindState *v93; // [rsp+D8h] [rbp-78h]
  struct _NDIS_MINIPORT_BLOCK *v94; // [rsp+E0h] [rbp-70h]
  int v95; // [rsp+E8h] [rbp-68h]
  int v96; // [rsp+ECh] [rbp-64h]
  int v97; // [rsp+F0h] [rbp-60h]
  int v98; // [rsp+F4h] [rbp-5Ch]
  int v99; // [rsp+F8h] [rbp-58h]
  int v100; // [rsp+FCh] [rbp-54h]
  int v101; // [rsp+100h] [rbp-50h]
  int v102; // [rsp+104h] [rbp-4Ch]
  int Data3; // [rsp+108h] [rbp-48h]
  int Data2; // [rsp+10Ch] [rbp-44h]
  _DWORD v105[4]; // [rsp+110h] [rbp-40h] BYREF
  struct _NDIS_FILTER_DRIVER_BLOCK *v106; // [rsp+120h] [rbp-30h]
  struct _NDIS_FILTER_BLOCK *v107; // [rsp+128h] [rbp-28h] BYREF
  struct _NDIS_FILTER_BLOCK *v108; // [rsp+130h] [rbp-20h] BYREF
  PVOID WnodeEventItem; // [rsp+138h] [rbp-18h] BYREF
  struct _NDIS_FILTER_ATTACH_PARAMETERS v110; // [rsp+140h] [rbp-10h] BYREF
  struct _UNICODE_STRING v111[10]; // [rsp+220h] [rbp+D0h] BYREF
  wchar_t v112[88]; // [rsp+2C0h] [rbp+170h] BYREF

  v95 = a3;
  v106 = this;
  v94 = a1;
  v107 = 0LL;
  v108 = 0LL;
  NewIrql = 0;
  v89 = 0;
  v93 = (Ndis::BindState *)a4;
  memset(&v110, 0, sizeof(v110));
  v105[0] = 0;
  v91 = 0;
  v92 = 0;
  v90 = 1;
  WnodeEventItem = 0LL;
  if ( !ndisReferenceFilterDriver(this, 0) )
    return 3221291010LL;
  if ( !ndisReferenceMiniport(a1, 0x27u) )
  {
    ndisDereferenceFilterDriver(this, v8, 0);
    return 3221291010LL;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x18u,
      (struct _GUID *)&WPP_c229d34f9dad36469b52bf5a53ae9d53_Traceguids,
      (char)this,
      (char)a1,
      &this->DefaultFilterCharacteristics.FriendlyName.Length);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v9 = a4->BindDriver._p->_t.Guid.Data4[7];
  v97 = v94->InterfaceGuid.Data4[5];
  v96 = v9;
  v98 = v94->InterfaceGuid.Data4[4];
  v99 = v94->InterfaceGuid.Data4[3];
  v100 = v94->InterfaceGuid.Data4[2];
  v101 = v94->InterfaceGuid.Data4[1];
  v102 = v94->InterfaceGuid.Data4[0];
  Data3 = v94->InterfaceGuid.Data3;
  Data2 = v94->InterfaceGuid.Data2;
  LODWORD(v85) = Data3;
  v84 = Data2;
  v10 = v94;
  v11 = (struct NDIS_BIND_FILTER_LINK *)v93;
  if ( (int)RtlStringCbPrintfW(
              v112,
              0xA8uLL,
              (wchar_t *)L"{%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}-{%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}-%04u",
              v94->InterfaceGuid.Data1) >= 0 )
  {
    ndisFindAdjacentFilters(v94, (struct NDIS_BIND_FILTER_LINK *)v93, &v108, &v107);
    v12 = v106;
    if ( v106->DefaultFilterCharacteristics.MajorNdisVersion > 6u
      || v106->DefaultFilterCharacteristics.MajorNdisVersion == 6
      && v106->DefaultFilterCharacteristics.MinorNdisVersion >= 0x28u )
    {
      v15 = v90;
    }
    else
    {
      v15 = 0;
    }
    FilterAdapterRegistry = ndisCreateFilterAdapterRegistry(&v106->DefaultFilterCharacteristics.ServiceName, v94, v15);
    if ( FilterAdapterRegistry )
      goto LABEL_9;
    if ( v94->MajorNdisVersion < 6u && (v94->LinkStateIndicationFlags & 1) == 0 )
      ndisMDoMiniportOp(v94, 1, 0x10114u, v105, 4u, 1u, 1u);
    if ( !ndisReferenceFilterDriver(v12, 3u) )
    {
      FilterAdapterRegistry = -1073676282;
      goto LABEL_9;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x3A0uLL, 0x6266444Eu);
    v14 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
    {
      FilterAdapterRegistry = -1073741670;
      ndisDereferenceFilterDriver(v12, v17, 3u);
      goto LABEL_10;
    }
    memset(PoolWithTag, 0, 0x3A0uLL);
    *(_DWORD *)v14 = 60817669;
    *(_QWORD *)(v14 + 184) = -1LL;
    *(_QWORD *)(v14 + 16) = v12;
    v18 = Rtl::KString::Initialize(v112);
    v19 = *(void **)(v14 + 40);
    *(_QWORD *)(v14 + 40) = v18;
    if ( v19 )
    {
      ExFreePoolWithTag(v19, 0x7274534Bu);
      v18 = *(struct Rtl::KString **)(v14 + 40);
    }
    if ( !v18 )
    {
      FilterAdapterRegistry = -1073741670;
LABEL_59:
      if ( *(_QWORD *)(v14 + 760) )
      {
        Ndis::BindEngine::BeginPolicyUpdates(&v10->BindEngine);
        Ndis::BindState::RemoveBindContext(&v11->BindState, (void *)v14);
        Ndis::BindEngine::EndPolicyUpdates(&v10->BindEngine, v32);
        *(_QWORD *)(v14 + 760) = 0LL;
      }
      v33 = v89 != 0;
      v89 = -v89;
      ndisFilterAttachCleanUp((PVOID)v14, (struct _NDIS_MINIPORT_BLOCK *)((unsigned __int64)v10 & -(__int64)v33), v92);
      goto LABEL_62;
    }
    v20 = v12->DefaultFilterCharacteristics.FriendlyName.Length + 14 + v10->pAdapterInstanceName->Length;
    v21 = ExAllocatePoolWithTag(NonPagedPoolNx, v20 + 16LL, 0x7473444Eu);
    *(_QWORD *)(v14 + 48) = v21;
    if ( !v21 )
    {
      FilterAdapterRegistry = -1073741670;
      goto LABEL_59;
    }
    *v21 = 0;
    *(_WORD *)(*(_QWORD *)(v14 + 48) + 2LL) = v20;
    *(_QWORD *)(*(_QWORD *)(v14 + 48) + 8LL) = *(_QWORD *)(v14 + 48) + 16LL;
    RtlAppendUnicodeStringToString(*(PUNICODE_STRING *)(v14 + 48), v10->pAdapterInstanceName);
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 48) + 8LL) + 2 * ((unsigned __int64)**(unsigned __int16 **)(v14 + 48) >> 1)) = 45;
    **(_WORD **)(v14 + 48) += 2;
    RtlAppendUnicodeStringToString(*(PUNICODE_STRING *)(v14 + 48), &v12->DefaultFilterCharacteristics.FriendlyName);
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 48) + 8LL) + 2 * ((unsigned __int64)**(unsigned __int16 **)(v14 + 48) >> 1)) = 45;
    **(_WORD **)(v14 + 48) += 2;
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 48) + 8LL) + 2
                                                         * ((unsigned __int64)**(unsigned __int16 **)(v14 + 48) >> 1)) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 40) + 8LL) + 2 * (((unsigned __int64)**(unsigned __int16 **)(v14 + 40) - 8) >> 1));
    **(_WORD **)(v14 + 48) += 8;
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 48) + 8LL) + 2 * ((unsigned __int64)**(unsigned __int16 **)(v14 + 48) >> 1)) = 0;
    *(_QWORD *)(v14 + 656) = NdisNblTrackerRegisterComponent(1, v14, *(_QWORD *)(v14 + 48));
    Watchdog = ndisAllocateWatchdog();
    wil::details::unique_storage<wil::details::resource_policy<NDISWATCHDOG__ *,void (*)(NDISWATCHDOG__ *),&void ndisFreeWatchdog(NDISWATCHDOG__ *),wistd::integral_constant<unsigned __int64,1>,NDISWATCHDOG__ *,__int64,-1,std::nullptr_t>>::reset(
      (__int64 *)(v14 + 184),
      Watchdog);
    KeInitializeSpinLock((PKSPIN_LOCK)(v14 + 144));
    NDIS_ACQUIRE_FILTER_SPIN_LOCK((struct _NDIS_FILTER_BLOCK *)v14, &NewIrql);
    FILTER_CLEAR_ALL_STATE_FLAGS((struct _NDIS_FILTER_BLOCK *)v14);
    v24 = *(_DWORD *)(v14 + 56);
    if ( (v24 & 0x100) != 0 )
      v24 &= ~0x100u;
    v25 = NewIrql;
    *(_DWORD *)(v14 + 56) = v24 | 8;
    NDIS_RELEASE_FILTER_SPIN_LOCK(v23, v25);
    *(_BYTE *)(v14 + 64) = 0;
    ndisInitializeRef((struct _REFERENCE_EX *)(v14 + 72), 3u);
    ndisInitializeZeroBasedRef((struct _REFERENCE_EX *)(v14 + 312));
    ndisCloseRef((PKSPIN_LOCK)(v14 + 312));
    if ( ndisDatapathVerifierMode == 1 )
    {
      if ( MmIsDriverVerifying(*(struct _DRIVER_OBJECT **)(*(_QWORD *)(v14 + 16) + 16LL)) )
        *(_DWORD *)(v14 + 56) |= 0x200u;
    }
    else if ( ndisDatapathVerifierMode == 2 )
    {
      *(_DWORD *)(v14 + 56) |= 0x200u;
    }
    *(_QWORD *)(v14 + 584) = v12->DefaultFilterCharacteristics.SendNetBufferListsHandler;
    *(_QWORD *)(v14 + 592) = v12->DefaultFilterCharacteristics.SendNetBufferListsCompleteHandler;
    *(_QWORD *)(v14 + 608) = v12->DefaultFilterCharacteristics.ReceiveNetBufferListsHandler;
    *(_QWORD *)(v14 + 616) = v12->DefaultFilterCharacteristics.ReturnNetBufferListsHandler;
    *(_QWORD *)(v14 + 600) = v12->DefaultFilterCharacteristics.CancelSendNetBufferListsHandler;
    *(_QWORD *)(v14 + 168) = v14 + 160;
    *(_QWORD *)(v14 + 160) = v14 + 160;
    FilterAdapterRegistry = ndisAllocOrFreeIterativeDataPathTrackerIfNeeded(
                              (struct _NDIS_FILTER_BLOCK *)v14,
                              (struct _NDIS_FILTER_PARTIAL_CHARACTERISTICS *)(v14 + 576),
                              0);
    if ( FilterAdapterRegistry )
      goto LABEL_59;
    v26 = v108;
    *(_QWORD *)(v14 + 208) = ndisStackExpansionFallbackWorker;
    *(_QWORD *)(v14 + 192) = 0LL;
    v27 = v107;
    *(_QWORD *)(v14 + 216) = v14;
    *(_QWORD *)(v14 + 112) = v27;
    *(_QWORD *)(v14 + 120) = v26;
    if ( !v27 && !v26 && v10->HighestFilter )
    {
      FilterAdapterRegistry = -1073741823;
      goto LABEL_59;
    }
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v10, &NewIrql);
    if ( v26 )
      v26->LowerFilter = (_NDIS_FILTER_BLOCK *)v14;
    else
      v10->HighestFilter = (_NDIS_FILTER_BLOCK *)v14;
    if ( v27 )
      v27->HigherFilter = (_NDIS_FILTER_BLOCK *)v14;
    else
      v10->LowestFilter = (_NDIS_FILTER_BLOCK *)v14;
    v28 = NewIrql;
    *(_QWORD *)(v14 + 32) = v10;
    v10->MiniportThread = 0LL;
    KeReleaseSpinLock(&v10->Lock, v28);
    BaseMiniport = v10->BaseMiniport;
    v89 = 1;
    v30 = v10;
    if ( BaseMiniport )
      v30 = BaseMiniport;
    v31 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalFilterListLock);
    *(_QWORD *)(v14 + 104) = ndisGlobalFilterList;
    NewIrql = v31;
    ndisGlobalFilterList = (PVOID)v14;
    KeReleaseSpinLock(&ndisGlobalFilterListLock, v31);
    if ( !ndisQueueFilterOnDriver((struct _NDIS_FILTER_BLOCK *)v14, v12) )
    {
      FilterAdapterRegistry = -1073676286;
LABEL_58:
      v11 = (struct NDIS_BIND_FILTER_LINK *)v93;
      goto LABEL_59;
    }
    if ( (v12->Bind._p->_t.FilterBindFlags & 2) != 0 )
    {
      FilterAdapterRegistry = ndisCreateFilterInstanceRegistry(
                                &v12->DefaultFilterCharacteristics.ServiceName,
                                (struct _NDIS_FILTER_BLOCK *)v14,
                                v10);
      if ( FilterAdapterRegistry )
        goto LABEL_58;
    }
    v35 = v93;
    *(_BYTE *)(v14 + 64) = 1;
    *(_QWORD *)(v14 + 760) = v35;
    Ndis::BindEngine::BeginPolicyUpdates(&v10->BindEngine);
    Ndis::BindState::AddBindContext(v35, (void *)v14);
    Ndis::BindEngine::EndPolicyUpdates(&v10->BindEngine, v36);
    memset(&v110, 0, sizeof(v110));
    v37 = *(_QWORD *)(v14 + 16);
    if ( *(_BYTE *)(v37 + 100) <= 6u )
    {
      v38 = *(_BYTE *)(v37 + 101);
      if ( !v38 )
      {
        v39 = 1;
        v40 = 164;
LABEL_76:
        v110.Header.Size = v40;
        goto LABEL_82;
      }
      if ( v38 < 0x14u )
      {
        v39 = 2;
        v40 = 176;
        goto LABEL_76;
      }
      if ( v38 < 0x1Eu )
      {
        v39 = 3;
        v40 = 200;
        goto LABEL_76;
      }
    }
    v110.Header.Size = 224;
    v39 = 4;
LABEL_82:
    v110.Header.Revision = v39;
    v110.Header.Type = -103;
    v110.BaseMiniportIfIndex = v30->IfIndex;
    v110.BaseMiniportNetLuid.Value = v30->NetLuid.Value;
    v110.BaseMiniportName = &v30->MiniportName;
    v110.BaseMiniportInstanceName = v30->pAdapterInstanceName;
    v41 = *(_QWORD *)(v14 + 112);
    if ( v41 )
    {
      v110.LowerIfIndex = *(_DWORD *)(v41 + 688);
      v110.LowerIfNetLuid.Value = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 112) + 696LL) + 1312LL);
    }
    else
    {
      v110.LowerIfIndex = *(_DWORD *)(*(_QWORD *)(v14 + 32) + 4056LL);
      v110.LowerIfNetLuid.Value = *(_QWORD *)(*(_QWORD *)(v14 + 32) + 4024LL);
    }
    v110.FilterModuleGuidName = *(_UNICODE_STRING **)(v14 + 40);
    v110.MiniportMediaSpecificAttributes = v10->MediaSpecificAttributes;
    if ( (v10->MacOptions & 0x80000001) == 0x80000001 )
    {
      v110.MiniportMediaType = NdisMediumWan;
    }
    else
    {
      if ( v27 )
      {
        v110.MiniportMediaType = v27->MediaType;
        PhysicalMediaType = v27->PhysicalMediaType;
LABEL_91:
        v110.MiniportPhysicalMediaType = PhysicalMediaType;
        v43 = *(_QWORD *)(v14 + 112);
        if ( v43 )
        {
          v110.MediaConnectState = *(_DWORD *)(v43 + 380);
          v110.MediaDuplexState = *(_DWORD *)(v43 + 384);
          v110.XmitLinkSpeed = *(_QWORD *)(v43 + 392);
          v110.RcvLinkSpeed = *(_QWORD *)(v43 + 400);
          p_MiniportCurrentConfig = *(_NDIS_OFFLOAD **)(v43 + 664);
        }
        else
        {
          v110.MediaConnectState = v10->MiniportMediaConnectState;
          v110.MediaDuplexState = v10->MiniportMediaDuplexState;
          v110.XmitLinkSpeed = v10->MiniportXmitLinkSpeed;
          v110.RcvLinkSpeed = v10->MiniportRcvLinkSpeed;
          Offload = v10->Offload;
          if ( !Offload || !Offload->SupportsOffload )
          {
            v110.DefaultOffloadConfiguration = 0LL;
LABEL_98:
            HDSplitCurrentConfig = v110.HDSplitCurrentConfig;
            if ( v10->HDSplitCurrentConfig )
              HDSplitCurrentConfig = v10->HDSplitCurrentConfig;
            TopReceiveFilterCurrentCapabilities = v10->TopReceiveFilterCurrentCapabilities;
            v110.HDSplitCurrentConfig = HDSplitCurrentConfig;
            ReceiveFilterCapabilities = v110.ReceiveFilterCapabilities;
            if ( TopReceiveFilterCurrentCapabilities )
              ReceiveFilterCapabilities = TopReceiveFilterCurrentCapabilities;
            TopNicSwitchCurrentCapabilities = v10->TopNicSwitchCurrentCapabilities;
            v110.ReceiveFilterCapabilities = ReceiveFilterCapabilities;
            NicSwitchCapabilities = v110.NicSwitchCapabilities;
            if ( TopNicSwitchCurrentCapabilities )
              NicSwitchCapabilities = TopNicSwitchCurrentCapabilities;
            v110.NicSwitchCapabilities = NicSwitchCapabilities;
            if ( v39 >= 4u )
            {
              if ( v10->SriovCurrentCapabilities )
              {
                v110.SriovCapabilities = v10->SriovCurrentCapabilities;
                if ( (unsigned int)ndisIovGetNicSwitchList(v10, &v110.NicSwitchArray) )
                {
                  FilterAdapterRegistry = -1073741823;
LABEL_108:
                  v11 = (struct NDIS_BIND_FILTER_LINK *)v35;
                  goto LABEL_59;
                }
              }
              v110.BaseMiniportIfConnectorPresent = v10->IfBlock->ifConnectorPresent;
            }
            IfBlock = v10->IfBlock;
            v110.MiniportPhysicalDeviceObject = v10->PhysicalDeviceObject;
            v110.MacAddressLength = IfBlock->ifPhysAddress.Length;
            memmove(v110.CurrentMacAddress, IfBlock->ifPhysAddress.Address, v110.MacAddressLength);
            *(_DWORD *)(v14 + 344) = v110.MediaConnectState;
            *(_DWORD *)(v14 + 348) = v110.MediaDuplexState;
            *(_QWORD *)(v14 + 352) = v110.XmitLinkSpeed;
            *(_QWORD *)(v14 + 360) = v110.RcvLinkSpeed;
            if ( v110.MediaConnectState == MediaConnectStateConnected )
            {
              v52 = ndisFilterIndicateReceiveNetBufferLists;
              v53 = ndisFilterSendNetBufferLists;
              v54 = (void (__stdcall *)(NDIS_HANDLE, ULONG, PVOID, NDIS_PHYSICAL_ADDRESS))ndisFilterCancelSendNetBufferLists;
            }
            else
            {
              ndisFilterXStateSetFlag((struct _NDIS_FILTER_BLOCK *)v14);
              v52 = ndisFakeFilterReceiveHandler;
              v53 = ndisFakeFilterSendHandler;
              v54 = NdisQueryOffloadState;
            }
            *(_QWORD *)(v14 + 640) = v54;
            *(_QWORD *)(v14 + 624) = v53;
            *(_QWORD *)(v14 + 632) = v52;
            if ( (v10->MacOptions & 0x80000001) == 0x80000001 )
              MediaType = v10->MediaType;
            else
              MediaType = v110.MiniportMediaType;
            *(_DWORD *)(v14 + 336) = MediaType;
            *(_DWORD *)(v14 + 340) = v110.MiniportPhysicalMediaType;
            FilterAdapterRegistry = ndisIfCreateFilterInterface((struct _NDIS_FILTER_BLOCK *)v14);
            if ( !FilterAdapterRegistry )
            {
              if ( (byte_1C00E61C3 & 1) != 0 )
                McTemplateK0juqjzzz_EtwWriteTransfer(
                  *(_QWORD *)(v14 + 32) + 4008LL,
                  *(_QWORD *)(v14 + 40),
                  (const GUID *)(v14 + 672),
                  v14 + 672,
                  *(_BYTE *)(v14 + 64),
                  6,
                  *(_QWORD *)(v14 + 32) + 4008LL,
                  *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v14 + 32) + 3856LL) + 8LL),
                  *(const wchar_t **)(*(_QWORD *)(v14 + 40) + 8LL),
                  *(const wchar_t **)(*(_QWORD *)(v14 + 48) + 8LL));
              if ( Microsoft_Windows_Networking_CorrelationEnabled )
                EtwEx_tidActivityInfoTransfer(
                  v57,
                  v56,
                  (const struct _GUID *)(v14 + 672),
                  &v10->InterfaceGuid,
                  v84,
                  v85,
                  0);
              v110.IfIndex = *(_DWORD *)(v14 + 688);
              v58 = *(_NET_LUID_LH **)(v14 + 696);
              v92 = 1;
              v110.NetLuid = v58[164];
              FilterAdapterRegistry = ndisFInvokeAttach((struct _NDIS_FILTER_BLOCK *)v14, &v110);
              if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                *(_QWORD *)v86 = &v12->DefaultFilterCharacteristics.FriendlyName;
                WPP_RECORDER_SF_qqZddZD(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v12->DefaultFilterCharacteristics.MajorNdisVersion,
                  v59,
                  (__int64)&WPP_RECORDER_INITIALIZED,
                  v84);
              }
              if ( !FilterAdapterRegistry )
              {
                v63 = *(_DWORD *)(v14 + 336);
                MiniportMediaType = (unsigned int)v110.MiniportMediaType;
                if ( v63 == v110.MiniportMediaType || (v10->MacOptions & 0x80000001) == 0x80000001 )
                {
                  v65 = v91;
                }
                else
                {
                  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  {
                    *(_DWORD *)v87 = v110.MiniportMediaType;
                    WPP_RECORDER_SF_qqLd(
                      *((_QWORD *)WPP_GLOBAL_Control + 8),
                      4u,
                      0xDu,
                      0x1Au,
                      (struct _GUID *)&WPP_c229d34f9dad36469b52bf5a53ae9d53_Traceguids,
                      (char)v10,
                      v14,
                      v63,
                      *(_QWORD *)v87);
                    MiniportMediaType = (unsigned int)v110.MiniportMediaType;
                  }
                  if ( Microsoft_Windows_NDISEnableBits < 0 )
                    McTemplateK0jqxjqxdd_EtwWriteTransfer(
                      *(_QWORD *)(v14 + 696),
                      MiniportMediaType,
                      &v10->InterfaceGuid,
                      (__int64)&v10->InterfaceGuid,
                      v10->IfIndex,
                      v10->NetLuid.Value,
                      v14 + 672,
                      *(_DWORD *)(v14 + 688),
                      *(_QWORD *)(*(_QWORD *)(v14 + 696) + 1312LL),
                      *(_DWORD *)(v14 + 336),
                      MiniportMediaType);
                  v65 = 1;
                }
                v66 = *(_QWORD *)(v14 + 120);
                if ( v66 )
                {
                  v67 = *(_QWORD *)(v14 + 112);
                  if ( v67 )
                    IfIndex = *(_DWORD *)(v67 + 688);
                  else
                    IfIndex = v10->IfIndex;
                  NdisIfDeleteIfStackEntry(*(_DWORD *)(v66 + 688), IfIndex);
                }
                v69 = *(_QWORD *)(v14 + 112);
                if ( v69 )
                  v70 = *(_DWORD *)(v69 + 688);
                else
                  v70 = *(_DWORD *)(*(_QWORD *)(v14 + 32) + 4056LL);
                NdisIfAddIfStackEntry(*(_DWORD *)(v14 + 688), v70);
                v71 = *(_QWORD *)(v14 + 120);
                if ( v71 )
                  NdisIfAddIfStackEntry(*(_DWORD *)(v71 + 688), *(_DWORD *)(v14 + 688));
                v72 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
                v73 = *(struct _NDIS_MINIPORT_BLOCK **)(v14 + 32);
                v74 = v72;
                NewIrql = v72;
                ndisIfUpdateFilterIfStack(v73);
                KeReleaseSpinLock(&ndisIfListLock, v74);
                v75 = *(_QWORD *)(v14 + 112);
                if ( v75 )
                {
                  NDIS_ACQUIRE_FILTER_SPIN_LOCK(*(struct _NDIS_FILTER_BLOCK **)(v14 + 112), &NewIrql);
                  *(_DWORD *)(v14 + 344) = *(_DWORD *)(v75 + 380);
                  *(_DWORD *)(v14 + 348) = *(_DWORD *)(v75 + 384);
                  *(_QWORD *)(v14 + 352) = *(_QWORD *)(v75 + 392);
                  *(_QWORD *)(v14 + 360) = *(_QWORD *)(v75 + 400);
                  *(_DWORD *)(v14 + 368) = *(_DWORD *)(v75 + 408);
                  *(_DWORD *)(v14 + 372) = *(_DWORD *)(v75 + 412);
                  ndisOpenRef((PKSPIN_LOCK)(v14 + 312));
                  NDIS_RELEASE_FILTER_SPIN_LOCK((struct _NDIS_FILTER_BLOCK *)v75, NewIrql);
                }
                else
                {
                  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v10, &NewIrql);
                  *(_DWORD *)(v14 + 344) = v10->MiniportMediaConnectState;
                  *(_DWORD *)(v14 + 348) = v10->MiniportMediaDuplexState;
                  *(_QWORD *)(v14 + 352) = v10->MiniportXmitLinkSpeed;
                  *(_QWORD *)(v14 + 360) = v10->MiniportRcvLinkSpeed;
                  *(_DWORD *)(v14 + 368) = v10->MiniportPauseFunctions;
                  *(_DWORD *)(v14 + 372) = v10->MiniportAutoNegotiationFlags;
                  ndisOpenRef((PKSPIN_LOCK)(v14 + 312));
                  v76 = NewIrql;
                  v10->MiniportThread = 0LL;
                  KeReleaseSpinLock(&v10->Lock, v76);
                }
                *(_DWORD *)(*(_QWORD *)(v14 + 696) + 1220LL) = *(_DWORD *)(v14 + 344);
                *(_DWORD *)(*(_QWORD *)(v14 + 696) + 1224LL) = *(_DWORD *)(v14 + 348);
                *(_QWORD *)(*(_QWORD *)(v14 + 696) + 1208LL) = *(_QWORD *)(v14 + 360);
                *(_QWORD *)(*(_QWORD *)(v14 + 696) + 1200LL) = *(_QWORD *)(v14 + 352);
                ndisIndicateInitialStateToFilter((struct _NDIS_FILTER_BLOCK *)v14);
                NDIS_ACQUIRE_FILTER_SPIN_LOCK((struct _NDIS_FILTER_BLOCK *)v14, &NewIrql);
                FILTER_CLEAR_ALL_STATE_FLAGS((struct _NDIS_FILTER_BLOCK *)v14);
                v77 = *(_DWORD *)(v14 + 56) | 4;
                *(_DWORD *)(v14 + 56) = v77;
                if ( v65 )
                {
                  *(_DWORD *)(v14 + 56) = v77 | 0x8000;
                  ++v10->MediaChangeFilters;
                  v78 = *(_QWORD *)(v14 + 696);
                  *(_DWORD *)(v14 + 336) = v110.MiniportMediaType;
                  *(_DWORD *)(v14 + 340) = v110.MiniportPhysicalMediaType;
                  *(_DWORD *)(v78 + 564) = *(_DWORD *)(v14 + 336);
                  *(_DWORD *)(*(_QWORD *)(v14 + 696) + 568LL) = *(_DWORD *)(v14 + 340);
                }
                NDIS_RELEASE_FILTER_SPIN_LOCK((struct _NDIS_FILTER_BLOCK *)v14, NewIrql);
                if ( v65 )
                {
                  v79 = *(_DWORD *)(v14 + 336);
                  v10->MediaType = v79;
                  v10->PhysicalMediumType = *(_DWORD *)(v14 + 340);
                  if ( v79 == NdisMedium802_3 )
                  {
                    if ( EthInitializeFilter(
                           v10->TopFilterRestartAttributes.MaxMulticastListSize,
                           v10->IfBlock->ifPhysAddress.Address,
                           v10->EthDB) )
                    {
                      v10->EthDB->Miniport = v10;
                    }
                  }
                }
                *(_BYTE *)(v14 + 64) = 2;
                if ( (byte_1C00E61C3 & 1) != 0 )
                  McTemplateK0juqjzzz_EtwWriteTransfer(
                    *(_QWORD *)(v14 + 32) + 4008LL,
                    *(_QWORD *)(v14 + 40),
                    (const GUID *)(v14 + 672),
                    v14 + 672,
                    2,
                    8,
                    *(_QWORD *)(v14 + 32) + 4008LL,
                    *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v14 + 32) + 3856LL) + 8LL),
                    *(const wchar_t **)(*(_QWORD *)(v14 + 40) + 8LL),
                    *(const wchar_t **)(*(_QWORD *)(v14 + 48) + 8LL));
                ndisPktMonFilterRegister((struct _NDIS_FILTER_BLOCK *)v14);
                ndisReferenceMiniport(v10, 0x28u);
                if ( v10->MajorNdisVersion < 6u && !v10->Miniport5HasNdis6Component )
                  v10->Miniport5HasNdis6Component = 1;
                ndisSetupWmiNode(
                  v10,
                  *(const struct _UNICODE_STRING **)(v14 + 48),
                  v10->BindPaths->Paths[0].Length + v12->DefaultFilterCharacteristics.UniqueName.Length + 4,
                  (__int128 *)&GUID_NDIS_NOTIFY_FILTER_ARRIVAL,
                  (struct tagWNODE_SINGLE_INSTANCE **)&WnodeEventItem);
                v80 = WnodeEventItem;
                if ( WnodeEventItem )
                {
                  v81 = (char *)WnodeEventItem + *((unsigned int *)WnodeEventItem + 14);
                  memmove(
                    v81,
                    v12->DefaultFilterCharacteristics.UniqueName.Buffer,
                    v12->DefaultFilterCharacteristics.UniqueName.Length);
                  memmove(
                    &v81[v12->DefaultFilterCharacteristics.UniqueName.Length + 2],
                    v10->BindPaths->Paths[0].Buffer,
                    v10->BindPaths->Paths[0].Length);
                  v82 = IoWMIWriteEvent(v80);
                  if ( v82 < 0 )
                  {
                    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                      WPP_RECORDER_SF_(
                        *((_QWORD *)WPP_GLOBAL_Control + 8),
                        2u,
                        1u,
                        0x1Bu,
                        (struct _GUID *)&WPP_c229d34f9dad36469b52bf5a53ae9d53_Traceguids);
                    if ( (byte_1C00E61C1 & 1) != 0 )
                      McTemplateK0qqq_EtwWriteTransfer(
                        0LL,
                        &FilterArrivalIndicationFailed,
                        (const GUID *)(v14 + 672),
                        v82,
                        1,
                        0);
                    ExFreePoolWithTag(v80, 0);
                  }
                }
                Ndis::BindEngine::BeginPolicyUpdates(&v10->BindEngine);
                v11 = (struct NDIS_BIND_FILTER_LINK *)v93;
                if ( Ndis::BindState::SetPause(v93, DatapathRunning, PauseReason_InitialPause) )
                {
                  memset(v111, 0, sizeof(v111));
                  if ( (unsigned __int8)byte_1C00E448B >= 4u )
                  {
                    ndisGetBindLinkNameForTracing(v11, v111);
                    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                      WPP_RECORDER_SF_Zq(
                        *((_QWORD *)WPP_GLOBAL_Control + 8),
                        (int)v83,
                        0x1Cu,
                        0x1Cu,
                        (struct _GUID *)&WPP_c229d34f9dad36469b52bf5a53ae9d53_Traceguids,
                        v111[0].Buffer,
                        *(_QWORD *)&v111[0].Length);
                  }
                }
                Ndis::BindEngine::EndPolicyUpdates(&v10->BindEngine, v83);
                if ( v10->MajorNdisVersion < 6u && !v10->Miniport5HasNdis6Component )
                  v10->Miniport5HasNdis6Component = 1;
                goto LABEL_10;
              }
              v35->AllowBindDespiteMandatory = v110.Flags & 1;
              NDIS_ACQUIRE_FILTER_SPIN_LOCK((struct _NDIS_FILTER_BLOCK *)v14, &NewIrql);
              FILTER_CLEAR_ALL_STATE_FLAGS((struct _NDIS_FILTER_BLOCK *)v14);
              v61 = *(_DWORD *)(v14 + 56);
              if ( (v61 & 0x100) != 0 )
                v61 &= ~0x100u;
              v62 = NewIrql;
              *(_DWORD *)(v14 + 56) = v61 | 8;
              NDIS_RELEASE_FILTER_SPIN_LOCK(v60, v62);
              *(_BYTE *)(v14 + 64) = 0;
              if ( (byte_1C00E61C3 & 1) != 0 )
                McTemplateK0juqjzzz_EtwWriteTransfer(
                  *(_QWORD *)(v14 + 48),
                  *(_QWORD *)(v14 + 40),
                  (const GUID *)(v14 + 672),
                  v14 + 672,
                  0,
                  7,
                  *(_QWORD *)(v14 + 32) + 4008LL,
                  *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v14 + 32) + 3856LL) + 8LL),
                  *(const wchar_t **)(*(_QWORD *)(v14 + 40) + 8LL),
                  *(const wchar_t **)(*(_QWORD *)(v14 + 48) + 8LL));
            }
            goto LABEL_108;
          }
          p_MiniportCurrentConfig = &Offload->MiniportCurrentConfig;
        }
        v110.DefaultOffloadConfiguration = p_MiniportCurrentConfig;
        goto LABEL_98;
      }
      v110.MiniportMediaType = v10->MiniportMediaType;
    }
    PhysicalMediaType = v10->MiniportPhysicalMediumType;
    goto LABEL_91;
  }
  v12 = v106;
  FilterAdapterRegistry = -1073741823;
LABEL_9:
  v14 = 0LL;
LABEL_10:
  if ( ndisVerifierNdisDispatch
    && v14
    && MmIsDriverVerifying(*(struct _DRIVER_OBJECT **)(*(_QWORD *)(v14 + 16) + 16LL))
    && !*(_QWORD *)(v14 + 784)
    && (*((int (__fastcall **)(_DRIVER_OBJECT *, __int64, void **))ndisVerifierNdisDispatch + 1))(
         v12->DriverObject,
         v14,
         &v12->FilterDriverContext) < 0
    && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xDu,
      0x1Du,
      (struct _GUID *)&WPP_c229d34f9dad36469b52bf5a53ae9d53_Traceguids,
      v14);
  }
LABEL_62:
  ndisHandleFilterHandlersChange(v10);
  if ( v110.NicSwitchArray )
  {
    ExFreePoolWithTag(v110.NicSwitchArray, 0);
    v110.NicSwitchArray = 0LL;
  }
  if ( FilterAdapterRegistry
    && !v11->BindState.AllowBindDespiteMandatory
    && (v11->BindDriver._p->_t.FilterBindFlags & 1) == 0 )
  {
    ndisNotifyBindFailureOnUnboundProtocols(v10);
  }
  ndisDereferenceMiniport(v10, 0x27u);
  ndisDereferenceFilterDriver(v12, v34, 0);
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v86 = FilterAdapterRegistry;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x1Eu,
      (struct _GUID *)&WPP_c229d34f9dad36469b52bf5a53ae9d53_Traceguids,
      (char)v12,
      (char)v10,
      *(_QWORD *)v86);
  }
  return FilterAdapterRegistry;
}
