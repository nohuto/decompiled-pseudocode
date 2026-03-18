/*
 * XREFs of ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1C0310230
 * Callers:
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C02E5B80 (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 *     ?DxgkSubmitSignalSyncObjectsToHwQueueInternal@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@_N@Z @ 0x1C030E5C8 (-DxgkSubmitSignalSyncObjectsToHwQueueInternal@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@.c)
 *     ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0381650 (-VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0001AE8 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C0001C4C (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ @ 0x1C00091E8 (-TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0009300 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00096EC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009A8C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009B5C (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0009BB0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C000BC60 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000FB18 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z @ 0x1C0016438 (-AllocateElements@-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C002B26C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@PEAPEAVDXGSYNCOBJECT@@IEE@Z @ 0x1C002C578 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@XZ @ 0x1C002C640 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@PEAUVIDSCH_HW_QUEUE@@$0BA@$0ELGHHIEE@@@QEAAPEAPEAUVIDSCH_HW_QUEUE@@I@Z @ 0x1C002ECDA (-AllocateElements@-$NonPagedPoolZeroedArray@PEAUVIDSCH_HW_QUEUE@@$0BA@$0ELGHHIEE@@@QEAAPEAPEAUVI.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$01$0ELGHHIEE@@@QEAAPEAPEAU_VIDSCH_SYNC_OBJECT@@I@Z @ 0x1C002ED5A (-AllocateElements@-$NonPagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$01$0ELGHHIEE@@@QEAAPEAPEAU.c)
 *     McTemplateK0qPR0qqPR3XR3_EtwWriteTransfer @ 0x1C00542D0 (McTemplateK0qPR0qqPR3XR3_EtwWriteTransfer.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C016A93C (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAPEAPEAVDXGHWQUEUE@@I@Z @ 0x1C01D03EC (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAPEAPEAVDXGHWQUEUE@@I@Z.c)
 *     ?DeallocateElements@?$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAXXZ @ 0x1C01E9C70 (-DeallocateElements@-$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAXXZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$01@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z @ 0x1C022331A (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$01@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C033FB4C (-GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 *     ?VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N6PEAVDXGDEVICE@@@Z @ 0x1C037CE14 (-VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGN.c)
 */

__int64 __fastcall SubmitSignalSyncObjectsToHwQueue(
        unsigned int a1,
        unsigned int *a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5,
        unsigned __int64 *a6,
        DXGSYNCOBJECT **a7,
        bool a8,
        bool a9)
{
  unsigned int v9; // esi
  unsigned __int64 v10; // rbx
  struct DXGHWQUEUE **Elements; // rax
  struct DXGHWQUEUE **v13; // r12
  unsigned int v14; // edi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rsi
  void **v19; // r10
  int v20; // eax
  __int64 v21; // r9
  __int64 v22; // rsi
  int v23; // esi
  struct DXGGLOBAL *Global; // rax
  __int64 v25; // rbx
  __int64 v26; // rbx
  const wchar_t *v27; // r9
  _QWORD *v28; // r14
  __int64 v29; // r9
  _QWORD *v30; // r10
  const unsigned int *v31; // r11
  struct DXGHWQUEUE **v32; // rcx
  __int64 v33; // rax
  unsigned int v34; // r8d
  unsigned int v35; // edx
  __int64 v36; // r8
  __int64 v37; // rbx
  PVOID v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  unsigned int v41; // r13d
  __int64 v42; // r8
  __int64 v43; // r9
  unsigned int *v44; // rcx
  unsigned int v45; // r13d
  __int64 v46; // rax
  unsigned int v47; // r13d
  DXGSYNCOBJECT *v48; // r8
  unsigned int v49; // ecx
  __int64 v50; // r13
  __int64 v51; // rdx
  __int64 v52; // r13
  unsigned int v53; // r13d
  __int64 v54; // rax
  unsigned int v55; // r13d
  DXGSYNCOBJECT *v56; // r8
  unsigned int v57; // ecx
  DXGSYNCOBJECT *v58; // rdx
  unsigned int *v59; // rdi
  struct DXGPROCESS *v61; // r13
  PVOID v62; // rcx
  size_t v63; // r8
  void *v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r9
  struct DXGPROCESS *v67; // rax
  bool v68; // zf
  __int64 v69; // r13
  struct DXGPROCESS *v70; // rdx
  char *v71; // rcx
  int DxgAdapterSyncObject; // eax
  __int64 v73; // rcx
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v75; // rcx
  struct DXGPROCESS *v76; // rdx
  int v77; // eax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // rbx
  unsigned int *v82; // r13
  __int64 v83; // rbx
  unsigned int v84; // [rsp+70h] [rbp-378h]
  unsigned int v85; // [rsp+70h] [rbp-378h]
  unsigned int v86; // [rsp+70h] [rbp-378h]
  char v87[8]; // [rsp+78h] [rbp-370h] BYREF
  char v88; // [rsp+80h] [rbp-368h]
  struct DXGHWQUEUE **v89; // [rsp+88h] [rbp-360h]
  char *v90; // [rsp+90h] [rbp-358h]
  __int64 v91; // [rsp+98h] [rbp-350h] BYREF
  int v92; // [rsp+A0h] [rbp-348h]
  PVOID v93; // [rsp+A8h] [rbp-340h] BYREF
  _BYTE v94[16]; // [rsp+B0h] [rbp-338h] BYREF
  int v95; // [rsp+C0h] [rbp-328h]
  unsigned int v96; // [rsp+C8h] [rbp-320h]
  unsigned int v97; // [rsp+CCh] [rbp-31Ch]
  unsigned int *v98; // [rsp+D0h] [rbp-318h]
  DXGSYNCOBJECT *v99; // [rsp+D8h] [rbp-310h]
  unsigned int *v100; // [rsp+E0h] [rbp-308h]
  struct DXGPROCESS *v101; // [rsp+E8h] [rbp-300h]
  void *Src; // [rsp+F0h] [rbp-2F8h]
  _BYTE v103[16]; // [rsp+F8h] [rbp-2F0h] BYREF
  PVOID v104; // [rsp+108h] [rbp-2E0h] BYREF
  _BYTE v105[16]; // [rsp+110h] [rbp-2D8h] BYREF
  int v106; // [rsp+120h] [rbp-2C8h]
  PVOID P; // [rsp+130h] [rbp-2B8h] BYREF
  _BYTE v108[128]; // [rsp+138h] [rbp-2B0h] BYREF
  int v109; // [rsp+1B8h] [rbp-230h]
  _QWORD *v110; // [rsp+1C0h] [rbp-228h]
  size_t v111; // [rsp+1C8h] [rbp-220h]
  struct DXGADAPTERSYNCOBJECT *v112; // [rsp+1D0h] [rbp-218h] BYREF
  unsigned __int64 *v113; // [rsp+1D8h] [rbp-210h]
  __int64 v114[3]; // [rsp+1E0h] [rbp-208h] BYREF
  int v115; // [rsp+1F8h] [rbp-1F0h]
  _QWORD v116[4]; // [rsp+200h] [rbp-1E8h] BYREF
  char v117; // [rsp+220h] [rbp-1C8h]
  _BYTE v118[24]; // [rsp+228h] [rbp-1C0h] BYREF
  PVOID v119; // [rsp+240h] [rbp-1A8h] BYREF
  _BYTE v120[32]; // [rsp+248h] [rbp-1A0h] BYREF
  unsigned int v121; // [rsp+268h] [rbp-180h]
  _BYTE v122[160]; // [rsp+270h] [rbp-178h] BYREF
  _BYTE v123[144]; // [rsp+310h] [rbp-D8h] BYREF

  v9 = a4;
  v97 = a4;
  v10 = (unsigned int)a3;
  v100 = a2;
  v96 = a1;
  Src = a6;
  v113 = a6;
  v101 = (struct DXGPROCESS *)a7;
  v112 = (struct DXGADAPTERSYNCOBJECT *)a7;
  v114[0] = 0LL;
  v115 = 0;
  Elements = (struct DXGHWQUEUE **)PagedPoolZeroedArray<DXGHWQUEUE *,2>::AllocateElements(v114, a4, a3, a4);
  v13 = Elements;
  v89 = Elements;
  if ( !Elements )
  {
    v14 = -1073741801;
    goto LABEL_100;
  }
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v103, *a5, (struct DXGPROCESS *)a7, Elements, a9);
  if ( !*v13 )
  {
    v14 = -1073741811;
    WdLogSingleEntry3(2LL, v101, *a5, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x failed with invalid hHwQueue 0x%I64x returning 0x%I64x",
      (__int64)v101,
      *a5,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_5;
  }
  v17 = *((_QWORD *)*v13 + 2);
  if ( !*(_BYTE *)(v17 + 441) )
  {
    P = 0LL;
    v109 = 0;
    v110 = (_QWORD *)NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,16,1265072196>::AllocateElements(
                       (__int64 *)&P,
                       v9,
                       v15,
                       v16);
    if ( v110 )
    {
      v22 = *(_QWORD *)(*((_QWORD *)*v13 + 2) + 16LL);
      v91 = v22;
      v92 = 0;
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v122, v22, 0, v21, a9);
      if ( !a9 )
      {
        if ( a8 || *(_DWORD *)(*(_QWORD *)(*((_QWORD *)*v13 + 2) + 16LL) + 432LL) == 2 || ((_DWORD)a7[53] & 0x100) != 0 )
        {
          DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v91);
        }
        else if ( !(unsigned int)DXGDEVICEACCESSLOCKEXCLUSIVE::TryAcquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v91) )
        {
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v122);
          if ( v91 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v91);
          if ( P != v108 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v109 = 0;
          DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v103);
          v14 = -2147483631;
          goto LABEL_100;
        }
        v23 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v122, 0LL);
        if ( v23 < 0 )
        {
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v122);
          if ( v91 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v91);
          if ( P != v108 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v109 = 0;
          DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v103);
          v14 = v23;
          goto LABEL_100;
        }
        v22 = v91;
      }
      Global = DXGGLOBAL_GetGlobal();
      DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v87, Global, 0);
      DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v87);
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v13 + 2) + 16LL)
                                                                             + 16LL)
                                                                 + 16LL)) )
      {
        WdLogSingleEntry1(1LL, 1707LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pBroadcastDxgHwQueue[0]->GetRenderCore()->IsCoreResourceSharedOwner()",
          1707LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( (v10 & 0x7FFFFFF8) != 0 )
      {
        v25 = (v10 >> 3) & 0xFFFFFFF;
        v14 = -1073741811;
        WdLogSingleEntry3(2LL, *a5, (unsigned int)v25, -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"hHwQueue 0x%I64x SignalSyncObject.Flags.Reserved is not Zero, but %I64d, returning 0x%I64x",
          *a5,
          (unsigned int)v25,
          -1073741811LL,
          0LL,
          0LL);
        goto LABEL_105;
      }
      if ( (v10 & 0x80000000) != 0LL )
      {
        v26 = 1721LL;
        WdLogSingleEntry1(2LL, 1721LL);
        v27 = L"SignalSynchronizationObject is called with the DXGK_SIGNAL_FLAG_INTERNAL0 flag bits.";
LABEL_38:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v27, v26, 0LL, 0LL, 0LL, 0LL);
LABEL_183:
        if ( v88 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v87);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v122);
        if ( v22 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v91);
        if ( P != v108 && P )
          ExFreePoolWithTag(P, 0);
        v14 = -1073741811;
        goto LABEL_61;
      }
      v28 = v110;
      *v110 = *((_QWORD *)*v89 + 5);
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v118, (struct DXGPROCESS *)a7);
      v29 = 1LL;
      v84 = 1;
      if ( v97 > 1 )
      {
        v30 = v28 + 1;
        v90 = (char *)(v28 + 1);
        v31 = a5 + 1;
        v98 = a5 + 1;
        v32 = v89;
        v111 = (char *)v89 - (char *)v28;
        while ( 1 )
        {
          v33 = (*v31 >> 6) & 0xFFFFFF;
          v34 = *v31 >> 30;
          if ( (unsigned int)v33 >= *((_DWORD *)a7 + 74) )
            goto LABEL_48;
          v99 = a7[35];
          v35 = *((_DWORD *)v99 + 4 * v33 + 2);
          if ( v34 != ((v35 >> 5) & 3) || (v35 & 0x2000) != 0 || (v35 & 0x1F) == 0 )
            goto LABEL_47;
          if ( (v35 & 0x1F) != 0xF )
            break;
          v36 = *((_QWORD *)v99 + 2 * (unsigned int)v33);
          v30 = v90;
LABEL_49:
          *(_QWORD *)((char *)v30 + v111) = v36;
          if ( !v36 || *(_QWORD *)(*(_QWORD *)(v36 + 16) + 16LL) != *(_QWORD *)(*((_QWORD *)*v32 + 2) + 16LL) )
          {
            v37 = (unsigned int)v29;
            v14 = -1073741811;
            WdLogSingleEntry4(2LL, *a5, a5[v29], v29, -1073741811LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"hHwQueue 0x%I64x failed to signal with invalid broadcast queue 0x%I64x at index %I64d returning 0x%I64x",
              *a5,
              a5[v37],
              v37,
              -1073741811LL,
              0LL);
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v118);
            if ( v88 )
              DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v87);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v122);
            if ( v22 )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v91);
            v38 = P;
            if ( P != v108 && P )
              goto LABEL_60;
            goto LABEL_61;
          }
          *v30 = *(_QWORD *)(v36 + 40);
          v29 = (unsigned int)(v29 + 1);
          v84 = v29;
          v98 = (unsigned int *)++v31;
          v90 = (char *)++v30;
          v32 = v89;
          if ( (unsigned int)v29 >= v97 )
            goto LABEL_62;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        v32 = v89;
        v29 = v84;
        v31 = v98;
LABEL_47:
        v30 = v90;
LABEL_48:
        v36 = 0LL;
        goto LABEL_49;
      }
LABEL_62:
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v118);
      v41 = v96;
      if ( !v96 )
      {
        v26 = 1764LL;
        WdLogSingleEntry1(2LL, 1764LL);
        v27 = L"Can't signal zero sync objects.";
        goto LABEL_38;
      }
      v93 = 0LL;
      v95 = 0;
      v90 = (char *)PagedPoolZeroedArray<DXGSYNCOBJECT *,2>::AllocateElements((__int64 *)&v93, v96, v39, v40);
      if ( v90 )
      {
        v85 = 0;
        if ( v41 )
        {
          v99 = 0LL;
          v44 = v100;
          v98 = v100;
          while ( 1 )
          {
            v45 = *v44;
            DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(a7 + 31));
            v46 = (v45 >> 6) & 0xFFFFFF;
            v47 = v45 >> 30;
            if ( (unsigned int)v46 < *((_DWORD *)a7 + 74)
              && (v48 = a7[35], v49 = *((_DWORD *)v48 + 4 * v46 + 2), v47 == ((v49 >> 5) & 3))
              && (v49 & 0x2000) == 0
              && (v49 & 0x1F) == 0xB )
            {
              v50 = *((_QWORD *)v48 + 2 * (unsigned int)v46);
            }
            else
            {
              v50 = 0LL;
            }
            ExReleasePushLockSharedEx(a7 + 31, 0LL);
            KeLeaveCriticalRegion();
            if ( v50 )
            {
              if ( (*(_DWORD *)(v50 + 72) & 0x10) != 0 )
              {
                v59 = v100;
                WdLogSingleEntry1(2LL, v100[v85]);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"0x%I64x object is opened with NoSignal flag and thus cannot be signaled.",
                  v59[v85],
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                if ( v93 != v94 && v93 )
                  ExFreePoolWithTag(v93, 0);
                v93 = 0LL;
                v95 = 0;
                if ( v88 )
                  DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v87);
                COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v122);
                if ( v22 )
                  DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v91);
                if ( P != v108 && P )
                  ExFreePoolWithTag(P, 0);
                P = 0LL;
                v109 = 0;
                DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v103);
                v14 = -1073741790;
                goto LABEL_100;
              }
              v51 = *(_QWORD *)(*((_QWORD *)*v89 + 2) + 16LL);
              v42 = *(_QWORD *)(v50 + 16);
              if ( v42 != v51 )
              {
                WdLogSingleEntry2(2LL, v51, v42);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"SignalSynchronizationObjectFromGpu on device 0x%p attempts to use a sync object opened on a d"
                            "ifferent device 0x%p.",
                  *(_QWORD *)(*((_QWORD *)*v89 + 2) + 16LL),
                  *(_QWORD *)(v50 + 16),
                  0LL,
                  0LL,
                  0LL);
                goto LABEL_179;
              }
              v52 = *(_QWORD *)(v50 + 32);
              goto LABEL_85;
            }
            v53 = *v98;
            DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(a7 + 31));
            v54 = (v53 >> 6) & 0xFFFFFF;
            v55 = v53 >> 30;
            if ( (unsigned int)v54 >= *((_DWORD *)a7 + 74) )
              goto LABEL_83;
            v56 = a7[35];
            v57 = *((_DWORD *)v56 + 4 * v54 + 2);
            if ( v55 != ((v57 >> 5) & 3) || (v57 & 0x2000) != 0 || (v57 & 0x1F) == 0 )
              goto LABEL_83;
            if ( (v57 & 0x1F) != 8 )
              break;
            v52 = *((_QWORD *)v56 + 2 * (unsigned int)v54);
LABEL_84:
            ExReleasePushLockSharedEx(a7 + 31, 0LL);
            KeLeaveCriticalRegion();
            if ( !v52 )
            {
              v14 = -1073741811;
              v61 = v101;
              WdLogSingleEntry4(2LL, v101, v100[v85], v85, -1073741811LL);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"0x%I64x failed to signal with invalid hSyncObject 0x%I64x at index %I64d returning 0x%I64x",
                (__int64)v61,
                v100[v85],
                v85,
                -1073741811LL,
                0LL);
              if ( v93 != v94 && v93 )
                ExFreePoolWithTag(v93, 0);
              v93 = 0LL;
              v95 = 0;
LABEL_105:
              if ( v88 )
                DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v87);
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v122);
              if ( v22 )
                DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v91);
              v38 = P;
              if ( P != v108 && P )
LABEL_60:
                ExFreePoolWithTag(v38, 0);
LABEL_61:
              P = 0LL;
              v109 = 0;
LABEL_5:
              DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v103);
              goto LABEL_100;
            }
LABEL_85:
            v58 = v99;
            *(_QWORD *)((char *)v99 + (_QWORD)v90) = v52;
            ++v85;
            v44 = ++v98;
            v99 = (DXGSYNCOBJECT *)((char *)v58 + 8);
            v41 = v96;
            if ( v85 >= v96 )
              goto LABEL_112;
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_83:
          v52 = 0LL;
          goto LABEL_84;
        }
LABEL_112:
        v119 = 0LL;
        v121 = 0;
        if ( a8 )
        {
          NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::AllocateElements((__int64 *)&v119, v41, v42, v43);
          v62 = v119;
          if ( !v119 )
          {
            v119 = 0LL;
            v121 = 0;
            if ( v93 != v94 && v93 )
              ExFreePoolWithTag(v93, 0);
            v93 = 0LL;
            v95 = 0;
            if ( v88 )
              DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v87);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v122);
            if ( v22 )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v91);
            if ( P != v108 && P )
              ExFreePoolWithTag(P, 0);
            P = 0LL;
            v109 = 0;
            DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v103);
            PagedPoolZeroedArray<DXGHWQUEUE *,2>::DeallocateElements((__int64)v114);
            return 3221225495LL;
          }
          v63 = 8LL * v121;
          v111 = v63;
          v101 = (struct DXGPROCESS *)v119;
          v64 = Src;
          if ( (char *)Src + v63 < Src || (unsigned __int64)Src + v63 > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v62, v64, v63);
          Src = v119;
          v113 = (unsigned __int64 *)v119;
        }
        DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
          (__int64)v116,
          v90,
          v41);
        if ( !v117 )
        {
          v104 = 0LL;
          v106 = 0;
          v67 = (struct DXGPROCESS *)NonPagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,2,1265072196>::AllocateElements(
                                       (__int64 *)&v104,
                                       v41,
                                       v65,
                                       v66);
          v98 = (unsigned int *)v67;
          v86 = 0;
          v68 = v41 == 0;
          v69 = (__int64)v89;
          if ( v68 )
          {
LABEL_152:
            v77 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, _QWORD, unsigned int *, _DWORD, void *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v69 + 16LL) + 16LL) + 16LL) + 624LL) + 8LL) + 648LL))(
                    v97,
                    v110,
                    v96,
                    v98,
                    v10,
                    Src);
            LODWORD(v89) = v77;
            if ( v77 < 0 )
            {
              v81 = v77;
              v82 = v100;
              WdLogSingleEntry4(2LL, a7, *v100, 0LL, v77);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"0x%I64x failed to signal SyncObject 0x%I64x at index %I64d returning 0x%I64x",
                (__int64)a7,
                *v82,
                0LL,
                v81,
                0LL);
LABEL_154:
              if ( v104 != v105 && v104 )
                ExFreePoolWithTag(v104, 0);
              v104 = 0LL;
              v106 = 0;
              DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v116);
              if ( v119 != v120 && v119 )
                ExFreePoolWithTag(v119, 0);
              v121 = 0;
              v119 = 0LL;
              if ( v93 != v94 && v93 )
                ExFreePoolWithTag(v93, 0);
              v95 = 0;
              v93 = 0LL;
              if ( v88 )
                DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v87);
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v122);
              if ( v22 )
                DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v91);
              if ( P != v108 && P )
                ExFreePoolWithTag(P, 0);
              v14 = (unsigned int)v89;
              goto LABEL_61;
            }
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0qPR0qqPR3XR3_EtwWriteTransfer(v79, v78, v80, v97, v69, v10, v96, (__int64)v98, (__int64)Src);
            if ( v104 != v105 && v104 )
              ExFreePoolWithTag(v104, 0);
            v104 = 0LL;
            v106 = 0;
            DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v116);
            if ( v119 != v120 && v119 )
              ExFreePoolWithTag(v119, 0);
            v119 = 0LL;
            v121 = 0;
            if ( v93 != v94 && v93 )
              ExFreePoolWithTag(v93, 0);
            v93 = 0LL;
            v95 = 0;
            if ( v88 )
              DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v87);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v122);
            if ( v22 )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v91);
            if ( P != v108 && P )
              ExFreePoolWithTag(P, 0);
            P = 0LL;
            v109 = 0;
            DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v103);
            PagedPoolZeroedArray<DXGHWQUEUE *,2>::DeallocateElements((__int64)v114);
            return 0LL;
          }
          v70 = v67;
          v101 = v67;
          v71 = (char *)(v90 - (char *)v67);
          v90 -= (__int64)v67;
          while ( 1 )
          {
            v99 = *(DXGSYNCOBJECT **)((char *)v70 + (_QWORD)v71);
            DxgAdapterSyncObject = DXGSYNCOBJECT::GetDxgAdapterSyncObject(
                                     v99,
                                     *(struct ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v69 + 16LL) + 16LL)
                                                               + 16LL),
                                     &v112);
            LODWORD(v89) = DxgAdapterSyncObject;
            v73 = *(_QWORD *)v69;
            if ( DxgAdapterSyncObject < 0 )
            {
              v83 = DxgAdapterSyncObject;
              WdLogSingleEntry3(
                2LL,
                a7,
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v73 + 16) + 16LL) + 16LL) + 16LL),
                DxgAdapterSyncObject);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"0x%I64x failed, failed to create a sync object on logical adapter 0x%I64x returning 0x%I64x",
                (__int64)a7,
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v69 + 16LL) + 16LL) + 16LL) + 16LL),
                v83,
                0LL,
                0LL);
              goto LABEL_154;
            }
            VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                                 v99,
                                 *(struct ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v73 + 16) + 16LL) + 16LL));
            v76 = v101;
            *(_QWORD *)v101 = VidSchSyncObject;
            if ( !VidSchSyncObject )
              break;
            ++v86;
            v70 = (struct DXGPROCESS *)((char *)v76 + 8);
            v101 = v70;
            v71 = v90;
            if ( v86 >= v96 )
              goto LABEL_152;
          }
          WdLogSingleEntry1(2LL, v75);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"0x%p sync object adapter state is destroyed, thus it cannot be signaled.",
            (__int64)v99,
            0LL,
            0LL,
            0LL,
            0LL);
          if ( v104 != v105 && v104 )
            ExFreePoolWithTag(v104, 0);
          v104 = 0LL;
          v106 = 0;
          goto LABEL_175;
        }
        if ( v116[0] )
        {
          WdLogSingleEntry1(2LL, 1883LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"The same sync object handle is passed twice",
            1883LL,
            0LL,
            0LL,
            0LL,
            0LL);
LABEL_175:
          DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v116);
          if ( v119 != v120 && v119 )
            ExFreePoolWithTag(v119, 0);
          v121 = 0;
          v119 = 0LL;
LABEL_179:
          if ( v93 != v94 && v93 )
            ExFreePoolWithTag(v93, 0);
          v95 = 0;
          v93 = 0LL;
          goto LABEL_183;
        }
        DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v116);
        if ( v119 != v120 && v119 )
          ExFreePoolWithTag(v119, 0);
        v119 = 0LL;
        v121 = 0;
      }
      if ( v93 != v94 && v93 )
        ExFreePoolWithTag(v93, 0);
      v95 = 0;
      v93 = 0LL;
      if ( v88 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v87);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v122);
      if ( v22 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v91);
    }
    if ( P != v108 && P )
      ExFreePoolWithTag(P, 0);
    v14 = -1073741801;
    goto LABEL_61;
  }
  v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 16) + 16LL) + 16LL);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v123, (struct DXGADAPTER *const)v18, 0LL);
  if ( a9 || (v20 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v123, 0LL), v19 = 0LL, v20 >= 0) )
  {
    v14 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalSyncObject(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(v18 + 4344),
            (struct DXGPROCESS *)a7,
            a1,
            v100,
            (struct _D3DDDICB_SIGNALFLAGS)v10,
            v97,
            a5,
            (const unsigned __int64 *)Src,
            (unsigned __int64)v19,
            v19,
            a8,
            (bool)v19,
            (struct DXGDEVICE *)v19);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v123);
    goto LABEL_5;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v123);
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v103);
  v14 = -1073741130;
LABEL_100:
  PagedPoolZeroedArray<DXGHWQUEUE *,2>::DeallocateElements((__int64)v114);
  return v14;
}
