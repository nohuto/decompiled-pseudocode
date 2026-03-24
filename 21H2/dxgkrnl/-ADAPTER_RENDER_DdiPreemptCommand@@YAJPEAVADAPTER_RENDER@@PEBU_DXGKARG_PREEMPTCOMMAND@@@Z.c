/*
 * XREFs of ?ADAPTER_RENDER_DdiPreemptCommand@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_PREEMPTCOMMAND@@@Z @ 0x1C00061C0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0003ED0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0003F90 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0004030 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBBF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiPreemptCommand(
        struct ADAPTER_RENDER *a1,
        const struct _DXGKARG_PREEMPTCOMMAND *a2,
        __int64 a3)
{
  unsigned __int8 CurrentIrql; // r15
  struct DXGTHREAD *v6; // rbx
  int v7; // esi
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 PreemptionFenceId; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct DXGTHREAD *Current; // rax
  _QWORD *v19; // rax
  unsigned __int8 v20; // cl
  _QWORD *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned int v24; // [rsp+20h] [rbp-60h] BYREF
  __int64 v25; // [rsp+28h] [rbp-58h]
  char v26; // [rsp+30h] [rbp-50h]
  _BYTE v27[8]; // [rsp+38h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-40h] BYREF

  v24 = -1;
  v25 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v26 = 1;
    v24 = 5014;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 5014LL);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry(&v24, 5014LL);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)a1 + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)a1 + 2) + 4364LL));
  CurrentIrql = KeGetCurrentIrql();
  v6 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v6 = Current) != 0LL) )
    v7 = *((_DWORD *)Current + 8);
  else
    v7 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v27,
    *((struct DXGADAPTER **)a1 + 2));
  v9 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_PREEMPTCOMMAND *))(*((_QWORD *)a1 + 2) + 440LL))(
         *(_QWORD *)(*((_QWORD *)a1 + 2) + 272LL),
         a2);
  if ( v27[0] )
    KeUnstackDetachProcess(&ApcState);
  v10 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v10 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v10, v8);
    v19[3] = 275LL;
    v19[4] = 16LL;
    v19[5] = a1;
    v19[6] = CurrentIrql;
    v20 = KeGetCurrentIrql();
    v19[7] = v20;
    WdLogEvent5_WdCriticalError(v19);
  }
  if ( v6 && *((_DWORD *)v6 + 8) != v7 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v10, v8);
    v21[3] = 275LL;
    v21[4] = 38LL;
    v22 = *((int *)v6 + 8);
    v21[7] = 0LL;
    v21[5] = v22;
    v21[6] = v7;
    WdLogEvent5_WdCriticalError(v21);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)a1 + 2) + 4364LL));
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v11[3] = v9;
  v11[4] = a2->Flags.Value;
  PreemptionFenceId = a2->PreemptionFenceId;
  v11[5] = PreemptionFenceId;
  if ( (_DWORD)v9 )
  {
    v23 = WdLogNewEntry5_WdError(PreemptionFenceId, v12);
    *(_QWORD *)(v23 + 24) = v9;
    WdLogEvent5_WdError(v23);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)a1 + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24, v14);
  if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, v16, v24);
  return (unsigned int)v9;
}
