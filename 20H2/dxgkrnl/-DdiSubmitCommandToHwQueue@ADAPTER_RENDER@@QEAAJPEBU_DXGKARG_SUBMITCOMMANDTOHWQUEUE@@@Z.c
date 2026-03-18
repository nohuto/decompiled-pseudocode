/*
 * XREFs of ?DdiSubmitCommandToHwQueue@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMANDTOHWQUEUE@@@Z @ 0x1C003D39C
 * Callers:
 *     ?ADAPTER_RENDER_DdiSubmitCommandToHwQueue@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SUBMITCOMMANDTOHWQUEUE@@@Z @ 0x1C0041540 (-ADAPTER_RENDER_DdiSubmitCommandToHwQueue@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SUBMITCOMMANDTOHW.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0003E80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00F9DB0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSubmitCommandToHwQueue(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_SUBMITCOMMANDTOHWQUEUE *a2,
        __int64 a3)
{
  unsigned __int8 CurrentIrql; // r15
  struct DXGTHREAD *v6; // rdi
  struct DXGTHREAD *Current; // rax
  int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 (__fastcall *v11)(_QWORD, const struct _DXGKARG_SUBMITCOMMANDTOHWQUEUE *); // rax
  int v12; // ebx
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
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v23 = 1;
    v21 = 5112;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5112);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v21, 5112LL);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
  CurrentIrql = KeGetCurrentIrql();
  v6 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v6 = Current) != 0LL) )
    v8 = *((_DWORD *)Current + 8);
  else
    v8 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v24,
    *((struct DXGADAPTER **)this + 2));
  v10 = *((_QWORD *)this + 2);
  v11 = *(__int64 (__fastcall **)(_QWORD, const struct _DXGKARG_SUBMITCOMMANDTOHWQUEUE *))(v10 + 1040);
  if ( v11 )
    v12 = v11(*(_QWORD *)(v10 + 272), a2);
  else
    v12 = -1073741822;
  if ( v24[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v10, v9);
    v13[3] = 275LL;
    v13[4] = 16LL;
    v13[5] = this;
    v13[6] = CurrentIrql;
    v14 = KeGetCurrentIrql();
    v13[7] = v14;
    WdLogEvent5_WdCriticalError(v13);
  }
  if ( v6 && *((_DWORD *)v6 + 8) != v8 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v10, v9);
    v15[3] = 275LL;
    v15[4] = 38LL;
    v16 = *((int *)v6 + 8);
    v15[7] = 0LL;
    v15[5] = v16;
    v15[6] = v8;
    WdLogEvent5_WdCriticalError(v15);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
  if ( v12 != -1073741822 && v12 != -1073741811 && v12 )
  {
    v17 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v17 + 24) = v12;
    WdLogEvent5_WdError(v17);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21, v9);
  if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v21);
  return (unsigned int)v12;
}
