/*
 * XREFs of ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1C026F14C
 * Callers:
 *     ?VmBusSignalSyncObjectCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00DB040 (-VmBusSignalSyncObjectCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024F300 (-VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C0255330 (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 *     ?DxgkSubmitSignalSyncObjectsToHwQueueInternal@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@_N@Z @ 0x1C026D104 (-DxgkSubmitSignalSyncObjectsToHwQueueInternal@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@.c)
 * Callees:
 *     ?TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ @ 0x1C0001F1C (-TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000200C (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00022BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004090 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004300 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004370 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004448 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0004488 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006CE0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007018 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@XZ @ 0x1C0007054 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00070D0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0007124 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00073EC (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007578 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007658 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009DE0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0017290 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C00173B8 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z @ 0x1C001A8AC (-AllocateElements@-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@PEAPEAVDXGSYNCOBJECT@@IE@Z @ 0x1C0027A60 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028C40 (memmove.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@PEAUVIDSCH_HW_QUEUE@@$0BA@$0ELGHHIEE@@@QEAAPEAPEAUVIDSCH_HW_QUEUE@@I@Z @ 0x1C0046E58 (-AllocateElements@-$NonPagedPoolZeroedArray@PEAUVIDSCH_HW_QUEUE@@$0BA@$0ELGHHIEE@@@QEAAPEAPEAUVI.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$01$0ELGHHIEE@@@QEAAPEAPEAU_VIDSCH_SYNC_OBJECT@@I@Z @ 0x1C0046EE8 (-AllocateElements@-$NonPagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$01$0ELGHHIEE@@@QEAAPEAPEAU.c)
 *     McTemplateK0qPR0qqPR3XR3_EtwWriteTransfer @ 0x1C0047228 (McTemplateK0qPR0qqPR3XR3_EtwWriteTransfer.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C01165B0 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAPEAPEAVDXGHWQUEUE@@I@Z @ 0x1C014F908 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAPEAPEAVDXGHWQUEUE@@I@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$01@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z @ 0x1C0160144 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$01@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?DeallocateElements@?$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAXXZ @ 0x1C016EEA8 (-DeallocateElements@-$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAXXZ.c)
 *     ?VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N6PEAVDXGDEVICE@@@Z @ 0x1C024BC24 (-VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGN.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0290C00 (-GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 */

__int64 __fastcall SubmitSignalSyncObjectsToHwQueue(
        unsigned int a1,
        unsigned int *a2,
        struct _D3DDDICB_SIGNALFLAGS a3,
        unsigned int a4,
        unsigned int *a5,
        unsigned __int64 *a6,
        struct _KTHREAD **a7,
        bool a8,
        bool a9)
{
  struct DXGHWQUEUE **Elements; // rax
  __int64 v13; // rsi
  unsigned int v14; // ebx
  __int64 v15; // rdx
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  void **v20; // r10
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // r9
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  int v30; // edi
  __int64 v31; // rdx
  PERESOURCE *Global; // rax
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rax
  unsigned int v39; // r15d
  _QWORD *v40; // rcx
  struct DXGADAPTERSYNCOBJECT *v41; // r9
  const unsigned int *v42; // r10
  __int64 v43; // rax
  __int64 v44; // rdx
  struct _KTHREAD *v45; // r11
  __int64 v46; // rax
  __int64 v47; // r8
  __int64 v48; // rdx
  __int64 v49; // rcx
  unsigned int v50; // r15d
  _QWORD *v51; // rax
  PVOID v52; // rcx
  unsigned int *v53; // rax
  unsigned int v54; // r14d
  __int64 v55; // rax
  unsigned int v56; // r14d
  struct _KTHREAD *v57; // r8
  unsigned int v58; // ecx
  __int64 v59; // r14
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r14
  unsigned int v65; // r14d
  __int64 v66; // rax
  unsigned int v67; // r14d
  struct _KTHREAD *v68; // r8
  unsigned int v69; // ecx
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  DXGSYNCOBJECT *v74; // rcx
  const unsigned int *v75; // r14
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rdx
  _QWORD *v80; // rax
  PVOID v81; // rcx
  __int64 v82; // rdx
  size_t v83; // r8
  void *v84; // rdx
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // rax
  __int64 v88; // rdx
  struct _VIDSCH_SYNC_OBJECT **v89; // rax
  __int64 v90; // r15
  unsigned int v91; // r12d
  struct _VIDSCH_SYNC_OBJECT **v92; // r14
  const unsigned int *v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v97; // rdx
  __int64 v98; // rcx
  int v99; // r12d
  int v100; // eax
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r14
  _QWORD *v105; // rax
  __int64 v106; // rdx
  __int64 v107; // rax
  _QWORD *v108; // rax
  __int64 v109; // rdx
  __int64 v110; // rdx
  char v111[8]; // [rsp+70h] [rbp-358h] BYREF
  char v112; // [rsp+78h] [rbp-350h]
  __int64 v113; // [rsp+80h] [rbp-348h] BYREF
  int v114; // [rsp+88h] [rbp-340h]
  PVOID v115; // [rsp+90h] [rbp-338h] BYREF
  _BYTE v116[16]; // [rsp+98h] [rbp-330h] BYREF
  int v117; // [rsp+A8h] [rbp-320h]
  unsigned int v118; // [rsp+B0h] [rbp-318h]
  struct DXGADAPTERSYNCOBJECT *v119; // [rsp+B8h] [rbp-310h] BYREF
  const unsigned int *v120; // [rsp+C0h] [rbp-308h]
  unsigned int v121; // [rsp+C8h] [rbp-300h]
  DXGSYNCOBJECT *v122; // [rsp+D0h] [rbp-2F8h]
  unsigned int *v123; // [rsp+D8h] [rbp-2F0h]
  void *Src; // [rsp+E0h] [rbp-2E8h]
  _BYTE v125[16]; // [rsp+E8h] [rbp-2E0h] BYREF
  PVOID v126; // [rsp+F8h] [rbp-2D0h] BYREF
  _BYTE v127[16]; // [rsp+100h] [rbp-2C8h] BYREF
  int v128; // [rsp+110h] [rbp-2B8h]
  _QWORD *v129; // [rsp+118h] [rbp-2B0h]
  PVOID P; // [rsp+120h] [rbp-2A8h] BYREF
  _BYTE v131[128]; // [rsp+128h] [rbp-2A0h] BYREF
  int v132; // [rsp+1A8h] [rbp-220h]
  unsigned __int64 *v133; // [rsp+1B0h] [rbp-218h]
  struct _KTHREAD **v134; // [rsp+1B8h] [rbp-210h]
  _QWORD v135[3]; // [rsp+1C0h] [rbp-208h] BYREF
  int v136; // [rsp+1D8h] [rbp-1F0h]
  _QWORD v137[4]; // [rsp+1E0h] [rbp-1E8h] BYREF
  char v138; // [rsp+200h] [rbp-1C8h]
  _BYTE v139[24]; // [rsp+208h] [rbp-1C0h] BYREF
  PVOID v140; // [rsp+220h] [rbp-1A8h] BYREF
  _BYTE v141[32]; // [rsp+228h] [rbp-1A0h] BYREF
  unsigned int v142; // [rsp+248h] [rbp-180h]
  _BYTE v143[160]; // [rsp+250h] [rbp-178h] BYREF
  _BYTE v144[144]; // [rsp+2F0h] [rbp-D8h] BYREF

  v118 = a4;
  v123 = a2;
  v121 = a1;
  Src = a6;
  v133 = a6;
  v134 = a7;
  v135[0] = 0LL;
  v136 = 0;
  Elements = (struct DXGHWQUEUE **)PagedPoolZeroedArray<DXGHWQUEUE *,2>::AllocateElements(v135, a4);
  v13 = (__int64)Elements;
  if ( !Elements )
  {
    v14 = -1073741801;
    goto LABEL_98;
  }
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v125, *a5, a7, Elements, a9);
  if ( !*(_QWORD *)v13 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(0LL, v15);
    v16[3] = a7;
    v16[4] = *a5;
    v14 = -1073741811;
    v16[5] = -1073741811LL;
    WdLogEvent5_WdError(v16);
    goto LABEL_5;
  }
  v18 = *(_QWORD *)(*(_QWORD *)v13 + 16LL);
  if ( *(_BYTE *)(v18 + 457) )
  {
    v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 16) + 16LL) + 16LL);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v144, (struct DXGADAPTER *const)v19, 0LL);
    if ( a9 || (v21 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v144, 0LL), v20 = 0LL, v21 >= 0) )
    {
      v14 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalSyncObject(
              (DXG_GUEST_VIRTUALGPU_VMBUS *)(v19 + 4240),
              (struct DXGPROCESS *)a7,
              a1,
              v123,
              a3,
              v118,
              a5,
              (unsigned __int64 *)Src,
              (unsigned __int64)v20,
              v20,
              a8,
              (bool)v20,
              (struct DXGDEVICE *)v20);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v144, v24);
      goto LABEL_5;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v144, v22);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v125, v23);
    v14 = -1073741130;
LABEL_98:
    PagedPoolZeroedArray<DXGHWQUEUE *,2>::DeallocateElements((__int64)v135);
    return v14;
  }
  P = 0LL;
  v132 = 0;
  v129 = NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,16,1265072196>::AllocateElements(&P, a4);
  if ( !v129 )
  {
LABEL_140:
    if ( P != v131 && P )
      ExFreePoolWithTag(P, 0);
    v14 = -1073741801;
    goto LABEL_62;
  }
  v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 16LL) + 16LL);
  v113 = v26;
  v114 = 0;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v143, v26, 0, v25, a9);
  if ( !a9 )
  {
    if ( a8
      || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 16LL) + 16LL) + 432LL) == 2
      || (*((_BYTE *)a7 + 347) & 0x20) != 0 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v113);
    }
    else if ( !(unsigned int)DXGDEVICEACCESSLOCKEXCLUSIVE::TryAcquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v113) )
    {
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v143);
      if ( v113 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v113);
      if ( P != v131 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v132 = 0;
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v125, v29);
      v14 = -2147483631;
      goto LABEL_98;
    }
    v30 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v143, 0LL);
    if ( v30 < 0 )
    {
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v143);
      if ( v113 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v113);
      if ( P != v131 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v132 = 0;
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v125, v31);
      v14 = v30;
      goto LABEL_98;
    }
    v26 = v113;
  }
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v28, v27);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v111, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v111, v33);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 16LL)
                                                                                     + 16LL)
                                                                         + 16LL)
                                                             + 16LL)) )
  {
    v36 = WdLogNewEntry5_WdAssertion(v35, v34);
    *(_QWORD *)(v36 + 24) = 1624LL;
    WdLogEvent5_WdAssertion(v36);
  }
  if ( (a3.Value & 0x7FFFFFF8) != 0 )
  {
    v37 = (_QWORD *)WdLogNewEntry5_WdError(v35, v34);
    v37[3] = *a5;
    v37[4] = (a3.Value >> 3) & 0xFFFFFFF;
    v14 = -1073741811;
    v37[5] = -1073741811LL;
    WdLogEvent5_WdError(v37);
LABEL_103:
    if ( v112 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v111);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v143);
    if ( v26 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v113);
    v52 = P;
    if ( P != v131 && P )
      goto LABEL_61;
    goto LABEL_62;
  }
  if ( (a3.Value & 0x80000000) != 0 )
  {
    v38 = WdLogNewEntry5_WdError(v35, v34);
    *(_QWORD *)(v38 + 24) = 1638LL;
    goto LABEL_38;
  }
  *v129 = *(_QWORD *)(*(_QWORD *)v13 + 40LL);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v139, a7);
  v39 = 1;
  if ( v118 > 1 )
  {
    v40 = v129;
    v41 = (struct DXGADAPTERSYNCOBJECT *)(v129 + 1);
    v119 = (struct DXGADAPTERSYNCOBJECT *)(v129 + 1);
    v42 = a5 + 1;
    v120 = a5 + 1;
    v122 = (DXGSYNCOBJECT *)(v13 - (_QWORD)v129);
    while ( 1 )
    {
      v43 = (*v42 >> 6) & 0xFFFFFF;
      v44 = *v42 >> 30;
      if ( (unsigned int)v43 >= *((_DWORD *)a7 + 64) )
        goto LABEL_47;
      v45 = a7[30];
      v40 = (_QWORD *)*((unsigned int *)v45 + 4 * v43 + 2);
      if ( (_DWORD)v44 != ((*((_DWORD *)v45 + 4 * v43 + 2) >> 5) & 3)
        || ((unsigned __int16)v40 & 0x2000) != 0
        || ((unsigned __int8)v40 & 0x1F) == 0 )
      {
        goto LABEL_47;
      }
      v40 = (_QWORD *)((unsigned __int8)v40 & 0x1F);
      if ( (_BYTE)v40 != 15 )
        break;
      v47 = *((_QWORD *)v45 + 2 * (unsigned int)v43);
LABEL_48:
      *(_QWORD *)((char *)v41 + (_QWORD)v122) = v47;
      if ( !v47
        || (v44 = *(_QWORD *)(*(_QWORD *)(v47 + 16) + 16LL), v40 = *(_QWORD **)(*(_QWORD *)v13 + 16LL), v44 != v40[2]) )
      {
        v51 = (_QWORD *)WdLogNewEntry5_WdError(v40, v44);
        v51[3] = *a5;
        v51[4] = a5[v39];
        v51[5] = v39;
        v14 = -1073741811;
        v51[6] = -1073741811LL;
        WdLogEvent5_WdError(v51);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v139);
        goto LABEL_55;
      }
      *(_QWORD *)v41 = *(_QWORD *)(v47 + 40);
      ++v39;
      v120 = ++v42;
      v41 = (struct DXGADAPTERSYNCOBJECT *)((char *)v41 + 8);
      v119 = v41;
      if ( v39 >= v118 )
        goto LABEL_51;
    }
    v46 = WdLogNewEntry5_WdError(v40, v44);
    *(_QWORD *)(v46 + 24) = 316LL;
    WdLogEvent5_WdError(v46);
    v41 = v119;
    v42 = v120;
LABEL_47:
    v47 = 0LL;
    goto LABEL_48;
  }
LABEL_51:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v139);
  v50 = 0;
  if ( !a1 )
  {
    v38 = WdLogNewEntry5_WdError(v49, v48);
    *(_QWORD *)(v38 + 24) = 1681LL;
LABEL_38:
    WdLogEvent5_WdError(v38);
LABEL_180:
    if ( v112 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v111);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v143);
    if ( v26 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v113);
    if ( P != v131 && P )
      ExFreePoolWithTag(P, 0);
    v14 = -1073741811;
    goto LABEL_62;
  }
  v115 = 0LL;
  v117 = 0;
  v120 = (const unsigned int *)PagedPoolZeroedArray<DXGSYNCOBJECT *,2>::AllocateElements(&v115, a1);
  if ( !v120 )
  {
LABEL_133:
    if ( v115 != v116 && v115 )
      ExFreePoolWithTag(v115, 0);
    v117 = 0;
    v115 = 0LL;
    if ( v112 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v111);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v143);
    if ( v26 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v113);
    goto LABEL_140;
  }
  v122 = 0LL;
  v53 = v123;
  v119 = (struct DXGADAPTERSYNCOBJECT *)v123;
  do
  {
    v54 = *v53;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(a7 + 26));
    v55 = (v54 >> 6) & 0xFFFFFF;
    v56 = v54 >> 30;
    if ( (unsigned int)v55 < *((_DWORD *)a7 + 64)
      && (v57 = a7[30], v58 = *((_DWORD *)v57 + 4 * v55 + 2), v56 == ((v58 >> 5) & 3))
      && (v58 & 0x2000) == 0
      && (v58 & 0x1F) == 0xB )
    {
      v59 = *((_QWORD *)v57 + 2 * (unsigned int)v55);
    }
    else
    {
      v59 = 0LL;
    }
    ExReleasePushLockSharedEx(a7 + 26, 0LL);
    KeLeaveCriticalRegion();
    if ( v59 )
    {
      if ( (*(_DWORD *)(v59 + 72) & 0x10) != 0 )
      {
        v77 = WdLogNewEntry5_WdError(v61, v60);
        *(_QWORD *)(v77 + 24) = v123[v50];
        WdLogEvent5_WdError(v77);
        if ( v115 != v116 && v115 )
          ExFreePoolWithTag(v115, 0);
        v115 = 0LL;
        v117 = 0;
        if ( v112 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v111);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v143);
        if ( v26 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v113);
        if ( P != v131 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v132 = 0;
        DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v125, v78);
        v14 = -1073741790;
        goto LABEL_98;
      }
      v62 = *(_QWORD *)(v59 + 16);
      v63 = *(_QWORD *)(*(_QWORD *)v13 + 16LL);
      if ( v62 != *(_QWORD *)(v63 + 16) )
      {
        v76 = WdLogNewEntry5_WdError(v63, v62);
        *(_QWORD *)(v76 + 24) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 16LL) + 16LL);
        *(_QWORD *)(v76 + 32) = *(_QWORD *)(v59 + 16);
        WdLogEvent5_WdError(v76);
LABEL_176:
        if ( v115 != v116 && v115 )
          ExFreePoolWithTag(v115, 0);
        v117 = 0;
        v115 = 0LL;
        goto LABEL_180;
      }
      v64 = *(_QWORD *)(v59 + 32);
      goto LABEL_83;
    }
    v65 = *(_DWORD *)v119;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(a7 + 26));
    v66 = (v65 >> 6) & 0xFFFFFF;
    v67 = v65 >> 30;
    if ( (unsigned int)v66 >= *((_DWORD *)a7 + 64) )
      goto LABEL_81;
    v68 = a7[30];
    v69 = *((_DWORD *)v68 + 4 * v66 + 2);
    if ( v67 != ((v69 >> 5) & 3) || (v69 & 0x2000) != 0 || (v69 & 0x1F) == 0 )
      goto LABEL_81;
    v70 = v69 & 0x1F;
    if ( (_BYTE)v70 != 8 )
    {
      v71 = WdLogNewEntry5_WdError(v70, 2LL * (unsigned int)v66);
      *(_QWORD *)(v71 + 24) = 316LL;
      WdLogEvent5_WdError(v71);
LABEL_81:
      v64 = 0LL;
      goto LABEL_82;
    }
    v64 = *((_QWORD *)v68 + 2 * (unsigned int)v66);
LABEL_82:
    ExReleasePushLockSharedEx(a7 + 26, 0LL);
    KeLeaveCriticalRegion();
    if ( !v64 )
    {
      v80 = (_QWORD *)WdLogNewEntry5_WdError(v73, v72);
      v80[3] = a7;
      v80[4] = v123[v50];
      v80[5] = v50;
      v14 = -1073741811;
      v80[6] = -1073741811LL;
      WdLogEvent5_WdError(v80);
      if ( v115 != v116 && v115 )
        ExFreePoolWithTag(v115, 0);
      v115 = 0LL;
      v117 = 0;
      goto LABEL_103;
    }
LABEL_83:
    v74 = v122;
    *(_QWORD *)((char *)v120 + (_QWORD)v122) = v64;
    ++v50;
    v53 = (unsigned int *)((char *)v119 + 4);
    v119 = (struct DXGADAPTERSYNCOBJECT *)((char *)v119 + 4);
    v122 = (DXGSYNCOBJECT *)((char *)v74 + 8);
  }
  while ( v50 < a1 );
  v75 = v120;
  v140 = 0LL;
  v142 = 0;
  if ( a8 )
  {
    NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::AllocateElements(&v140, a1);
    v81 = v140;
    if ( !v140 )
    {
      v140 = 0LL;
      v142 = 0;
      if ( v115 != v116 && v115 )
        ExFreePoolWithTag(v115, 0);
      v115 = 0LL;
      v117 = 0;
      if ( v112 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v111);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v143);
      if ( v26 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v113);
      if ( P != v131 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v132 = 0;
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v125, v82);
      PagedPoolZeroedArray<DXGHWQUEUE *,2>::DeallocateElements((__int64)v135);
      return 3221225495LL;
    }
    v83 = 8LL * v142;
    v84 = Src;
    if ( (char *)Src + v83 < Src || (unsigned __int64)Src + v83 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v81, v84, v83);
    Src = v140;
    v133 = (unsigned __int64 *)v140;
  }
  DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
    (__int64)v137,
    v75,
    a1);
  if ( v138 )
  {
    if ( !v137[0] )
    {
      DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
        (__int64)v137,
        v85);
      if ( v140 != v141 && v140 )
        ExFreePoolWithTag(v140, 0);
      v140 = 0LL;
      v142 = 0;
      goto LABEL_133;
    }
    v87 = WdLogNewEntry5_WdError(v86, v85);
    *(_QWORD *)(v87 + 24) = 1800LL;
    WdLogEvent5_WdError(v87);
LABEL_172:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
      (__int64)v137,
      v88);
    if ( v140 != v141 && v140 )
      ExFreePoolWithTag(v140, 0);
    v142 = 0;
    v140 = 0LL;
    goto LABEL_176;
  }
  v126 = 0LL;
  v128 = 0;
  v89 = (struct _VIDSCH_SYNC_OBJECT **)NonPagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,2,1265072196>::AllocateElements(
                                         &v126,
                                         a1);
  v90 = (__int64)v89;
  v91 = 0;
  if ( v121 )
  {
    v92 = v89;
    v93 = (const unsigned int *)((char *)v120 - (char *)v89);
    v120 = v93;
    while ( 1 )
    {
      v122 = *(struct _VIDSCH_SYNC_OBJECT **)((char *)v92 + (_QWORD)v93);
      LODWORD(v119) = DXGSYNCOBJECT::GetDxgAdapterSyncObject(
                        v122,
                        *(struct ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 16LL) + 16LL) + 16LL),
                        &v119);
      if ( (int)v119 < 0 )
        break;
      VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                           v122,
                           *(struct ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 16LL) + 16LL) + 16LL));
      *v92 = VidSchSyncObject;
      if ( !VidSchSyncObject )
      {
        v107 = WdLogNewEntry5_WdError(v98, v97);
        *(_QWORD *)(v107 + 24) = v122;
        WdLogEvent5_WdError(v107);
        if ( v126 != v127 && v126 )
          ExFreePoolWithTag(v126, 0);
        v126 = 0LL;
        v128 = 0;
        goto LABEL_172;
      }
      ++v91;
      ++v92;
      v93 = v120;
      if ( v91 >= v121 )
        goto LABEL_150;
    }
    v108 = (_QWORD *)WdLogNewEntry5_WdError(v95, v94);
    v108[3] = a7;
    v108[4] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 16LL) + 16LL) + 16LL) + 16LL);
    v14 = (unsigned int)v119;
    v108[5] = (int)v119;
    WdLogEvent5_WdError(v108);
    if ( v126 != v127 && v126 )
      ExFreePoolWithTag(v126, 0);
    v126 = 0LL;
    v128 = 0;
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
      (__int64)v137,
      v109);
    if ( v140 != v141 && v140 )
      ExFreePoolWithTag(v140, 0);
    v140 = 0LL;
    v142 = 0;
    if ( v115 != v116 && v115 )
      ExFreePoolWithTag(v115, 0);
    v115 = 0LL;
    v117 = 0;
LABEL_55:
    if ( v112 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v111);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v143);
    if ( v26 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v113);
    v52 = P;
    if ( P != v131 && P )
LABEL_61:
      ExFreePoolWithTag(v52, 0);
LABEL_62:
    P = 0LL;
    v132 = 0;
LABEL_5:
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v125, v17);
    goto LABEL_98;
  }
LABEL_150:
  v99 = v121;
  v100 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, _QWORD, __int64, struct _D3DDDICB_SIGNALFLAGS::$F4BAD952F0EA0A4BEFA84782466716D0::$DE86B16C121A84B75DA0E945D4B81535, void *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 16LL) + 16LL) + 16LL) + 616LL) + 8LL) + 648LL))(
           v118,
           v129,
           v121,
           v90,
           a3.0,
           Src);
  v104 = v100;
  if ( v100 < 0 )
  {
    v105 = (_QWORD *)WdLogNewEntry5_WdError(v102, v101);
    v105[3] = a7;
    v105[4] = *v123;
    v105[5] = 0LL;
    v105[6] = v104;
    WdLogEvent5_WdError(v105);
    if ( v126 != v127 && v126 )
      ExFreePoolWithTag(v126, 0);
    v126 = 0LL;
    v128 = 0;
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
      (__int64)v137,
      v106);
    if ( v140 != v141 && v140 )
      ExFreePoolWithTag(v140, 0);
    v140 = 0LL;
    v142 = 0;
    if ( v115 != v116 && v115 )
      ExFreePoolWithTag(v115, 0);
    v115 = 0LL;
    v117 = 0;
    if ( v112 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v111);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v143);
    if ( v26 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v113);
    if ( P != v131 && P )
      ExFreePoolWithTag(P, 0);
    v14 = v104;
    goto LABEL_62;
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0qPR0qqPR3XR3_EtwWriteTransfer(v102, v101, v103, v118, v13, *(_BYTE *)&a3.0, v99, v90, (__int64)Src);
  if ( v126 != v127 && v126 )
    ExFreePoolWithTag(v126, 0);
  v126 = 0LL;
  v128 = 0;
  DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
    (__int64)v137,
    v101);
  if ( v140 != v141 && v140 )
    ExFreePoolWithTag(v140, 0);
  v140 = 0LL;
  v142 = 0;
  if ( v115 != v116 && v115 )
    ExFreePoolWithTag(v115, 0);
  v115 = 0LL;
  v117 = 0;
  if ( v112 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v111);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v143);
  if ( v26 )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v113);
  if ( P != v131 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v132 = 0;
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v125, v110);
  PagedPoolZeroedArray<DXGHWQUEUE *,2>::DeallocateElements((__int64)v135);
  return 0LL;
}
