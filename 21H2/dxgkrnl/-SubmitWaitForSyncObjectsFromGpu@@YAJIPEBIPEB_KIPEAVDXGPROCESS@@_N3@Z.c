/*
 * XREFs of ?SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z @ 0x1C0270660
 * Callers:
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C0255330 (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 *     DxgkSubmitWaitForSyncObjectsToHwQueueInternal @ 0x1C02746F8 (DxgkSubmitWaitForSyncObjectsToHwQueueInternal.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00022BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004090 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004300 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004370 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000568C (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006CE0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007018 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00070D0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0007124 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0017290 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C00173B8 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z @ 0x1C001A8AC (-AllocateElements@-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     ??0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z @ 0x1C0025C30 (--0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028C40 (memmove.c)
 *     McTemplateK0pqPR1XR1_EtwWriteTransfer @ 0x1C004718C (McTemplateK0pqPR1XR1_EtwWriteTransfer.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C01165B0 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$03@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z @ 0x1C011ABE8 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$03@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C016C28C (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ?VmBusSendWaitForSyncObjectFromGpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBIPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEB_K_KIPEAVDXGHWQUEUE@@@Z @ 0x1C024DE30 (-VmBusSendWaitForSyncObjectFromGpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTE.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x1C0290DFC (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
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
  const unsigned int *v28; // rax
  struct _KTHREAD **v29; // rdx
  unsigned int v30; // ebx
  __int64 v31; // rax
  struct _KTHREAD *v32; // r8
  int v33; // ecx
  __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  unsigned int HostHandle; // eax
  unsigned int v38; // ebx
  __int64 v39; // rax
  struct _KTHREAD *v40; // r8
  int v41; // ecx
  DXGSYNCOBJECT *v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // rcx
  unsigned __int8 v45; // r8
  unsigned int *v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  _QWORD *v49; // rax
  unsigned int v50; // esi
  const unsigned __int64 *v51; // r12
  struct DXGHWQUEUE *v52; // rax
  struct DXGSYNCOBJECT *v53; // rbx
  int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // rdx
  _QWORD *v59; // rax
  __int64 v60; // rdx
  struct DXGSYNCOBJECT **v61; // [rsp+20h] [rbp-228h]
  char v62; // [rsp+50h] [rbp-1F8h]
  unsigned int v63; // [rsp+54h] [rbp-1F4h]
  struct DXGHWQUEUE *v64; // [rsp+58h] [rbp-1F0h] BYREF
  const unsigned int *v65; // [rsp+60h] [rbp-1E8h]
  char v66[8]; // [rsp+68h] [rbp-1E0h] BYREF
  char v67; // [rsp+70h] [rbp-1D8h]
  __int64 v68; // [rsp+78h] [rbp-1D0h] BYREF
  int v69; // [rsp+80h] [rbp-1C8h]
  const unsigned int *v70; // [rsp+88h] [rbp-1C0h]
  PVOID v71; // [rsp+90h] [rbp-1B8h] BYREF
  _BYTE v72[32]; // [rsp+98h] [rbp-1B0h] BYREF
  int v73; // [rsp+B8h] [rbp-190h]
  _QWORD *v74; // [rsp+C0h] [rbp-188h]
  struct _KTHREAD **i; // [rsp+C8h] [rbp-180h]
  unsigned int v76; // [rsp+D0h] [rbp-178h]
  _BYTE v77[16]; // [rsp+D8h] [rbp-170h] BYREF
  const unsigned __int64 *v78; // [rsp+E8h] [rbp-160h]
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // [rsp+F0h] [rbp-158h] BYREF
  _BYTE v80[16]; // [rsp+F8h] [rbp-150h] BYREF
  PVOID v81; // [rsp+108h] [rbp-140h] BYREF
  _BYTE v82[16]; // [rsp+110h] [rbp-138h] BYREF
  int v83; // [rsp+120h] [rbp-128h]
  PVOID P; // [rsp+128h] [rbp-120h] BYREF
  _BYTE v85[32]; // [rsp+130h] [rbp-118h] BYREF
  unsigned int v86; // [rsp+150h] [rbp-F8h]
  _BYTE v87[160]; // [rsp+160h] [rbp-E8h] BYREF

  v7 = a4;
  v8 = a3;
  v70 = a2;
  v76 = a1;
  v78 = a3;
  i = a5;
  v10 = 0LL;
  v64 = 0LL;
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v77, a4, a5, &v64, a7);
  v14 = v64;
  if ( !v64 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11);
    v15[3] = a5;
    v15[4] = v7;
    LODWORD(v16) = -1073741811;
    v15[5] = -1073741811LL;
    WdLogEvent5_WdError(v15);
    goto LABEL_7;
  }
  v18 = *(_QWORD *)(*((_QWORD *)v64 + 2) + 16LL);
  v68 = v18;
  v69 = 0;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v87, v18, 0, v13, a7);
  if ( !a7 )
  {
    LODWORD(v16) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v87, 0LL);
    if ( (int)v16 < 0 )
      goto LABEL_5;
  }
  P = 0LL;
  v86 = 0;
  if ( a6 )
  {
    NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::AllocateElements(&P, a1);
    v20 = P;
    if ( !P )
    {
      P = 0LL;
      v86 = 0;
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v87);
      if ( v18 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v68);
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v77, v21);
      return 3221225495LL;
    }
    v22 = v86;
    if ( &v8[v22] < v8 || (unsigned __int64)&v8[v22] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v20, v8, v22 * 8);
    v8 = (const unsigned __int64 *)P;
    v78 = (const unsigned __int64 *)P;
  }
  v71 = 0LL;
  v73 = 0;
  v23 = 0LL;
  v64 = 0LL;
  v81 = 0LL;
  v83 = 0;
  if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) + 16LL) + 16LL) + 209LL) )
  {
    v62 = 0;
    v23 = (struct DXGHWQUEUE *)PagedPoolZeroedArray<DXGSYNCOBJECT *,4>::AllocateElements(&v71, a1);
    v64 = v23;
    if ( v23 )
      goto LABEL_19;
LABEL_27:
    if ( v81 != v82 && v81 )
      ExFreePoolWithTag(v81, 0);
    v83 = (int)v23;
    v81 = v23;
    if ( v71 != v72 && v71 )
      ExFreePoolWithTag(v71, 0);
    v73 = (int)v23;
    v71 = v23;
    if ( P != v85 && P )
      ExFreePoolWithTag(P, 0);
    P = v23;
    v86 = (unsigned int)v23;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v87);
    if ( v18 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v68);
    LODWORD(v16) = -1073741801;
    goto LABEL_7;
  }
  v62 = 1;
  v10 = (const unsigned int *)PagedPoolZeroedArray<unsigned int,4>::AllocateElements(&v81, a1);
  if ( !v10 )
    goto LABEL_27;
LABEL_19:
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v25, v24);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v66, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v66, v27);
  v63 = 0;
  if ( !a1 )
  {
LABEL_92:
    if ( v62 )
    {
      LODWORD(v16) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromGpu(
                       (struct _KTHREAD **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) + 16LL)
                                                      + 16LL)
                                          + 4240LL),
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
      v50 = 0;
      if ( !a1 )
      {
LABEL_101:
        if ( v67 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v66);
        if ( v81 != v82 && v81 )
          ExFreePoolWithTag(v81, 0);
        v81 = 0LL;
        v83 = 0;
        if ( v71 != v72 && v71 )
          ExFreePoolWithTag(v71, 0);
        v71 = 0LL;
        v73 = 0;
        if ( P != v85 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v86 = 0;
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v87);
        if ( v18 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v68);
        DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v77, v58);
        return 0LL;
      }
      v51 = v8;
      v52 = (struct DXGHWQUEUE *)(v64 - (struct DXGHWQUEUE *)v8);
      v64 = (struct DXGHWQUEUE *)((char *)v64 - (__int64)v8);
      while ( 1 )
      {
        v53 = *(struct DXGSYNCOBJECT **)((char *)v51 + (_QWORD)v52);
        DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)v80, v53);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v80);
        VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                             v53,
                             *(struct ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) + 16LL));
        v54 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, const unsigned __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) + 16LL) + 616LL) + 8LL) + 632LL))(
                *((_QWORD *)v14 + 5),
                VidSchSyncObject,
                *v51);
        v16 = v54;
        if ( v54 < 0 )
          break;
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          LODWORD(v61) = 1;
          McTemplateK0pqPR1XR1_EtwWriteTransfer(
            (__int64)&v8[v50],
            &EventWaitForSynchronizationObjectFromGpu,
            v57,
            v14,
            v61,
            &VidSchSyncObject,
            &v8[v50]);
        }
        DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v80, v55);
        ++v50;
        ++v51;
        v52 = v64;
        if ( v50 >= v76 )
          goto LABEL_101;
      }
      v59 = (_QWORD *)WdLogNewEntry5_WdError(v56, v55);
      v59[3] = a5;
      v59[4] = v70[v50];
      v59[5] = v50;
      v59[6] = v16;
      WdLogEvent5_WdError(v59);
      DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v80, v60);
    }
    if ( v67 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v66);
    if ( v81 != v82 && v81 )
      ExFreePoolWithTag(v81, 0);
    v83 = 0;
    v81 = 0LL;
    if ( v71 != v72 && v71 )
      ExFreePoolWithTag(v71, 0);
    v73 = 0;
    v71 = 0LL;
    if ( P != v85 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v86 = 0;
LABEL_5:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v87);
    if ( v18 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v68);
    goto LABEL_7;
  }
  v74 = v23;
  v28 = v10;
  v65 = v10;
  v29 = (struct _KTHREAD **)((char *)v70 - (char *)v10);
  for ( i = (struct _KTHREAD **)((char *)v70 - (char *)v10); ; v29 = i )
  {
    v30 = *(const unsigned int *)((char *)v28 + (_QWORD)v29);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(a5 + 26));
    v31 = (v30 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v31 < *((_DWORD *)a5 + 64)
      && (v32 = a5[30],
          v33 = *((_DWORD *)v32 + 4 * v31 + 2),
          ((v30 >> 25) & 0x60) == (*((_BYTE *)v32 + 16 * v31 + 8) & 0x60))
      && (v33 & 0x2000) == 0
      && (v33 & 0x1F) == 0xB )
    {
      v34 = *((_QWORD *)v32 + 2 * (unsigned int)v31);
    }
    else
    {
      v34 = 0LL;
    }
    ExReleasePushLockSharedEx(a5 + 26, 0LL);
    KeLeaveCriticalRegion();
    if ( v34 )
    {
      v36 = *(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL);
      if ( *(_QWORD *)(v34 + 16) != v36 )
      {
        v48 = WdLogNewEntry5_WdError(v36, v35);
        *(_QWORD *)(v48 + 24) = *(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL);
        *(_QWORD *)(v48 + 32) = *(_QWORD *)(v34 + 16);
        WdLogEvent5_WdError(v48);
        goto LABEL_78;
      }
      if ( (*(_DWORD *)(v34 + 72) & 0x20) != 0 )
      {
        v47 = WdLogNewEntry5_WdError(v36, v35);
        *(_QWORD *)(v47 + 24) = v70[v63];
        WdLogEvent5_WdError(v47);
        if ( v67 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v66);
        if ( v81 != v82 && v81 )
          ExFreePoolWithTag(v81, 0);
        v81 = 0LL;
        v83 = 0;
        if ( v71 != v72 && v71 )
          ExFreePoolWithTag(v71, 0);
        v71 = 0LL;
        v73 = 0;
        if ( P != v85 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v86 = 0;
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v87);
        if ( v18 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v68);
        LODWORD(v16) = -1073741790;
        goto LABEL_7;
      }
      if ( !v62 )
      {
        *v74 = *(_QWORD *)(v34 + 32);
        goto LABEL_60;
      }
      HostHandle = *(_DWORD *)(v34 + 44);
      goto LABEL_57;
    }
    v38 = *(const unsigned int *)((char *)v65 + (_QWORD)i);
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
    if ( !v42 && !v62 )
      break;
    if ( v62 )
    {
      v46 = (unsigned int *)v65;
      HostHandle = *(const unsigned int *)((char *)v65 + (char *)v70 - (char *)v10);
      if ( !v42 )
      {
LABEL_58:
        *v46 = HostHandle;
        goto LABEL_60;
      }
      HostHandle = DXGSYNCOBJECT::GetHostHandle(v42, HostHandle, v45);
LABEL_57:
      v46 = (unsigned int *)v65;
      goto LABEL_58;
    }
    *v74 = v42;
LABEL_60:
    ++v63;
    v28 = ++v65;
    ++v74;
    if ( v63 >= a1 )
      goto LABEL_92;
  }
  v49 = (_QWORD *)WdLogNewEntry5_WdAssertion(v44, v43);
  v49[3] = a5;
  v49[4] = v70[v63];
  v49[5] = v63;
  WdLogEvent5_WdAssertion(v49);
LABEL_78:
  if ( v67 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v66);
  if ( v81 != v82 && v81 )
    ExFreePoolWithTag(v81, 0);
  v83 = 0;
  v81 = 0LL;
  if ( v71 != v72 && v71 )
    ExFreePoolWithTag(v71, 0);
  v73 = 0;
  v71 = 0LL;
  if ( P != v85 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v86 = 0;
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v87);
  if ( v18 )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v68);
  LODWORD(v16) = -1073741811;
LABEL_7:
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v77, v17);
  return (unsigned int)v16;
}
