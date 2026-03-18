/*
 * XREFs of ?DdiCreateContext@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATECONTEXT@@@Z @ 0x1C00F16A4
 * Callers:
 *     ?ADAPTER_RENDER_DdiCreateContext@@YAJPEAVADAPTER_RENDER@@PEAXPEAU_DXGKARG_CREATECONTEXT@@@Z @ 0x1C00242E0 (-ADAPTER_RENDER_DdiCreateContext@@YAJPEAVADAPTER_RENDER@@PEAXPEAU_DXGKARG_CREATECONTEXT@@@Z.c)
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C00F2188 (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 * Callees:
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000A10C (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000A490 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000A550 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000A5F0 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000A89C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBEF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiCreateContext(ADAPTER_RENDER *this, void *a2, struct _DXGKARG_CREATECONTEXT *a3)
{
  struct DXGPROCESS *Current; // rax
  unsigned __int8 CurrentIrql; // r15
  struct DXGTHREAD *v8; // rbx
  struct DXGTHREAD *v9; // rax
  int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  _QWORD *v24; // rax
  unsigned __int8 v25; // cl
  _QWORD *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // [rsp+20h] [rbp-49h] BYREF
  __int64 v30; // [rsp+28h] [rbp-41h]
  char v31; // [rsp+30h] [rbp-39h]
  _BYTE v32[24]; // [rsp+38h] [rbp-31h] BYREF
  _BYTE v33[8]; // [rsp+50h] [rbp-19h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-11h] BYREF

  v29 = -1;
  v30 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v31 = 1;
    v29 = 5041;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 5041);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v29, 5041LL);
  Current = DXGPROCESS::GetCurrent();
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v32, Current);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4324LL));
  CurrentIrql = KeGetCurrentIrql();
  v8 = 0LL;
  if ( CurrentIrql < 2u && (v9 = DXGTHREAD::GetCurrent(), (v8 = v9) != 0LL) )
    v10 = *((_DWORD *)v9 + 8);
  else
    v10 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v33,
    *((struct DXGADAPTER **)this + 2));
  v12 = (*(int (__fastcall **)(void *, struct _DXGKARG_CREATECONTEXT *))(*((_QWORD *)this + 2) + 680LL))(a2, a3);
  if ( v33[0] )
    KeUnstackDetachProcess(&ApcState);
  v13 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v13 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13, v11);
    v24[3] = 275LL;
    v24[4] = 16LL;
    v24[5] = this;
    v24[6] = CurrentIrql;
    v25 = KeGetCurrentIrql();
    v24[7] = v25;
    WdLogEvent5_WdCriticalError(v24);
  }
  if ( v8 && *((_DWORD *)v8 + 8) != v10 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13, v11);
    v26[3] = 275LL;
    v26[4] = 38LL;
    v27 = *((int *)v8 + 8);
    v26[7] = 0LL;
    v26[5] = v27;
    v26[6] = v10;
    WdLogEvent5_WdCriticalError(v26);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4324LL));
  v14 = (_QWORD *)WdLogNewEntry5_WdEvent(v13, v11);
  v14[3] = v12;
  v14[4] = a2;
  v14[5] = a3->hContext;
  v14[6] = a3->ContextInfo.DmaBufferSize;
  v14[7] = a3->ContextInfo.AllocationListSize;
  WdLogEvent5_WdEvent(v14);
  v17 = WdLogNewEntry5_WdEvent(v16, v15);
  *(_QWORD *)(v17 + 24) = a3->ContextInfo.PatchLocationListSize;
  WdLogEvent5_WdEvent(v17);
  if ( (_DWORD)v12 != -1073741801 && (_DWORD)v12 )
  {
    v28 = WdLogNewEntry5_WdError(v19, v18);
    *(_QWORD *)(v28 + 24) = v12;
    WdLogEvent5_WdError(v28);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v32);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29, v20);
  if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v21, &EventProfilerExit, v22, v29);
  return (unsigned int)v12;
}
