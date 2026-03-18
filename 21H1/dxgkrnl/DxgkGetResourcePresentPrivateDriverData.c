/*
 * XREFs of DxgkGetResourcePresentPrivateDriverData @ 0x1C0225B50
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0008348 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000E890 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C000E994 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C001D9A4 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0024550 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0024A78 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     ?GetPresentPrivateDriverDataFromResource@@YAJPEAUDXGSHAREDRESOURCE_NONPAGED@@PEAPEAVCRefCountedBuffer@@PEAU_D3DDDI_GETRESOURCEPRESENTPRIVATEDRIVERDATA@@@Z @ 0x1C003DA44 (-GetPresentPrivateDriverDataFromResource@@YAJPEAUDXGSHAREDRESOURCE_NONPAGED@@PEAPEAVCRefCountedB.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00DB790 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C010C6A0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0124724 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 */

__int64 __fastcall DxgkGetResourcePresentPrivateDriverData(ULONG64 a1, __int64 a2, __int64 a3)
{
  struct _SLIST_ENTRY *v3; // r15
  _OWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _KTHREAD **v10; // r12
  __int64 v11; // rax
  __int64 v12; // rdx
  struct _EX_RUNDOWN_REF **ResourceSafe; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct _EX_RUNDOWN_REF *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r9
  struct DXGDEVICE *v23; // r13
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r12
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r8
  KSPIN_LOCK *v39; // rcx
  __int64 v40; // rax
  size_t v41; // r8
  _DWORD *v42; // rdx
  void *v43; // rcx
  struct DXGDEVICE *v44; // [rsp+30h] [rbp-128h] BYREF
  struct _EX_RUNDOWN_REF *v45; // [rsp+38h] [rbp-120h] BYREF
  int v46; // [rsp+40h] [rbp-118h] BYREF
  __int64 v47; // [rsp+48h] [rbp-110h]
  char v48; // [rsp+50h] [rbp-108h]
  ULONG64 v49; // [rsp+58h] [rbp-100h]
  unsigned int v50; // [rsp+60h] [rbp-F8h]
  struct CRefCountedBuffer *v51; // [rsp+68h] [rbp-F0h] BYREF
  size_t Size[2]; // [rsp+70h] [rbp-E8h] BYREF
  struct DXGDEVICE *v53; // [rsp+80h] [rbp-D8h] BYREF
  struct _EX_RUNDOWN_REF *v54; // [rsp+88h] [rbp-D0h] BYREF
  _BYTE v55[160]; // [rsp+90h] [rbp-C8h] BYREF

  v49 = a1;
  v3 = 0LL;
  v51 = 0LL;
  v4 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Size = *v4;
  v46 = -1;
  v47 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v48 = 1;
    v46 = 2123;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(MmUserProbeAddress, &EventProfilerEnter, a3, 2123);
  }
  else
  {
    v48 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v46, 2123LL);
  Current = DXGPROCESS::GetCurrent(v6, v5);
  v10 = (struct _KTHREAD **)Current;
  if ( !Current )
  {
    v11 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v11);
LABEL_27:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46, v12);
    if ( v48 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v37, &EventProfilerExit, v38, v46);
    }
    return 3221225485LL;
  }
  v45 = 0LL;
  ResourceSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetResourceSafe(
                                              (__int64)Current,
                                              (DXGRESOURCEREFERENCE *)&v54,
                                              Size[0]);
  DXGRESOURCEREFERENCE::MoveAssign(&v45, ResourceSafe);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v54, v14);
  v17 = v45;
  if ( !v45 )
  {
    v18 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v18 + 24) = LODWORD(Size[0]);
    *(_QWORD *)(v18 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v18);
LABEL_26:
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v45, v19);
    goto LABEL_27;
  }
  v50 = *(_DWORD *)(v45[1].Count + 436);
  v53 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v44, v50, v10, &v53);
  v23 = v53;
  if ( !v53 )
  {
    v24 = WdLogNewEntry5_WdError(v21, v20);
    *(_QWORD *)(v24 + 24) = v50;
    *(_QWORD *)(v24 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v24);
LABEL_23:
    if ( v44 && _InterlockedExchangeAdd64((volatile signed __int64 *)v44 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v44 + 2), v44);
    goto LABEL_26;
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v55, (__int64)v53, 0, v22, 0);
  v25 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v55, 0LL);
  v29 = v25;
  if ( v25 >= 0 )
  {
    if ( (HIDWORD(v17->Ptr) & 1) == 0 )
    {
      v36 = WdLogNewEntry5_WdError(v27, v26);
      *(_QWORD *)(v36 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v36);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v55);
      goto LABEL_23;
    }
    v39 = *(KSPIN_LOCK **)(v17[7].Count + 176);
    if ( v39 )
    {
      LODWORD(v29) = GetPresentPrivateDriverDataFromResource(
                       v39,
                       (KSPIN_LOCK *)&v51,
                       (struct _D3DDDI_GETRESOURCEPRESENTPRIVATEDRIVERDATA *)Size);
      v3 = (struct _SLIST_ENTRY *)v51;
      v41 = HIDWORD(Size[0]);
    }
    else
    {
      v40 = WdLogNewEntry5_WdWarning(0LL, v26, v28);
      *(_QWORD *)(v40 + 24) = 0LL;
      *(_QWORD *)(v40 + 32) = 13272LL;
      WdLogEvent5_WdWarning(v40);
      v41 = 0LL;
      HIDWORD(Size[0]) = 0;
    }
    v42 = (_DWORD *)(v49 + 4);
    if ( v49 + 4 >= MmUserProbeAddress )
      v42 = (_DWORD *)MmUserProbeAddress;
    *v42 = v41;
    if ( (_DWORD)v41 && v3 )
    {
      v43 = (void *)Size[1];
      if ( v41 + Size[1] > MmUserProbeAddress || v41 + Size[1] <= Size[1] )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v43, &v3[1], v41);
    }
    if ( v3 )
      CRefCountedBuffer::RefCountedBufferRelease(v3);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v55);
    if ( v44 )
      goto LABEL_15;
  }
  else
  {
    v30 = WdLogNewEntry5_WdEvent(v27, v26);
    *(_QWORD *)(v30 + 24) = v29;
    *(_QWORD *)(v30 + 32) = v23;
    WdLogEvent5_WdEvent(v30);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v55);
    if ( v44 )
    {
LABEL_15:
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v44 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v44 + 2), v44);
    }
  }
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v45, v31);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46, v32);
  if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v33, &EventProfilerExit, v34, v46);
  return (unsigned int)v29;
}
