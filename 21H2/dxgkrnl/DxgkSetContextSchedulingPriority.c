/*
 * XREFs of DxgkSetContextSchedulingPriority @ 0x1C00E18D0
 * Callers:
 *     ?VmBusSetContextSchedulingPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024E460 (-VmBusSetContextSchedulingPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0001E14 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00022BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004090 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004200 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004300 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006CE0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0007464 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0007514 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?UsesSoftRealtimeTrustModel@DXGCONTEXT@@QEAA_NXZ @ 0x1C0027678 (-UsesSoftRealtimeTrustModel@DXGCONTEXT@@QEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ?SetSchedulingPriority@DXGCONTEXT@@QEAAXH_N@Z @ 0x1C00E1D40 (-SetSchedulingPriority@DXGCONTEXT@@QEAAXH_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendSetContextSchedulingPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@HE@Z @ 0x1C024B8B0 (-VmBusSendSetContextSchedulingPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGC.c)
 */

__int64 __fastcall DxgkSetContextSchedulingPriority(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  bool v4; // di
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // r15
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  DXGCONTEXT *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // r14d
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // r8
  char v26; // r12
  unsigned int v27; // r15d
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // rax
  int v38; // eax
  bool v39; // al
  int v40; // [rsp+30h] [rbp-108h] BYREF
  __int64 v41; // [rsp+38h] [rbp-100h]
  char v42; // [rsp+40h] [rbp-F8h]
  int v43[2]; // [rsp+48h] [rbp-F0h]
  DXGCONTEXT *v44[2]; // [rsp+50h] [rbp-E8h] BYREF
  _BYTE v45[16]; // [rsp+60h] [rbp-D8h] BYREF
  _BYTE v46[160]; // [rsp+70h] [rbp-C8h] BYREF

  v3 = (__int64 *)a1;
  v40 = -1;
  v41 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v42 = 1;
    v40 = 2029;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2029);
  }
  else
  {
    v42 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v40, 2029LL);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    if ( v4 )
    {
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (__int64 *)MmUserProbeAddress;
      v11 = *v3;
    }
    else
    {
      v11 = *v3;
    }
    *(_QWORD *)v43 = v11;
    v44[0] = 0LL;
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v45, v11, Current, v44, 0);
    v15 = v44[0];
    if ( !v44[0] )
    {
      v16 = WdLogNewEntry5_WdWarning(v13, v12, v14);
      v17 = (unsigned int)v11;
LABEL_32:
      LODWORD(v9) = -1073741811;
      *(_QWORD *)(v16 + 24) = v17;
      *(_QWORD *)(v16 + 32) = -1073741811LL;
      goto LABEL_18;
    }
    v18 = v43[1];
    if ( *((_BYTE *)v44[0] + 457) )
    {
      v19 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetContextSchedulingPriority(
              (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v44[0] + 2) + 16LL) + 16LL) + 4240LL),
              Current,
              v44[0],
              v43[1],
              0);
      v9 = v19;
      if ( v19 < 0 )
      {
        v16 = WdLogNewEntry5_WdWarning(v21, v20, v22);
LABEL_17:
        *(_QWORD *)(v16 + 24) = v9;
LABEL_18:
        WdLogEvent5_WdWarning(v16);
LABEL_19:
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v45);
        goto LABEL_20;
      }
    }
    v26 = 0;
    v27 = 0;
    if ( v18 >= 0 && (v18 & 0x40000000) != 0 )
    {
      if ( !DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v15 + 2) + 16LL) + 16LL)) )
      {
        v16 = WdLogNewEntry5_WdWarning(v29, v28, v30);
        v9 = -1073741637LL;
        goto LABEL_17;
      }
      if ( (v18 & 0x3FFFFFE0) != 0 )
      {
        v16 = WdLogNewEntry5_WdWarning(v29, v28, v30);
        v9 = -1073741811LL;
        goto LABEL_17;
      }
      v27 = v18 & 0x1F;
      if ( v27 > 0x1E )
      {
        v16 = WdLogNewEntry5_WdWarning(v29, v28, v30);
        v17 = v18 & 0x1F;
        goto LABEL_32;
      }
      v26 = 1;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v44,
      *((struct DXGDEVICE **)v15 + 2));
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v46, *((_QWORD *)v15 + 2), 0, v31, 0);
    v32 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v46, 0LL);
    v9 = v32;
    if ( v32 >= 0 )
    {
      if ( v26 )
      {
        if ( !*((_BYTE *)v15 + 457) )
        {
          v37 = *((_QWORD *)v15 + 2);
          if ( (*((_DWORD *)v15 + 105) & 0x10) != 0 )
            v38 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v37 + 16)
                                                                                            + 616LL)
                                                                                + 8LL)
                                                                    + 976LL))(
                    *((_QWORD *)v15 + 37),
                    v27,
                    0LL);
          else
            v38 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v37 + 16)
                                                                                            + 616LL)
                                                                                + 8LL)
                                                                    + 968LL))(
                    *((_QWORD *)v15 + 34),
                    v27,
                    0LL);
          LODWORD(v9) = v38;
        }
      }
      else if ( (unsigned int)(v18 + 7) > 0xE )
      {
        LODWORD(v9) = -1073741811;
      }
      else
      {
        v39 = DXGCONTEXT::UsesSoftRealtimeTrustModel(v15);
        DXGCONTEXT::SetSchedulingPriority(v15, v18 + *((_DWORD *)v15 + 110), !v39);
        *((_DWORD *)v15 + 111) = v18;
        LODWORD(v9) = 0;
      }
    }
    else
    {
      v36 = WdLogNewEntry5_WdWarning(v34, v33, v35);
      *(_QWORD *)(v36 + 24) = *((_QWORD *)v15 + 2);
      *(_QWORD *)(v36 + 32) = v9;
      WdLogEvent5_WdWarning(v36);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v46);
    if ( v44[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v44);
    goto LABEL_19;
  }
  v8 = WdLogNewEntry5_WdError(v6, v5);
  LODWORD(v9) = -1073741811;
  *(_QWORD *)(v8 + 24) = -1073741811LL;
  WdLogEvent5_WdError(v8);
LABEL_20:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40, v10);
  if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v40);
  return (unsigned int)v9;
}
