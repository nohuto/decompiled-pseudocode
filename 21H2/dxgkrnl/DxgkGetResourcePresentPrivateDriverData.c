/*
 * XREFs of DxgkGetResourcePresentPrivateDriverData @ 0x1C02D8420
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0009904 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C000A948 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C000BC60 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C002B890 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ?GetPresentPrivateDriverDataFromResource@@YAJPEAUDXGSHAREDRESOURCE_NONPAGED@@PEAPEAVCRefCountedBuffer@@PEAU_D3DDDI_GETRESOURCEPRESENTPRIVATEDRIVERDATA@@@Z @ 0x1C004AA7C (-GetPresentPrivateDriverDataFromResource@@YAJPEAUDXGSHAREDRESOURCE_NONPAGED@@PEAPEAVCRefCountedB.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0195040 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C01D98D8 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 */

__int64 __fastcall DxgkGetResourcePresentPrivateDriverData(ULONG64 a1, __int64 a2, __int64 a3)
{
  struct _SLIST_ENTRY *v3; // r15
  _OWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct DXGPROCESS *Current; // rax
  struct _KTHREAD **v10; // r12
  __int64 v11; // rcx
  __int64 v12; // r8
  bool v13; // sf
  struct _EX_RUNDOWN_REF **ResourceSafe; // rax
  struct _EX_RUNDOWN_REF *v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // r9
  __int64 v18; // rbx
  int v19; // eax
  unsigned int PresentPrivateDriverDataFromResource; // r12d
  __int64 v21; // rcx
  __int64 v22; // r8
  KSPIN_LOCK *v24; // rcx
  size_t v25; // r8
  _DWORD *v26; // rdx
  void *v27; // rcx
  struct DXGDEVICE *v28; // [rsp+50h] [rbp-128h] BYREF
  struct _EX_RUNDOWN_REF *v29; // [rsp+58h] [rbp-120h] BYREF
  int v30; // [rsp+60h] [rbp-118h] BYREF
  __int64 v31; // [rsp+68h] [rbp-110h]
  char v32; // [rsp+70h] [rbp-108h]
  ULONG64 v33; // [rsp+78h] [rbp-100h]
  struct DXGDEVICE *v34; // [rsp+80h] [rbp-F8h] BYREF
  unsigned int v35; // [rsp+88h] [rbp-F0h]
  struct CRefCountedBuffer *v36; // [rsp+90h] [rbp-E8h] BYREF
  size_t Size[2]; // [rsp+98h] [rbp-E0h] BYREF
  struct _EX_RUNDOWN_REF *v38; // [rsp+A8h] [rbp-D0h] BYREF
  _BYTE v39[160]; // [rsp+B0h] [rbp-C8h] BYREF

  v33 = a1;
  v3 = 0LL;
  v36 = 0LL;
  v4 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Size = *v4;
  v30 = -1;
  v31 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v32 = 1;
    v30 = 2123;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(MmUserProbeAddress, &EventProfilerEnter, a3, 2123);
  }
  else
  {
    v32 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v30, 2123);
  Current = DXGPROCESS::GetCurrent(v6, v5, v7, v8);
  v10 = (struct _KTHREAD **)Current;
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid DXG proces, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_9:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
    if ( !v32 )
      return 3221225485LL;
    v13 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_32:
    if ( v13 )
      McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, v30);
    return 3221225485LL;
  }
  v29 = 0LL;
  ResourceSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetResourceSafe(
                                              (__int64)Current,
                                              (DXGRESOURCEREFERENCE *)&v38,
                                              Size[0]);
  DXGRESOURCEREFERENCE::MoveAssign(&v29, ResourceSafe);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v38);
  v15 = v29;
  if ( !v29 )
  {
    v16 = LODWORD(Size[0]);
    WdLogSingleEntry2(2LL, LODWORD(Size[0]), -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid resource hande (0x%I64x) specified, returning 0x%I64x",
      v16,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_13:
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v29);
    goto LABEL_9;
  }
  v35 = *(_DWORD *)(v29[1].Count + 436);
  v34 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v28, v35, v10, &v34);
  if ( !v34 )
  {
    v18 = v35;
    WdLogSingleEntry2(2LL, v35, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v18,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v28 && _InterlockedExchangeAdd64((volatile signed __int64 *)v28 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v28 + 2), v28);
    goto LABEL_13;
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v39, (__int64)v34, 0, v17, 0);
  v19 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v39, 0LL);
  PresentPrivateDriverDataFromResource = v19;
  if ( v19 >= 0 )
  {
    if ( (HIDWORD(v15->Ptr) & 1) == 0 )
    {
      WdLogSingleEntry1(2LL, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Shared resource is expected, returning 0x%I64x",
        -1073741811LL,
        0LL,
        0LL,
        0LL,
        0LL);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v39);
      if ( v28 && _InterlockedExchangeAdd64((volatile signed __int64 *)v28 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v28 + 2), v28);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v29);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
      if ( !v32 )
        return 3221225485LL;
      LOBYTE(v11) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      v13 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
      goto LABEL_32;
    }
    v24 = *(KSPIN_LOCK **)(v15[7].Count + 176);
    if ( v24 )
    {
      PresentPrivateDriverDataFromResource = GetPresentPrivateDriverDataFromResource(
                                               v24,
                                               (KSPIN_LOCK *)&v36,
                                               (struct _D3DDDI_GETRESOURCEPRESENTPRIVATEDRIVERDATA *)Size);
      v3 = (struct _SLIST_ENTRY *)v36;
      v25 = HIDWORD(Size[0]);
    }
    else
    {
      WdLogSingleEntry2(3LL, 0LL, 13890LL);
      v25 = 0LL;
      HIDWORD(Size[0]) = 0;
    }
    v26 = (_DWORD *)(v33 + 4);
    if ( v33 + 4 >= MmUserProbeAddress )
      v26 = (_DWORD *)MmUserProbeAddress;
    *v26 = v25;
    if ( (_DWORD)v25 && v3 )
    {
      v27 = (void *)Size[1];
      if ( v25 + Size[1] > MmUserProbeAddress || v25 + Size[1] <= Size[1] )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v27, &v3[1], v25);
    }
    if ( v3 )
      CRefCountedBuffer::RefCountedBufferRelease(v3);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v39);
    if ( v28 )
      goto LABEL_20;
  }
  else
  {
    WdLogSingleEntry2(4LL, v19, v34);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v39);
    if ( v28 )
    {
LABEL_20:
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v28 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v28 + 2), v28);
    }
  }
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v29);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
  if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v21, &EventProfilerExit, v22, v30);
  return PresentPrivateDriverDataFromResource;
}
