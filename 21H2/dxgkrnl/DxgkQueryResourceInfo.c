/*
 * XREFs of DxgkQueryResourceInfo @ 0x1C0184B60
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C0009824 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0009904 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C000BC60 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C016E850 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C016ED94 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C0185C5C (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkQueryResourceInfo(_OWORD *a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD **Current; // r8
  _OWORD *v5; // rax
  struct DXGDEVICE *v6; // rbx
  struct _KEVENT *v7; // r14
  __int64 v8; // r9
  int v9; // eax
  int Resource; // r14d
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v14; // rcx
  __int64 v15; // r8
  bool v16; // sf
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // r8
  struct DXGDEVICE *v22; // [rsp+50h] [rbp-128h] BYREF
  int v23; // [rsp+58h] [rbp-120h] BYREF
  __int64 v24; // [rsp+60h] [rbp-118h]
  char v25; // [rsp+68h] [rbp-110h]
  struct DXGDEVICE *v26; // [rsp+70h] [rbp-108h] BYREF
  struct DXGDEVICE *v27; // [rsp+78h] [rbp-100h] BYREF
  char v28; // [rsp+80h] [rbp-F8h]
  unsigned int v29[4]; // [rsp+88h] [rbp-F0h] BYREF
  __int128 v30; // [rsp+98h] [rbp-E0h]
  _BYTE v31[160]; // [rsp+B0h] [rbp-C8h] BYREF

  v23 = -1;
  v24 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v25 = 1;
    v23 = 2004;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2004);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v23, 2004);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
    if ( !v25 )
      return 3221225485LL;
    v16 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_29:
    if ( v16 )
      McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v23);
    return 3221225485LL;
  }
  v5 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v5 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v29 = *v5;
  v30 = v5[1];
  v26 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v22, v29[0], Current, &v26);
  v6 = v26;
  if ( !v26 )
  {
    v17 = v29[0];
    WdLogSingleEntry2(2LL, v29[0], -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v17,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v22 && _InterlockedExchangeAdd64((volatile signed __int64 *)v22 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v22 + 2), v22);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
    if ( !v25 )
      return 3221225485LL;
    LOBYTE(v14) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v16 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_29;
  }
  v27 = v26;
  v7 = (struct _KEVENT *)*((_QWORD *)v26 + 2);
  if ( !KeReadStateEvent(v7 + 4) )
    KeWaitForSingleObject(&v7[4], Executive, 0, 0, 0LL);
  KeEnterCriticalRegion();
  if ( !ExAcquireResourceSharedLite(*((PERESOURCE *)v6 + 17), 0) )
  {
    DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v6 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v18, (const EVENT_DESCRIPTOR *)"g", v19, 40);
    ExAcquireResourceSharedLite(*((PERESOURCE *)v6 + 17), 1u);
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v6 + 2) + 16LL));
  }
  v28 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v31, (__int64)v6, 0, v8, 0);
  v9 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v31, 0LL);
  Resource = v9;
  if ( v9 < 0 )
  {
    WdLogSingleEntry2(3LL, v6, v9);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v31);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v27);
    if ( v22 )
    {
LABEL_37:
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v22 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v22 + 2), v22);
    }
  }
  else
  {
    Resource = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>(v6, v29, v29[1]);
    if ( Resource >= 0 )
    {
      if ( (unsigned __int64)(a1 + 2) > MmUserProbeAddress || a1 + 2 <= a1 )
        *(_BYTE *)MmUserProbeAddress = 0;
      *a1 = *(_OWORD *)v29;
      a1[1] = v30;
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v31);
      ExReleaseResourceLite(*((PERESOURCE *)v6 + 17));
      KeLeaveCriticalRegion();
      if ( v22 && _InterlockedExchangeAdd64((volatile signed __int64 *)v22 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v22 + 2), v22);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
      if ( v25 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, v23);
      }
      return 0LL;
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v31);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v27);
    if ( v22 )
      goto LABEL_37;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
  if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v23);
  return (unsigned int)Resource;
}
