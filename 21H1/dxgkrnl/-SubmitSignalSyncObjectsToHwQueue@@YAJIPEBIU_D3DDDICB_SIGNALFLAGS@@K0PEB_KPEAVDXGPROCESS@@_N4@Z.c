/*
 * XREFs of ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1C026A98C
 * Callers:
 *     ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024B1A0 (-VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C0250F4C (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 *     ?DxgkSubmitSignalSyncObjectsToHwQueueInternal@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@_N@Z @ 0x1C0268ADC (-DxgkSubmitSignalSyncObjectsToHwQueueInternal@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0008348 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00085AC (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ @ 0x1C0008698 (-TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C000A884 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000B200 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000E890 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000EB44 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EB8C (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@XZ @ 0x1C000EBC8 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000EC34 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C000EC88 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000EF94 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0017150 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C0017278 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z @ 0x1C0019D04 (-AllocateElements@-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0024550 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@PEAPEAVDXGSYNCOBJECT@@IE@Z @ 0x1C0025B0C (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@PEAUVIDSCH_HW_QUEUE@@$0BA@$0ELGHHIEE@@@QEAAPEAPEAUVIDSCH_HW_QUEUE@@I@Z @ 0x1C0044FA8 (-AllocateElements@-$NonPagedPoolZeroedArray@PEAUVIDSCH_HW_QUEUE@@$0BA@$0ELGHHIEE@@@QEAAPEAPEAUVI.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$01$0ELGHHIEE@@@QEAAPEAPEAU_VIDSCH_SYNC_OBJECT@@I@Z @ 0x1C0045038 (-AllocateElements@-$NonPagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$01$0ELGHHIEE@@@QEAAPEAPEAU.c)
 *     McTemplateK0qPR0qqPR3XR3_EtwWriteTransfer @ 0x1C0045378 (McTemplateK0qPR0qqPR3XR3_EtwWriteTransfer.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C011BAB0 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$01@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z @ 0x1C014CFA4 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$01@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAPEAPEAVDXGHWQUEUE@@I@Z @ 0x1C014D788 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAPEAPEAVDXGHWQUEUE@@I@Z.c)
 *     ?DeallocateElements@?$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAXXZ @ 0x1C015A628 (-DeallocateElements@-$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAXXZ.c)
 *     ?VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N6PEAVDXGDEVICE@@@Z @ 0x1C0247ACC (-VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGN.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C028C1FC (-GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
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
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  unsigned int v41; // r15d
  _QWORD *v42; // rcx
  struct DXGADAPTERSYNCOBJECT *v43; // r9
  const unsigned int *v44; // r10
  __int64 v45; // rax
  __int64 v46; // rdx
  struct _KTHREAD *v47; // r11
  __int64 v48; // rax
  __int64 v49; // r8
  __int64 v50; // rdx
  __int64 v51; // rcx
  unsigned int v52; // r15d
  _QWORD *v53; // rax
  __int64 v54; // rdx
  PVOID v55; // rcx
  __int64 v56; // rdx
  unsigned int *v57; // rax
  unsigned int v58; // r14d
  __int64 v59; // rax
  unsigned int v60; // r14d
  struct _KTHREAD *v61; // r8
  unsigned int v62; // ecx
  __int64 v63; // r14
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r14
  unsigned int v69; // r14d
  __int64 v70; // rax
  unsigned int v71; // r14d
  struct _KTHREAD *v72; // r8
  unsigned int v73; // ecx
  __int64 v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rcx
  DXGSYNCOBJECT *v78; // rcx
  const unsigned int *v79; // r14
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rdx
  _QWORD *v85; // rax
  __int64 v86; // rdx
  PVOID v87; // rcx
  __int64 v88; // rdx
  size_t v89; // r8
  void *v90; // rdx
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // rax
  __int64 v94; // rdx
  struct _VIDSCH_SYNC_OBJECT **v95; // rax
  __int64 v96; // r15
  unsigned int v97; // r12d
  struct _VIDSCH_SYNC_OBJECT **v98; // r14
  const unsigned int *v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rcx
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v103; // rdx
  __int64 v104; // rcx
  int v105; // r12d
  int v106; // eax
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r14
  _QWORD *v111; // rax
  __int64 v112; // rdx
  __int64 v113; // rdx
  __int64 v114; // rax
  _QWORD *v115; // rax
  __int64 v116; // rdx
  __int64 v117; // rdx
  __int64 v118; // rdx
  char v119[8]; // [rsp+70h] [rbp-358h] BYREF
  char v120; // [rsp+78h] [rbp-350h]
  __int64 v121; // [rsp+80h] [rbp-348h] BYREF
  int v122; // [rsp+88h] [rbp-340h]
  PVOID v123; // [rsp+90h] [rbp-338h] BYREF
  _BYTE v124[16]; // [rsp+98h] [rbp-330h] BYREF
  int v125; // [rsp+A8h] [rbp-320h]
  unsigned int v126; // [rsp+B0h] [rbp-318h]
  struct DXGADAPTERSYNCOBJECT *v127; // [rsp+B8h] [rbp-310h] BYREF
  const unsigned int *v128; // [rsp+C0h] [rbp-308h]
  unsigned int v129; // [rsp+C8h] [rbp-300h]
  DXGSYNCOBJECT *v130; // [rsp+D0h] [rbp-2F8h]
  unsigned int *v131; // [rsp+D8h] [rbp-2F0h]
  void *Src; // [rsp+E0h] [rbp-2E8h]
  _BYTE v133[16]; // [rsp+E8h] [rbp-2E0h] BYREF
  PVOID v134; // [rsp+F8h] [rbp-2D0h] BYREF
  _BYTE v135[16]; // [rsp+100h] [rbp-2C8h] BYREF
  int v136; // [rsp+110h] [rbp-2B8h]
  _QWORD *v137; // [rsp+118h] [rbp-2B0h]
  PVOID P; // [rsp+120h] [rbp-2A8h] BYREF
  _BYTE v139[128]; // [rsp+128h] [rbp-2A0h] BYREF
  int v140; // [rsp+1A8h] [rbp-220h]
  unsigned __int64 *v141; // [rsp+1B0h] [rbp-218h]
  struct _KTHREAD **v142; // [rsp+1B8h] [rbp-210h]
  _QWORD v143[3]; // [rsp+1C0h] [rbp-208h] BYREF
  int v144; // [rsp+1D8h] [rbp-1F0h]
  _QWORD v145[4]; // [rsp+1E0h] [rbp-1E8h] BYREF
  char v146; // [rsp+200h] [rbp-1C8h]
  _BYTE v147[24]; // [rsp+208h] [rbp-1C0h] BYREF
  PVOID v148; // [rsp+220h] [rbp-1A8h] BYREF
  _BYTE v149[32]; // [rsp+228h] [rbp-1A0h] BYREF
  unsigned int v150; // [rsp+248h] [rbp-180h]
  _BYTE v151[160]; // [rsp+250h] [rbp-178h] BYREF
  _BYTE v152[144]; // [rsp+2F0h] [rbp-D8h] BYREF

  v126 = a4;
  v131 = a2;
  v129 = a1;
  Src = a6;
  v141 = a6;
  v142 = a7;
  v143[0] = 0LL;
  v144 = 0;
  Elements = (struct DXGHWQUEUE **)PagedPoolZeroedArray<DXGHWQUEUE *,2>::AllocateElements(v143, a4);
  v13 = (__int64)Elements;
  if ( !Elements )
  {
    v14 = -1073741801;
    goto LABEL_98;
  }
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v133, *a5, a7, Elements, a9);
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
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v152, (struct DXGADAPTER *const)v19, 0LL);
    if ( a9 || (v21 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v152, 0LL), v20 = 0LL, v21 >= 0) )
    {
      v14 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalSyncObject(
              (DXG_GUEST_VIRTUALGPU_VMBUS *)(v19 + 4208),
              (struct DXGPROCESS *)a7,
              a1,
              v131,
              a3,
              v126,
              a5,
              (unsigned __int64 *)Src,
              (unsigned __int64)v20,
              v20,
              a8,
              (bool)v20,
              (struct DXGDEVICE *)v20);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v152, v24);
      goto LABEL_5;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v152, v22);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v133, v23);
    v14 = -1073741130;
LABEL_98:
    PagedPoolZeroedArray<DXGHWQUEUE *,2>::DeallocateElements((__int64)v143);
    return v14;
  }
  P = 0LL;
  v140 = 0;
  v137 = NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,16,1265072196>::AllocateElements(&P, a4);
  if ( !v137 )
  {
LABEL_140:
    if ( P != v139 && P )
      ExFreePoolWithTag(P, 0);
    v14 = -1073741801;
    goto LABEL_62;
  }
  v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 16LL) + 16LL);
  v121 = v26;
  v122 = 0;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v151, v26, 0, v25, a9);
  if ( !a9 )
  {
    if ( a8
      || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 16LL) + 16LL) + 432LL) == 2
      || (*((_BYTE *)a7 + 347) & 0x20) != 0 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v121);
    }
    else if ( !(unsigned int)DXGDEVICEACCESSLOCKEXCLUSIVE::TryAcquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v121) )
    {
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v151);
      if ( v121 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v121);
      if ( P != v139 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v140 = 0;
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v133, v29);
      v14 = -2147483631;
      goto LABEL_98;
    }
    v30 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v151, 0LL);
    if ( v30 < 0 )
    {
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v151);
      if ( v121 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v121);
      if ( P != v139 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v140 = 0;
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v133, v31);
      v14 = v30;
      goto LABEL_98;
    }
    v26 = v121;
  }
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v28, v27);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v119, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v119, v33);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 16LL)
                                                                                     + 16LL)
                                                                         + 16LL)
                                                             + 16LL)) )
  {
    v36 = WdLogNewEntry5_WdAssertion(v35, v34);
    *(_QWORD *)(v36 + 24) = 1570LL;
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
    if ( v120 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v119, v38);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v151);
    if ( v26 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v121);
    v55 = P;
    if ( P != v139 && P )
      goto LABEL_61;
    goto LABEL_62;
  }
  if ( (a3.Value & 0x80000000) != 0 )
  {
    v39 = WdLogNewEntry5_WdError(v35, v34);
    *(_QWORD *)(v39 + 24) = 1584LL;
    goto LABEL_38;
  }
  *v137 = *(_QWORD *)(*(_QWORD *)v13 + 40LL);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v147, a7);
  v41 = 1;
  if ( v126 > 1 )
  {
    v42 = v137;
    v43 = (struct DXGADAPTERSYNCOBJECT *)(v137 + 1);
    v127 = (struct DXGADAPTERSYNCOBJECT *)(v137 + 1);
    v44 = a5 + 1;
    v128 = a5 + 1;
    v130 = (DXGSYNCOBJECT *)(v13 - (_QWORD)v137);
    while ( 1 )
    {
      v45 = (*v44 >> 6) & 0xFFFFFF;
      v46 = *v44 >> 30;
      if ( (unsigned int)v45 >= *((_DWORD *)a7 + 64) )
        goto LABEL_47;
      v47 = a7[30];
      v42 = (_QWORD *)*((unsigned int *)v47 + 4 * v45 + 2);
      if ( (_DWORD)v46 != ((*((_DWORD *)v47 + 4 * v45 + 2) >> 5) & 3)
        || ((unsigned __int16)v42 & 0x2000) != 0
        || ((unsigned __int8)v42 & 0x1F) == 0 )
      {
        goto LABEL_47;
      }
      v42 = (_QWORD *)((unsigned __int8)v42 & 0x1F);
      if ( (_BYTE)v42 != 15 )
        break;
      v49 = *((_QWORD *)v47 + 2 * (unsigned int)v45);
LABEL_48:
      *(_QWORD *)((char *)v43 + (_QWORD)v130) = v49;
      if ( !v49
        || (v46 = *(_QWORD *)(*(_QWORD *)(v49 + 16) + 16LL), v42 = *(_QWORD **)(*(_QWORD *)v13 + 16LL), v46 != v42[2]) )
      {
        v53 = (_QWORD *)WdLogNewEntry5_WdError(v42, v46);
        v53[3] = *a5;
        v53[4] = a5[v41];
        v53[5] = v41;
        v14 = -1073741811;
        v53[6] = -1073741811LL;
        WdLogEvent5_WdError(v53);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v147);
        goto LABEL_55;
      }
      *(_QWORD *)v43 = *(_QWORD *)(v49 + 40);
      ++v41;
      v128 = ++v44;
      v43 = (struct DXGADAPTERSYNCOBJECT *)((char *)v43 + 8);
      v127 = v43;
      if ( v41 >= v126 )
        goto LABEL_51;
    }
    v48 = WdLogNewEntry5_WdError(v42, v46);
    *(_QWORD *)(v48 + 24) = 267LL;
    WdLogEvent5_WdError(v48);
    v43 = v127;
    v44 = v128;
LABEL_47:
    v49 = 0LL;
    goto LABEL_48;
  }
LABEL_51:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v147);
  v52 = 0;
  if ( !a1 )
  {
    v39 = WdLogNewEntry5_WdError(v51, v50);
    *(_QWORD *)(v39 + 24) = 1627LL;
LABEL_38:
    WdLogEvent5_WdError(v39);
LABEL_180:
    if ( v120 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v119, v40);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v151);
    if ( v26 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v121);
    if ( P != v139 && P )
      ExFreePoolWithTag(P, 0);
    v14 = -1073741811;
    goto LABEL_62;
  }
  v123 = 0LL;
  v125 = 0;
  v128 = (const unsigned int *)PagedPoolZeroedArray<DXGSYNCOBJECT *,2>::AllocateElements(&v123, a1);
  if ( !v128 )
  {
LABEL_133:
    if ( v123 != v124 && v123 )
      ExFreePoolWithTag(v123, 0);
    v125 = 0;
    v123 = 0LL;
    if ( v120 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v119, v56);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v151);
    if ( v26 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v121);
    goto LABEL_140;
  }
  v130 = 0LL;
  v57 = v131;
  v127 = (struct DXGADAPTERSYNCOBJECT *)v131;
  do
  {
    v58 = *v57;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(a7 + 26));
    v59 = (v58 >> 6) & 0xFFFFFF;
    v60 = v58 >> 30;
    if ( (unsigned int)v59 < *((_DWORD *)a7 + 64)
      && (v61 = a7[30], v62 = *((_DWORD *)v61 + 4 * v59 + 2), v60 == ((v62 >> 5) & 3))
      && (v62 & 0x2000) == 0
      && (v62 & 0x1F) == 0xB )
    {
      v63 = *((_QWORD *)v61 + 2 * (unsigned int)v59);
    }
    else
    {
      v63 = 0LL;
    }
    ExReleasePushLockSharedEx(a7 + 26, 0LL);
    KeLeaveCriticalRegion();
    if ( v63 )
    {
      if ( (*(_DWORD *)(v63 + 72) & 0x10) != 0 )
      {
        v81 = WdLogNewEntry5_WdError(v65, v64);
        *(_QWORD *)(v81 + 24) = v131[v52];
        WdLogEvent5_WdError(v81);
        if ( v123 != v124 && v123 )
          ExFreePoolWithTag(v123, 0);
        v123 = 0LL;
        v125 = 0;
        if ( v120 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v119, v82);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v151);
        if ( v26 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v121);
        if ( P != v139 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v140 = 0;
        DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v133, v83);
        v14 = -1073741790;
        goto LABEL_98;
      }
      v66 = *(_QWORD *)(v63 + 16);
      v67 = *(_QWORD *)(*(_QWORD *)v13 + 16LL);
      if ( v66 != *(_QWORD *)(v67 + 16) )
      {
        v80 = WdLogNewEntry5_WdError(v67, v66);
        *(_QWORD *)(v80 + 24) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 16LL) + 16LL);
        *(_QWORD *)(v80 + 32) = *(_QWORD *)(v63 + 16);
        WdLogEvent5_WdError(v80);
LABEL_176:
        if ( v123 != v124 && v123 )
          ExFreePoolWithTag(v123, 0);
        v125 = 0;
        v123 = 0LL;
        goto LABEL_180;
      }
      v68 = *(_QWORD *)(v63 + 32);
      goto LABEL_83;
    }
    v69 = *(_DWORD *)v127;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(a7 + 26));
    v70 = (v69 >> 6) & 0xFFFFFF;
    v71 = v69 >> 30;
    if ( (unsigned int)v70 >= *((_DWORD *)a7 + 64) )
      goto LABEL_81;
    v72 = a7[30];
    v73 = *((_DWORD *)v72 + 4 * v70 + 2);
    if ( v71 != ((v73 >> 5) & 3) || (v73 & 0x2000) != 0 || (v73 & 0x1F) == 0 )
      goto LABEL_81;
    v74 = v73 & 0x1F;
    if ( (_BYTE)v74 != 8 )
    {
      v75 = WdLogNewEntry5_WdError(v74, 2LL * (unsigned int)v70);
      *(_QWORD *)(v75 + 24) = 267LL;
      WdLogEvent5_WdError(v75);
LABEL_81:
      v68 = 0LL;
      goto LABEL_82;
    }
    v68 = *((_QWORD *)v72 + 2 * (unsigned int)v70);
LABEL_82:
    ExReleasePushLockSharedEx(a7 + 26, 0LL);
    KeLeaveCriticalRegion();
    if ( !v68 )
    {
      v85 = (_QWORD *)WdLogNewEntry5_WdError(v77, v76);
      v85[3] = a7;
      v85[4] = v131[v52];
      v85[5] = v52;
      v14 = -1073741811;
      v85[6] = -1073741811LL;
      WdLogEvent5_WdError(v85);
      if ( v123 != v124 && v123 )
        ExFreePoolWithTag(v123, 0);
      v123 = 0LL;
      v125 = 0;
      goto LABEL_103;
    }
LABEL_83:
    v78 = v130;
    *(_QWORD *)((char *)v128 + (_QWORD)v130) = v68;
    ++v52;
    v57 = (unsigned int *)((char *)v127 + 4);
    v127 = (struct DXGADAPTERSYNCOBJECT *)((char *)v127 + 4);
    v130 = (DXGSYNCOBJECT *)((char *)v78 + 8);
  }
  while ( v52 < a1 );
  v79 = v128;
  v148 = 0LL;
  v150 = 0;
  if ( a8 )
  {
    NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::AllocateElements(&v148, a1);
    v87 = v148;
    if ( !v148 )
    {
      v148 = 0LL;
      v150 = 0;
      if ( v123 != v124 && v123 )
        ExFreePoolWithTag(v123, 0);
      v123 = 0LL;
      v125 = 0;
      if ( v120 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v119, v86);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v151);
      if ( v26 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v121);
      if ( P != v139 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v140 = 0;
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v133, v88);
      PagedPoolZeroedArray<DXGHWQUEUE *,2>::DeallocateElements((__int64)v143);
      return 3221225495LL;
    }
    v89 = 8LL * v150;
    v90 = Src;
    if ( (char *)Src + v89 < Src || (unsigned __int64)Src + v89 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v87, v90, v89);
    Src = v148;
    v141 = (unsigned __int64 *)v148;
  }
  DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
    (__int64)v145,
    v79,
    a1);
  if ( v146 )
  {
    if ( !v145[0] )
    {
      DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
        (__int64)v145,
        v91);
      if ( v148 != v149 && v148 )
        ExFreePoolWithTag(v148, 0);
      v148 = 0LL;
      v150 = 0;
      goto LABEL_133;
    }
    v93 = WdLogNewEntry5_WdError(v92, v91);
    *(_QWORD *)(v93 + 24) = 1746LL;
    WdLogEvent5_WdError(v93);
LABEL_172:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
      (__int64)v145,
      v94);
    if ( v148 != v149 && v148 )
      ExFreePoolWithTag(v148, 0);
    v150 = 0;
    v148 = 0LL;
    goto LABEL_176;
  }
  v134 = 0LL;
  v136 = 0;
  v95 = (struct _VIDSCH_SYNC_OBJECT **)NonPagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,2,1265072196>::AllocateElements(
                                         &v134,
                                         a1);
  v96 = (__int64)v95;
  v97 = 0;
  if ( v129 )
  {
    v98 = v95;
    v99 = (const unsigned int *)((char *)v128 - (char *)v95);
    v128 = v99;
    while ( 1 )
    {
      v130 = *(struct _VIDSCH_SYNC_OBJECT **)((char *)v98 + (_QWORD)v99);
      LODWORD(v127) = DXGSYNCOBJECT::GetDxgAdapterSyncObject(
                        v130,
                        *(struct ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 16LL) + 16LL) + 16LL),
                        &v127);
      if ( (int)v127 < 0 )
        break;
      VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                           v130,
                           *(struct ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 16LL) + 16LL) + 16LL));
      *v98 = VidSchSyncObject;
      if ( !VidSchSyncObject )
      {
        v114 = WdLogNewEntry5_WdError(v104, v103);
        *(_QWORD *)(v114 + 24) = v130;
        WdLogEvent5_WdError(v114);
        if ( v134 != v135 && v134 )
          ExFreePoolWithTag(v134, 0);
        v134 = 0LL;
        v136 = 0;
        goto LABEL_172;
      }
      ++v97;
      ++v98;
      v99 = v128;
      if ( v97 >= v129 )
        goto LABEL_150;
    }
    v115 = (_QWORD *)WdLogNewEntry5_WdError(v101, v100);
    v115[3] = a7;
    v115[4] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 16LL) + 16LL) + 16LL) + 16LL);
    v14 = (unsigned int)v127;
    v115[5] = (int)v127;
    WdLogEvent5_WdError(v115);
    if ( v134 != v135 && v134 )
      ExFreePoolWithTag(v134, 0);
    v134 = 0LL;
    v136 = 0;
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
      (__int64)v145,
      v116);
    if ( v148 != v149 && v148 )
      ExFreePoolWithTag(v148, 0);
    v148 = 0LL;
    v150 = 0;
    if ( v123 != v124 && v123 )
      ExFreePoolWithTag(v123, 0);
    v123 = 0LL;
    v125 = 0;
LABEL_55:
    if ( v120 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v119, v54);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v151);
    if ( v26 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v121);
    v55 = P;
    if ( P != v139 && P )
LABEL_61:
      ExFreePoolWithTag(v55, 0);
LABEL_62:
    P = 0LL;
    v140 = 0;
LABEL_5:
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v133, v17);
    goto LABEL_98;
  }
LABEL_150:
  v105 = v129;
  v106 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, _QWORD, __int64, struct _D3DDDICB_SIGNALFLAGS::$F4BAD952F0EA0A4BEFA84782466716D0::$DE86B16C121A84B75DA0E945D4B81535, void *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 16LL) + 16LL) + 16LL) + 616LL) + 8LL) + 648LL))(
           v126,
           v137,
           v129,
           v96,
           a3.0,
           Src);
  v110 = v106;
  if ( v106 < 0 )
  {
    v111 = (_QWORD *)WdLogNewEntry5_WdError(v108, v107);
    v111[3] = a7;
    v111[4] = *v131;
    v111[5] = 0LL;
    v111[6] = v110;
    WdLogEvent5_WdError(v111);
    if ( v134 != v135 && v134 )
      ExFreePoolWithTag(v134, 0);
    v134 = 0LL;
    v136 = 0;
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
      (__int64)v145,
      v112);
    if ( v148 != v149 && v148 )
      ExFreePoolWithTag(v148, 0);
    v148 = 0LL;
    v150 = 0;
    if ( v123 != v124 && v123 )
      ExFreePoolWithTag(v123, 0);
    v123 = 0LL;
    v125 = 0;
    if ( v120 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v119, v113);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v151);
    if ( v26 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v121);
    if ( P != v139 && P )
      ExFreePoolWithTag(P, 0);
    v14 = v110;
    goto LABEL_62;
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0qPR0qqPR3XR3_EtwWriteTransfer(v108, v107, v109, v126, v13, *(_BYTE *)&a3.0, v105, v96, (__int64)Src);
  if ( v134 != v135 && v134 )
    ExFreePoolWithTag(v134, 0);
  v134 = 0LL;
  v136 = 0;
  DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
    (__int64)v145,
    v107);
  if ( v148 != v149 && v148 )
    ExFreePoolWithTag(v148, 0);
  v148 = 0LL;
  v150 = 0;
  if ( v123 != v124 && v123 )
    ExFreePoolWithTag(v123, 0);
  v123 = 0LL;
  v125 = 0;
  if ( v120 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v119, v117);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v151);
  if ( v26 )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v121);
  if ( P != v139 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v140 = 0;
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v133, v118);
  PagedPoolZeroedArray<DXGHWQUEUE *,2>::DeallocateElements((__int64)v143);
  return 0LL;
}
