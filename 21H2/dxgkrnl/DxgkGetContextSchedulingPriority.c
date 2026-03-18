/*
 * XREFs of DxgkGetContextSchedulingPriority @ 0x1C02EA1D0
 * Callers:
 *     ?VmBusGetContextSchedulingPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C036DD40 (-VmBusGetContextSchedulingPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x1C0008FF0 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0009178 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C0009824 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009864 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C000BC60 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendGetContextSchedulingPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAHE@Z @ 0x1C0377CB4 (-VmBusSendGetContextSchedulingPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGC.c)
 */

__int64 __fastcall DxgkGetContextSchedulingPriority(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct DXGPROCESS *Current; // r12
  __int64 v9; // rcx
  __int64 v10; // r8
  bool v11; // sf
  char v12; // r14
  _QWORD *v13; // rax
  struct DXGCONTEXT *v14; // rsi
  __int64 v16; // r9
  int v17; // r15d
  __int64 v18; // rcx
  __int64 v19; // r8
  int ContextSchedulingPriority; // eax
  unsigned int v21; // esi
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // [rsp+50h] [rbp-108h] BYREF
  __int64 v27; // [rsp+58h] [rbp-100h]
  char v28; // [rsp+60h] [rbp-F8h]
  unsigned int v29[2]; // [rsp+68h] [rbp-F0h] BYREF
  struct DXGCONTEXT *v30[2]; // [rsp+70h] [rbp-E8h] BYREF
  _BYTE v31[16]; // [rsp+80h] [rbp-D8h] BYREF
  _BYTE v32[160]; // [rsp+90h] [rbp-C8h] BYREF

  v3 = (_QWORD *)a1;
  v26 = -1;
  v27 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v28 = 1;
    v26 = 2030;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2030);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v26, 2030);
  Current = DXGPROCESS::GetCurrent(v5, v4, v6, v7);
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
    if ( v28 )
    {
      v11 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
      goto LABEL_16;
    }
    return 3221225485LL;
  }
  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1 )
  {
    v12 = 1;
    v13 = v3;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v13 = (_QWORD *)MmUserProbeAddress;
    *(_QWORD *)v29 = *v13;
  }
  else
  {
    v12 = 0;
    *(_QWORD *)v29 = *v3;
  }
  v30[0] = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v31, v29[0], Current, v30, 0, 1);
  v14 = v30[0];
  if ( !v30[0] )
  {
    WdLogSingleEntry2(3LL, v29[0], -1073741811LL);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v31);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
    if ( v28 )
    {
      LOBYTE(v9) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      v11 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_16:
      if ( v11 )
        McTemplateK0q_EtwWriteTransfer(v9, &EventProfilerExit, v10, v26);
    }
    return 3221225485LL;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED(
    (DXGDEVICEACCESSLOCKSHARED *)v30,
    *((struct DXGDEVICE **)v30[0] + 2));
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v32, *((_QWORD *)v14 + 2), 0, v16, 0);
  v17 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v32, 0LL);
  if ( v17 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v32);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v30);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v31);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
    if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v26);
    return (unsigned int)v17;
  }
  if ( *((_BYTE *)v14 + 441) )
  {
    ContextSchedulingPriority = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetContextSchedulingPriority(
                                  (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL)
                                                                           + 16LL)
                                                               + 4344LL),
                                  Current,
                                  v14,
                                  (int *)&v29[1],
                                  0);
    v21 = ContextSchedulingPriority;
    if ( ContextSchedulingPriority < 0 )
    {
      WdLogSingleEntry1(3LL, ContextSchedulingPriority);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v32);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v30);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v31);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
      if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v26);
      return v21;
    }
  }
  else
  {
    v29[1] = *((_DWORD *)v14 + 107);
  }
  if ( v12 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_QWORD *)MmUserProbeAddress;
    *v3 = *(_QWORD *)v29;
  }
  else
  {
    *v3 = *(_QWORD *)v29;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v32);
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v30);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v31);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
  if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v26);
  return 0LL;
}
