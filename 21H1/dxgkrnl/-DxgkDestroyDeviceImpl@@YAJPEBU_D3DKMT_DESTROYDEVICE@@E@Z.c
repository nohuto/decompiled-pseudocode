/*
 * XREFs of ?DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z @ 0x1C00DB418
 * Callers:
 *     DxgkDestroyDeviceInternal @ 0x1C00D94D8 (DxgkDestroyDeviceInternal.c)
 *     DxgkDestroyDevice @ 0x1C00DB400 (DxgkDestroyDevice.c)
 *     ?VmBusDestroyDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023BDD0 (-VmBusDestroyDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0008348 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C000843C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C00084F4 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000A1D4 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000A30C (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000A72C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C000A884 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C000AA18 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000B200 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000F00C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0024550 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00DB790 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyAllTrackedWorkloads@DXGDEVICE@@QEAAXXZ @ 0x1C00DD120 (-DestroyAllTrackedWorkloads@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ @ 0x1C00DD16C (-DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C00DD490 (-DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     ?DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C00DD74C (-DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0250310 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
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
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rax
  int v35; // [rsp+30h] [rbp-168h] BYREF
  __int64 v36; // [rsp+38h] [rbp-160h]
  char v37; // [rsp+40h] [rbp-158h]
  D3DKMT_HANDLE v38; // [rsp+48h] [rbp-150h]
  _QWORD v39[2]; // [rsp+50h] [rbp-148h] BYREF
  _BYTE v40[24]; // [rsp+60h] [rbp-138h] BYREF
  _BYTE v41[24]; // [rsp+78h] [rbp-120h] BYREF
  _QWORD v42[10]; // [rsp+90h] [rbp-108h] BYREF
  _BYTE v43[160]; // [rsp+E0h] [rbp-B8h] BYREF

  memset(v42, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v42[1]);
  v42[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v42[3]) = 50;
  LOBYTE(v42[6]) = -1;
  v35 = -1;
  v36 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v37 = 1;
    v35 = 2010;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v4, &EventProfilerEnter, v5, 2010);
  }
  else
  {
    v37 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v35, 2010LL);
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v28 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v28 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v28);
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
  v38 = hDevice;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
    (DXGHANDLETABLELOCKEXCLUSIVE *)v40,
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
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v40);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v39,
      (struct DXGDEVICE *)v14);
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
      (DXGAUTOPUSHLOCKEXCLUSIVE *)v41,
      (struct DXGPUSHLOCK *const)(v14 + 144));
    DXGDEVICE::DestroyAllContexts((DXGDEVICE *)v14, (struct DXGDEVICEACCESSLOCKEXCLUSIVE *)v39);
    DXGDEVICE::DestroyAllPagingQueues((DXGDEVICE *)v14, (struct DXGDEVICEACCESSLOCKEXCLUSIVE *)v39);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v43, v14, 2, v18, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v43, v19);
    DXGDEVICE::DestroyAllDeviceSyncObjects((DXGDEVICE *)v14);
    DXGDEVICE::DestroyAllTrackedWorkloads((DXGDEVICE *)v14);
    v22 = *(_QWORD *)(v14 + 1848);
    if ( v22 )
    {
      v23 = *(ADAPTER_DISPLAY **)(v22 + 2672);
      if ( !v23 )
      {
        v33 = WdLogNewEntry5_WdAssertion(0LL, v20);
        *(_QWORD *)(v33 + 24) = 2271LL;
        WdLogEvent5_WdAssertion(v33);
        v23 = *(ADAPTER_DISPLAY **)(v22 + 2672);
      }
      if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(v23, (const struct DXGDEVICE *)v14)
        || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v22 + 2672), (const struct DXGDEVICE *)v14) )
      {
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)v43);
        DxgkReleaseVidPnSourceOwnerAndRestartCdds(
          (struct DXGDEVICE *)v14,
          (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v42,
          1u);
      }
    }
    else if ( *(_DWORD *)(v14 + 1860) )
    {
      v34 = WdLogNewEntry5_WdError(v21, v20);
      *(_QWORD *)(v34 + 24) = v14;
      *(_QWORD *)(v34 + 32) = *(unsigned int *)(v14 + 1860);
      WdLogEvent5_WdError(v34);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v43);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v41);
    if ( v39[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v39);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v14 + 16), (struct DXGDEVICE *)v14);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35, v24);
    if ( v37 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v35);
    }
    return 0LL;
  }
  v30 = WdLogNewEntry5_WdError(v11, v10);
  *(_QWORD *)(v30 + 24) = hDevice;
  *(_QWORD *)(v30 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v30);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v40);
LABEL_40:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35, v29);
  if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v31, &EventProfilerExit, v32, v35);
  return 3221225485LL;
}
