/*
 * XREFs of ?WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAX@Z @ 0x1C01209B4
 * Callers:
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX@Z @ 0x1C0121974 (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000B19C (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CE00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000E890 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000EB44 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EB8C (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@XZ @ 0x1C000EBC8 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000EC34 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C000EC88 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000EE14 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000EE8C (--1COREACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C001AF14 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C0047388 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     McTemplateK0pqPR1XR1pq_EtwWriteTransfer @ 0x1C0047730 (McTemplateK0pqPR1XR1pq_EtwWriteTransfer.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$03@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z @ 0x1C0121918 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$03@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$01@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z @ 0x1C014CFA4 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$01@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C026494C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
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
  unsigned __int64 v18; // rdx
  HANDLE hAsyncEvent; // rcx
  NTSTATUS v20; // eax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rdx
  UINT ObjectCount; // r15d
  __int64 v31; // rax
  PVOID v32; // rcx
  _QWORD *v33; // r15
  __int64 v34; // rdx
  __int64 v35; // r13
  DXGPUSHLOCK *v36; // rcx
  D3DKMT_HANDLE v37; // ebx
  __int64 v38; // rax
  __int64 v39; // r8
  int v40; // ecx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rdx
  unsigned __int64 i; // rbx
  unsigned int v48; // r9d
  __int64 v49; // rcx
  __int64 v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  struct DXGADAPTER *v58; // rcx
  struct DXGADAPTER *v59; // rcx
  __int64 v60; // rax
  PRKEVENT v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // rax
  __int64 v66; // rax
  int Object; // [rsp+20h] [rbp-E0h]
  PVOID *Objecta; // [rsp+20h] [rbp-E0h]
  int HandleInformation; // [rsp+28h] [rbp-D8h]
  __int64 v71; // [rsp+40h] [rbp-C0h]
  _BYTE v72[8]; // [rsp+50h] [rbp-B0h] BYREF
  char v73; // [rsp+58h] [rbp-A8h]
  PVOID v74; // [rsp+60h] [rbp-A0h]
  _BYTE v75[32]; // [rsp+68h] [rbp-98h] BYREF
  UINT v76; // [rsp+88h] [rbp-78h]
  PRKEVENT Event; // [rsp+90h] [rbp-70h] BYREF
  PVOID P; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v79[32]; // [rsp+A0h] [rbp-60h] BYREF
  int v80; // [rsp+C0h] [rbp-40h]
  _BYTE v81[16]; // [rsp+C8h] [rbp-38h] BYREF
  struct DXGPROCESS *v82; // [rsp+D8h] [rbp-28h]
  void *v83; // [rsp+E0h] [rbp-20h]
  PVOID v84; // [rsp+E8h] [rbp-18h] BYREF
  DXGPUSHLOCK *v85; // [rsp+F0h] [rbp-10h]
  void *Base[3]; // [rsp+100h] [rbp+0h] BYREF
  size_t NumOfElements; // [rsp+118h] [rbp+18h]
  char v88; // [rsp+120h] [rbp+20h]
  __int64 v89; // [rsp+128h] [rbp+28h] BYREF
  _QWORD v90[4]; // [rsp+130h] [rbp+30h] BYREF
  __int128 v91; // [rsp+150h] [rbp+50h]
  _BYTE v92[8]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v93[8]; // [rsp+168h] [rbp+68h] BYREF
  __int64 v94; // [rsp+170h] [rbp+70h]
  struct DXGADAPTER *v95; // [rsp+178h] [rbp+78h]
  char v96; // [rsp+180h] [rbp+80h]
  __int64 v97; // [rsp+188h] [rbp+88h]
  _BYTE v98[8]; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v99; // [rsp+1B0h] [rbp+B0h]
  struct DXGADAPTER *v100; // [rsp+1B8h] [rbp+B8h]
  char v101; // [rsp+1C0h] [rbp+C0h]
  __int64 v102; // [rsp+1C8h] [rbp+C8h]
  struct DXGDEVICE *v103; // [rsp+1E8h] [rbp+E8h]
  char v104; // [rsp+1F0h] [rbp+F0h]

  v82 = a2;
  v83 = a4;
  PoolWithTag = 0LL;
  Event = 0LL;
  v7 = 0LL;
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v81, a3);
  v10 = *((_QWORD *)a3 + 2);
  v11 = *(volatile signed __int64 **)(v10 + 16);
  v95 = (struct DXGADAPTER *)v11;
  v96 = 0;
  v97 = 0LL;
  if ( v11 )
  {
    _InterlockedIncrement64(v11 + 3);
    v10 = *((_QWORD *)a3 + 2);
    v94 = -1LL;
  }
  v12 = *(volatile signed __int64 **)(v10 + 16);
  v100 = (struct DXGADAPTER *)v12;
  v101 = 0;
  v102 = 0LL;
  if ( v12 )
  {
    _InterlockedIncrement64(v12 + 3);
    v99 = -1LL;
  }
  v103 = a3;
  v104 = 0;
  LODWORD(v15) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v92, 0LL);
  if ( (int)v15 < 0 )
    goto LABEL_6;
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v14, v13);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v72, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v72, v17);
  v74 = 0LL;
  v76 = 0;
  P = 0LL;
  v80 = 0;
  if ( !a4 )
  {
    hAsyncEvent = a1->hAsyncEvent;
    if ( hAsyncEvent )
    {
      v84 = 0LL;
      v20 = ObReferenceObjectByHandle(hAsyncEvent, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &v84, 0LL);
      v7 = (struct _KEVENT *)v84;
      v15 = v20;
      if ( v20 < 0 )
      {
        v23 = WdLogNewEntry5_WdWarning(v21, v18, v22);
        *(_QWORD *)(v23 + 24) = a1->hAsyncEvent;
        *(_QWORD *)(v23 + 32) = v15;
        WdLogEvent5_WdWarning(v23);
LABEL_109:
        if ( P != v79 && P )
          ExFreePoolWithTag(P, 0);
        v32 = v74;
        P = 0LL;
        v80 = 0;
        if ( v74 == v75 || !v74 )
          goto LABEL_115;
        goto LABEL_114;
      }
    }
    else
    {
      v90[0] = 48LL;
      v90[3] = 512LL;
      v90[1] = 0LL;
      v90[2] = 0LL;
      v91 = 0LL;
      v24 = ObCreateObject(0LL, ExEventObjectType, v90, 0LL, 0LL, 24, 0, 0, &Event);
      v15 = v24;
      if ( v24 < 0 )
      {
        v28 = WdLogNewEntry5_WdWarning(v26, v25, v27);
        *(_QWORD *)(v28 + 24) = v15;
        WdLogEvent5_WdWarning(v28);
        if ( P != v79 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v80 = 0;
        if ( v74 != v75 && v74 )
          ExFreePoolWithTag(v74, 0);
        v74 = 0LL;
        v76 = 0;
        if ( v73 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v72, v29);
LABEL_6:
        COREACCESS::~COREACCESS((COREACCESS *)v98);
        COREACCESS::~COREACCESS((COREACCESS *)v93);
        DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v81);
        return (unsigned int)v15;
      }
      KeInitializeEvent(Event, SynchronizationEvent, 0);
      v7 = Event;
    }
    PoolWithTag = v74;
  }
  ObjectCount = a1->ObjectCount;
  if ( ObjectCount <= 4 )
  {
    PoolWithTag = v75;
    v74 = v75;
  }
  else
  {
    v18 = 0xFFFFFFFFFFFFFFFFuLL % ObjectCount;
    if ( 0xFFFFFFFFFFFFFFFFuLL / ObjectCount < 8 )
    {
LABEL_34:
      LODWORD(v15) = -1073741801;
      if ( P != v79 && P )
      {
        ExFreePoolWithTag(P, 0);
        PoolWithTag = v74;
      }
      P = 0LL;
      v80 = 0;
      if ( PoolWithTag == v75 || !PoolWithTag )
        goto LABEL_115;
      v32 = PoolWithTag;
LABEL_114:
      ExFreePoolWithTag(v32, 0);
LABEL_115:
      v76 = 0;
      v74 = 0LL;
      if ( v73 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v72, v18);
      COREACCESS::~COREACCESS((COREACCESS *)v98);
      COREACCESS::~COREACCESS((COREACCESS *)v93);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v81);
LABEL_118:
      if ( v7 )
      {
        KeSetEvent(v7, 0, 0);
        ObfDereferenceObject(v7);
      }
      return (unsigned int)v15;
    }
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * ObjectCount, 0x4B677844u);
    v74 = PoolWithTag;
  }
  v76 = ObjectCount;
  if ( PoolWithTag && ObjectCount )
  {
    memset(PoolWithTag, 0, 8LL * ObjectCount);
    PoolWithTag = v74;
  }
  if ( !PoolWithTag )
    goto LABEL_34;
  if ( (*((_BYTE *)a2 + 347) & 0x30) != 0 && a1->ObjectCount == 1 && !*a1->ObjectHandleArray )
  {
    v31 = *((_QWORD *)a3 + 2);
    v89 = 0LL;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, _BYTE *))(*(_QWORD *)(*(_QWORD *)(v31 + 640) + 8LL) + 984LL))(
      *((_QWORD *)a3 + 95),
      0LL,
      &v89,
      PoolWithTag);
    goto LABEL_69;
  }
  v33 = (_QWORD *)PagedPoolZeroedArray<DXGSYNCOBJECT *,4>::AllocateElements(&P, a1->ObjectCount);
  if ( !v33 )
  {
    LODWORD(v15) = -1073741801;
    goto LABEL_109;
  }
  v34 = a1->ObjectCount;
  v35 = 0LL;
  if ( (_DWORD)v34 )
  {
    v36 = (struct DXGPROCESS *)((char *)v82 + 208);
    v85 = (struct DXGPROCESS *)((char *)v82 + 208);
    while ( 1 )
    {
      v37 = a1->ObjectHandleArray[v35];
      DXGPUSHLOCK::AcquireShared(v36);
      v38 = (v37 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v38 >= *((_DWORD *)v82 + 64) )
        goto LABEL_50;
      v39 = *((_QWORD *)v82 + 30);
      v40 = *(_DWORD *)(v39 + 16 * v38 + 8);
      if ( ((v37 >> 25) & 0x60) != (*(_BYTE *)(v39 + 16 * v38 + 8) & 0x60) || (v40 & 0x2000) != 0 || (v40 & 0x1F) == 0 )
        goto LABEL_50;
      v41 = v40 & 0x1F;
      if ( (_BYTE)v41 != 11 )
        break;
      v15 = *(_QWORD *)(v39 + 16LL * (unsigned int)v38);
LABEL_51:
      ExReleasePushLockSharedEx(v85, 0LL);
      KeLeaveCriticalRegion();
      if ( !v15 )
      {
        v53 = (_QWORD *)WdLogNewEntry5_WdError(v44, v43);
        LODWORD(v15) = -1073741811;
        v53[3] = v82;
        v54 = a1->ObjectHandleArray[v35];
        v53[5] = (unsigned int)v35;
        v53[4] = v54;
        v53[6] = -1073741811LL;
        WdLogEvent5_WdError(v53);
        goto LABEL_109;
      }
      if ( (*(_DWORD *)(v15 + 72) & 0x20) != 0 )
      {
        v52 = WdLogNewEntry5_WdError(v44, v43);
        *(_QWORD *)(v52 + 24) = a1->ObjectHandleArray[v35];
        WdLogEvent5_WdError(v52);
        LODWORD(v15) = -1073741790;
        goto LABEL_109;
      }
      if ( *(struct DXGDEVICE **)(v15 + 16) != a3 )
      {
        v51 = (_QWORD *)WdLogNewEntry5_WdError(v44, v43);
        v51[3] = a1->ObjectHandleArray[v35];
        v51[4] = *(_QWORD *)(v15 + 16);
        v51[5] = a3;
        WdLogEvent5_WdError(v51);
        LODWORD(v15) = -1073741811;
        goto LABEL_109;
      }
      v36 = v85;
      v33[v35] = *(_QWORD *)(v15 + 32);
      v35 = (unsigned int)(v35 + 1);
      v34 = a1->ObjectCount;
      if ( (unsigned int)v35 >= (unsigned int)v34 )
        goto LABEL_55;
    }
    v42 = WdLogNewEntry5_WdError(v41, 2LL * (unsigned int)v38);
    *(_QWORD *)(v42 + 24) = 267LL;
    WdLogEvent5_WdError(v42);
LABEL_50:
    v15 = 0LL;
    goto LABEL_51;
  }
LABEL_55:
  Base[0] = 0LL;
  LODWORD(NumOfElements) = 0;
  PagedPoolZeroedArray<DXGSYNCOBJECT *,2>::AllocateElements(Base, v34);
  v88 = 1;
  if ( !Base[0] )
  {
    LODWORD(v15) = -1073741801;
LABEL_108:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
      (__int64)Base,
      v45);
    goto LABEL_109;
  }
  memmove(Base[0], v33, 8LL * (unsigned int)NumOfElements);
  qsort(Base[0], (unsigned int)NumOfElements, 8uLL, (int (__cdecl *)(const void *, const void *))DxgkComparePointers);
  for ( i = 0LL; i < (unsigned int)NumOfElements; DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(*((_QWORD *)Base[0] + i++)
                                                                                       + 32LL)) )
    ;
  v48 = 0;
  v88 = 0;
  if ( a1->ObjectCount )
  {
    while ( 1 )
    {
      v15 = v48;
      v49 = v33[v48];
      v50 = (*(_DWORD *)(v49 + 196) & 4) != 0
          ? *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject((DXGSYNCOBJECTCA *)v49, *((struct ADAPTER_RENDER **)a3 + 2))
            + 4)
          : *(_QWORD *)(v49 + 328);
      *(_QWORD *)&PoolWithTag[8 * v15] = v50;
      if ( !v50 )
        break;
      if ( ++v48 >= a1->ObjectCount )
        goto LABEL_68;
    }
    v60 = WdLogNewEntry5_WdError(v49, v46);
    *(_QWORD *)(v60 + 24) = a1->ObjectHandleArray[v15];
    WdLogEvent5_WdError(v60);
    LODWORD(v15) = -1073741811;
    goto LABEL_108;
  }
LABEL_68:
  DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
    (__int64)Base,
    v46);
LABEL_69:
  if ( Event )
    ObfReferenceObject(Event);
  LOBYTE(HandleInformation) = v83 == 0LL;
  LOBYTE(Object) = *(_BYTE *)&a1->Flags.0 & 1;
  LODWORD(v15) = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, const UINT64 *, struct _KEVENT *, int, int, _QWORD, void *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 616LL) + 8LL) + 664LL))(
                   a1->ObjectCount,
                   PoolWithTag,
                   a1->FenceValueArray,
                   v7,
                   Object,
                   HandleInformation,
                   *((_QWORD *)a3 + 96),
                   v83);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v71) = a1->Flags.0;
    LODWORD(Objecta) = a1->ObjectCount;
    McTemplateK0pqPR1XR1pq_EtwWriteTransfer(
      v56,
      v55,
      v57,
      a3,
      Objecta,
      PoolWithTag,
      a1->FenceValueArray,
      a1->hAsyncEvent,
      v71);
  }
  if ( P != v79 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v80 = 0;
  if ( v74 != v75 && v74 )
    ExFreePoolWithTag(v74, 0);
  v74 = 0LL;
  v76 = 0;
  if ( v73 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v72, v55);
  v58 = v100;
  if ( v100 )
  {
    if ( v101 )
    {
      COREACCESS::Release((COREACCESS *)v98);
      v58 = v100;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v58 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v58 + 2), v58);
  }
  v59 = v95;
  if ( v95 )
  {
    if ( v96 )
    {
      COREACCESS::Release((COREACCESS *)v93);
      v59 = v95;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v59 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v59 + 2), v59);
  }
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v81);
  if ( (int)v15 < 0 )
  {
    if ( Event )
      ObfDereferenceObject(Event);
    goto LABEL_118;
  }
  if ( v7 )
  {
    v61 = Event;
    if ( v7 == Event )
    {
      do
      {
        LODWORD(v15) = KeWaitForSingleObject(v7, Executive, 0, 1u, 0LL);
        if ( PsIsThreadTerminating(KeGetCurrentThread()) )
        {
          v66 = WdLogNewEntry5_WdWarning(v63, v62, v64);
          *(_QWORD *)(v66 + 24) = 4859LL;
          WdLogEvent5_WdWarning(v66);
          LODWORD(v15) = -1073741130;
          goto LABEL_118;
        }
      }
      while ( (_DWORD)v15 == 257 );
      if ( (int)v15 >= 0 )
        goto LABEL_103;
      v65 = WdLogNewEntry5_WdAssertion(v63, v62);
      *(_QWORD *)(v65 + 24) = 4868LL;
      WdLogEvent5_WdAssertion(v65);
      goto LABEL_118;
    }
  }
  else
  {
LABEL_103:
    v61 = Event;
  }
  if ( v61 )
    ObfDereferenceObject(v61);
  return 0LL;
}
