/*
 * XREFs of DxgkSetContextSchedulingPriority @ 0x1C00D97A0
 * Callers:
 *     ?VmBusSetContextSchedulingPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024A310 (-VmBusSetContextSchedulingPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0007F18 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0008020 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0008348 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000A3BC (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000B200 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000E890 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000F00C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0024550 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?SetSchedulingPriority@DXGCONTEXT@@QEAAXH_N@Z @ 0x1C00D9720 (-SetSchedulingPriority@DXGCONTEXT@@QEAAXH_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendSetContextSchedulingPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@HE@Z @ 0x1C0247758 (-VmBusSendSetContextSchedulingPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGC.c)
 */

__int64 __fastcall DxgkSetContextSchedulingPriority(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  bool v4; // di
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // r14
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  DXGCONTEXT *v12; // rdi
  int v13; // ebx
  char v14; // r15
  unsigned int v15; // r14d
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r12
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r14
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rax
  int v47; // eax
  int v48; // [rsp+30h] [rbp-108h] BYREF
  __int64 v49; // [rsp+38h] [rbp-100h]
  char v50; // [rsp+40h] [rbp-F8h]
  int v51[2]; // [rsp+48h] [rbp-F0h]
  DXGCONTEXT *v52[2]; // [rsp+50h] [rbp-E8h] BYREF
  _BYTE v53[16]; // [rsp+60h] [rbp-D8h] BYREF
  _BYTE v54[160]; // [rsp+70h] [rbp-C8h] BYREF

  v3 = (__int64 *)a1;
  v48 = -1;
  v49 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v50 = 1;
    v48 = 2029;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2029);
  }
  else
  {
    v50 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v48, 2029LL);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v27 = WdLogNewEntry5_WdError(v6, v5);
    LODWORD(v22) = -1073741811;
    *(_QWORD *)(v27 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v27);
    goto LABEL_20;
  }
  if ( v4 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (__int64 *)MmUserProbeAddress;
    v8 = *v3;
  }
  else
  {
    v8 = *v3;
  }
  *(_QWORD *)v51 = v8;
  v52[0] = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v53, v8, Current, v52, 0);
  v12 = v52[0];
  if ( !v52[0] )
  {
    v28 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    v29 = (unsigned int)v8;
    goto LABEL_36;
  }
  v13 = v51[1];
  if ( *((_BYTE *)v52[0] + 457) )
  {
    v30 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetContextSchedulingPriority(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v52[0] + 2) + 16LL) + 16LL) + 4208LL),
            Current,
            v52[0],
            v51[1],
            0);
    v34 = v30;
    if ( v30 < 0 )
    {
      v35 = WdLogNewEntry5_WdWarning(v32, v31, v33);
      *(_QWORD *)(v35 + 24) = v34;
      WdLogEvent5_WdWarning(v35);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v53);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48, v36);
      if ( v50 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v37, &EventProfilerExit, v38, v48);
      return (unsigned int)v34;
    }
  }
  v14 = 0;
  v15 = 0;
  if ( v13 >= 0 && (v13 & 0x40000000) != 0 )
  {
    if ( !DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 16LL) + 16LL)) )
    {
      v28 = WdLogNewEntry5_WdWarning(v40, v39, v41);
      v22 = -1073741637LL;
LABEL_34:
      *(_QWORD *)(v28 + 24) = v22;
LABEL_37:
      WdLogEvent5_WdWarning(v28);
LABEL_19:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v53);
LABEL_20:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48, v23);
      if ( v50 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v48);
      }
      return (unsigned int)v22;
    }
    if ( (v13 & 0x3FFFFFE0) != 0 )
    {
      v28 = WdLogNewEntry5_WdWarning(v40, v39, v41);
      v22 = -1073741811LL;
      goto LABEL_34;
    }
    v15 = v13 & 0x1F;
    if ( v15 <= 0x1E )
    {
      v14 = 1;
      goto LABEL_13;
    }
    v28 = WdLogNewEntry5_WdWarning(v40, v39, v41);
    v29 = v13 & 0x1F;
LABEL_36:
    LODWORD(v22) = -1073741811;
    *(_QWORD *)(v28 + 24) = v29;
    *(_QWORD *)(v28 + 32) = -1073741811LL;
    goto LABEL_37;
  }
LABEL_13:
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)v52,
    *((struct DXGDEVICE **)v12 + 2));
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v54, *((_QWORD *)v12 + 2), 0, v16, 0);
  v17 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v54, 0LL);
  v21 = v17;
  if ( v17 >= 0 )
  {
    if ( v14 )
    {
      v46 = *((_QWORD *)v12 + 2);
      if ( (*((_DWORD *)v12 + 105) & 0x10) != 0 )
        v47 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v46 + 16) + 616LL)
                                                                            + 8LL)
                                                                + 976LL))(
                *((_QWORD *)v12 + 37),
                v15,
                0LL);
      else
        v47 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v46 + 16) + 616LL)
                                                                            + 8LL)
                                                                + 968LL))(
                *((_QWORD *)v12 + 34),
                v15,
                0LL);
      LODWORD(v22) = v47;
    }
    else if ( (unsigned int)(v13 + 7) > 0xE )
    {
      LODWORD(v22) = -1073741811;
    }
    else
    {
      DXGCONTEXT::SetSchedulingPriority(v12, v13 + *((_DWORD *)v12 + 110), 1u);
      *((_DWORD *)v12 + 111) = v13;
      LODWORD(v22) = 0;
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v54);
    if ( v52[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v52);
    goto LABEL_19;
  }
  v42 = WdLogNewEntry5_WdWarning(v19, v18, v20);
  *(_QWORD *)(v42 + 24) = *((_QWORD *)v12 + 2);
  *(_QWORD *)(v42 + 32) = v21;
  WdLogEvent5_WdWarning(v42);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v54);
  if ( v52[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v52);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v53);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48, v43);
  if ( v50 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v44, &EventProfilerExit, v45, v48);
  return (unsigned int)v21;
}
