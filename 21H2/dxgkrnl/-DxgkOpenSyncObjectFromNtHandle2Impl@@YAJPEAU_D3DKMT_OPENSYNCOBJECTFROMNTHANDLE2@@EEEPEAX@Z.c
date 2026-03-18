/*
 * XREFs of ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@EEEPEAX@Z @ 0x1C0162184
 * Callers:
 *     DxgkOpenSyncObjectFromNtHandle2Internal @ 0x1C0162164 (DxgkOpenSyncObjectFromNtHandle2Internal.c)
 *     DxgkOpenSyncObjectFromNtHandle2 @ 0x1C02247B0 (DxgkOpenSyncObjectFromNtHandle2.c)
 *     DxgkWslOpenSyncObjectFromNtHandle @ 0x1C031E7D0 (DxgkWslOpenSyncObjectFromNtHandle.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@H@Z @ 0x1C00092CC (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@H@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00096EC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0009904 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009A8C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009B5C (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0009BB0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C000BC60 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKFASTSHARED@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x1C002A224 (--0DXGAUTOPUSHLOCKFASTSHARED@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C00541B0 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C01988F8 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C019D6D0 (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 */

__int64 __fastcall DxgkOpenSyncObjectFromNtHandle2Impl(
        struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 *a1,
        char a2,
        __int64 a3,
        __int64 a4,
        void *a5)
{
  struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 *v6; // r14
  struct DXGPROCESS *Current; // r13
  unsigned int v8; // ebx
  __int64 v9; // r9
  NTSTATUS v10; // eax
  int hSyncObject; // ebx
  struct DXGGLOBAL *v12; // rax
  PVOID v13; // r12
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned __int64 v21; // rbx
  ULONG64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // r8
  struct DXGGLOBAL *Global; // rax
  PVOID v27; // r10
  __int64 v28; // rax
  unsigned int v29; // ecx
  void *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // r8
  _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT v36; // [rsp+64h] [rbp-1C4h]
  _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT v37; // [rsp+64h] [rbp-1C4h]
  _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT v38; // [rsp+64h] [rbp-1C4h]
  struct DXGDEVICE *v39; // [rsp+68h] [rbp-1C0h] BYREF
  int v40; // [rsp+70h] [rbp-1B8h] BYREF
  __int64 v41; // [rsp+78h] [rbp-1B0h]
  char v42; // [rsp+80h] [rbp-1A8h]
  struct DXGPROCESS *v43; // [rsp+88h] [rbp-1A0h]
  _QWORD v44[2]; // [rsp+90h] [rbp-198h] BYREF
  struct DXGDEVICE *v45; // [rsp+A0h] [rbp-188h] BYREF
  PVOID Object; // [rsp+A8h] [rbp-180h] BYREF
  PVOID v47; // [rsp+B0h] [rbp-178h]
  _DWORD *v48; // [rsp+B8h] [rbp-170h]
  HANDLE Handle[2]; // [rsp+C0h] [rbp-168h]
  void *v50[2]; // [rsp+D0h] [rbp-158h] BYREF
  unsigned int v51[4]; // [rsp+E0h] [rbp-148h] BYREF
  __int128 v52; // [rsp+F0h] [rbp-138h]
  __int128 v53; // [rsp+100h] [rbp-128h]
  UINT64 v54; // [rsp+110h] [rbp-118h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+120h] [rbp-108h] BYREF
  struct DXGADAPTERSYNCOBJECT *v56; // [rsp+128h] [rbp-100h] BYREF
  _BYTE v57[8]; // [rsp+130h] [rbp-F8h] BYREF
  char v58; // [rsp+138h] [rbp-F0h]
  __int64 v59; // [rsp+140h] [rbp-E8h] BYREF
  char v60; // [rsp+148h] [rbp-E0h]
  struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 *v61; // [rsp+150h] [rbp-D8h]
  _BYTE v62[160]; // [rsp+160h] [rbp-C8h] BYREF

  v6 = a1;
  v61 = a1;
  Object = a5;
  v40 = -1;
  v41 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v42 = 1;
    v40 = 2086;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2086);
  }
  else
  {
    v42 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v40, 2086);
  Current = DXGPROCESS::GetCurrent();
  v43 = Current;
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_73;
  }
  if ( a2 )
  {
    v22 = (ULONG64)v6;
    if ( (unsigned __int64)v6 >= MmUserProbeAddress )
      v22 = MmUserProbeAddress;
    *(_OWORD *)Handle = *(_OWORD *)v22;
    *(_OWORD *)v50 = *(_OWORD *)(v22 + 16);
    *(_OWORD *)v51 = *(_OWORD *)(v22 + 32);
    v52 = *(_OWORD *)(v22 + 48);
    v53 = *(_OWORD *)(v22 + 64);
    v54 = *(_QWORD *)(v22 + 80);
  }
  else
  {
    *(_OWORD *)Handle = *(_OWORD *)&v6->hNtHandle;
    *(_OWORD *)v50 = *(_OWORD *)&v6->hSyncObject;
    *(_OWORD *)v51 = *(_OWORD *)&v6->Reserved[1];
    v52 = *(_OWORD *)&v6->Reserved[3];
    v53 = *(_OWORD *)&v6->Reserved[5];
    v54 = v6->Reserved[7];
  }
  LODWORD(v50[0]) = 0;
  if ( (HIDWORD(Handle[1]) & 0x7FFFFE00) != 0 )
  {
    WdLogSingleEntry1(3LL, 1781LL);
LABEL_73:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
    if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v31, &EventProfilerExit, v32, v40);
    return 3221225485LL;
  }
  v8 = HIDWORD(Handle[1]);
  if ( (BYTE4(Handle[1]) & 0x10) != 0 || (BYTE4(Handle[1]) & 0x20) != 0 )
    WdLogSingleEntry1(3LL, 1788LL);
  v45 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)&v39,
    (unsigned int)Handle[1],
    (struct _KTHREAD **)Current,
    &v45);
  if ( !v45 )
  {
    v23 = LODWORD(Handle[1]);
    WdLogSingleEntry2(2LL, LODWORD(Handle[1]), -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v23,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_70:
    if ( v39 && _InterlockedExchangeAdd64((volatile signed __int64 *)v39 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v39 + 2), v39);
    goto LABEL_73;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v44, v45, 1);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v62, (__int64)v45, 0, v9, 0);
  v36.hSyncObject = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v62, 0LL);
  if ( (v36.hSyncObject & 0x80000000) != 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v62);
    if ( v44[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v44);
    if ( v39 && _InterlockedExchangeAdd64((volatile signed __int64 *)v39 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v39 + 2), v39);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
    if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v40);
    return v36.hSyncObject;
  }
  v37.hSyncObject = v8;
  if ( (*((_DWORD *)Current + 106) & 0x10) != 0 )
  {
    v48 = (_DWORD *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 4);
    Global = DXGGLOBAL_GetGlobal();
    DXGAUTOPUSHLOCKFASTSHARED::DXGAUTOPUSHLOCKFASTSHARED(
      (DXGAUTOPUSHLOCKFASTSHARED *)&v59,
      (struct DXGGLOBAL *)((char *)Global + 40));
    v27 = Object;
    v28 = ((unsigned int)Object >> 6) & 0xFFFFFF;
    if ( (unsigned int)v28 < v48[4] )
    {
      v29 = *(_DWORD *)(*(_QWORD *)v48 + 16 * v28 + 8);
      if ( (unsigned int)Object >> 30 == ((v29 >> 5) & 3) && (v29 & 0x2000) == 0 && (v29 & 0x1F) != 0 )
      {
        if ( (v29 & 0x1F) == 8 )
        {
          v30 = *(void **)(*(_QWORD *)v48 + 16LL * (unsigned int)v28);
          goto LABEL_65;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        v27 = Object;
      }
    }
    v30 = 0LL;
LABEL_65:
    v47 = v30;
    v48 = v30;
    if ( v30 )
    {
      if ( v60 )
      {
        ExReleasePushLockSharedEx(v59, 0LL);
        KeLeaveCriticalRegion();
      }
      goto LABEL_15;
    }
    WdLogSingleEntry1(3LL, v27);
    if ( v60 )
    {
      ExReleasePushLockSharedEx(v59, 0LL);
      KeLeaveCriticalRegion();
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v62);
    if ( v44[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v44);
    goto LABEL_70;
  }
  HandleInformation = 0LL;
  Object = 0LL;
  v10 = ObReferenceObjectByHandle(Handle[0], 0x20000u, g_pDxgkSharedSyncObjectType, 1, &Object, &HandleInformation);
  hSyncObject = v10;
  v47 = Object;
  v48 = Object;
  if ( v10 != -1073741788 )
  {
    if ( v10 < 0 )
    {
      WdLogSingleEntry2(3LL, Handle[0], v10);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v62);
      if ( v44[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v44);
      goto LABEL_33;
    }
    v8 = v37.hSyncObject & 0xFFFFFFCF | ~(8 * LOBYTE(HandleInformation.GrantedAccess)) & 0x10 | ~(32
                                                                                                * LOBYTE(HandleInformation.GrantedAccess)) & 0x20;
LABEL_15:
    v56 = 0LL;
    v12 = DXGGLOBAL_GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v57, v12, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v57);
    v13 = v47;
    hSyncObject = DXGSYNCOBJECT::Open(
                    *(DXGSYNCOBJECT **)v47,
                    *((struct ADAPTER_RENDER **)v45 + 2),
                    v45,
                    0LL,
                    (unsigned int *)v50,
                    &v50[1],
                    (unsigned __int64 *)v51,
                    v51[2],
                    &v56,
                    1,
                    (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)v8);
    v38.hSyncObject = hSyncObject;
    if ( hSyncObject < 0 )
    {
      if ( v58 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v57);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v62);
      if ( v44[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v44);
    }
    else
    {
      if ( v58 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v57);
      if ( bTracingEnabled )
      {
        v15 = v56 ? *((_QWORD *)v56 + 4) : 0LL;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0ppp_EtwWriteTransfer(
            (REGHANDLE *)&DxgkControlGuid_Context,
            &EventOpenSyncObject,
            v14,
            v15,
            LODWORD(v50[0]),
            v45);
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v62);
      if ( v44[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v44);
      if ( a2 && (unsigned __int64)v6 >= MmUserProbeAddress )
        v6 = (struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 *)MmUserProbeAddress;
      *(_OWORD *)&v6->hNtHandle = *(_OWORD *)Handle;
      *(_OWORD *)&v6->hSyncObject = *(_OWORD *)v50;
      *(_OWORD *)&v6->Reserved[1] = *(_OWORD *)v51;
      *(_OWORD *)&v6->Reserved[3] = v52;
      *(_OWORD *)&v6->Reserved[5] = v53;
      v6->Reserved[7] = v54;
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
      v16 = (LODWORD(v50[0]) >> 6) & 0xFFFFFF;
      if ( (unsigned int)v16 < *((_DWORD *)Current + 74) )
      {
        v17 = *((_QWORD *)Current + 35);
        if ( ((LODWORD(v50[0]) >> 25) & 0x60) == (*(_BYTE *)(v17 + 16 * v16 + 8) & 0x60)
          && (*(_DWORD *)(v17 + 16 * v16 + 8) & 0x1F) != 0 )
        {
          v21 = 2 * (((unsigned __int64)v50[0] >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v17 + 16 * (((unsigned __int64)v50[0] >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
          {
            WdLogSingleEntry1(1LL, 217LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
              217LL,
              0LL,
              0LL,
              0LL,
              0LL);
            v17 = *((_QWORD *)Current + 35);
          }
          *(_DWORD *)(v17 + 8 * v21 + 8) &= ~0x2000u;
          hSyncObject = v38.hSyncObject;
        }
      }
      *((_QWORD *)Current + 32) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( (*((_DWORD *)Current + 106) & 0x10) == 0 )
      ObfDereferenceObject(v13);
LABEL_33:
    if ( v39 && _InterlockedExchangeAdd64((volatile signed __int64 *)v39 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v39 + 2), v39);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
    if ( v42 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v40);
    }
    return (unsigned int)hSyncObject;
  }
  WdLogSingleEntry2(3LL, Handle[0], -1073741788LL);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v62);
  if ( v44[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v44);
  if ( v39 && _InterlockedExchangeAdd64((volatile signed __int64 *)v39 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v39 + 2), v39);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
  if ( v42 )
  {
    LOBYTE(v33) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v33, &EventProfilerExit, v34, v40);
  }
  return 3221225508LL;
}
