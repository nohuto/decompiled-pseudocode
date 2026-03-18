/*
 * XREFs of ?SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z @ 0x1C03119C0
 * Callers:
 *     DxgkSubmitWaitForSyncObjectsToHwQueueInternal @ 0x1C02242A8 (DxgkSubmitWaitForSyncObjectsToHwQueueInternal.c)
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C02E5B80 (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 * Callees:
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0001AE8 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C0001C4C (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00096EC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009A8C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009B5C (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0009BB0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C000BC60 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z @ 0x1C0016438 (-AllocateElements@-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C002B250 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z @ 0x1C002B770 (--0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     McTemplateK0pqPR1XR1_EtwWriteTransfer @ 0x1C0054230 (McTemplateK0pqPR1XR1_EtwWriteTransfer.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C016A93C (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C01CE214 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_OBJECT@@I@Z @ 0x1C02DB630 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_O.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x1C033FD90 (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 *     ?VmBusSendWaitForSyncObjectFromGpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBIPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEB_K_KIPEAVDXGHWQUEUE@@@Z @ 0x1C037FAB0 (-VmBusSendWaitForSyncObjectFromGpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTE.c)
 */

__int64 __fastcall SubmitWaitForSyncObjectsFromGpu(
        unsigned int a1,
        const unsigned int *a2,
        unsigned __int64 *a3,
        unsigned int a4,
        struct DXGPROCESS *a5,
        bool a6,
        bool a7)
{
  unsigned __int64 *v8; // r15
  __int64 v10; // r9
  struct DXGHWQUEUE *v11; // r12
  __int64 v12; // rbx
  unsigned int v13; // edi
  __int64 v14; // rsi
  const unsigned int *Elements; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // ebx
  PVOID v20; // rcx
  size_t v21; // r8
  void *v22; // rbx
  struct DXGGLOBAL *Global; // rax
  const unsigned int *v24; // rax
  struct DXGPROCESS *v25; // rdx
  unsigned int v26; // ebx
  __int64 v27; // rax
  __int64 v28; // r8
  int v29; // ecx
  __int64 v30; // rbx
  __int64 v31; // r8
  __int64 v32; // rdx
  unsigned int HostHandle; // eax
  unsigned int v34; // ebx
  __int64 v35; // rax
  __int64 v36; // r8
  int v37; // ecx
  DXGSYNCOBJECT *v38; // rbx
  unsigned __int8 v39; // r8
  const unsigned int *v40; // rdi
  const unsigned int *v41; // rdi
  __int64 v42; // rdi
  unsigned __int64 *v43; // r12
  struct DXGHWQUEUE *v44; // rax
  struct DXGSYNCOBJECT *v45; // rbx
  __int64 v46; // r9
  int v47; // eax
  __int64 v48; // r8
  __int64 v49; // rbx
  const unsigned int *v50; // r15
  struct DXGSYNCOBJECT **v51; // [rsp+20h] [rbp-228h]
  char v52; // [rsp+50h] [rbp-1F8h]
  unsigned int v53; // [rsp+54h] [rbp-1F4h]
  unsigned int v54; // [rsp+54h] [rbp-1F4h]
  struct DXGHWQUEUE *v55; // [rsp+58h] [rbp-1F0h] BYREF
  char *v56; // [rsp+60h] [rbp-1E8h]
  char v57[8]; // [rsp+68h] [rbp-1E0h] BYREF
  char v58; // [rsp+70h] [rbp-1D8h]
  __int64 v59; // [rsp+78h] [rbp-1D0h] BYREF
  int v60; // [rsp+80h] [rbp-1C8h]
  const unsigned int *v61; // [rsp+88h] [rbp-1C0h]
  _QWORD *v62; // [rsp+90h] [rbp-1B8h]
  PVOID v63; // [rsp+98h] [rbp-1B0h] BYREF
  _BYTE v64[32]; // [rsp+A0h] [rbp-1A8h] BYREF
  int v65; // [rsp+C0h] [rbp-188h]
  struct DXGPROCESS *i; // [rsp+C8h] [rbp-180h]
  struct DXGHWQUEUE *v67; // [rsp+D0h] [rbp-178h]
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // [rsp+D8h] [rbp-170h] BYREF
  _BYTE v69[16]; // [rsp+E0h] [rbp-168h] BYREF
  const unsigned __int64 *v70; // [rsp+F0h] [rbp-158h]
  _BYTE v71[16]; // [rsp+F8h] [rbp-150h] BYREF
  PVOID v72; // [rsp+108h] [rbp-140h] BYREF
  _BYTE v73[16]; // [rsp+110h] [rbp-138h] BYREF
  int v74; // [rsp+120h] [rbp-128h]
  PVOID P; // [rsp+128h] [rbp-120h] BYREF
  _BYTE v76[32]; // [rsp+130h] [rbp-118h] BYREF
  unsigned int v77; // [rsp+150h] [rbp-F8h]
  _BYTE v78[160]; // [rsp+160h] [rbp-E8h] BYREF

  v8 = a3;
  v61 = a2;
  v70 = a3;
  i = a5;
  v55 = 0LL;
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v69, a4, a5, &v55, a7);
  v11 = v55;
  v67 = v55;
  if ( !v55 )
  {
    v12 = a4;
    v13 = -1073741811;
    WdLogSingleEntry3(2LL, a5, (unsigned int)v12, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x failed with invalid hHwQueue 0x%I64x returning 0x%I64x",
      (__int64)a5,
      v12,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_8;
  }
  v14 = *(_QWORD *)(*((_QWORD *)v55 + 2) + 16LL);
  v59 = v14;
  Elements = 0LL;
  v60 = 0;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v78, v14, 0, v10, a7);
  if ( !a7 )
  {
    v18 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v78, 0LL);
    if ( v18 < 0 )
      goto LABEL_5;
  }
  P = 0LL;
  v77 = 0;
  if ( a6 )
  {
    NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::AllocateElements((__int64 *)&P, a1, v16, v17);
    v20 = P;
    if ( !P )
    {
      P = 0LL;
      v77 = 0;
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v78);
      if ( v14 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v59);
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v69);
      return 3221225495LL;
    }
    v21 = v77;
    VidSchSyncObject = (struct _VIDSCH_SYNC_OBJECT *)(v21 * 8);
    v62 = P;
    if ( &v8[v21] < v8 || (unsigned __int64)&v8[v21] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v20, v8, v21 * 8);
    v8 = (unsigned __int64 *)P;
    v70 = (const unsigned __int64 *)P;
  }
  v63 = 0LL;
  v65 = 0;
  v22 = 0LL;
  v55 = 0LL;
  v72 = 0LL;
  v74 = 0;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL) + 16LL) + 16LL) + 209LL) )
  {
    v52 = 1;
    Elements = (const unsigned int *)PagedPoolZeroedArray<unsigned int,4>::AllocateElements(
                                       (__int64 *)&v72,
                                       a1,
                                       v16,
                                       v17);
    if ( Elements )
      goto LABEL_20;
LABEL_28:
    if ( v72 != v73 && v72 )
      ExFreePoolWithTag(v72, 0);
    v74 = (int)v22;
    v72 = v22;
    if ( v63 != v64 && v63 )
      ExFreePoolWithTag(v63, 0);
    v65 = (int)v22;
    v63 = v22;
    if ( P != v76 && P )
      ExFreePoolWithTag(P, 0);
    P = v22;
    v77 = (unsigned int)v22;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v78);
    if ( v14 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v59);
    v13 = -1073741801;
    goto LABEL_8;
  }
  v52 = 0;
  v22 = (void *)PagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,4>::AllocateElements((__int64 *)&v63, a1, v16, v17);
  v55 = (struct DXGHWQUEUE *)v22;
  if ( !v22 )
    goto LABEL_28;
LABEL_20:
  Global = DXGGLOBAL_GetGlobal();
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v57, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v57);
  v53 = 0;
  if ( a1 )
  {
    v62 = v22;
    v24 = Elements;
    v56 = (char *)Elements;
    v25 = (struct DXGPROCESS *)((char *)v61 - (char *)Elements);
    for ( i = (struct DXGPROCESS *)((char *)v61 - (char *)Elements); ; v25 = i )
    {
      v26 = *(const unsigned int *)((char *)v24 + (_QWORD)v25);
      DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a5 + 248));
      v27 = (v26 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v27 < *((_DWORD *)a5 + 74)
        && (v28 = *((_QWORD *)a5 + 35),
            v29 = *(_DWORD *)(v28 + 16 * v27 + 8),
            ((v26 >> 25) & 0x60) == (*(_BYTE *)(v28 + 16 * v27 + 8) & 0x60))
        && (v29 & 0x2000) == 0
        && (v29 & 0x1F) == 0xB )
      {
        v30 = *(_QWORD *)(v28 + 16LL * (unsigned int)v27);
      }
      else
      {
        v30 = 0LL;
      }
      ExReleasePushLockSharedEx((char *)a5 + 248, 0LL);
      KeLeaveCriticalRegion();
      if ( v30 )
        break;
      v34 = *(_DWORD *)&v56[(_QWORD)i];
      DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a5 + 248));
      v35 = (v34 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v35 < *((_DWORD *)a5 + 74)
        && (v36 = *((_QWORD *)a5 + 35),
            v37 = *(_DWORD *)(v36 + 16 * v35 + 8),
            ((v34 >> 25) & 0x60) == (*(_BYTE *)(v36 + 16 * v35 + 8) & 0x60))
        && (v37 & 0x2000) == 0
        && (v37 & 0x1F) == 8 )
      {
        v38 = *(DXGSYNCOBJECT **)(v36 + 16LL * (unsigned int)v35);
      }
      else
      {
        v38 = 0LL;
      }
      ExReleasePushLockSharedEx((char *)a5 + 248, 0LL);
      KeLeaveCriticalRegion();
      if ( !v38 && !v52 )
      {
        v41 = v61;
        WdLogSingleEntry3(1LL, a5, v61[v53], v53);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"0x%p failed to wait with invalid hSyncObject 0x%x at index %d",
          (__int64)a5,
          v41[v53],
          v53,
          0LL,
          0LL);
LABEL_78:
        if ( v58 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v57);
        if ( v72 != v73 && v72 )
          ExFreePoolWithTag(v72, 0);
        v74 = 0;
        v72 = 0LL;
        if ( v63 != v64 && v63 )
          ExFreePoolWithTag(v63, 0);
        v65 = 0;
        v63 = 0LL;
        if ( P != v76 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v77 = 0;
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v78);
        if ( v14 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v59);
        v13 = -1073741811;
LABEL_8:
        DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v69);
        return v13;
      }
      if ( v52 )
      {
        HostHandle = *(const unsigned int *)((char *)v61 + v56 - (char *)Elements);
        if ( v38 )
          HostHandle = DXGSYNCOBJECT::GetHostHandle(v38, HostHandle, v39);
LABEL_58:
        *(_DWORD *)v56 = HostHandle;
        goto LABEL_60;
      }
      *v62 = v38;
LABEL_60:
      ++v53;
      v24 = (const unsigned int *)(v56 + 4);
      v56 += 4;
      ++v62;
      if ( v53 >= a1 )
        goto LABEL_92;
    }
    v31 = *(_QWORD *)(v30 + 16);
    v32 = *(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL);
    if ( v31 != v32 )
    {
      WdLogSingleEntry2(2LL, v32, v31);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"WaitForSynchronizationObjectFromGpu on device 0x%p attempts to use a sync object opened on a different device 0x%p.",
        *(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL),
        *(_QWORD *)(v30 + 16),
        0LL,
        0LL,
        0LL);
      goto LABEL_78;
    }
    if ( (*(_DWORD *)(v30 + 72) & 0x20) != 0 )
    {
      v40 = v61;
      WdLogSingleEntry1(2LL, v61[v53]);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%x object is opened as signal only and thus cannot be waited on.",
        v40[v53],
        0LL,
        0LL,
        0LL,
        0LL);
      if ( v58 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v57);
      if ( v72 != v73 && v72 )
        ExFreePoolWithTag(v72, 0);
      v72 = 0LL;
      v74 = 0;
      if ( v63 != v64 && v63 )
        ExFreePoolWithTag(v63, 0);
      v63 = 0LL;
      v65 = 0;
      if ( P != v76 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v77 = 0;
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v78);
      if ( v14 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v59);
      v13 = -1073741790;
      goto LABEL_8;
    }
    if ( !v52 )
    {
      *v62 = *(_QWORD *)(v30 + 32);
      goto LABEL_60;
    }
    HostHandle = *(_DWORD *)(v30 + 44);
    goto LABEL_58;
  }
LABEL_92:
  if ( v52 )
  {
    v18 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromGpu(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL) + 16LL)
                                                     + 16LL)
                                         + 4344LL),
            a5,
            0LL,
            Elements,
            0LL,
            0LL,
            v8,
            0LL,
            a1,
            v11);
    if ( v58 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v57);
    if ( v72 != v73 && v72 )
      ExFreePoolWithTag(v72, 0);
    v72 = 0LL;
    v74 = 0;
    if ( v63 != v64 && v63 )
      ExFreePoolWithTag(v63, 0);
    v63 = 0LL;
    v65 = 0;
    if ( P != v76 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v77 = 0;
LABEL_5:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v78);
    if ( v14 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v59);
    v13 = v18;
    goto LABEL_8;
  }
  v42 = 0LL;
  if ( a1 )
  {
    v43 = v8;
    v44 = (struct DXGHWQUEUE *)(v55 - (struct DXGHWQUEUE *)v8);
    v55 = (struct DXGHWQUEUE *)((char *)v55 - (__int64)v8);
    while ( 1 )
    {
      v45 = *(struct DXGSYNCOBJECT **)((char *)v43 + (_QWORD)v44);
      DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)v71, v45);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v71);
      VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                           v45,
                           *(struct ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)v67 + 2) + 16LL) + 16LL));
      v47 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, unsigned __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v46 + 16) + 16LL) + 16LL) + 624LL) + 8LL)
                                                                                              + 632LL))(
              *(_QWORD *)(v46 + 40),
              VidSchSyncObject,
              *v43);
      v54 = v47;
      if ( v47 < 0 )
        break;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        LODWORD(v51) = 1;
        McTemplateK0pqPR1XR1_EtwWriteTransfer(
          (__int64)&v8[v42],
          &EventWaitForSynchronizationObjectFromGpu,
          v48,
          v67,
          v51,
          &VidSchSyncObject,
          &v8[v42]);
      }
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v71);
      v42 = (unsigned int)(v42 + 1);
      ++v43;
      v44 = v55;
      if ( (unsigned int)v42 >= a1 )
        goto LABEL_112;
    }
    v49 = v47;
    v50 = v61;
    WdLogSingleEntry4(2LL, a5, v61[v42], v42, v47);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x failed to acquire hSyncObject 0x%I64x at index %I64d returning 0x%I64x",
      (__int64)a5,
      v50[v42],
      v42,
      v49,
      0LL);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v71);
    if ( v58 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v57);
    if ( v72 != v73 && v72 )
      ExFreePoolWithTag(v72, 0);
    v72 = 0LL;
    v74 = 0;
    if ( v63 != v64 && v63 )
      ExFreePoolWithTag(v63, 0);
    v63 = 0LL;
    v65 = 0;
    if ( P != v76 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v77 = 0;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v78);
    if ( v14 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v59);
    v13 = v54;
    goto LABEL_8;
  }
LABEL_112:
  if ( v58 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v57);
  if ( v72 != v73 && v72 )
    ExFreePoolWithTag(v72, 0);
  v72 = 0LL;
  v74 = 0;
  if ( v63 != v64 && v63 )
    ExFreePoolWithTag(v63, 0);
  v63 = 0LL;
  v65 = 0;
  if ( P != v76 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v77 = 0;
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v78);
  if ( v14 )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v59);
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v69);
  return 0LL;
}
