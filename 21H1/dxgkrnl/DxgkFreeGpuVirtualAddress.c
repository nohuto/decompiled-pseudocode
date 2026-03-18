/*
 * XREFs of DxgkFreeGpuVirtualAddress @ 0x1C0161550
 * Callers:
 *     ?VmBusFreeGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023D2B0 (-VmBusFreeGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C0009A48 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000ECD8 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000F0BC (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C00FA240 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendFreeGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJII_K0@Z @ 0x1C0244238 (-VmBusSendFreeGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJII_K0@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C02809D4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DxgkFreeGpuVirtualAddress(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rbx
  bool v4; // si
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _KTHREAD **Current; // r15
  unsigned int *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct DXGADAPTER *v14; // rbx
  __int64 v15; // rdx
  int v16; // ebx
  struct DXGADAPTER *v17; // r14
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v23; // rax
  __int64 v24; // rdx
  _QWORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  struct DXGADAPTER **v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  int PairingAdapters; // r14d
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  unsigned int v37; // ebx
  unsigned int HostProcess; // eax
  int v39; // [rsp+40h] [rbp-118h] BYREF
  __int64 v40; // [rsp+48h] [rbp-110h]
  char v41; // [rsp+50h] [rbp-108h]
  struct DXGADAPTER *v42; // [rsp+58h] [rbp-100h] BYREF
  unsigned __int64 v43; // [rsp+60h] [rbp-F8h] BYREF
  struct DXGADAPTER *v44; // [rsp+68h] [rbp-F0h] BYREF
  DXGADAPTER *v45; // [rsp+70h] [rbp-E8h] BYREF
  __int128 v46; // [rsp+80h] [rbp-D8h] BYREF
  __int64 v47; // [rsp+90h] [rbp-C8h]
  _BYTE v48[144]; // [rsp+A0h] [rbp-B8h] BYREF

  v3 = a1;
  v39 = -1;
  v40 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v41 = 1;
    v39 = 2099;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2099);
  }
  else
  {
    v41 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v39, 2099LL);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v6, v5);
  if ( !Current )
  {
    v23 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v23 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v23);
LABEL_25:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39, v24);
    if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v39);
    return 3221225485LL;
  }
  v46 = 0LL;
  v47 = 0LL;
  if ( v4 )
  {
    v10 = (unsigned int *)&v46;
    if ( v3 >= MmUserProbeAddress )
      v3 = MmUserProbeAddress;
    v46 = *(_OWORD *)v3;
    v47 = *(_QWORD *)(v3 + 16);
  }
  else
  {
    v10 = (unsigned int *)v3;
  }
  v44 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v45, *v10, Current, &v44, 1);
  v14 = v44;
  if ( !v44 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13);
    v25[3] = -1073741811LL;
    v25[4] = Current;
    v25[5] = *v10;
    WdLogEvent5_WdWarning(v25);
    if ( v45 )
      DXGADAPTER::ReleaseReferenceNoTracking(v45);
    goto LABEL_25;
  }
  v42 = 0LL;
  if ( *((_QWORD *)v44 + 335) )
  {
    DXGADAPTER_REFERENCE::Assign(&v42, v44);
LABEL_11:
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v48, v42, 0LL);
    v16 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v48, 0LL);
    if ( v16 >= 0 )
    {
      v17 = v42;
      if ( *((_BYTE *)v42 + 209) )
      {
        v37 = *((_DWORD *)v42 + 1070);
        HostProcess = DXGPROCESS::GetHostProcess((DXGPROCESS *)Current);
        v18 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendFreeGpuVirtualAddress(
                (struct DXGADAPTER *)((char *)v17 + 4208),
                HostProcess,
                v37,
                *((_QWORD *)v10 + 1),
                *((_QWORD *)v10 + 2));
      }
      else
      {
        v18 = (*(__int64 (__fastcall **)(_QWORD, struct _KTHREAD **, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v42 + 335) + 640LL)
                                                                                                + 8LL)
                                                                                    + 808LL))(
                *(_QWORD *)(*((_QWORD *)v42 + 335) + 648LL),
                Current,
                v10);
      }
      v16 = v18;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v48, v15);
    DXGADAPTER_REFERENCE::Assign(&v42, 0LL);
    if ( v45 )
      DXGADAPTER::ReleaseReferenceNoTracking(v45);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39, v19);
    if ( v41 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v39);
    }
    return (unsigned int)v16;
  }
  v28 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v42, v11);
  PairingAdapters = DxgkpGetPairingAdapters(v14, 0LL, v28, &v43, 0LL, 0LL, 0);
  if ( PairingAdapters >= 0 )
    goto LABEL_11;
  v33 = WdLogNewEntry5_WdWarning(v30, v29, v31);
  *(_QWORD *)(v33 + 24) = v14;
  WdLogEvent5_WdWarning(v33);
  DXGADAPTER_REFERENCE::Assign(&v42, 0LL);
  if ( v45 )
    DXGADAPTER::ReleaseReferenceNoTracking(v45);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39, v34);
  if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v35, &EventProfilerExit, v36, v39);
  return (unsigned int)PairingAdapters;
}
