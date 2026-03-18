/*
 * XREFs of ?DdiRenderKm@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z @ 0x1C011AE94
 * Callers:
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C00F57B0 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 * Callees:
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000A490 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000A550 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000A5F0 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000A788 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000A89C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBEF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiRenderKm(ADAPTER_RENDER *this, void *a2, struct _DXGKARG_RENDER *a3)
{
  int v3; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  struct DXGPROCESS *Current; // rbx
  struct _KTHREAD **v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int8 CurrentIrql; // r15
  struct DXGTHREAD *v15; // rdi
  struct DXGTHREAD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rdx
  DXGK_ALLOCATIONLIST *pAllocationList; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v29; // rax
  _QWORD *v30; // rax
  unsigned __int8 v31; // cl
  _QWORD *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  int v35; // [rsp+20h] [rbp-49h] BYREF
  __int64 v36; // [rsp+28h] [rbp-41h]
  char v37; // [rsp+30h] [rbp-39h]
  _BYTE v38[8]; // [rsp+38h] [rbp-31h] BYREF
  DXGPUSHLOCK *v39; // [rsp+40h] [rbp-29h]
  int v40; // [rsp+48h] [rbp-21h]
  _BYTE v41[8]; // [rsp+50h] [rbp-19h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-11h] BYREF

  v35 = -1;
  v3 = 0;
  v36 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v37 = 1;
    v35 = 5045;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 5045);
  }
  else
  {
    v37 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v35, 5045LL);
  Current = DXGPROCESS::GetCurrent(v8, v7);
  v11 = (struct _KTHREAD **)((char *)Current + 112);
  if ( !Current )
    v11 = 0LL;
  v39 = (DXGPUSHLOCK *)v11;
  v40 = 0;
  if ( v11 && v11[1] == KeGetCurrentThread() )
  {
    v29 = WdLogNewEntry5_WdAssertion(v11, v9);
    *(_QWORD *)(v29 + 24) = 1569LL;
    WdLogEvent5_WdAssertion(v29);
  }
  if ( Current )
  {
    DXGPUSHLOCK::AcquireExclusive(v39);
    v40 = 2;
  }
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4324LL));
  CurrentIrql = KeGetCurrentIrql();
  v15 = 0LL;
  if ( CurrentIrql < 2u )
  {
    v16 = DXGTHREAD::GetCurrent(v13, v12);
    v15 = v16;
    if ( v16 )
      v3 = *((_DWORD *)v16 + 8);
  }
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v41,
    *((struct DXGADAPTER **)this + 2));
  v18 = (*(int (__fastcall **)(void *, struct _DXGKARG_RENDER *))(*((_QWORD *)this + 2) + 704LL))(a2, a3);
  if ( v41[0] )
    KeUnstackDetachProcess(&ApcState);
  v21 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v21 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v17);
    v30[3] = 275LL;
    v30[4] = 16LL;
    v30[5] = this;
    v30[6] = CurrentIrql;
    v31 = KeGetCurrentIrql();
    v30[7] = v31;
    WdLogEvent5_WdCriticalError(v30);
  }
  if ( v15 && *((_DWORD *)v15 + 8) != v3 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v17);
    v32[3] = 275LL;
    v32[4] = 38LL;
    v33 = *((int *)v15 + 8);
    v32[7] = 0LL;
    v32[5] = v33;
    v32[6] = v3;
    WdLogEvent5_WdCriticalError(v32);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4324LL));
  v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v21, v17, v19, v20);
  v22[3] = v18;
  v22[4] = a2;
  v22[5] = a3->pDmaBuffer;
  v22[6] = a3->DmaSize;
  pAllocationList = a3->pAllocationList;
  v22[7] = pAllocationList;
  if ( (_DWORD)v18 != -1073741816
    && (_DWORD)v18 != -1073741811
    && (_DWORD)v18 != -1073741801
    && (_DWORD)v18 != -1073741592
    && (_DWORD)v18 != -1071775743
    && (_DWORD)v18 != -1071775232
    && (_DWORD)v18 )
  {
    v34 = WdLogNewEntry5_WdError(pAllocationList, v23);
    *(_QWORD *)(v34 + 24) = v18;
    WdLogEvent5_WdError(v34);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v38);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35, v25);
  if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v35);
  return (unsigned int)v18;
}
