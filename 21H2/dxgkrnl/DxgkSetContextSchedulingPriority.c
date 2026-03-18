/*
 * XREFs of DxgkSetContextSchedulingPriority @ 0x1C0163360
 * Callers:
 *     ?VmBusSetContextSchedulingPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0380300 (-VmBusSetContextSchedulingPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x1C0008FF0 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0009178 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00096EC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009730 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000A924 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C000BC60 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?SetSchedulingPriority@DXGCONTEXT@@QEAAXH_N@Z @ 0x1C01632E4 (-SetSchedulingPriority@DXGCONTEXT@@QEAAXH_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendSetContextSchedulingPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@HE@Z @ 0x1C037C6CC (-VmBusSendSetContextSchedulingPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGC.c)
 */

__int64 __fastcall DxgkSetContextSchedulingPriority(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  bool v4; // di
  struct DXGPROCESS *Current; // r15
  __int64 v6; // rbx
  DXGCONTEXT *v7; // rdi
  int v8; // r14d
  char v9; // r12
  unsigned int v10; // r15d
  __int64 v11; // r9
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // rdx
  int v18; // eax
  bool v19; // sf
  __int64 v20; // rax
  unsigned int v21; // eax
  int v22; // [rsp+50h] [rbp-108h] BYREF
  __int64 v23; // [rsp+58h] [rbp-100h]
  char v24; // [rsp+60h] [rbp-F8h]
  int v25[2]; // [rsp+68h] [rbp-F0h]
  DXGCONTEXT *v26[2]; // [rsp+70h] [rbp-E8h] BYREF
  _BYTE v27[16]; // [rsp+80h] [rbp-D8h] BYREF
  _BYTE v28[160]; // [rsp+90h] [rbp-C8h] BYREF

  v3 = (__int64 *)a1;
  v22 = -1;
  v23 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v24 = 1;
    v22 = 2029;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2029);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v22, 2029);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v13 = -1073741811;
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
    goto LABEL_20;
  }
  if ( v4 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (__int64 *)MmUserProbeAddress;
    v6 = *v3;
  }
  else
  {
    v6 = *v3;
  }
  *(_QWORD *)v25 = v6;
  v26[0] = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v27, v6, Current, v26, 0, 1);
  v7 = v26[0];
  if ( v26[0] )
  {
    v8 = v25[1];
    if ( *((_BYTE *)v26[0] + 441) )
    {
      v18 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetContextSchedulingPriority(
              (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v26[0] + 2) + 16LL) + 16LL) + 4344LL),
              Current,
              v26[0],
              v25[1],
              0);
      v13 = v18;
      if ( v18 < 0 )
      {
        WdLogSingleEntry1(3LL, v18);
        goto LABEL_19;
      }
    }
    v9 = 0;
    v10 = 0;
    if ( v8 < 0 || (v8 & 0x40000000) == 0 )
    {
LABEL_13:
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v26,
        *((struct DXGDEVICE **)v7 + 2));
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v28, *((_QWORD *)v7 + 2), 0, v11, 0);
      v12 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v28, 0LL);
      v13 = v12;
      if ( v12 < 0 )
      {
        WdLogSingleEntry2(3LL, *((_QWORD *)v7 + 2), v12);
      }
      else if ( v9 )
      {
        if ( !*((_BYTE *)v7 + 441) )
        {
          v20 = *((_QWORD *)v7 + 2);
          if ( (*((_DWORD *)v7 + 101) & 0x10) != 0 )
            v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 16)
                                                                                            + 624LL)
                                                                                + 8LL)
                                                                    + 976LL))(
                    *((_QWORD *)v7 + 35),
                    v10,
                    0LL);
          else
            v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 16)
                                                                                            + 624LL)
                                                                                + 8LL)
                                                                    + 968LL))(
                    *((_QWORD *)v7 + 32),
                    v10,
                    0LL);
          v13 = v21;
        }
      }
      else if ( (unsigned int)(v8 + 7) > 0xE )
      {
        v13 = -1073741811;
      }
      else
      {
        DXGCONTEXT::SetSchedulingPriority(v7, v8 + *((_DWORD *)v7 + 106), 1u);
        *((_DWORD *)v7 + 107) = v8;
        v13 = 0;
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v28);
      if ( v26[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v26);
      goto LABEL_19;
    }
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 16LL)) )
    {
      if ( (v8 & 0x3FFFFFE0) != 0 )
      {
        v13 = -1073741811;
        WdLogSingleEntry1(3LL, -1073741811LL);
        goto LABEL_19;
      }
      v10 = v8 & 0x1F;
      if ( v10 <= 0x1E )
      {
        v9 = 1;
        goto LABEL_13;
      }
      v13 = -1073741811;
      WdLogSingleEntry2(3LL, v8 & 0x1F, -1073741811LL);
    }
    else
    {
      v13 = -1073741637;
      WdLogSingleEntry1(3LL, -1073741637LL);
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v27);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( !v24 )
      return v13;
    LOBYTE(v14) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v19 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_29;
  }
  v17 = (unsigned int)v6;
  v13 = -1073741811;
  WdLogSingleEntry2(3LL, v17, -1073741811LL);
LABEL_19:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v27);
LABEL_20:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
  if ( !v24 )
    return v13;
  v19 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_29:
  if ( v19 )
    McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v22);
  return v13;
}
