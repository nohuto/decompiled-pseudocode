/*
 * XREFs of ?DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z @ 0x1C0126F20
 * Callers:
 *     DxgkCreatePagingQueue @ 0x1C0158060 (DxgkCreatePagingQueue.c)
 *     ?DxgkCddCreatePagingQueue@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@@Z @ 0x1C015A850 (-DxgkCddCreatePagingQueue@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@@Z.c)
 *     ?VmBusCreatePagingQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023A800 (-VmBusCreatePagingQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0008348 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000B200 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000E890 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C000E994 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000F00C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0024550 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00DB790 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C00F1870 (-CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCreatePagingQueueInternal(struct _D3DKMT_CREATEPAGINGQUEUE *a1, int a2, __int64 a3)
{
  struct _D3DKMT_CREATEPAGINGQUEUE *v4; // r14
  __int64 v5; // rdx
  ULONG64 v6; // rcx
  __int128 *v7; // rax
  struct _D3DKMT_CREATEPAGINGQUEUE *v8; // rsi
  struct _KTHREAD **Current; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct DXGDEVICE *v12; // r15
  __int64 v13; // r9
  __int64 v14; // r8
  int v15; // r12d
  __int64 v16; // rcx
  __int64 PhysicalAdapterIndex; // rdx
  int v18; // r15d
  struct DXGPAGINGQUEUE *v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  struct DXGDEVICE *v32; // [rsp+30h] [rbp-148h] BYREF
  int v33; // [rsp+38h] [rbp-140h] BYREF
  __int64 v34; // [rsp+40h] [rbp-138h]
  char v35; // [rsp+48h] [rbp-130h]
  struct _D3DKMT_CREATEPAGINGQUEUE *v36; // [rsp+50h] [rbp-128h]
  _QWORD v37[2]; // [rsp+58h] [rbp-120h] BYREF
  struct _D3DKMT_CREATEPAGINGQUEUE *v38; // [rsp+68h] [rbp-110h]
  struct DXGDEVICE *v39; // [rsp+70h] [rbp-108h] BYREF
  struct DXGPAGINGQUEUE *v40; // [rsp+78h] [rbp-100h] BYREF
  __int128 v41; // [rsp+80h] [rbp-F8h] BYREF
  __int128 v42; // [rsp+90h] [rbp-E8h]
  _BYTE v43[160]; // [rsp+A0h] [rbp-D8h] BYREF

  v4 = a1;
  v36 = a1;
  v33 = -1;
  v34 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v35 = 1;
    v33 = 2117;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2117);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v33, 2117LL);
  v41 = 0LL;
  v42 = 0LL;
  v38 = 0LL;
  if ( a2 )
  {
    v6 = MmUserProbeAddress;
    v7 = (__int128 *)v4;
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v7 = (__int128 *)MmUserProbeAddress;
    v41 = *v7;
    v42 = v7[1];
    v8 = (struct _D3DKMT_CREATEPAGINGQUEUE *)&v41;
    v38 = (struct _D3DKMT_CREATEPAGINGQUEUE *)&v41;
  }
  else
  {
    v8 = v4;
    v38 = v4;
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v6, v5);
  v39 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v32, v8->hDevice, Current, &v39);
  v12 = v39;
  if ( !v39 )
  {
    v24 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v24 + 24) = v8->hDevice;
    *(_QWORD *)(v24 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v24);
LABEL_37:
    if ( v32 && _InterlockedExchangeAdd64((volatile signed __int64 *)v32 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v32 + 2), v32);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33, v25);
    if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v33);
    return 3221225485LL;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v37, v39);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v43, (__int64)v12, 0, v13, 0);
  v15 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v43, 0LL);
  if ( v15 >= 0 )
  {
    v16 = *(_QWORD *)(*((_QWORD *)v12 + 2) + 16LL);
    PhysicalAdapterIndex = v8->PhysicalAdapterIndex;
    if ( (unsigned int)PhysicalAdapterIndex < *(_DWORD *)(v16 + 280) )
    {
      v40 = 0LL;
      v18 = DXGDEVICE::CreatePagingQueue(v12, PhysicalAdapterIndex, v8->Priority, &v40);
      if ( v18 < 0 )
      {
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v43);
        if ( v37[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v37);
        if ( !v32 )
          goto LABEL_20;
      }
      else
      {
        v19 = v40;
        v8->hSyncObject = *(_DWORD *)(*((_QWORD *)v40 + 5) + 40LL);
        v8->FenceValueCPUVirtualAddress = *(void **)(*((_QWORD *)v19 + 5) + 56LL);
        v8->hPagingQueue = *((_DWORD *)v19 + 6);
        if ( a2 )
        {
          if ( (unsigned __int64)v4 >= MmUserProbeAddress )
            v4 = (struct _D3DKMT_CREATEPAGINGQUEUE *)MmUserProbeAddress;
          *(_OWORD *)&v4->hDevice = *(_OWORD *)&v8->hDevice;
          *(_OWORD *)&v4->FenceValueCPUVirtualAddress = *(_OWORD *)&v8->FenceValueCPUVirtualAddress;
        }
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v43);
        if ( v37[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v37);
        if ( !v32 )
          goto LABEL_20;
      }
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v32 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v32 + 2), v32);
LABEL_20:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33, v20);
      if ( v35 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v21, &EventProfilerExit, v22, v33);
      }
      return (unsigned int)v18;
    }
    v29 = WdLogNewEntry5_WdWarning(v16, PhysicalAdapterIndex, v14);
    *(_QWORD *)(v29 + 24) = v8->PhysicalAdapterIndex;
    WdLogEvent5_WdWarning(v29);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v43);
    if ( v37[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v37);
    goto LABEL_37;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v43);
  if ( v37[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v37);
  if ( v32 && _InterlockedExchangeAdd64((volatile signed __int64 *)v32 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v32 + 2), v32);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33, v26);
  if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v27, &EventProfilerExit, v28, v33);
  return (unsigned int)v15;
}
