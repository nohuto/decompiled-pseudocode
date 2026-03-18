/*
 * XREFs of ?DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z @ 0x1C01699BC
 * Callers:
 *     DxgkCreatePagingQueue @ 0x1C01699A0 (DxgkCreatePagingQueue.c)
 *     ?DxgkCddCreatePagingQueue@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@@Z @ 0x1C01E9F90 (-DxgkCddCreatePagingQueue@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@@Z.c)
 *     ?VmBusCreatePagingQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C036A2B0 (-VmBusCreatePagingQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
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
 *     ?CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C016A4E8 (-CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCreatePagingQueueInternal(struct _D3DKMT_CREATEPAGINGQUEUE *a1, int a2, __int64 a3)
{
  struct _D3DKMT_CREATEPAGINGQUEUE *v4; // r14
  __int128 *v5; // rax
  struct _D3DKMT_CREATEPAGINGQUEUE *v6; // rsi
  struct _KTHREAD **Current; // rax
  struct DXGDEVICE *v8; // r15
  __int64 v9; // r9
  int v10; // r12d
  __int64 PhysicalAdapterIndex; // rdx
  int v12; // r15d
  struct DXGPAGINGQUEUE *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // r8
  struct DXGDEVICE *v21; // [rsp+50h] [rbp-148h] BYREF
  int v22; // [rsp+58h] [rbp-140h] BYREF
  __int64 v23; // [rsp+60h] [rbp-138h]
  char v24; // [rsp+68h] [rbp-130h]
  struct _D3DKMT_CREATEPAGINGQUEUE *v25; // [rsp+70h] [rbp-128h]
  _QWORD v26[2]; // [rsp+78h] [rbp-120h] BYREF
  struct _D3DKMT_CREATEPAGINGQUEUE *v27; // [rsp+88h] [rbp-110h]
  struct DXGDEVICE *v28; // [rsp+90h] [rbp-108h] BYREF
  struct DXGPAGINGQUEUE *v29; // [rsp+98h] [rbp-100h] BYREF
  __int128 v30; // [rsp+A0h] [rbp-F8h] BYREF
  __int128 v31; // [rsp+B0h] [rbp-E8h]
  _BYTE v32[160]; // [rsp+C0h] [rbp-D8h] BYREF

  v4 = a1;
  v25 = a1;
  v22 = -1;
  v23 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v24 = 1;
    v22 = 2117;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2117);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v22, 2117);
  v30 = 0LL;
  v31 = 0LL;
  v27 = 0LL;
  if ( a2 )
  {
    v5 = (__int128 *)v4;
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v5 = (__int128 *)MmUserProbeAddress;
    v30 = *v5;
    v31 = v5[1];
    v6 = (struct _D3DKMT_CREATEPAGINGQUEUE *)&v30;
    v27 = (struct _D3DKMT_CREATEPAGINGQUEUE *)&v30;
  }
  else
  {
    v6 = v4;
    v27 = v4;
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v28 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v21, v6->hDevice, Current, &v28);
  v8 = v28;
  if ( !v28 )
  {
    WdLogSingleEntry2(2LL, v6->hDevice, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v6->hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_37:
    if ( v21 && _InterlockedExchangeAdd64((volatile signed __int64 *)v21 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v21 + 2), v21);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v22);
    return 3221225485LL;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v26, v28);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v32, (__int64)v8, 0, v9, 0);
  v10 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v32, 0LL);
  if ( v10 >= 0 )
  {
    PhysicalAdapterIndex = v6->PhysicalAdapterIndex;
    if ( (unsigned int)PhysicalAdapterIndex < *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL) + 288LL) )
    {
      v29 = 0LL;
      v12 = DXGDEVICE::CreatePagingQueue(v8, PhysicalAdapterIndex, v6->Priority, &v29);
      if ( v12 < 0 )
      {
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v32);
        if ( v26[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v26);
        if ( !v21 )
          goto LABEL_20;
      }
      else
      {
        v13 = v29;
        v6->hSyncObject = *(_DWORD *)(*((_QWORD *)v29 + 5) + 40LL);
        v6->FenceValueCPUVirtualAddress = *(void **)(*((_QWORD *)v13 + 5) + 56LL);
        v6->hPagingQueue = *((_DWORD *)v13 + 6);
        if ( a2 )
        {
          if ( (unsigned __int64)v4 >= MmUserProbeAddress )
            v4 = (struct _D3DKMT_CREATEPAGINGQUEUE *)MmUserProbeAddress;
          *(_OWORD *)&v4->hDevice = *(_OWORD *)&v6->hDevice;
          *(_OWORD *)&v4->FenceValueCPUVirtualAddress = *(_OWORD *)&v6->FenceValueCPUVirtualAddress;
        }
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v32);
        if ( v26[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v26);
        if ( !v21 )
          goto LABEL_20;
      }
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v21 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v21 + 2), v21);
LABEL_20:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
      if ( v24 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v22);
      }
      return (unsigned int)v12;
    }
    WdLogSingleEntry1(3LL, PhysicalAdapterIndex);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v32);
    if ( v26[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v26);
    goto LABEL_37;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v32);
  if ( v26[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v26);
  if ( v21 && _InterlockedExchangeAdd64((volatile signed __int64 *)v21 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v21 + 2), v21);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
  if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v22);
  return (unsigned int)v10;
}
