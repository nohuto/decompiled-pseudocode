/*
 * XREFs of ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@E@Z @ 0x1C01545B8
 * Callers:
 *     DxgkOpenSyncObjectFromNtHandle2Internal @ 0x1C01545A0 (DxgkOpenSyncObjectFromNtHandle2Internal.c)
 *     DxgkOpenSyncObjectFromNtHandle2 @ 0x1C0279B00 (DxgkOpenSyncObjectFromNtHandle2.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00022BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002B1C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004090 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004300 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004370 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006CE0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006DE4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00070D0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0007124 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0007464 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C0047104 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E49F4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C010F530 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C011422C (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkOpenSyncObjectFromNtHandle2Impl(
        struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 *a1,
        char a2,
        __int64 a3)
{
  struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  ULONG64 v8; // rcx
  __int64 v9; // r8
  struct DXGPROCESS *Current; // r15
  __int64 v11; // rax
  __int64 v12; // rdx
  ULONG64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct ADAPTER_RENDER **v18; // r13
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v23; // r9
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  HANDLE v28; // r12
  NTSTATUS v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  unsigned int v34; // ebx
  PERESOURCE *Global; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  int v39; // r12d
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  unsigned int v44; // r8d
  unsigned __int64 v45; // rbx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  struct DXGDEVICE *v51; // [rsp+68h] [rbp-1A0h] BYREF
  int v52; // [rsp+70h] [rbp-198h] BYREF
  __int64 v53; // [rsp+78h] [rbp-190h]
  char v54; // [rsp+80h] [rbp-188h]
  struct DXGADAPTERSYNCOBJECT *v55; // [rsp+88h] [rbp-180h] BYREF
  _QWORD v56[2]; // [rsp+90h] [rbp-178h] BYREF
  struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT v57[2]; // [rsp+A0h] [rbp-168h]
  PVOID Object; // [rsp+A8h] [rbp-160h] BYREF
  HANDLE Handle[2]; // [rsp+B0h] [rbp-158h]
  void *v60[2]; // [rsp+C0h] [rbp-148h] BYREF
  unsigned int v61[4]; // [rsp+D0h] [rbp-138h] BYREF
  __int128 v62; // [rsp+E0h] [rbp-128h]
  __int128 v63; // [rsp+F0h] [rbp-118h]
  UINT64 v64; // [rsp+100h] [rbp-108h]
  struct DXGDEVICE *v65; // [rsp+110h] [rbp-F8h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+118h] [rbp-F0h] BYREF
  _BYTE v67[8]; // [rsp+120h] [rbp-E8h] BYREF
  char v68; // [rsp+128h] [rbp-E0h]
  _BYTE v69[160]; // [rsp+130h] [rbp-D8h] BYREF

  v4 = a1;
  *(_QWORD *)&v57[0].hSyncObject = a1;
  v52 = -1;
  v53 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v54 = 1;
    v52 = 2086;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2086);
  }
  else
  {
    v54 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v52, 2086LL);
  Current = DXGPROCESS::GetCurrent(v6, v5);
  if ( !Current )
  {
    v11 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v11);
LABEL_21:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52, v12);
    if ( v54 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v52);
    }
    return 3221225485LL;
  }
  if ( a2 )
  {
    v8 = MmUserProbeAddress;
    v13 = (ULONG64)v4;
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v13 = MmUserProbeAddress;
    *(_OWORD *)Handle = *(_OWORD *)v13;
    *(_OWORD *)v60 = *(_OWORD *)(v13 + 16);
    *(_OWORD *)v61 = *(_OWORD *)(v13 + 32);
    v62 = *(_OWORD *)(v13 + 48);
    v63 = *(_OWORD *)(v13 + 64);
    v64 = *(_QWORD *)(v13 + 80);
  }
  else
  {
    *(_OWORD *)Handle = *(_OWORD *)&v4->hNtHandle;
    *(_OWORD *)v60 = *(_OWORD *)&v4->hSyncObject;
    *(_OWORD *)v61 = *(_OWORD *)&v4->Reserved[1];
    v62 = *(_OWORD *)&v4->Reserved[3];
    v63 = *(_OWORD *)&v4->Reserved[5];
    v64 = v4->Reserved[7];
  }
  LODWORD(v60[0]) = 0;
  if ( (HIDWORD(Handle[1]) & 0x7FFFFE00) != 0 )
  {
    v14 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v14 + 24) = 1587LL;
    WdLogEvent5_WdWarning(v14);
    goto LABEL_21;
  }
  if ( (BYTE4(Handle[1]) & 0x10) != 0 || (BYTE4(Handle[1]) & 0x20) != 0 )
  {
    v15 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v15 + 24) = 1594LL;
    WdLogEvent5_WdWarning(v15);
  }
  v65 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v51, LODWORD(Handle[1]), (struct _KTHREAD **)Current, &v65);
  v18 = (struct ADAPTER_RENDER **)v65;
  if ( !v65 )
  {
    v19 = WdLogNewEntry5_WdError(v17, v16);
    *(_QWORD *)(v19 + 24) = LODWORD(Handle[1]);
    *(_QWORD *)(v19 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v19);
    if ( v51 && _InterlockedExchangeAdd64((volatile signed __int64 *)v51 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v51 + 2), v51);
    goto LABEL_21;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v56, v65);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v69, (__int64)v18, 0, v23, 0);
  LODWORD(v24) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v69, 0LL);
  if ( (int)v24 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v69);
    if ( v56[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v56);
    if ( !v51 )
      goto LABEL_31;
    goto LABEL_29;
  }
  HandleInformation = 0LL;
  Object = 0LL;
  v28 = Handle[0];
  v29 = ObReferenceObjectByHandle(Handle[0], 0x20000u, g_pDxgkSharedSyncObjectType, 1, &Object, &HandleInformation);
  v24 = v29;
  if ( v29 == -1073741788 )
  {
    v33 = WdLogNewEntry5_WdWarning(v31, v30, v32);
    v24 = -1073741788LL;
    goto LABEL_37;
  }
  if ( v29 < 0 )
  {
    v33 = WdLogNewEntry5_WdWarning(v31, v30, v32);
LABEL_37:
    *(_QWORD *)(v33 + 24) = v28;
    *(_QWORD *)(v33 + 32) = v24;
    WdLogEvent5_WdWarning(v33);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v69);
    if ( v56[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v56);
    if ( !v51 )
      goto LABEL_31;
LABEL_29:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v51 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v51 + 2), v51);
LABEL_31:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52, v25);
    if ( v54 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v52);
    return (unsigned int)v24;
  }
  v34 = HIDWORD(Handle[1]) & 0xFFFFFFCF | ~(8 * LOBYTE(HandleInformation.GrantedAccess)) & 0x10 | ~(32
                                                                                                  * LOBYTE(HandleInformation.GrantedAccess)) & 0x20;
  v55 = 0LL;
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v31, v30);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v67, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v67, v36);
  v39 = DXGSYNCOBJECT::Open(
          *(DXGSYNCOBJECT **)Object,
          v18[2],
          (struct DXGDEVICE *)v18,
          0LL,
          (unsigned int *)v60,
          &v60[1],
          (unsigned __int64 *)v61,
          v61[2],
          &v55,
          1,
          (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)v34);
  if ( v39 >= 0 )
  {
    if ( v68 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v67);
    if ( bTracingEnabled )
    {
      v40 = v55 ? *((_QWORD *)v55 + 4) : 0LL;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0ppp_EtwWriteTransfer(v37, &EventOpenSyncObject, v38, v40, LODWORD(v60[0]), v18);
    }
    DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 208));
    v41 = (LODWORD(v60[0]) >> 6) & 0xFFFFFF;
    v42 = LODWORD(v60[0]) >> 30;
    if ( (unsigned int)v41 < *((_DWORD *)Current + 64) )
    {
      v43 = *((_QWORD *)Current + 30);
      v44 = *(_DWORD *)(v43 + 16 * v41 + 8);
      if ( (_DWORD)v42 == ((v44 >> 5) & 3) && (v44 & 0x1F) != 0 )
      {
        v45 = 2 * (((unsigned __int64)v60[0] >> 6) & 0xFFFFFF);
        if ( (*(_DWORD *)(v43 + 16 * (((unsigned __int64)v60[0] >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
        {
          v46 = WdLogNewEntry5_WdAssertion(v43, v42);
          *(_QWORD *)(v46 + 24) = 222LL;
          WdLogEvent5_WdAssertion(v46);
          v43 = *((_QWORD *)Current + 30);
        }
        *(_DWORD *)(v43 + 8 * v45 + 8) &= ~0x2000u;
      }
    }
    *((_QWORD *)Current + 27) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 208, 0LL);
    KeLeaveCriticalRegion();
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v69);
    if ( v56[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v56);
    if ( a2 && (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 *)MmUserProbeAddress;
    *(_OWORD *)&v4->hNtHandle = *(_OWORD *)Handle;
    *(_OWORD *)&v4->hSyncObject = *(_OWORD *)v60;
    *(_OWORD *)&v4->Reserved[1] = *(_OWORD *)v61;
    *(_OWORD *)&v4->Reserved[3] = v62;
    *(_OWORD *)&v4->Reserved[5] = v63;
    v4->Reserved[7] = v64;
  }
  else
  {
    if ( v68 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v67);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v69);
    if ( v56[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v56);
  }
  ObfDereferenceObject(Object);
  if ( v51 && _InterlockedExchangeAdd64((volatile signed __int64 *)v51 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v51 + 2), v51);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52, v47);
  if ( v54 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v48, &EventProfilerExit, v49, v52);
  return (unsigned int)v39;
}
