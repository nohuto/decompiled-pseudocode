/*
 * XREFs of ?WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAX@Z @ 0x1C01CD9C0
 * Callers:
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX1@Z @ 0x1C01CD280 (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C0009824 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009A8C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000BB70 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BC90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E350 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@XZ @ 0x1C002C640 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x1C004B9B0 (-AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C0059A28 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     McTemplateK0pqPR1XR1pq_EtwWriteTransfer @ 0x1C0059DD0 (McTemplateK0pqPR1XR1pq_EtwWriteTransfer.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C016E850 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C016ED94 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C017EB60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C017ED90 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C03099FC (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall WaitForSynchronizationObjectFromCpu(
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *a1,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        void *a4)
{
  _BYTE *v4; // rdi
  struct _KEVENT *v8; // rbx
  __int64 v9; // rcx
  volatile signed __int64 *v10; // rax
  volatile signed __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v15; // rbx
  __int64 v16; // r9
  _BYTE *v17; // r8
  int v18; // eax
  HANDLE hAsyncEvent; // rcx
  int v20; // eax
  NTSTATUS v21; // ebx
  unsigned __int64 ObjectCount; // rbx
  _BYTE *v23; // r12
  UINT v24; // ebx
  UINT v25; // ebx
  __int64 v26; // r12
  DXGPUSHLOCK *v27; // r13
  const D3DKMT_HANDLE *ObjectHandleArray; // rax
  D3DKMT_HANDLE v29; // ebx
  __int64 v30; // rax
  __int64 v31; // r8
  int v32; // ecx
  __int64 v33; // rbx
  struct DXGDEVICE *v34; // r8
  _BYTE *v35; // rcx
  __int64 v36; // r8
  int v37; // r10d
  unsigned __int64 i; // rbx
  unsigned int v39; // r9d
  __int64 v40; // rbx
  __int64 v41; // rcx
  __int64 v42; // rax
  _QWORD *v43; // rcx
  unsigned __int64 v44; // rbx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  struct DXGADAPTER *v48; // rcx
  struct DXGADAPTER *v49; // rcx
  struct _KEVENT *v50; // r12
  PRKEVENT v51; // rcx
  __int64 v53; // rcx
  __int64 v54; // r8
  PVOID v55; // r12
  NTSTATUS v56; // eax
  __int64 v57; // rax
  __int64 v58; // rdi
  PVOID v59; // rcx
  __int64 v60; // rbx
  __int64 v61; // rdi
  __int64 v62; // rsi
  int Timeout; // [rsp+20h] [rbp-E0h]
  PLARGE_INTEGER Timeouta; // [rsp+20h] [rbp-E0h]
  int HandleInformation; // [rsp+28h] [rbp-D8h]
  __int64 v66; // [rsp+40h] [rbp-C0h]
  struct DXGGLOBAL *v67; // [rsp+50h] [rbp-B0h] BYREF
  char v68; // [rsp+58h] [rbp-A8h]
  PVOID Object; // [rsp+60h] [rbp-A0h]
  PVOID v70; // [rsp+68h] [rbp-98h]
  _BYTE v71[32]; // [rsp+70h] [rbp-90h] BYREF
  int v72; // [rsp+90h] [rbp-70h]
  PVOID P; // [rsp+98h] [rbp-68h]
  _BYTE Src[32]; // [rsp+A0h] [rbp-60h] BYREF
  UINT v75; // [rsp+C0h] [rbp-40h]
  PRKEVENT Event; // [rsp+C8h] [rbp-38h] BYREF
  struct DXGDEVICE *v77; // [rsp+D0h] [rbp-30h] BYREF
  char v78; // [rsp+D8h] [rbp-28h]
  struct DXGPROCESS *v79; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE *v80; // [rsp+E8h] [rbp-18h]
  void *Base; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v82[16]; // [rsp+F8h] [rbp-8h] BYREF
  size_t NumOfElements; // [rsp+108h] [rbp+8h]
  __int16 v84; // [rsp+110h] [rbp+10h]
  __int64 v85; // [rsp+118h] [rbp+18h]
  void *v86; // [rsp+120h] [rbp+20h]
  PVOID v87; // [rsp+128h] [rbp+28h] BYREF
  PVOID Pool2; // [rsp+130h] [rbp+30h]
  _QWORD v89[4]; // [rsp+138h] [rbp+38h] BYREF
  __int128 v90; // [rsp+158h] [rbp+58h]
  char v91[8]; // [rsp+178h] [rbp+78h] BYREF
  __int64 v92; // [rsp+180h] [rbp+80h]
  struct DXGADAPTER *v93; // [rsp+188h] [rbp+88h]
  char v94; // [rsp+190h] [rbp+90h]
  char *v95; // [rsp+198h] [rbp+98h]
  char v96[8]; // [rsp+1B8h] [rbp+B8h] BYREF
  __int64 v97; // [rsp+1C0h] [rbp+C0h]
  struct DXGADAPTER *v98; // [rsp+1C8h] [rbp+C8h]
  char v99; // [rsp+1D0h] [rbp+D0h]
  __int64 v100; // [rsp+1D8h] [rbp+D8h]
  struct DXGDEVICE *v101; // [rsp+1F8h] [rbp+F8h]
  char v102; // [rsp+200h] [rbp+100h]

  v4 = 0LL;
  v86 = a4;
  v79 = a2;
  Event = 0LL;
  Object = 0LL;
  Pool2 = 0LL;
  v77 = a3;
  v78 = 0;
  if ( a3 )
  {
    v8 = (struct _KEVENT *)*((_QWORD *)a3 + 2);
    if ( !KeReadStateEvent(v8 + 4) )
      KeWaitForSingleObject(&v8[4], Executive, 0, 0, 0LL);
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceSharedLite(*((PERESOURCE *)a3 + 17), 0) )
    {
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)a3 + 2) + 16LL));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v53, (const EVENT_DESCRIPTOR *)"g", v54, 40);
      ExAcquireResourceSharedLite(*((PERESOURCE *)a3 + 17), 1u);
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)a3 + 2) + 16LL));
    }
    v78 = 1;
  }
  v9 = *((_QWORD *)a3 + 2);
  v10 = *(volatile signed __int64 **)(v9 + 16);
  v93 = (struct DXGADAPTER *)v10;
  v94 = 0;
  v95 = 0LL;
  if ( v10 )
  {
    _InterlockedIncrement64(v10 + 3);
    v9 = *((_QWORD *)a3 + 2);
    v92 = -1LL;
  }
  v11 = *(volatile signed __int64 **)(v9 + 16);
  v98 = (struct DXGADAPTER *)v11;
  v99 = 0;
  v100 = 0LL;
  if ( v11 )
  {
    _InterlockedIncrement64(v11 + 3);
    v97 = -1LL;
  }
  v101 = a3;
  v102 = 0;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v93 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v93 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v12, (const EVENT_DESCRIPTOR *)"g", v13, 72);
      KeWaitForSingleObject((char *)v93 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v93, 0LL);
  }
  v95 = 0LL;
  v94 = 1;
  if ( *((_DWORD *)v101 + 144) != 1 )
  {
    COREACCESS::Release((COREACCESS *)v91);
    if ( v102 )
      COREACCESS::Release((COREACCESS *)v96);
    v21 = -1073741130;
    COREACCESS::~COREACCESS((COREACCESS *)v96);
    COREACCESS::~COREACCESS((COREACCESS *)v91);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v77);
    return (unsigned int)v21;
  }
  Global = DXGGLOBAL_GetGlobal();
  v67 = Global;
  v68 = 0;
  if ( !Global )
  {
    WdLogSingleEntry1(1LL, 2725LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pGlobal != NULL", 2725LL, 0LL, 0LL, 0LL, 0LL);
    Global = 0LL;
  }
  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 79)) )
  {
    WdLogSingleEntry1(1LL, 2730LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!m_pGlobal->IsSyncObjectLockSharedOwner() || bAllowRecursive",
      2730LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v15 = v67;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(*((PERESOURCE *)v15 + 79), 1u);
  v17 = 0LL;
  v68 = 1;
  v70 = 0LL;
  v72 = 0;
  P = 0LL;
  v75 = 0;
  if ( !v86 )
  {
    v18 = *((_DWORD *)a2 + 106);
    if ( (v18 & 0x10) == 0 || (v18 & 0x100) != 0 )
    {
      hAsyncEvent = a1->hAsyncEvent;
      if ( hAsyncEvent )
      {
        v87 = 0LL;
        v56 = ObReferenceObjectByHandle(hAsyncEvent, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &v87, 0LL);
        v50 = (struct _KEVENT *)v87;
        v21 = v56;
        Object = v87;
        if ( v56 < 0 )
        {
          WdLogSingleEntry2(3LL, a1->hAsyncEvent, v56);
          if ( P != Src && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v75 = 0;
          if ( v70 != v71 && v70 )
            ExFreePoolWithTag(v70, 0);
          v70 = 0LL;
          v72 = 0;
          if ( v68 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v67);
          COREACCESS::~COREACCESS((COREACCESS *)v96);
          COREACCESS::~COREACCESS((COREACCESS *)v91);
          DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v77);
LABEL_217:
          if ( !v50 )
            goto LABEL_219;
          goto LABEL_218;
        }
        goto LABEL_23;
      }
    }
    else if ( a1->hAsyncEvent )
    {
      Pool2 = (PVOID)ExAllocatePool2(64LL, 40LL, 1265072196LL, v16);
      v55 = Pool2;
      if ( !Pool2 )
      {
        WdLogSingleEntry1(6LL, 4827LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Failed to allocate memory for DXG_SIGNAL_GUEST_CPU_EVENT",
          4827LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v21 = -1073741801;
        if ( P != Src && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v75 = 0;
        if ( v70 != v71 && v70 )
          ExFreePoolWithTag(v70, 0);
        v70 = 0LL;
        v72 = 0;
        if ( !v68 )
          goto LABEL_120;
        goto LABEL_119;
      }
      *((_QWORD *)Pool2 + 1) = a1->hAsyncEvent;
      v86 = v55;
      *((_BYTE *)v55 + 16) = 1;
      *((_BYTE *)v55 + 19) = 1;
      DXG_SIGNAL_GUEST_CPU_EVENT::AcquireReference((struct DXG_SIGNAL_GUEST_CPU_EVENT *)v55);
LABEL_23:
      v17 = v70;
      v4 = P;
      goto LABEL_24;
    }
    v89[0] = 48LL;
    v89[3] = 512LL;
    v89[1] = 0LL;
    v89[2] = 0LL;
    v90 = 0LL;
    v20 = ObCreateObject(0LL, ExEventObjectType, v89, 0LL, 0LL, 24, 0, 0, &Event);
    v21 = v20;
    if ( v20 < 0 )
    {
      WdLogSingleEntry1(3LL, v20);
      if ( P != Src && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v75 = 0;
      if ( v70 != v71 && v70 )
        ExFreePoolWithTag(v70, 0);
      v70 = 0LL;
      v72 = 0;
      if ( !v68 )
        goto LABEL_120;
LABEL_119:
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v67);
LABEL_120:
      COREACCESS::~COREACCESS((COREACCESS *)v96);
      COREACCESS::~COREACCESS((COREACCESS *)v91);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v77);
      return (unsigned int)v21;
    }
    KeInitializeEvent(Event, SynchronizationEvent, 0);
    Object = Event;
    goto LABEL_23;
  }
LABEL_24:
  ObjectCount = a1->ObjectCount;
  if ( (unsigned int)ObjectCount > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / ObjectCount < 8 )
      goto LABEL_143;
    v17 = (_BYTE *)ExAllocatePool2(64LL, 8 * ObjectCount, 1265072196LL, v16);
    v70 = v17;
  }
  else
  {
    v17 = v71;
    v70 = v71;
    if ( !(_DWORD)ObjectCount )
      goto LABEL_28;
    memset(v71, 0, 8LL * (unsigned int)ObjectCount);
    v17 = v70;
  }
  v4 = P;
LABEL_28:
  v72 = ObjectCount;
  v23 = v17;
  v80 = v17;
  if ( !v17 )
  {
LABEL_143:
    v21 = -1073741801;
    if ( v4 != Src && v4 )
    {
      ExFreePoolWithTag(v4, 0);
      v17 = v70;
    }
    P = 0LL;
    v75 = 0;
    if ( v17 != v71 && v17 )
      ExFreePoolWithTag(v17, 0);
    v70 = 0LL;
    v72 = 0;
    if ( !v68 )
      goto LABEL_215;
    goto LABEL_214;
  }
  v24 = a1->ObjectCount;
  if ( (*((_DWORD *)a2 + 106) & 0x180) != 0 && v24 == 1 && !*a1->ObjectHandleArray )
  {
    v57 = *((_QWORD *)a3 + 2);
    v79 = 0LL;
    (*(void (__fastcall **)(_QWORD, _QWORD, struct DXGPROCESS **, _BYTE *))(*(_QWORD *)(*(_QWORD *)(v57 + 648) + 8LL)
                                                                          + 992LL))(
      *((_QWORD *)a3 + 95),
      0LL,
      &v79,
      v17);
    goto LABEL_64;
  }
  if ( v24 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v24 < 8 )
      goto LABEL_156;
    v4 = (_BYTE *)ExAllocatePool2(256LL, 8LL * v24, 1265072196LL, v16);
    P = v4;
  }
  else
  {
    v4 = Src;
    P = Src;
    if ( !v24 )
      goto LABEL_34;
    memset(Src, 0, 8LL * v24);
    v4 = P;
  }
  v17 = v70;
LABEL_34:
  v75 = v24;
  if ( !v4 )
  {
LABEL_156:
    v21 = -1073741801;
    if ( v4 != Src && v4 )
    {
      ExFreePoolWithTag(v4, 0);
      v17 = v70;
    }
    P = 0LL;
    v75 = 0;
    if ( v17 != v71 && v17 )
      ExFreePoolWithTag(v17, 0);
    v70 = 0LL;
    v72 = 0;
    if ( !v68 )
      goto LABEL_215;
    goto LABEL_214;
  }
  v25 = a1->ObjectCount;
  v26 = 0LL;
  if ( v25 )
  {
    v27 = (struct DXGPROCESS *)((char *)a2 + 248);
    while ( 1 )
    {
      ObjectHandleArray = a1->ObjectHandleArray;
      v85 = (unsigned int)v26;
      v29 = ObjectHandleArray[v26];
      DXGPUSHLOCK::AcquireShared(v27);
      v30 = (v29 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v30 >= *((_DWORD *)v79 + 74)
        || (v31 = *((_QWORD *)v79 + 35),
            v32 = *(_DWORD *)(v31 + 16 * v30 + 8),
            ((v29 >> 25) & 0x60) != (*(_BYTE *)(v31 + 16 * v30 + 8) & 0x60))
        || (v32 & 0x2000) != 0
        || (v32 & 0x1F) == 0 )
      {
        ExReleasePushLockSharedEx(v27, 0LL);
        KeLeaveCriticalRegion();
        goto LABEL_178;
      }
      if ( (v32 & 0x1F) != 0xB )
        break;
      v33 = *(_QWORD *)(v31 + 16LL * (unsigned int)v30);
      ExReleasePushLockSharedEx(v27, 0LL);
      KeLeaveCriticalRegion();
      if ( !v33 )
        goto LABEL_178;
      if ( (*(_DWORD *)(v33 + 72) & 0x20) != 0 )
      {
        v60 = v85;
        WdLogSingleEntry1(2LL, a1->ObjectHandleArray[v85]);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"0x%I64x object is opened as signal only and thus cannot be waited on.",
          a1->ObjectHandleArray[v60],
          0LL,
          0LL,
          0LL,
          0LL);
        v21 = -1073741790;
        if ( P != Src && P )
          ExFreePoolWithTag(P, 0);
        v59 = v70;
        P = 0LL;
        v75 = 0;
        if ( v70 != v71 && v70 )
LABEL_169:
          ExFreePoolWithTag(v59, 0);
LABEL_170:
        v70 = 0LL;
        v72 = 0;
        if ( v68 )
          goto LABEL_214;
        goto LABEL_215;
      }
      v34 = *(struct DXGDEVICE **)(v33 + 16);
      if ( v34 != a3 )
      {
        v58 = v85;
        WdLogSingleEntry3(2LL, a1->ObjectHandleArray[v85], v34, a3);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"0x%x object belongs to a different device 0x%p that 0x%p passed to the wait from CPU call.",
          a1->ObjectHandleArray[v58],
          *(_QWORD *)(v33 + 16),
          (__int64)a3,
          0LL,
          0LL);
        v21 = -1073741811;
        if ( P != Src && P )
          ExFreePoolWithTag(P, 0);
        v59 = v70;
        P = 0LL;
        v75 = 0;
        if ( v70 != v71 && v70 )
          goto LABEL_169;
        goto LABEL_170;
      }
      *(_QWORD *)&v4[8 * v26] = *(_QWORD *)(v33 + 32);
      v26 = (unsigned int)(v26 + 1);
      v25 = a1->ObjectCount;
      if ( (unsigned int)v26 >= v25 )
        goto LABEL_48;
    }
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
    ExReleasePushLockSharedEx(v27, 0LL);
    KeLeaveCriticalRegion();
LABEL_178:
    v21 = -1073741811;
    v61 = v85;
    v62 = (__int64)v79;
    WdLogSingleEntry4(2LL, v79, a1->ObjectHandleArray[v85], v85, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x passed an invalid wait for hSyncObject 0x%I64x at index %I64d returning 0x%I64x",
      v62,
      a1->ObjectHandleArray[v61],
      v61,
      -1073741811LL,
      0LL);
    if ( P != Src && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v75 = 0;
    if ( v70 != v71 && v70 )
      ExFreePoolWithTag(v70, 0);
    v70 = 0LL;
    v72 = 0;
    if ( v68 )
      goto LABEL_214;
    goto LABEL_215;
  }
LABEL_48:
  LODWORD(NumOfElements) = 0;
  v35 = 0LL;
  Base = 0LL;
  if ( v25 <= 2 )
  {
    v35 = v82;
    Base = v82;
    if ( v25 )
    {
      memset(v82, 0, 8LL * v25);
      v35 = Base;
    }
    goto LABEL_51;
  }
  v36 = 0LL;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v25 >= 8 )
  {
    v35 = (_BYTE *)ExAllocatePool2(256LL, 8LL * v25, 1265072196LL, v25);
    Base = v35;
LABEL_51:
    LODWORD(NumOfElements) = v25;
    v36 = v25;
  }
  v84 = 1;
  if ( !v35 )
  {
    v21 = -1073741801;
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)&Base);
    if ( P != Src && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v75 = 0;
    if ( v70 != v71 && v70 )
      ExFreePoolWithTag(v70, 0);
    v70 = 0LL;
    v72 = 0;
    if ( !v68 )
      goto LABEL_215;
    goto LABEL_214;
  }
  memmove(v35, v4, 8 * v36);
  qsort(Base, (unsigned int)NumOfElements, 8uLL, (int (__cdecl *)(const void *, const void *))DxgkComparePointers);
  v37 = NumOfElements;
  for ( i = 0LL; i < (unsigned int)NumOfElements; ++i )
  {
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(*((_QWORD *)Base + i) + 32LL));
    v37 = NumOfElements;
  }
  v39 = 0;
  v23 = v80;
  v84 = 256;
  if ( a1->ObjectCount )
  {
    while ( 1 )
    {
      v40 = v39;
      v41 = *(_QWORD *)&v4[8 * v39];
      v42 = (*(_DWORD *)(v41 + 204) & 4) != 0
          ? *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject((DXGSYNCOBJECTCA *)v41, *((struct ADAPTER_RENDER **)a3 + 2))
            + 4)
          : *(_QWORD *)(v41 + 328);
      *(_QWORD *)&v23[8 * v40] = v42;
      if ( !v42 )
        break;
      if ( ++v39 >= a1->ObjectCount )
        goto LABEL_60;
    }
    WdLogSingleEntry1(2LL, a1->ObjectHandleArray[v40]);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%x object adapter state has been destroyed, so it cannot be waited on.",
      a1->ObjectHandleArray[v40],
      0LL,
      0LL,
      0LL,
      0LL);
    v21 = -1073741811;
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)&Base);
    if ( P != Src && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v75 = 0;
    if ( v70 != v71 && v70 )
      ExFreePoolWithTag(v70, 0);
    v70 = 0LL;
    v72 = 0;
    if ( !v68 )
      goto LABEL_215;
LABEL_214:
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v67);
LABEL_215:
    COREACCESS::~COREACCESS((COREACCESS *)v96);
    COREACCESS::~COREACCESS((COREACCESS *)v91);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v77);
LABEL_216:
    v50 = (struct _KEVENT *)Object;
    goto LABEL_217;
  }
LABEL_60:
  v43 = Base;
  if ( Base )
  {
    v44 = 0LL;
    if ( v37 )
    {
      do
      {
        DXGFASTMUTEX::Release((struct _KTHREAD **)(v43[v44++] + 32LL));
        v43 = Base;
      }
      while ( v44 < (unsigned int)NumOfElements );
    }
  }
  if ( v43 != (_QWORD *)v82 && v43 )
    ExFreePoolWithTag(v43, 0);
LABEL_64:
  if ( Event )
    ObfReferenceObject(Event);
  LOBYTE(HandleInformation) = v86 == 0LL;
  LOBYTE(Timeout) = (a1->Flags.Value & 1) != 0;
  v21 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, const UINT64 *, PVOID, int, int, _QWORD, void *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 624LL) + 8LL) + 664LL))(
          a1->ObjectCount,
          v23,
          a1->FenceValueArray,
          Object,
          Timeout,
          HandleInformation,
          *((_QWORD *)a3 + 96),
          v86);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(v66) = a1->Flags.0;
    LODWORD(Timeouta) = a1->ObjectCount;
    McTemplateK0pqPR1XR1pq_EtwWriteTransfer(v46, v45, v47, a3, Timeouta, v23, a1->FenceValueArray, a1->hAsyncEvent, v66);
  }
  if ( P != Src && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v75 = 0;
  if ( v70 != v71 && v70 )
    ExFreePoolWithTag(v70, 0);
  v70 = 0LL;
  v72 = 0;
  if ( v68 )
  {
    v68 = 0;
    ExReleaseResourceLite(*((PERESOURCE *)v67 + 79));
    KeLeaveCriticalRegion();
  }
  v48 = v98;
  if ( v98 )
  {
    if ( v99 )
    {
      COREACCESS::Release((COREACCESS *)v96);
      v48 = v98;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v48 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v98 + 2), v98);
  }
  v49 = v93;
  if ( v93 )
  {
    if ( v94 )
    {
      v94 = 0;
      v49 = v93;
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v93 + 23) )
      {
        DXGADAPTER::ReleaseCoreResource(v93, v95);
        v49 = v93;
      }
      v95 = 0LL;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v49 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v93 + 2), v93);
  }
  if ( v78 )
  {
    ExReleaseResourceLite(*((PERESOURCE *)a3 + 17));
    KeLeaveCriticalRegion();
  }
  if ( v21 < 0 )
  {
    if ( Event )
      ObfDereferenceObject(Event);
    goto LABEL_216;
  }
  v50 = (struct _KEVENT *)Object;
  if ( Object )
  {
    v51 = Event;
    if ( Object == Event )
    {
      do
      {
        v21 = KeWaitForSingleObject(v50, Executive, 0, 1u, 0LL);
        if ( PsIsThreadTerminating(KeGetCurrentThread()) )
        {
          WdLogSingleEntry1(3LL, 5045LL);
          v21 = -1073741130;
          goto LABEL_218;
        }
      }
      while ( v21 == 257 );
      if ( v21 >= 0 )
        goto LABEL_93;
      WdLogSingleEntry1(1LL, 5054LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Failed to wait for event!", 5054LL, 0LL, 0LL, 0LL, 0LL);
LABEL_218:
      KeSetEvent(v50, 0, 0);
      ObfDereferenceObject(v50);
LABEL_219:
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0x4B677844u);
      return (unsigned int)v21;
    }
  }
  else
  {
LABEL_93:
    v51 = Event;
  }
  if ( v51 )
    ObfDereferenceObject(v51);
  return 0LL;
}
