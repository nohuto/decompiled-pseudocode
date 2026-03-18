/*
 * XREFs of DxgkFreeGpuVirtualAddress @ 0x1C01A5B40
 * Callers:
 *     ?VmBusFreeGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C036D960 (-VmBusFreeGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C000969C (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000F8D4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000FB94 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01798C0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C033633C (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?VmBusSendFreeGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJII_K0@Z @ 0x1C0377878 (-VmBusSendFreeGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJII_K0@Z.c)
 */

__int64 __fastcall DxgkFreeGpuVirtualAddress(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rbx
  bool v4; // di
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _KTHREAD **Current; // r12
  unsigned int *v10; // rdi
  struct DXGADAPTER *v11; // rbx
  unsigned int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // r8
  bool v16; // sf
  struct DXGADAPTER **v17; // rax
  int PairingAdapters; // esi
  __int64 v19; // rcx
  __int64 v20; // r8
  DXG_GUEST_VIRTUALGPU_VMBUS *v21; // r14
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // rdi
  unsigned int v24; // esi
  unsigned int HostProcess; // eax
  int v26; // [rsp+50h] [rbp-118h] BYREF
  __int64 v27; // [rsp+58h] [rbp-110h]
  char v28; // [rsp+60h] [rbp-108h]
  struct DXGADAPTER *v29; // [rsp+68h] [rbp-100h] BYREF
  unsigned __int64 v30; // [rsp+70h] [rbp-F8h] BYREF
  struct DXGADAPTER *v31; // [rsp+78h] [rbp-F0h] BYREF
  DXGADAPTER *v32; // [rsp+80h] [rbp-E8h] BYREF
  __int128 v33; // [rsp+90h] [rbp-D8h] BYREF
  __int64 v34; // [rsp+A0h] [rbp-C8h]
  _BYTE v35[144]; // [rsp+B0h] [rbp-B8h] BYREF

  v3 = a1;
  v26 = -1;
  v27 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v28 = 1;
    v26 = 2099;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2099);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v26, 2099);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v6, v5, v7, v8);
  if ( !Current )
  {
    v12 = -1073741811;
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
LABEL_18:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
    if ( !v28 )
      return v12;
    v16 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_38:
    if ( v16 )
      McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v26);
    return v12;
  }
  v33 = 0LL;
  v34 = 0LL;
  if ( v4 )
  {
    v10 = (unsigned int *)&v33;
    if ( v3 >= MmUserProbeAddress )
      v3 = MmUserProbeAddress;
    v33 = *(_OWORD *)v3;
    v34 = *(_QWORD *)(v3 + 16);
  }
  else
  {
    v10 = (unsigned int *)v3;
  }
  v31 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v32, *v10, Current, &v31, 1);
  v11 = v31;
  if ( !v31 )
  {
    v12 = -1073741811;
    WdLogSingleEntry3(3LL, -1073741811LL, Current, *v10);
    if ( v32 )
      DXGADAPTER::ReleaseReference(v32);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
    if ( !v28 )
      return v12;
    LOBYTE(v13) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v16 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_38;
  }
  v29 = 0LL;
  if ( *((_QWORD *)v31 + 350) )
  {
    DXGADAPTER_REFERENCE::Assign(&v29, v31);
    goto LABEL_11;
  }
  v17 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v29);
  PairingAdapters = DxgkpGetPairingAdapters(v11, 0, v17, &v30, 0LL, 0LL, 0);
  if ( PairingAdapters >= 0 )
  {
LABEL_11:
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v35, v29, 0LL);
    v12 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v35, 0LL);
    if ( (v12 & 0x80000000) == 0 )
    {
      if ( !*((_BYTE *)v29 + 209) )
      {
        v12 = (*(__int64 (__fastcall **)(_QWORD, struct _KTHREAD **, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v29 + 350) + 648LL)
                                                                                                + 8LL)
                                                                                    + 816LL))(
                *(_QWORD *)(*((_QWORD *)v29 + 350) + 656LL),
                Current,
                v10);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v35);
        if ( v29 )
          DXGADAPTER::ReleaseReference(v29);
        v29 = 0LL;
        goto LABEL_16;
      }
      v21 = (struct DXGADAPTER *)((char *)v29 + 4344);
      v22 = *((_QWORD *)v10 + 2);
      v23 = *((_QWORD *)v10 + 1);
      v24 = *((_DWORD *)v29 + 1108);
      HostProcess = DXGPROCESS::GetHostProcess((DXGPROCESS *)Current);
      v12 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendFreeGpuVirtualAddress(v21, HostProcess, v24, v23, v22);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v35);
    DXGADAPTER_REFERENCE::Assign(&v29, 0LL);
LABEL_16:
    if ( v32 )
      DXGADAPTER::ReleaseReference(v32);
    goto LABEL_18;
  }
  WdLogSingleEntry1(3LL, v11);
  DXGADAPTER_REFERENCE::Assign(&v29, 0LL);
  if ( v32 )
    DXGADAPTER::ReleaseReference(v32);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
  if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v26);
  return (unsigned int)PairingAdapters;
}
