/*
 * XREFs of DxgkGetAllocationPriority @ 0x1C0228830
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0003EE0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006A30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006B34 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0007000 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E2FD4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetAllocationPriority@DXGDEVICE@@QEAAJPEBU_D3DKMT_GETALLOCATIONPRIORITY@@E@Z @ 0x1C0226CA8 (-GetAllocationPriority@DXGDEVICE@@QEAAJPEBU_D3DKMT_GETALLOCATIONPRIORITY@@E@Z.c)
 */

__int64 __fastcall DxgkGetAllocationPriority(__int64 a1, __int64 a2, __int64 a3)
{
  _D3DKMT_GETALLOCATIONPRIORITY *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _KTHREAD **Current; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  DXGDEVICE *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v18; // r9
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  unsigned int AllocationPriority; // edi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  struct DXGDEVICE *v32; // [rsp+30h] [rbp-118h] BYREF
  int v33; // [rsp+38h] [rbp-110h] BYREF
  __int64 v34; // [rsp+40h] [rbp-108h]
  char v35; // [rsp+48h] [rbp-100h]
  struct DXGDEVICE *v36; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v37; // [rsp+58h] [rbp-F0h] BYREF
  char v38; // [rsp+60h] [rbp-E8h]
  _D3DKMT_GETALLOCATIONPRIORITY v39; // [rsp+68h] [rbp-E0h] BYREF
  _BYTE v40[160]; // [rsp+90h] [rbp-B8h] BYREF

  v3 = (_D3DKMT_GETALLOCATIONPRIORITY *)a1;
  v33 = -1;
  v34 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v35 = 1;
    v33 = 2138;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2138);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v33, 2138LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4);
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
LABEL_13:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33, v10);
    if ( v35 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, v16, v33);
    }
    return 3221225485LL;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_D3DKMT_GETALLOCATIONPRIORITY *)MmUserProbeAddress;
  v39 = *v3;
  v36 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v32, v39.hDevice, Current, &v36);
  v13 = v36;
  if ( !v36 )
  {
    v14 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v14 + 24) = v39.hDevice;
    *(_QWORD *)(v14 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v14);
    if ( v32 && _InterlockedExchangeAdd64((volatile signed __int64 *)v32 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v32 + 2), v32);
    goto LABEL_13;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v37, v36);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v40, (__int64)v13, 0, v18, 0);
  v19 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v40, 0LL);
  v23 = v19;
  if ( v19 >= 0 )
  {
    AllocationPriority = DXGDEVICE::GetAllocationPriority(v13, &v39, 1);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v40);
    if ( v37 && v38 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v37 + 136));
      KeLeaveCriticalRegion();
    }
    if ( v32 && _InterlockedExchangeAdd64((volatile signed __int64 *)v32 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v32 + 2), v32);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33, v29);
    if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v33);
    return AllocationPriority;
  }
  else
  {
    v24 = WdLogNewEntry5_WdWarning(v21, v20, v22);
    *(_QWORD *)(v24 + 24) = v13;
    *(_QWORD *)(v24 + 32) = v23;
    WdLogEvent5_WdWarning(v24);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v40);
    if ( v37 && v38 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v37 + 136));
      KeLeaveCriticalRegion();
    }
    if ( v32 && _InterlockedExchangeAdd64((volatile signed __int64 *)v32 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v32 + 2), v32);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33, v25);
    if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v33);
    return (unsigned int)v23;
  }
}
