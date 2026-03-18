/*
 * XREFs of ?DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z @ 0x1C00E3CEC
 * Callers:
 *     DxgkDestroyDevice @ 0x1C00E3950 (DxgkDestroyDevice.c)
 *     DxgkDestroyDeviceInternal @ 0x1C0151780 (DxgkDestroyDeviceInternal.c)
 *     ?VmBusDestroyDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0240030 (-VmBusDestroyDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C000200C (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C00020C4 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00025F8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0002A80 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0003EE0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00041C0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C00042D8 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C00056C8 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00071B4 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00099A8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     ?DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C00E3968 (-DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     ?DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C00E3A30 (-DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E4064 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ @ 0x1C00E48C4 (-DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyAllTrackedWorkloads@DXGDEVICE@@QEAAXXZ @ 0x1C00E4928 (-DestroyAllTrackedWorkloads@DXGDEVICE@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0254610 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 */

__int64 __fastcall DxgkDestroyDeviceImpl(const struct _D3DKMT_DESTROYDEVICE *a1, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // r14
  D3DKMT_HANDLE hDevice; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // esi
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // r8
  int v17; // edx
  __int64 v18; // r9
  char *v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdi
  ADAPTER_DISPLAY *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rax
  int v36; // [rsp+30h] [rbp-168h] BYREF
  __int64 v37; // [rsp+38h] [rbp-160h]
  char v38; // [rsp+40h] [rbp-158h]
  D3DKMT_HANDLE v39; // [rsp+48h] [rbp-150h]
  _QWORD v40[2]; // [rsp+50h] [rbp-148h] BYREF
  _BYTE v41[24]; // [rsp+60h] [rbp-138h] BYREF
  _BYTE v42[24]; // [rsp+78h] [rbp-120h] BYREF
  _QWORD v43[10]; // [rsp+90h] [rbp-108h] BYREF
  _BYTE v44[160]; // [rsp+E0h] [rbp-B8h] BYREF

  memset(v43, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v43[1]);
  v43[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v43[3]) = 50;
  LOBYTE(v43[6]) = -1;
  v36 = -1;
  v37 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v38 = 1;
    v36 = 2010;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v4, &EventProfilerEnter, v5, 2010);
  }
  else
  {
    v38 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v36, 2010LL);
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v29 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v29 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v29);
    goto LABEL_40;
  }
  if ( a2 )
  {
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (const struct _D3DKMT_DESTROYDEVICE *)MmUserProbeAddress;
    hDevice = a1->hDevice;
  }
  else
  {
    hDevice = a1->hDevice;
  }
  v39 = hDevice;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
    (DXGHANDLETABLELOCKEXCLUSIVE *)v41,
    (struct _KTHREAD **)Current);
  v12 = (hDevice >> 6) & 0xFFFFFF;
  if ( v12 >= *((_DWORD *)Current + 64) )
    goto LABEL_16;
  v13 = *((_QWORD *)Current + 30);
  v10 = *(unsigned int *)(v13 + 16LL * v12 + 8);
  v11 = (hDevice >> 25) & 0x60;
  if ( ((hDevice >> 25) & 0x60) != (*(_BYTE *)(v13 + 16LL * v12 + 8) & 0x60) || (v10 & 0x2000) != 0 || (v10 & 0x1F) == 0 )
    goto LABEL_16;
  v10 &= 0x1Fu;
  if ( (_BYTE)v10 != 3 )
  {
    v15 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v15 + 24) = 267LL;
    WdLogEvent5_WdError(v15);
LABEL_16:
    v14 = 0LL;
    goto LABEL_17;
  }
  v14 = *(_QWORD *)(v13 + 16LL * v12);
LABEL_17:
  if ( v14 )
  {
    if ( v12 < *((_DWORD *)Current + 64) )
    {
      v16 = *((_QWORD *)Current + 30);
      v17 = *(_DWORD *)(v16 + 16LL * v12 + 8);
      if ( ((hDevice >> 25) & 0x60) == (*(_BYTE *)(v16 + 16LL * v12 + 8) & 0x60)
        && (v17 & 0x2000) == 0
        && (v17 & 0x1F) != 0 )
      {
        *(_DWORD *)(v16 + 16LL * ((hDevice >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v41);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v40,
      (struct DXGDEVICE *)v14);
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
      (DXGAUTOPUSHLOCKEXCLUSIVE *)v42,
      (struct DXGPUSHLOCK *const)(v14 + 144));
    DXGDEVICE::DestroyAllContexts((DXGDEVICE *)v14, (struct DXGDEVICEACCESSLOCKEXCLUSIVE *)v40);
    DXGDEVICE::DestroyAllPagingQueues((DXGDEVICE *)v14, (struct DXGDEVICEACCESSLOCKEXCLUSIVE *)v40);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v44, v14, 2, v18, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v44, v19);
    DXGDEVICE::DestroyAllDeviceSyncObjects((DXGDEVICE *)v14);
    DXGDEVICE::DestroyAllTrackedWorkloads((DXGDEVICE *)v14);
    v22 = *(_QWORD *)(v14 + 1848);
    if ( v22 )
    {
      v23 = *(ADAPTER_DISPLAY **)(v22 + 2696);
      if ( !v23 )
      {
        v34 = WdLogNewEntry5_WdAssertion(0LL, v20);
        *(_QWORD *)(v34 + 24) = 2271LL;
        WdLogEvent5_WdAssertion(v34);
        v23 = *(ADAPTER_DISPLAY **)(v22 + 2696);
      }
      if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(v23, (const struct DXGDEVICE *)v14)
        || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v22 + 2696), (const struct DXGDEVICE *)v14) )
      {
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)v44, v24);
        DxgkReleaseVidPnSourceOwnerAndRestartCdds(
          (struct DXGDEVICE *)v14,
          (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v43,
          1u);
      }
    }
    else if ( *(_DWORD *)(v14 + 1860) )
    {
      v35 = WdLogNewEntry5_WdError(v21, v20);
      *(_QWORD *)(v35 + 24) = v14;
      *(_QWORD *)(v35 + 32) = *(unsigned int *)(v14 + 1860);
      WdLogEvent5_WdError(v35);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v44);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v42);
    if ( v40[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v40);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v14 + 16), (struct DXGDEVICE *)v14);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36, v25);
    if ( v38 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v36);
    }
    return 0LL;
  }
  v31 = WdLogNewEntry5_WdError(v11, v10);
  *(_QWORD *)(v31 + 24) = hDevice;
  *(_QWORD *)(v31 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v31);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v41);
LABEL_40:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36, v30);
  if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v32, &EventProfilerExit, v33, v36);
  return 3221225485LL;
}
