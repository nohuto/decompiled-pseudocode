/*
 * XREFs of ?DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z @ 0x1C0166120
 * Callers:
 *     DxgkDestroyDevice @ 0x1C0166040 (DxgkDestroyDevice.c)
 *     DxgkDestroyDeviceInternal @ 0x1C01DA7A8 (DxgkDestroyDeviceInternal.c)
 *     ?VmBusDestroyDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C036BDE0 (-VmBusDestroyDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C00093C4 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0009488 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00096EC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009730 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C000BC60 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000EDA8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C000EE78 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000EEA8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C002B26C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C002B714 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C0166058 (-DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C016793C (-DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     ?DestroyAllTrackedWorkloads@DXGDEVICE@@QEAAXXZ @ 0x1C016E34C (-DestroyAllTrackedWorkloads@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ @ 0x1C016E398 (-DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C02E4B6C (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 */

__int64 __fastcall DxgkDestroyDeviceImpl(const struct _D3DKMT_DESTROYDEVICE *a1, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  struct DXGPROCESS *Current; // r14
  D3DKMT_HANDLE hDevice; // edi
  unsigned int v8; // esi
  __int64 v9; // r8
  int v10; // edx
  __int64 v11; // rbx
  __int64 v12; // r8
  int v13; // edx
  __int64 v14; // r9
  char *v15; // rdx
  __int64 v16; // rdi
  ADAPTER_DISPLAY *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v21; // rcx
  __int64 v22; // r8
  bool v23; // sf
  int v24; // [rsp+50h] [rbp-178h] BYREF
  __int64 v25; // [rsp+58h] [rbp-170h]
  char v26; // [rsp+60h] [rbp-168h]
  D3DKMT_HANDLE v27; // [rsp+68h] [rbp-160h]
  _QWORD v28[2]; // [rsp+70h] [rbp-158h] BYREF
  _BYTE v29[24]; // [rsp+80h] [rbp-148h] BYREF
  _BYTE v30[24]; // [rsp+98h] [rbp-130h] BYREF
  _QWORD v31[10]; // [rsp+B0h] [rbp-118h] BYREF
  _BYTE v32[160]; // [rsp+100h] [rbp-C8h] BYREF

  memset(v31, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v31[1]);
  v31[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v31[3]) = 50;
  LOBYTE(v31[6]) = -1;
  v24 = -1;
  v25 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v26 = 1;
    v24 = 2010;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v4, &EventProfilerEnter, v5, 2010);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v24, 2010);
  Current = DXGPROCESS::GetCurrent();
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
    if ( v26 )
    {
      v23 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
      goto LABEL_42;
    }
    return 3221225485LL;
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
  v27 = hDevice;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v29, Current);
  v8 = (hDevice >> 6) & 0xFFFFFF;
  if ( v8 < *((_DWORD *)Current + 74) )
  {
    v9 = *((_QWORD *)Current + 35);
    v10 = *(_DWORD *)(v9 + 16LL * v8 + 8);
    if ( ((hDevice >> 25) & 0x60) == (*(_BYTE *)(v9 + 16LL * v8 + 8) & 0x60) && (v10 & 0x2000) == 0 && (v10 & 0x1F) != 0 )
    {
      if ( (v10 & 0x1F) == 3 )
      {
        v11 = *(_QWORD *)(v9 + 16LL * v8);
        goto LABEL_17;
      }
      WdLogSingleEntry1(2LL, 267LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v11 = 0LL;
LABEL_17:
  if ( !v11 )
  {
    WdLogSingleEntry2(2LL, hDevice, -1073741811LL);
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
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v29);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
    if ( v26 )
    {
      LOBYTE(v21) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      v23 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_42:
      if ( v23 )
        McTemplateK0q_EtwWriteTransfer(v21, &EventProfilerExit, v22, v24);
      return 3221225485LL;
    }
    return 3221225485LL;
  }
  if ( v8 < *((_DWORD *)Current + 74) )
  {
    v12 = *((_QWORD *)Current + 35);
    v13 = *(_DWORD *)(v12 + 16LL * v8 + 8);
    if ( ((hDevice >> 25) & 0x60) == (*(_BYTE *)(v12 + 16LL * v8 + 8) & 0x60)
      && (v13 & 0x2000) == 0
      && (v13 & 0x1F) != 0 )
    {
      *(_DWORD *)(v12 + 16LL * ((hDevice >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v29);
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)v28,
    (struct DXGDEVICE *)v11);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v30, (struct _KTHREAD **)(v11 + 144));
  DXGDEVICE::DestroyAllContexts((DXGDEVICE *)v11, (struct DXGDEVICEACCESSLOCKEXCLUSIVE *)v28);
  DXGDEVICE::DestroyAllPagingQueues((DXGDEVICE *)v11, (struct DXGDEVICEACCESSLOCKEXCLUSIVE *)v28);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v32, v11, 2, v14, 0);
  COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v32, v15);
  DXGDEVICE::DestroyAllDeviceSyncObjects((DXGDEVICE *)v11);
  DXGDEVICE::DestroyAllTrackedWorkloads((DXGDEVICE *)v11);
  v16 = *(_QWORD *)(v11 + 1848);
  if ( v16 )
  {
    v17 = *(ADAPTER_DISPLAY **)(v16 + 2792);
    if ( !v17 )
    {
      WdLogSingleEntry1(1LL, 2323LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
        2323LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v17 = *(ADAPTER_DISPLAY **)(v16 + 2792);
    }
    if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(v17, (const struct DXGDEVICE *)v11)
      || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v16 + 2792), (const struct DXGDEVICE *)v11) )
    {
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)v32);
      DxgkReleaseVidPnSourceOwnerAndRestartCdds(
        (struct DXGDEVICE *)v11,
        (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v31,
        1u);
    }
  }
  else if ( *(_DWORD *)(v11 + 1860) )
  {
    WdLogSingleEntry2(2LL, v11, *(unsigned int *)(v11 + 1860));
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%I64x is being destroyed but VidPnOwnershipCount = 0x%I64x",
      v11,
      *(unsigned int *)(v11 + 1860),
      0LL,
      0LL,
      0LL);
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v32);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v30);
  if ( v28[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v28);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v11 + 16), (struct DXGDEVICE *)v11);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
  if ( v26 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v24);
  }
  return 0LL;
}
