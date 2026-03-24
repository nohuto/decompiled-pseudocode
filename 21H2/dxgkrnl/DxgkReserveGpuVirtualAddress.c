/*
 * XREFs of DxgkReserveGpuVirtualAddress @ 0x1C0175140
 * Callers:
 *     ?VmBusReserveGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0245D20 (-VmBusReserveGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004130 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0007174 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007578 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007658 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009DE0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C0009FD8 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0019134 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x1C001E140 (-Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ @ 0x1C0025F98 (-ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C00F7CD0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendReserveGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z @ 0x1C024B4C8 (-VmBusSendReserveGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAUD3DDDI_RESERVEGPUVIRTU.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0285260 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DxgkReserveGpuVirtualAddress(ULONG64 a1, __int64 a2, __int64 a3)
{
  bool v4; // di
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _KTHREAD **Current; // r13
  __int64 v10; // rdx
  ULONG64 v11; // rcx
  __int64 v12; // r8
  D3DDDI_RESERVEGPUVIRTUALADDRESS *v13; // rdi
  D3DDDI_RESERVEGPUVIRTUALADDRESS *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct DXGPAGINGQUEUE *v18; // r14
  struct DXGADAPTER *v19; // rsi
  __int64 v20; // r15
  struct DXGADAPTER *v21; // rsi
  struct DXGPAGINGQUEUE *v22; // r12
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // esi
  __int64 v26; // r8
  __int64 v27; // rdx
  ULONG64 v28; // r8
  _QWORD *v29; // rdx
  _QWORD *v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rax
  DXGPAGINGQUEUE *v39; // rcx
  struct DXGADAPTER **v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  int PairingAdapters; // r12d
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  unsigned int v53; // r14d
  unsigned int HostProcess; // eax
  bool v55; // [rsp+40h] [rbp-198h]
  int v56; // [rsp+48h] [rbp-190h] BYREF
  __int64 v57; // [rsp+50h] [rbp-188h]
  char v58; // [rsp+58h] [rbp-180h]
  DXGPAGINGQUEUE *v59; // [rsp+60h] [rbp-178h] BYREF
  struct DXGADAPTER *v60; // [rsp+68h] [rbp-170h] BYREF
  unsigned __int64 v61; // [rsp+70h] [rbp-168h] BYREF
  struct DXGPAGINGQUEUE *v62; // [rsp+78h] [rbp-160h] BYREF
  struct DXGADAPTER *v63; // [rsp+80h] [rbp-158h] BYREF
  DXGADAPTER *v64; // [rsp+88h] [rbp-150h] BYREF
  D3DDDI_RESERVEGPUVIRTUALADDRESS *v65; // [rsp+98h] [rbp-140h]
  ULONG64 v66; // [rsp+A0h] [rbp-138h]
  struct _KTHREAD **v67; // [rsp+A8h] [rbp-130h]
  D3DDDI_RESERVEGPUVIRTUALADDRESS v68; // [rsp+D0h] [rbp-108h] BYREF
  _BYTE v69[144]; // [rsp+120h] [rbp-B8h] BYREF

  v66 = a1;
  v56 = -1;
  v57 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v58 = 1;
    v56 = 2098;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2098);
  }
  else
  {
    v58 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v56, 2098LL);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v55 = v4;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v6, v5);
  v67 = Current;
  if ( !Current )
  {
    v35 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v35 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v35);
LABEL_60:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56, v36);
    if ( v58 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v51, &EventProfilerExit, v52, v56);
    return 3221225485LL;
  }
  memset(&v68, 0, sizeof(v68));
  if ( v4 )
  {
    v13 = &v68;
    v65 = &v68;
    v11 = MmUserProbeAddress;
    v14 = (D3DDDI_RESERVEGPUVIRTUALADDRESS *)a1;
    if ( a1 >= MmUserProbeAddress )
      v14 = (D3DDDI_RESERVEGPUVIRTUALADDRESS *)MmUserProbeAddress;
    v68 = *v14;
  }
  else
  {
    v13 = (D3DDDI_RESERVEGPUVIRTUALADDRESS *)a1;
    v65 = (D3DDDI_RESERVEGPUVIRTUALADDRESS *)a1;
  }
  if ( v13->ReservationType > D3DDDIGPUVIRTUALADDRESS_RESERVE_ZERO )
  {
    v37 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v37 + 24) = -1073741811LL;
    *(_QWORD *)(v37 + 32) = 12778LL;
    WdLogEvent5_WdWarning(v37);
    goto LABEL_60;
  }
  v62 = 0LL;
  DXGPAGINGQUEUEBYHANDLE::Open((DXGPAGINGQUEUEBYHANDLE *)&v59, v13->hPagingQueue, Current, &v62, 0);
  v63 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v64, v13->hPagingQueue, Current, &v63, 0);
  v18 = v62;
  v19 = v63;
  if ( !v62 && !v63 )
  {
    v38 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v38 + 24) = v13->hPagingQueue;
    *(_QWORD *)(v38 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v38);
    if ( v64 )
      DXGADAPTER::ReleaseReference(v64);
    v39 = v59;
    if ( !v59 )
      goto LABEL_60;
    goto LABEL_59;
  }
  v20 = 0LL;
  if ( v62 )
  {
    v19 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v62 + 2) + 16LL) + 16LL);
    v20 = *((_QWORD *)v62 + 4);
  }
  v60 = 0LL;
  if ( *((_QWORD *)v19 + 338) )
  {
    DXGADAPTER_REFERENCE::Assign(&v60, v19);
    goto LABEL_14;
  }
  v40 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v60, v15);
  PairingAdapters = DxgkpGetPairingAdapters(v19, 0LL, v40, &v61, 0LL, 0LL, 0);
  if ( PairingAdapters >= 0 )
  {
LABEL_14:
    v21 = v60;
    v22 = (struct DXGPAGINGQUEUE *)*((_QWORD *)v60 + 338);
    v62 = v22;
    if ( *((_BYTE *)v60 + 209) )
    {
      if ( v18 )
        v53 = *((_DWORD *)v18 + 7);
      else
        v53 = *((_DWORD *)v60 + 1078);
      HostProcess = DXGPROCESS::GetHostProcess((DXGPROCESS *)Current);
      v25 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendReserveGpuVirtualAddress(
              (struct DXGADAPTER *)((char *)v21 + 4240),
              HostProcess,
              v53,
              v13);
    }
    else
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v69, v60, 0LL);
      v25 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v69, 0LL);
      if ( v25 < 0 )
      {
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v69, v23);
LABEL_26:
        DXGADAPTER_REFERENCE::Assign(&v60, 0LL);
        if ( v64 )
          DXGADAPTER::ReleaseReference(v64);
        if ( v59 )
          DXGPAGINGQUEUE::ReleaseReference(v59, v31);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56, v31);
        if ( v58 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v32, &EventProfilerExit, v33, v56);
        }
        return (unsigned int)v25;
      }
      if ( v13->Reserved0 > 1 )
      {
        v49 = WdLogNewEntry5_WdWarning(v24, v23, v26);
        goto LABEL_56;
      }
      if ( v13->Reserved0 == 1 && !v20 )
      {
        v49 = WdLogNewEntry5_WdWarning(v24, v23, v26);
        *(_QWORD *)(v49 + 32) = 12845LL;
LABEL_56:
        *(_QWORD *)(v49 + 24) = -1073741811LL;
        WdLogEvent5_WdWarning(v49);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v69, v50);
        DXGADAPTER_REFERENCE::Assign(&v60, 0LL);
        if ( v64 )
          DXGADAPTER::ReleaseReference(v64);
        v39 = v59;
        if ( !v59 )
          goto LABEL_60;
LABEL_59:
        DXGPAGINGQUEUE::ReleaseReference(v39, v36);
        goto LABEL_60;
      }
      v25 = (*(__int64 (__fastcall **)(_QWORD, struct _KTHREAD **, __int64, D3DDDI_RESERVEGPUVIRTUALADDRESS *))(*(_QWORD *)(*((_QWORD *)v22 + 80) + 8LL) + 792LL))(
              *((_QWORD *)v22 + 81),
              Current,
              v20,
              v13);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v69, v27);
    }
    if ( v25 >= 0 && v55 )
    {
      v28 = v66;
      v29 = (_QWORD *)(v66 + 56);
      if ( v66 + 56 >= MmUserProbeAddress )
        v29 = (_QWORD *)MmUserProbeAddress;
      *v29 = v13->VirtualAddress;
      v30 = (_QWORD *)(v28 + 64);
      if ( v28 + 64 >= MmUserProbeAddress )
        v30 = (_QWORD *)MmUserProbeAddress;
      *v30 = v13->PagingFenceValue;
    }
    goto LABEL_26;
  }
  v45 = WdLogNewEntry5_WdWarning(v42, v41, v43);
  *(_QWORD *)(v45 + 24) = v19;
  WdLogEvent5_WdWarning(v45);
  DXGADAPTER_REFERENCE::Assign(&v60, 0LL);
  if ( v64 )
    DXGADAPTER::ReleaseReference(v64);
  if ( v59 )
    DXGPAGINGQUEUE::ReleaseReference(v59, v46);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56, v46);
  if ( v58 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v47, &EventProfilerExit, v48, v56);
  return (unsigned int)PairingAdapters;
}
