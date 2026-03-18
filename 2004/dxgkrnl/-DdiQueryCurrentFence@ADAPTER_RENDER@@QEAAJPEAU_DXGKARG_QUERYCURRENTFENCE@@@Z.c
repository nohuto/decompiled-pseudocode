/*
 * XREFs of ?DdiQueryCurrentFence@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYCURRENTFENCE@@@Z @ 0x1C003BF0C
 * Callers:
 *     ?ADAPTER_RENDER_DdiQueryCurrentFence@@YAJPEAVADAPTER_RENDER@@PEAU_DXGKARG_QUERYCURRENTFENCE@@@Z @ 0x1C00414A0 (-ADAPTER_RENDER_DdiQueryCurrentFence@@YAJPEAVADAPTER_RENDER@@PEAU_DXGKARG_QUERYCURRENTFENCE@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0003D20 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0003DE0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0003E80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FAE40 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiQueryCurrentFence(
        ADAPTER_RENDER *this,
        struct _DXGKARG_QUERYCURRENTFENCE *a2,
        __int64 a3)
{
  unsigned __int8 CurrentIrql; // r12
  struct DXGTHREAD *v6; // rbx
  struct DXGTHREAD *Current; // rax
  int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // r14
  __int64 v11; // rcx
  _QWORD *v12; // rax
  unsigned __int8 v13; // cl
  _QWORD *v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 EngineOrdinal; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  int v24; // [rsp+20h] [rbp-60h] BYREF
  __int64 v25; // [rsp+28h] [rbp-58h]
  char v26; // [rsp+30h] [rbp-50h]
  _BYTE v27[8]; // [rsp+38h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-40h] BYREF

  v24 = -1;
  v25 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v26 = 1;
    v24 = 5015;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5015);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v24, 5015LL);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
  CurrentIrql = KeGetCurrentIrql();
  v6 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v6 = Current) != 0LL) )
    v8 = *((_DWORD *)Current + 8);
  else
    v8 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v27,
    *((struct DXGADAPTER **)this + 2));
  v10 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_QUERYCURRENTFENCE *))(*((_QWORD *)this + 2) + 512LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 272LL),
          a2);
  if ( v27[0] )
    KeUnstackDetachProcess(&ApcState);
  v11 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v11 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v11, v9);
    v12[3] = 275LL;
    v12[4] = 16LL;
    v12[5] = this;
    v12[6] = CurrentIrql;
    v13 = KeGetCurrentIrql();
    v12[7] = v13;
    WdLogEvent5_WdCriticalError(v12);
  }
  if ( v6 && *((_DWORD *)v6 + 8) != v8 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v11, v9);
    v14[3] = 275LL;
    v14[4] = 38LL;
    v15 = *((int *)v6 + 8);
    v14[7] = 0LL;
    v14[5] = v15;
    v14[6] = v8;
    WdLogEvent5_WdCriticalError(v14);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
  v16 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v16[3] = v10;
  v16[4] = a2->CurrentFence;
  v16[5] = a2->NodeOrdinal;
  EngineOrdinal = a2->EngineOrdinal;
  v16[6] = EngineOrdinal;
  if ( (_DWORD)v10 )
  {
    v19 = WdLogNewEntry5_WdError(EngineOrdinal, v17);
    *(_QWORD *)(v19 + 24) = v10;
    WdLogEvent5_WdError(v19);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24, v20);
  if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v21, &EventProfilerExit, v22, v24);
  return (unsigned int)v10;
}
