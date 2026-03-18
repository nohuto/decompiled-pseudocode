/*
 * XREFs of ?SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z @ 0x1C026BEA0
 * Callers:
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C0250F4C (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 *     DxgkSubmitWaitForSyncObjectsToHwQueueInternal @ 0x1C026FFE8 (DxgkSubmitWaitForSyncObjectsToHwQueueInternal.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0008348 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000B200 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C000D034 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000E890 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000EB44 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EB8C (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000EC34 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C000EC88 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0017150 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C0017278 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z @ 0x1C0019D04 (-AllocateElements@-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0024550 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z @ 0x1C00248B4 (--0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     McTemplateK0pqPR1XR1_EtwWriteTransfer @ 0x1C00452DC (McTemplateK0pqPR1XR1_EtwWriteTransfer.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C011BAB0 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$03@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z @ 0x1C0121918 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$03@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C01574DC (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ?VmBusSendWaitForSyncObjectFromGpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBIPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEB_K_KIPEAVDXGHWQUEUE@@@Z @ 0x1C0249CDC (-VmBusSendWaitForSyncObjectFromGpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTE.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x1C028C3F4 (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 */

__int64 __fastcall SubmitWaitForSyncObjectsFromGpu(
        unsigned int a1,
        const unsigned int *a2,
        const unsigned __int64 *a3,
        unsigned int a4,
        struct _KTHREAD **a5,
        bool a6,
        bool a7)
{
  __int64 v7; // rdi
  const unsigned __int64 *v8; // r14
  const unsigned int *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r9
  struct DXGHWQUEUE *v14; // r13
  _QWORD *v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rdi
  PVOID v20; // rcx
  __int64 v21; // rdx
  size_t v22; // r8
  struct DXGHWQUEUE *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  PERESOURCE *Global; // rax
  __int64 v27; // rdx
  __int64 v28; // rdx
  const unsigned int *v29; // rax
  struct _KTHREAD **v30; // rdx
  unsigned int v31; // ebx
  __int64 v32; // rax
  struct _KTHREAD *v33; // r8
  int v34; // ecx
  __int64 v35; // rbx
  __int64 v36; // rcx
  unsigned int HostHandle; // eax
  unsigned int v38; // ebx
  __int64 v39; // rax
  struct _KTHREAD *v40; // r8
  int v41; // ecx
  DXGSYNCOBJECT *v42; // rbx
  __int64 v43; // rcx
  unsigned __int8 v44; // r8
  unsigned int *v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rdx
  _QWORD *v50; // rax
  __int64 v51; // rdx
  unsigned int v52; // esi
  const unsigned __int64 *v53; // r12
  struct DXGHWQUEUE *v54; // rax
  struct DXGSYNCOBJECT *v55; // rbx
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rdx
  _QWORD *v61; // rax
  __int64 v62; // rdx
  struct DXGSYNCOBJECT **v63; // [rsp+20h] [rbp-228h]
  char v64; // [rsp+50h] [rbp-1F8h]
  unsigned int v65; // [rsp+54h] [rbp-1F4h]
  struct DXGHWQUEUE *v66; // [rsp+58h] [rbp-1F0h] BYREF
  const unsigned int *v67; // [rsp+60h] [rbp-1E8h]
  char v68[8]; // [rsp+68h] [rbp-1E0h] BYREF
  char v69; // [rsp+70h] [rbp-1D8h]
  __int64 v70; // [rsp+78h] [rbp-1D0h] BYREF
  int v71; // [rsp+80h] [rbp-1C8h]
  const unsigned int *v72; // [rsp+88h] [rbp-1C0h]
  PVOID v73; // [rsp+90h] [rbp-1B8h] BYREF
  _BYTE v74[32]; // [rsp+98h] [rbp-1B0h] BYREF
  int v75; // [rsp+B8h] [rbp-190h]
  _QWORD *v76; // [rsp+C0h] [rbp-188h]
  struct _KTHREAD **i; // [rsp+C8h] [rbp-180h]
  unsigned int v78; // [rsp+D0h] [rbp-178h]
  _BYTE v79[16]; // [rsp+D8h] [rbp-170h] BYREF
  const unsigned __int64 *v80; // [rsp+E8h] [rbp-160h]
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // [rsp+F0h] [rbp-158h] BYREF
  _BYTE v82[16]; // [rsp+F8h] [rbp-150h] BYREF
  PVOID v83; // [rsp+108h] [rbp-140h] BYREF
  _BYTE v84[16]; // [rsp+110h] [rbp-138h] BYREF
  int v85; // [rsp+120h] [rbp-128h]
  PVOID P; // [rsp+128h] [rbp-120h] BYREF
  _BYTE v87[32]; // [rsp+130h] [rbp-118h] BYREF
  unsigned int v88; // [rsp+150h] [rbp-F8h]
  _BYTE v89[160]; // [rsp+160h] [rbp-E8h] BYREF

  v7 = a4;
  v8 = a3;
  v72 = a2;
  v78 = a1;
  v80 = a3;
  i = a5;
  v10 = 0LL;
  v66 = 0LL;
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v79, a4, a5, &v66, a7);
  v14 = v66;
  if ( !v66 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11);
    v15[3] = a5;
    v15[4] = v7;
    LODWORD(v16) = -1073741811;
    v15[5] = -1073741811LL;
    WdLogEvent5_WdError(v15);
    goto LABEL_7;
  }
  v18 = *(_QWORD *)(*((_QWORD *)v66 + 2) + 16LL);
  v70 = v18;
  v71 = 0;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v89, v18, 0, v13, a7);
  if ( !a7 )
  {
    LODWORD(v16) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v89, 0LL);
    if ( (int)v16 < 0 )
      goto LABEL_5;
  }
  P = 0LL;
  v88 = 0;
  if ( a6 )
  {
    NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::AllocateElements(&P, a1);
    v20 = P;
    if ( !P )
    {
      P = 0LL;
      v88 = 0;
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v89);
      if ( v18 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v70);
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v79, v21);
      return 3221225495LL;
    }
    v22 = v88;
    if ( &v8[v22] < v8 || (unsigned __int64)&v8[v22] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v20, v8, v22 * 8);
    v8 = (const unsigned __int64 *)P;
    v80 = (const unsigned __int64 *)P;
  }
  v73 = 0LL;
  v75 = 0;
  v23 = 0LL;
  v66 = 0LL;
  v83 = 0LL;
  v85 = 0;
  if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) + 16LL) + 16LL) + 209LL) )
  {
    v64 = 0;
    v23 = (struct DXGHWQUEUE *)PagedPoolZeroedArray<DXGSYNCOBJECT *,4>::AllocateElements(&v73, a1);
    v66 = v23;
    if ( v23 )
      goto LABEL_19;
LABEL_27:
    if ( v83 != v84 && v83 )
      ExFreePoolWithTag(v83, 0);
    v85 = (int)v23;
    v83 = v23;
    if ( v73 != v74 && v73 )
      ExFreePoolWithTag(v73, 0);
    v75 = (int)v23;
    v73 = v23;
    if ( P != v87 && P )
      ExFreePoolWithTag(P, 0);
    P = v23;
    v88 = (unsigned int)v23;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v89);
    if ( v18 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v70);
    LODWORD(v16) = -1073741801;
    goto LABEL_7;
  }
  v64 = 1;
  v10 = (const unsigned int *)PagedPoolZeroedArray<unsigned int,4>::AllocateElements(&v83, a1);
  if ( !v10 )
    goto LABEL_27;
LABEL_19:
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v25, v24);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v68, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v68, v27);
  v65 = 0;
  if ( !a1 )
  {
LABEL_92:
    if ( v64 )
    {
      LODWORD(v16) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromGpu(
                       (struct _KTHREAD **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) + 16LL)
                                                      + 16LL)
                                          + 4208LL),
                       a5,
                       0LL,
                       v10,
                       0LL,
                       0LL,
                       v8,
                       0LL,
                       a1,
                       v14);
    }
    else
    {
      v52 = 0;
      if ( !a1 )
      {
LABEL_101:
        if ( v69 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v68, v28);
        if ( v83 != v84 && v83 )
          ExFreePoolWithTag(v83, 0);
        v83 = 0LL;
        v85 = 0;
        if ( v73 != v74 && v73 )
          ExFreePoolWithTag(v73, 0);
        v73 = 0LL;
        v75 = 0;
        if ( P != v87 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v88 = 0;
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v89);
        if ( v18 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v70);
        DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v79, v60);
        return 0LL;
      }
      v53 = v8;
      v54 = (struct DXGHWQUEUE *)(v66 - (struct DXGHWQUEUE *)v8);
      v66 = (struct DXGHWQUEUE *)((char *)v66 - (__int64)v8);
      while ( 1 )
      {
        v55 = *(struct DXGSYNCOBJECT **)((char *)v53 + (_QWORD)v54);
        DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)v82, v55);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v82);
        VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                             v55,
                             *(struct ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) + 16LL));
        v56 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, const unsigned __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) + 16LL) + 616LL) + 8LL) + 632LL))(
                *((_QWORD *)v14 + 5),
                VidSchSyncObject,
                *v53);
        v16 = v56;
        if ( v56 < 0 )
          break;
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          LODWORD(v63) = 1;
          McTemplateK0pqPR1XR1_EtwWriteTransfer(
            (__int64)&v8[v52],
            &EventWaitForSynchronizationObjectFromGpu,
            v59,
            v14,
            v63,
            &VidSchSyncObject,
            &v8[v52]);
        }
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v82, v57);
        ++v52;
        ++v53;
        v54 = v66;
        if ( v52 >= v78 )
          goto LABEL_101;
      }
      v61 = (_QWORD *)WdLogNewEntry5_WdError(v58, v57);
      v61[3] = a5;
      v61[4] = v72[v52];
      v61[5] = v52;
      v61[6] = v16;
      WdLogEvent5_WdError(v61);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v82, v62);
    }
    if ( v69 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v68, v51);
    if ( v83 != v84 && v83 )
      ExFreePoolWithTag(v83, 0);
    v85 = 0;
    v83 = 0LL;
    if ( v73 != v74 && v73 )
      ExFreePoolWithTag(v73, 0);
    v75 = 0;
    v73 = 0LL;
    if ( P != v87 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v88 = 0;
LABEL_5:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v89);
    if ( v18 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v70);
    goto LABEL_7;
  }
  v76 = v23;
  v29 = v10;
  v67 = v10;
  v30 = (struct _KTHREAD **)((char *)v72 - (char *)v10);
  for ( i = (struct _KTHREAD **)((char *)v72 - (char *)v10); ; v30 = i )
  {
    v31 = *(const unsigned int *)((char *)v29 + (_QWORD)v30);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(a5 + 26));
    v32 = (v31 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v32 < *((_DWORD *)a5 + 64)
      && (v33 = a5[30],
          v34 = *((_DWORD *)v33 + 4 * v32 + 2),
          ((v31 >> 25) & 0x60) == (*((_BYTE *)v33 + 16 * v32 + 8) & 0x60))
      && (v34 & 0x2000) == 0
      && (v34 & 0x1F) == 0xB )
    {
      v35 = *((_QWORD *)v33 + 2 * (unsigned int)v32);
    }
    else
    {
      v35 = 0LL;
    }
    ExReleasePushLockSharedEx(a5 + 26, 0LL);
    KeLeaveCriticalRegion();
    if ( v35 )
    {
      v36 = *(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL);
      if ( *(_QWORD *)(v35 + 16) != v36 )
      {
        v48 = WdLogNewEntry5_WdError(v36, v28);
        *(_QWORD *)(v48 + 24) = *(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL);
        *(_QWORD *)(v48 + 32) = *(_QWORD *)(v35 + 16);
        WdLogEvent5_WdError(v48);
        goto LABEL_78;
      }
      if ( (*(_DWORD *)(v35 + 72) & 0x20) != 0 )
      {
        v46 = WdLogNewEntry5_WdError(v36, v28);
        *(_QWORD *)(v46 + 24) = v72[v65];
        WdLogEvent5_WdError(v46);
        if ( v69 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v68, v47);
        if ( v83 != v84 && v83 )
          ExFreePoolWithTag(v83, 0);
        v83 = 0LL;
        v85 = 0;
        if ( v73 != v74 && v73 )
          ExFreePoolWithTag(v73, 0);
        v73 = 0LL;
        v75 = 0;
        if ( P != v87 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v88 = 0;
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v89);
        if ( v18 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v70);
        LODWORD(v16) = -1073741790;
        goto LABEL_7;
      }
      if ( !v64 )
      {
        *v76 = *(_QWORD *)(v35 + 32);
        goto LABEL_60;
      }
      HostHandle = *(_DWORD *)(v35 + 44);
      goto LABEL_57;
    }
    v38 = *(const unsigned int *)((char *)v67 + (_QWORD)i);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(a5 + 26));
    v39 = (v38 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v39 < *((_DWORD *)a5 + 64)
      && (v40 = a5[30],
          v41 = *((_DWORD *)v40 + 4 * v39 + 2),
          ((v38 >> 25) & 0x60) == (*((_BYTE *)v40 + 16 * v39 + 8) & 0x60))
      && (v41 & 0x2000) == 0
      && (v41 & 0x1F) == 8 )
    {
      v42 = (DXGSYNCOBJECT *)*((_QWORD *)v40 + 2 * (unsigned int)v39);
    }
    else
    {
      v42 = 0LL;
    }
    ExReleasePushLockSharedEx(a5 + 26, 0LL);
    KeLeaveCriticalRegion();
    if ( !v42 && !v64 )
      break;
    if ( v64 )
    {
      v45 = (unsigned int *)v67;
      HostHandle = *(const unsigned int *)((char *)v67 + (char *)v72 - (char *)v10);
      if ( !v42 )
      {
LABEL_58:
        *v45 = HostHandle;
        goto LABEL_60;
      }
      HostHandle = DXGSYNCOBJECT::GetHostHandle(v42, HostHandle, v44);
LABEL_57:
      v45 = (unsigned int *)v67;
      goto LABEL_58;
    }
    *v76 = v42;
LABEL_60:
    ++v65;
    v29 = ++v67;
    ++v76;
    if ( v65 >= a1 )
      goto LABEL_92;
  }
  v50 = (_QWORD *)WdLogNewEntry5_WdAssertion(v43, v28);
  v50[3] = a5;
  v50[4] = v72[v65];
  v50[5] = v65;
  WdLogEvent5_WdAssertion(v50);
LABEL_78:
  if ( v69 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v68, v49);
  if ( v83 != v84 && v83 )
    ExFreePoolWithTag(v83, 0);
  v85 = 0;
  v83 = 0LL;
  if ( v73 != v74 && v73 )
    ExFreePoolWithTag(v73, 0);
  v75 = 0;
  v73 = 0LL;
  if ( P != v87 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v88 = 0;
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v89);
  if ( v18 )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v70);
  LODWORD(v16) = -1073741811;
LABEL_7:
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v79, v17);
  return (unsigned int)v16;
}
