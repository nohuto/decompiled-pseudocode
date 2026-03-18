/*
 * XREFs of ?DdiNotifyFocusPresent@ADAPTER_RENDER@@QEAAJXZ @ 0x1C003A948
 * Callers:
 *     ?ADAPTER_RENDER_DdiNotifyFocusPresent@@YAJPEAVADAPTER_RENDER@@@Z @ 0x1C0040460 (-ADAPTER_RENDER_DdiNotifyFocusPresent@@YAJPEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000A5F0 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBEF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiNotifyFocusPresent(ADAPTER_RENDER *this, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // r15
  struct DXGTHREAD *v5; // rdi
  struct DXGTHREAD *Current; // rax
  int v7; // esi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 (__fastcall *v10)(_QWORD); // rax
  int v11; // ebx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  unsigned __int8 v14; // cl
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  int v21; // [rsp+20h] [rbp-60h] BYREF
  __int64 v22; // [rsp+28h] [rbp-58h]
  char v23; // [rsp+30h] [rbp-50h]
  _BYTE v24[8]; // [rsp+38h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-40h] BYREF

  v21 = -1;
  v22 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v23 = 1;
    v21 = 5116;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5116);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v21, 5116LL);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4324LL));
  CurrentIrql = KeGetCurrentIrql();
  v5 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v5 = Current) != 0LL) )
    v7 = *((_DWORD *)Current + 8);
  else
    v7 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v24,
    *((struct DXGADAPTER **)this + 2));
  v9 = *((_QWORD *)this + 2);
  v10 = *(__int64 (__fastcall **)(_QWORD))(v9 + 1208);
  if ( v10 )
    v11 = v10(*(_QWORD *)(v9 + 272));
  else
    v11 = -1073741822;
  if ( v24[0] )
    KeUnstackDetachProcess(&ApcState);
  v12 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v12 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v12, v8);
    v13[3] = 275LL;
    v13[4] = 16LL;
    v13[5] = this;
    v13[6] = CurrentIrql;
    v14 = KeGetCurrentIrql();
    v13[7] = v14;
    WdLogEvent5_WdCriticalError(v13);
  }
  if ( v5 && *((_DWORD *)v5 + 8) != v7 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v12, v8);
    v15[3] = 275LL;
    v15[4] = 38LL;
    v16 = *((int *)v5 + 8);
    v15[7] = 0LL;
    v15[5] = v16;
    v15[6] = v7;
    WdLogEvent5_WdCriticalError(v15);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4324LL));
  if ( v11 != -1073741822 && v11 != -1073741801 && v11 )
  {
    v17 = WdLogNewEntry5_WdError(v12, v8);
    *(_QWORD *)(v17 + 24) = v11;
    WdLogEvent5_WdError(v17);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21, v8);
  if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v21);
  return (unsigned int)v11;
}
