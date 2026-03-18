/*
 * XREFs of DxgkQueryAllocationResidency @ 0x1C02D8F70
 * Callers:
 *     ?VmBusQueryAllocationResidency@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0372B50 (-VmBusQueryAllocationResidency@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C0009824 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009864 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0009904 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C000BC60 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z @ 0x1C02D6B7C (-QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z.c)
 */

__int64 __fastcall DxgkQueryAllocationResidency(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 *v3; // rbx
  unsigned __int8 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _KTHREAD **Current; // r8
  unsigned int v10; // esi
  __int64 v11; // rcx
  __int64 v12; // r8
  bool v13; // sf
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  struct DXGPROCESS **v16; // rbx
  __int64 hDevice; // rbx
  __int64 v19; // r9
  int v20; // eax
  unsigned int v21; // ebx
  __int64 v22; // rcx
  __int64 v23; // r8
  struct DXGDEVICE *v24; // [rsp+50h] [rbp-128h] BYREF
  int v25; // [rsp+58h] [rbp-120h] BYREF
  __int64 v26; // [rsp+60h] [rbp-118h]
  char v27; // [rsp+68h] [rbp-110h]
  struct DXGDEVICE *v28; // [rsp+70h] [rbp-108h] BYREF
  _D3DKMT_QUERYALLOCATIONRESIDENCY v29; // [rsp+78h] [rbp-100h] BYREF
  _BYTE v30[24]; // [rsp+98h] [rbp-E0h] BYREF
  _BYTE v31[160]; // [rsp+B0h] [rbp-C8h] BYREF

  v3 = (__int128 *)a1;
  v25 = -1;
  v26 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v27 = 1;
    v25 = 2008;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2008);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v25, 2008);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v6, v5, v7, v8);
  if ( !Current )
  {
    v10 = -1073741811;
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
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( !v27 )
      return v10;
    v13 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_20:
    if ( v13 )
      McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, v25);
    return v10;
  }
  if ( v4 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (__int128 *)MmUserProbeAddress;
    v14 = *v3;
    v15 = v3[1];
  }
  else
  {
    v14 = *v3;
    v15 = v3[1];
  }
  *(_OWORD *)&v29.AllocationCount = v15;
  *(_OWORD *)&v29.hDevice = v14;
  v28 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v24, v14, Current, &v28);
  v16 = (struct DXGPROCESS **)v28;
  if ( !v28 )
  {
    hDevice = v29.hDevice;
    v10 = -1073741811;
    WdLogSingleEntry2(2LL, v29.hDevice, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v24 && _InterlockedExchangeAdd64((volatile signed __int64 *)v24 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v24 + 2), v24);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( !v27 )
      return v10;
    LOBYTE(v11) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v13 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_20;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v30, v28);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v31, (__int64)v16, 0, v19, 0);
  v20 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v31, 0LL);
  v10 = v20;
  if ( v20 < 0 )
  {
    WdLogSingleEntry2(3LL, v16, v20);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v31);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v30);
    if ( v24 && _InterlockedExchangeAdd64((volatile signed __int64 *)v24 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v24 + 2), v24);
    goto LABEL_7;
  }
  v21 = DXGDEVICE::QueryAllocationResidency(v16, &v29, v4);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v31);
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v30);
  if ( v24 && _InterlockedExchangeAdd64((volatile signed __int64 *)v24 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v24 + 2), v24);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
  if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v25);
  return v21;
}
