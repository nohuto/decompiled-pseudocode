/*
 * XREFs of ?WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAX@Z @ 0x1C01178E4
 * Callers:
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX@Z @ 0x1C01188A4 (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00029C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0003F10 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0003FB0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004150 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006A30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@XZ @ 0x1C0006DA4 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0006E20 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0006E74 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0007000 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C001B104 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0027200 (memmove.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C0048358 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     McTemplateK0pqPR1XR1pq_EtwWriteTransfer @ 0x1C0048700 (McTemplateK0pqPR1XR1pq_EtwWriteTransfer.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$03@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z @ 0x1C0118848 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$03@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$01@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z @ 0x1C015B194 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$01@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0268C6C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall WaitForSynchronizationObjectFromCpu(
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *a1,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        void *a4)
{
  _BYTE *PoolWithTag; // rsi
  struct _KEVENT *v7; // r12
  __int64 v10; // rcx
  volatile signed __int64 *v11; // rax
  volatile signed __int64 *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  PERESOURCE *Global; // rax
  __int64 v17; // rdx
  HANDLE hAsyncEvent; // rcx
  NTSTATUS v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  UINT ObjectCount; // r15d
  __int64 v30; // rax
  PVOID v31; // rcx
  _QWORD *v32; // r15
  __int64 v33; // rdx
  __int64 v34; // r13
  DXGPUSHLOCK *v35; // rcx
  D3DKMT_HANDLE v36; // ebx
  __int64 v37; // rax
  __int64 v38; // r8
  int v39; // ecx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rdx
  unsigned __int64 i; // rbx
  unsigned int v47; // r9d
  __int64 v48; // rcx
  __int64 v49; // rax
  _QWORD *v50; // rax
  __int64 v51; // rax
  _QWORD *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  struct DXGADAPTER *v57; // rcx
  struct DXGADAPTER *v58; // rcx
  __int64 v59; // rax
  PRKEVENT v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // rax
  __int64 v65; // rax
  int Object; // [rsp+20h] [rbp-E0h]
  PVOID *Objecta; // [rsp+20h] [rbp-E0h]
  int HandleInformation; // [rsp+28h] [rbp-D8h]
  __int64 v70; // [rsp+40h] [rbp-C0h]
  _BYTE v71[8]; // [rsp+50h] [rbp-B0h] BYREF
  char v72; // [rsp+58h] [rbp-A8h]
  PVOID v73; // [rsp+60h] [rbp-A0h]
  _BYTE v74[32]; // [rsp+68h] [rbp-98h] BYREF
  UINT v75; // [rsp+88h] [rbp-78h]
  PRKEVENT Event; // [rsp+90h] [rbp-70h] BYREF
  PVOID P; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v78[32]; // [rsp+A0h] [rbp-60h] BYREF
  int v79; // [rsp+C0h] [rbp-40h]
  _BYTE v80[16]; // [rsp+C8h] [rbp-38h] BYREF
  struct DXGPROCESS *v81; // [rsp+D8h] [rbp-28h]
  void *v82; // [rsp+E0h] [rbp-20h]
  PVOID v83; // [rsp+E8h] [rbp-18h] BYREF
  DXGPUSHLOCK *v84; // [rsp+F0h] [rbp-10h]
  void *Base[3]; // [rsp+100h] [rbp+0h] BYREF
  size_t NumOfElements; // [rsp+118h] [rbp+18h]
  char v87; // [rsp+120h] [rbp+20h]
  __int64 v88; // [rsp+128h] [rbp+28h] BYREF
  _QWORD v89[4]; // [rsp+130h] [rbp+30h] BYREF
  __int128 v90; // [rsp+150h] [rbp+50h]
  _BYTE v91[8]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v92[8]; // [rsp+168h] [rbp+68h] BYREF
  __int64 v93; // [rsp+170h] [rbp+70h]
  struct DXGADAPTER *v94; // [rsp+178h] [rbp+78h]
  char v95; // [rsp+180h] [rbp+80h]
  __int64 v96; // [rsp+188h] [rbp+88h]
  _BYTE v97[8]; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v98; // [rsp+1B0h] [rbp+B0h]
  struct DXGADAPTER *v99; // [rsp+1B8h] [rbp+B8h]
  char v100; // [rsp+1C0h] [rbp+C0h]
  __int64 v101; // [rsp+1C8h] [rbp+C8h]
  struct DXGDEVICE *v102; // [rsp+1E8h] [rbp+E8h]
  char v103; // [rsp+1F0h] [rbp+F0h]

  v81 = a2;
  v82 = a4;
  PoolWithTag = 0LL;
  Event = 0LL;
  v7 = 0LL;
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v80, a3);
  v10 = *((_QWORD *)a3 + 2);
  v11 = *(volatile signed __int64 **)(v10 + 16);
  v94 = (struct DXGADAPTER *)v11;
  v95 = 0;
  v96 = 0LL;
  if ( v11 )
  {
    _InterlockedIncrement64(v11 + 3);
    v10 = *((_QWORD *)a3 + 2);
    v93 = -1LL;
  }
  v12 = *(volatile signed __int64 **)(v10 + 16);
  v99 = (struct DXGADAPTER *)v12;
  v100 = 0;
  v101 = 0LL;
  if ( v12 )
  {
    _InterlockedIncrement64(v12 + 3);
    v98 = -1LL;
  }
  v102 = a3;
  v103 = 0;
  LODWORD(v15) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v91, 0LL);
  if ( (int)v15 < 0 )
    goto LABEL_6;
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v14, v13);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v71, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v71, v17);
  v73 = 0LL;
  v75 = 0;
  P = 0LL;
  v79 = 0;
  if ( !a4 )
  {
    hAsyncEvent = a1->hAsyncEvent;
    if ( hAsyncEvent )
    {
      v83 = 0LL;
      v19 = ObReferenceObjectByHandle(hAsyncEvent, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &v83, 0LL);
      v7 = (struct _KEVENT *)v83;
      v15 = v19;
      if ( v19 < 0 )
      {
        v23 = WdLogNewEntry5_WdWarning(v21, v20, v22);
        *(_QWORD *)(v23 + 24) = a1->hAsyncEvent;
        *(_QWORD *)(v23 + 32) = v15;
        WdLogEvent5_WdWarning(v23);
LABEL_109:
        if ( P != v78 && P )
          ExFreePoolWithTag(P, 0);
        v31 = v73;
        P = 0LL;
        v79 = 0;
        if ( v73 == v74 || !v73 )
          goto LABEL_115;
        goto LABEL_114;
      }
    }
    else
    {
      v89[0] = 48LL;
      v89[3] = 512LL;
      v89[1] = 0LL;
      v89[2] = 0LL;
      v90 = 0LL;
      v24 = ObCreateObject(0LL, ExEventObjectType, v89, 0LL, 0LL, 24, 0, 0, &Event);
      v15 = v24;
      if ( v24 < 0 )
      {
        v28 = WdLogNewEntry5_WdWarning(v26, v25, v27);
        *(_QWORD *)(v28 + 24) = v15;
        WdLogEvent5_WdWarning(v28);
        if ( P != v78 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v79 = 0;
        if ( v73 != v74 && v73 )
          ExFreePoolWithTag(v73, 0);
        v73 = 0LL;
        v75 = 0;
        if ( v72 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v71);
LABEL_6:
        COREACCESS::~COREACCESS((COREACCESS *)v97);
        COREACCESS::~COREACCESS((COREACCESS *)v92);
        DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v80);
        return (unsigned int)v15;
      }
      KeInitializeEvent(Event, SynchronizationEvent, 0);
      v7 = Event;
    }
    PoolWithTag = v73;
  }
  ObjectCount = a1->ObjectCount;
  if ( ObjectCount <= 4 )
  {
    PoolWithTag = v74;
    v73 = v74;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / ObjectCount < 8 )
    {
LABEL_34:
      LODWORD(v15) = -1073741801;
      if ( P != v78 && P )
      {
        ExFreePoolWithTag(P, 0);
        PoolWithTag = v73;
      }
      P = 0LL;
      v79 = 0;
      if ( PoolWithTag == v74 || !PoolWithTag )
        goto LABEL_115;
      v31 = PoolWithTag;
LABEL_114:
      ExFreePoolWithTag(v31, 0);
LABEL_115:
      v75 = 0;
      v73 = 0LL;
      if ( v72 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v71);
      COREACCESS::~COREACCESS((COREACCESS *)v97);
      COREACCESS::~COREACCESS((COREACCESS *)v92);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v80);
LABEL_118:
      if ( v7 )
      {
        KeSetEvent(v7, 0, 0);
        ObfDereferenceObject(v7);
      }
      return (unsigned int)v15;
    }
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * ObjectCount, 0x4B677844u);
    v73 = PoolWithTag;
  }
  v75 = ObjectCount;
  if ( PoolWithTag && ObjectCount )
  {
    memset(PoolWithTag, 0, 8LL * ObjectCount);
    PoolWithTag = v73;
  }
  if ( !PoolWithTag )
    goto LABEL_34;
  if ( (*((_BYTE *)a2 + 347) & 0x30) != 0 && a1->ObjectCount == 1 && !*a1->ObjectHandleArray )
  {
    v30 = *((_QWORD *)a3 + 2);
    v88 = 0LL;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, _BYTE *))(*(_QWORD *)(*(_QWORD *)(v30 + 640) + 8LL) + 984LL))(
      *((_QWORD *)a3 + 95),
      0LL,
      &v88,
      PoolWithTag);
    goto LABEL_69;
  }
  v32 = (_QWORD *)PagedPoolZeroedArray<DXGSYNCOBJECT *,4>::AllocateElements(&P, a1->ObjectCount);
  if ( !v32 )
  {
    LODWORD(v15) = -1073741801;
    goto LABEL_109;
  }
  v33 = a1->ObjectCount;
  v34 = 0LL;
  if ( (_DWORD)v33 )
  {
    v35 = (struct DXGPROCESS *)((char *)v81 + 208);
    v84 = (struct DXGPROCESS *)((char *)v81 + 208);
    while ( 1 )
    {
      v36 = a1->ObjectHandleArray[v34];
      DXGPUSHLOCK::AcquireShared(v35);
      v37 = (v36 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v37 >= *((_DWORD *)v81 + 64) )
        goto LABEL_50;
      v38 = *((_QWORD *)v81 + 30);
      v39 = *(_DWORD *)(v38 + 16 * v37 + 8);
      if ( ((v36 >> 25) & 0x60) != (*(_BYTE *)(v38 + 16 * v37 + 8) & 0x60) || (v39 & 0x2000) != 0 || (v39 & 0x1F) == 0 )
        goto LABEL_50;
      v40 = v39 & 0x1F;
      if ( (_BYTE)v40 != 11 )
        break;
      v15 = *(_QWORD *)(v38 + 16LL * (unsigned int)v37);
LABEL_51:
      ExReleasePushLockSharedEx(v84, 0LL);
      KeLeaveCriticalRegion();
      if ( !v15 )
      {
        v52 = (_QWORD *)WdLogNewEntry5_WdError(v43, v42);
        LODWORD(v15) = -1073741811;
        v52[3] = v81;
        v53 = a1->ObjectHandleArray[v34];
        v52[5] = (unsigned int)v34;
        v52[4] = v53;
        v52[6] = -1073741811LL;
        WdLogEvent5_WdError(v52);
        goto LABEL_109;
      }
      if ( (*(_DWORD *)(v15 + 72) & 0x20) != 0 )
      {
        v51 = WdLogNewEntry5_WdError(v43, v42);
        *(_QWORD *)(v51 + 24) = a1->ObjectHandleArray[v34];
        WdLogEvent5_WdError(v51);
        LODWORD(v15) = -1073741790;
        goto LABEL_109;
      }
      if ( *(struct DXGDEVICE **)(v15 + 16) != a3 )
      {
        v50 = (_QWORD *)WdLogNewEntry5_WdError(v43, v42);
        v50[3] = a1->ObjectHandleArray[v34];
        v50[4] = *(_QWORD *)(v15 + 16);
        v50[5] = a3;
        WdLogEvent5_WdError(v50);
        LODWORD(v15) = -1073741811;
        goto LABEL_109;
      }
      v35 = v84;
      v32[v34] = *(_QWORD *)(v15 + 32);
      v34 = (unsigned int)(v34 + 1);
      v33 = a1->ObjectCount;
      if ( (unsigned int)v34 >= (unsigned int)v33 )
        goto LABEL_55;
    }
    v41 = WdLogNewEntry5_WdError(v40, 2LL * (unsigned int)v37);
    *(_QWORD *)(v41 + 24) = 267LL;
    WdLogEvent5_WdError(v41);
LABEL_50:
    v15 = 0LL;
    goto LABEL_51;
  }
LABEL_55:
  Base[0] = 0LL;
  LODWORD(NumOfElements) = 0;
  PagedPoolZeroedArray<DXGSYNCOBJECT *,2>::AllocateElements(Base, v33);
  v87 = 1;
  if ( !Base[0] )
  {
    LODWORD(v15) = -1073741801;
LABEL_108:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
      (__int64)Base,
      v44);
    goto LABEL_109;
  }
  memmove(Base[0], v32, 8LL * (unsigned int)NumOfElements);
  qsort(Base[0], (unsigned int)NumOfElements, 8uLL, (int (__cdecl *)(const void *, const void *))DxgkComparePointers);
  for ( i = 0LL; i < (unsigned int)NumOfElements; DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(*((_QWORD *)Base[0] + i++)
                                                                                       + 32LL)) )
    ;
  v47 = 0;
  v87 = 0;
  if ( a1->ObjectCount )
  {
    while ( 1 )
    {
      v15 = v47;
      v48 = v32[v47];
      v49 = (*(_DWORD *)(v48 + 196) & 4) != 0
          ? *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject((DXGSYNCOBJECTCA *)v48, *((struct ADAPTER_RENDER **)a3 + 2))
            + 4)
          : *(_QWORD *)(v48 + 328);
      *(_QWORD *)&PoolWithTag[8 * v15] = v49;
      if ( !v49 )
        break;
      if ( ++v47 >= a1->ObjectCount )
        goto LABEL_68;
    }
    v59 = WdLogNewEntry5_WdError(v48, v45);
    *(_QWORD *)(v59 + 24) = a1->ObjectHandleArray[v15];
    WdLogEvent5_WdError(v59);
    LODWORD(v15) = -1073741811;
    goto LABEL_108;
  }
LABEL_68:
  DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
    (__int64)Base,
    v45);
LABEL_69:
  if ( Event )
    ObfReferenceObject(Event);
  LOBYTE(HandleInformation) = v82 == 0LL;
  LOBYTE(Object) = *(_BYTE *)&a1->Flags.0 & 1;
  LODWORD(v15) = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, const UINT64 *, struct _KEVENT *, int, int, _QWORD, void *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 616LL) + 8LL) + 664LL))(
                   a1->ObjectCount,
                   PoolWithTag,
                   a1->FenceValueArray,
                   v7,
                   Object,
                   HandleInformation,
                   *((_QWORD *)a3 + 96),
                   v82);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v70) = a1->Flags.0;
    LODWORD(Objecta) = a1->ObjectCount;
    McTemplateK0pqPR1XR1pq_EtwWriteTransfer(
      v55,
      v54,
      v56,
      a3,
      Objecta,
      PoolWithTag,
      a1->FenceValueArray,
      a1->hAsyncEvent,
      v70);
  }
  if ( P != v78 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v79 = 0;
  if ( v73 != v74 && v73 )
    ExFreePoolWithTag(v73, 0);
  v73 = 0LL;
  v75 = 0;
  if ( v72 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v71);
  v57 = v99;
  if ( v99 )
  {
    if ( v100 )
    {
      COREACCESS::Release((COREACCESS *)v97);
      v57 = v99;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v57 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v57 + 2), v57);
  }
  v58 = v94;
  if ( v94 )
  {
    if ( v95 )
    {
      COREACCESS::Release((COREACCESS *)v92);
      v58 = v94;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v58 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v58 + 2), v58);
  }
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v80);
  if ( (int)v15 < 0 )
  {
    if ( Event )
      ObfDereferenceObject(Event);
    goto LABEL_118;
  }
  if ( v7 )
  {
    v60 = Event;
    if ( v7 == Event )
    {
      do
      {
        LODWORD(v15) = KeWaitForSingleObject(v7, Executive, 0, 1u, 0LL);
        if ( PsIsThreadTerminating(KeGetCurrentThread()) )
        {
          v65 = WdLogNewEntry5_WdWarning(v62, v61, v63);
          *(_QWORD *)(v65 + 24) = 4998LL;
          WdLogEvent5_WdWarning(v65);
          LODWORD(v15) = -1073741130;
          goto LABEL_118;
        }
      }
      while ( (_DWORD)v15 == 257 );
      if ( (int)v15 >= 0 )
        goto LABEL_103;
      v64 = WdLogNewEntry5_WdAssertion(v62, v61);
      *(_QWORD *)(v64 + 24) = 5007LL;
      WdLogEvent5_WdAssertion(v64);
      goto LABEL_118;
    }
  }
  else
  {
LABEL_103:
    v60 = Event;
  }
  if ( v60 )
    ObfDereferenceObject(v60);
  return 0LL;
}
