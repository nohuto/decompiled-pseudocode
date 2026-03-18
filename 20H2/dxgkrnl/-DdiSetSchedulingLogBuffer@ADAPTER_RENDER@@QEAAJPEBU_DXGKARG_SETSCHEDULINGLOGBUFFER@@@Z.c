/*
 * XREFs of ?DdiSetSchedulingLogBuffer@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETSCHEDULINGLOGBUFFER@@@Z @ 0x1C021D1A4
 * Callers:
 *     ?ADAPTER_RENDER_DdiSetSchedulingLogBuffer@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SETSCHEDULINGLOGBUFFER@@@Z @ 0x1C00414A0 (-ADAPTER_RENDER_DdiSetSchedulingLogBuffer@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SETSCHEDULINGLOGB.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0003D20 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0003DE0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0003E80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00098E0 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00F9DB0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSetSchedulingLogBuffer(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_SETSCHEDULINGLOGBUFFER *a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int8 CurrentIrql; // r15
  struct DXGTHREAD *v11; // rdi
  struct DXGTHREAD *v12; // rax
  int v13; // r14d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 (__fastcall *v16)(_QWORD, const struct _DXGKARG_SETSCHEDULINGLOGBUFFER *); // rax
  int v17; // ebx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  unsigned __int8 v20; // cl
  _QWORD *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  int v28; // [rsp+20h] [rbp-39h] BYREF
  __int64 v29; // [rsp+28h] [rbp-31h]
  char v30; // [rsp+30h] [rbp-29h]
  _BYTE v31[24]; // [rsp+38h] [rbp-21h] BYREF
  _BYTE v32[8]; // [rsp+50h] [rbp-9h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-1h] BYREF

  v28 = -1;
  v29 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v30 = 1;
    v28 = 5114;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5114);
  }
  else
  {
    v30 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v28, 5114LL);
  Current = DXGPROCESS::GetCurrent(v6, v5);
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v31, Current);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
  CurrentIrql = KeGetCurrentIrql();
  v11 = 0LL;
  if ( CurrentIrql < 2u && (v12 = DXGTHREAD::GetCurrent(v9, v8), (v11 = v12) != 0LL) )
    v13 = *((_DWORD *)v12 + 8);
  else
    v13 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v32,
    *((struct DXGADAPTER **)this + 2));
  v15 = *((_QWORD *)this + 2);
  v16 = *(__int64 (__fastcall **)(_QWORD, const struct _DXGKARG_SETSCHEDULINGLOGBUFFER *))(v15 + 1192);
  if ( v16 )
    v17 = v16(*(_QWORD *)(v15 + 272), a2);
  else
    v17 = -1073741822;
  if ( v32[0] )
    KeUnstackDetachProcess(&ApcState);
  v18 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v18 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v14);
    v19[3] = 275LL;
    v19[4] = 16LL;
    v19[5] = this;
    v19[6] = CurrentIrql;
    v20 = KeGetCurrentIrql();
    v19[7] = v20;
    WdLogEvent5_WdCriticalError(v19);
  }
  if ( v11 && *((_DWORD *)v11 + 8) != v13 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v14);
    v21[3] = 275LL;
    v21[4] = 38LL;
    v22 = *((int *)v11 + 8);
    v21[7] = 0LL;
    v21[5] = v22;
    v21[6] = v13;
    WdLogEvent5_WdCriticalError(v21);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
  if ( v17 != -1073741822 && v17 != -1073741801 && v17 )
  {
    v23 = WdLogNewEntry5_WdError(v18, v14);
    *(_QWORD *)(v23 + 24) = v17;
    WdLogEvent5_WdError(v23);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v31);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28, v24);
  if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v28);
  return (unsigned int)v17;
}
