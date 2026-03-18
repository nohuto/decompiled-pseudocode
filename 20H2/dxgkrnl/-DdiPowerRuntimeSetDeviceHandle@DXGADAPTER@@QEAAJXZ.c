/*
 * XREFs of ?DdiPowerRuntimeSetDeviceHandle@DXGADAPTER@@QEAAJXZ @ 0x1C021B368
 * Callers:
 *     ?StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ @ 0x1C020E78C (-StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0003E80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00F9DB0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGADAPTER::DdiPowerRuntimeSetDeviceHandle(DXGADAPTER *this, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int8 CurrentIrql; // r15
  struct DXGTHREAD *v8; // rdi
  struct DXGTHREAD *Current; // rax
  int v10; // r14d
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rcx
  _QWORD *v14; // rax
  unsigned __int8 v15; // cl
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // [rsp+20h] [rbp-60h] BYREF
  __int64 v22; // [rsp+28h] [rbp-58h]
  char v23; // [rsp+30h] [rbp-50h]
  _BYTE v24[8]; // [rsp+38h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-40h] BYREF

  if ( !*((_QWORD *)this + 95) )
    return 3221225474LL;
  v21 = -1;
  v22 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v23 = 1;
    v21 = 5127;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5127);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v21, 5127LL);
  _InterlockedIncrement((volatile signed __int32 *)this + 1091);
  CurrentIrql = KeGetCurrentIrql();
  v8 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(v6, v5), (v8 = Current) != 0LL) )
    v10 = *((_DWORD *)Current + 8);
  else
    v10 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v24, this);
  v12 = (*((int (__fastcall **)(_QWORD, _QWORD))this + 95))(*((_QWORD *)this + 34), *((_QWORD *)this + 351));
  if ( v24[0] )
    KeUnstackDetachProcess(&ApcState);
  v13 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v13 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13, v11);
    v14[3] = 275LL;
    v14[4] = 16LL;
    v14[5] = this;
    v14[6] = CurrentIrql;
    v15 = KeGetCurrentIrql();
    v14[7] = v15;
    WdLogEvent5_WdCriticalError(v14);
  }
  if ( v8 && *((_DWORD *)v8 + 8) != v10 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13, v11);
    v16[3] = 275LL;
    v16[4] = 38LL;
    v17 = *((int *)v8 + 8);
    v16[7] = 0LL;
    v16[5] = v17;
    v16[6] = v10;
    WdLogEvent5_WdCriticalError(v16);
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 1091);
  if ( (_DWORD)v12 )
  {
    v18 = WdLogNewEntry5_WdError(v13, v11);
    *(_QWORD *)(v18 + 24) = v12;
    WdLogEvent5_WdError(v18);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21, v11);
  if ( v23 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v21);
  }
  return (unsigned int)v12;
}
