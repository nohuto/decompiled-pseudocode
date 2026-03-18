/*
 * XREFs of NtDxgkUnpinResources @ 0x1C01D85A0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00096EC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009730 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0009904 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C000BC60 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?UnpinResource@DXGDEVICE@@QEAAJI_NPEAVCOREDEVICEACCESS@@@Z @ 0x1C01D88EC (-UnpinResource@DXGDEVICE@@QEAAJI_NPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall NtDxgkUnpinResources(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct DXGPROCESS *Current; // rax
  bool v9; // si
  __int64 v10; // r13
  DXGDEVICE *v11; // r15
  __int64 v12; // r9
  int v13; // eax
  unsigned int v14; // ebx
  unsigned int v15; // r14d
  unsigned int v16; // eax
  unsigned int *v17; // rdx
  __int64 v18; // r12
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v23; // rcx
  __int64 v24; // r8
  bool v25; // sf
  __int64 v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // r8
  struct DXGDEVICE *v29; // [rsp+50h] [rbp-128h] BYREF
  int v30; // [rsp+58h] [rbp-120h] BYREF
  __int64 v31; // [rsp+60h] [rbp-118h]
  char v32; // [rsp+68h] [rbp-110h]
  struct DXGDEVICE *v33; // [rsp+70h] [rbp-108h] BYREF
  _QWORD v34[2]; // [rsp+78h] [rbp-100h] BYREF
  unsigned int v35; // [rsp+88h] [rbp-F0h]
  unsigned int v36[4]; // [rsp+90h] [rbp-E8h]
  __int64 v37; // [rsp+A0h] [rbp-D8h]
  unsigned int v38; // [rsp+A8h] [rbp-D0h]
  _BYTE v39[160]; // [rsp+B0h] [rbp-C8h] BYREF

  v3 = a1;
  v30 = -1;
  v31 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v32 = 1;
    v30 = 2080;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2080);
  }
  else
  {
    v32 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v30, 2080);
  Current = DXGPROCESS::GetCurrent(v5, v4, v6, v7);
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
    goto LABEL_28;
  }
  v9 = (*((_DWORD *)Current + 106) & 4) == 0;
  if ( v3 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  *(_OWORD *)v36 = *(_OWORD *)v3;
  v37 = *(_QWORD *)(v3 + 16);
  v10 = *(_QWORD *)&v36[2];
  if ( !*(_QWORD *)&v36[2] || !v36[1] )
  {
    WdLogSingleEntry2(3LL, v36[0], -1073741811LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
    if ( v32 )
    {
      LOBYTE(v23) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      v25 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_54:
      if ( v25 )
        McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v30);
    }
    return 3221225485LL;
  }
  v33 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v29, v36[0], (struct _KTHREAD **)Current, &v33);
  v11 = v33;
  if ( !v33 )
  {
    v26 = v36[0];
    WdLogSingleEntry2(2LL, v36[0], -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v26,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v29 && _InterlockedExchangeAdd64((volatile signed __int64 *)v29 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v29 + 2), v29);
LABEL_28:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
    if ( v32 )
    {
      v25 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
      goto LABEL_54;
    }
    return 3221225485LL;
  }
  if ( (*((_BYTE *)v33 + 1869) & 1) == 0 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v34, v33);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v39, (__int64)v11, 2, v12, 0);
    v13 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v39, 0LL);
    v14 = v13;
    if ( v13 < 0 )
    {
      WdLogSingleEntry2(3LL, v11, v13);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v39);
      if ( v34[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v34);
      if ( !v29 )
        goto LABEL_23;
    }
    else
    {
      v15 = 0;
      v16 = v36[1];
      v35 = v36[1];
      while ( v15 < v16 )
      {
        v17 = (unsigned int *)(v10 + 4LL * v15);
        if ( v17 + 1 < v17 || (unsigned __int64)(v17 + 1) > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        v38 = *v17;
        v18 = v38;
        v19 = DXGDEVICE::UnpinResource(v11, v38, v9, (struct COREDEVICEACCESS *)v39);
        v14 = v19;
        if ( v19 < 0 )
        {
          WdLogSingleEntry2(3LL, v18, v19);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v39);
          if ( v34[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v34);
          if ( v29 && _InterlockedExchangeAdd64((volatile signed __int64 *)v29 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v29 + 2), v29);
          goto LABEL_23;
        }
        ++v15;
        v16 = v35;
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v39);
      if ( v34[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v34);
      if ( !v29 )
        goto LABEL_23;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v29 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v29 + 2), v29);
LABEL_23:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
    if ( v32 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v30);
    }
    return v14;
  }
  if ( v29 && _InterlockedExchangeAdd64((volatile signed __int64 *)v29 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v29 + 2), v29);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
  if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v27, &EventProfilerExit, v28, v30);
  return 0LL;
}
