/*
 * XREFs of ?DdiRenderKm@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z @ 0x1C0110D74
 * Callers:
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C00EA570 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002ADC (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0003D20 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0003DE0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0003E80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FAE40 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiRenderKm(ADAPTER_RENDER *this, void *a2, struct _DXGKARG_RENDER *a3)
{
  int v3; // esi
  __int64 v7; // rdx
  struct DXGPROCESS *Current; // rbx
  struct _KTHREAD **v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int8 CurrentIrql; // r15
  struct DXGTHREAD *v13; // rdi
  struct DXGTHREAD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rdx
  DXGK_ALLOCATIONLIST *pAllocationList; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v27; // rax
  _QWORD *v28; // rax
  unsigned __int8 v29; // cl
  _QWORD *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  int v33; // [rsp+20h] [rbp-49h] BYREF
  __int64 v34; // [rsp+28h] [rbp-41h]
  char v35; // [rsp+30h] [rbp-39h]
  _BYTE v36[8]; // [rsp+38h] [rbp-31h] BYREF
  DXGPUSHLOCK *v37; // [rsp+40h] [rbp-29h]
  int v38; // [rsp+48h] [rbp-21h]
  _BYTE v39[8]; // [rsp+50h] [rbp-19h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-11h] BYREF

  v33 = -1;
  v3 = 0;
  v34 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v35 = 1;
    v33 = 5045;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 5045);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v33, 5045LL);
  Current = DXGPROCESS::GetCurrent();
  v9 = (struct _KTHREAD **)((char *)Current + 112);
  if ( !Current )
    v9 = 0LL;
  v37 = (DXGPUSHLOCK *)v9;
  v38 = 0;
  if ( v9 && v9[1] == KeGetCurrentThread() )
  {
    v27 = WdLogNewEntry5_WdAssertion(v9, v7);
    *(_QWORD *)(v27 + 24) = 1571LL;
    WdLogEvent5_WdAssertion(v27);
  }
  if ( Current )
  {
    DXGPUSHLOCK::AcquireExclusive(v37);
    v38 = 2;
  }
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
  CurrentIrql = KeGetCurrentIrql();
  v13 = 0LL;
  if ( CurrentIrql < 2u )
  {
    v14 = DXGTHREAD::GetCurrent(v11, v10);
    v13 = v14;
    if ( v14 )
      v3 = *((_DWORD *)v14 + 8);
  }
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v39,
    *((struct DXGADAPTER **)this + 2));
  v16 = (*(int (__fastcall **)(void *, struct _DXGKARG_RENDER *))(*((_QWORD *)this + 2) + 704LL))(a2, a3);
  if ( v39[0] )
    KeUnstackDetachProcess(&ApcState);
  v19 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v19 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v15);
    v28[3] = 275LL;
    v28[4] = 16LL;
    v28[5] = this;
    v28[6] = CurrentIrql;
    v29 = KeGetCurrentIrql();
    v28[7] = v29;
    WdLogEvent5_WdCriticalError(v28);
  }
  if ( v13 && *((_DWORD *)v13 + 8) != v3 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v15);
    v30[3] = 275LL;
    v30[4] = 38LL;
    v31 = *((int *)v13 + 8);
    v30[7] = 0LL;
    v30[5] = v31;
    v30[6] = v3;
    WdLogEvent5_WdCriticalError(v30);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
  v20 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, v15, v17, v18);
  v20[3] = v16;
  v20[4] = a2;
  v20[5] = a3->pDmaBuffer;
  v20[6] = a3->DmaSize;
  pAllocationList = a3->pAllocationList;
  v20[7] = pAllocationList;
  if ( (_DWORD)v16 != -1073741816
    && (_DWORD)v16 != -1073741811
    && (_DWORD)v16 != -1073741801
    && (_DWORD)v16 != -1073741592
    && (_DWORD)v16 != -1071775743
    && (_DWORD)v16 != -1071775232
    && (_DWORD)v16 )
  {
    v32 = WdLogNewEntry5_WdError(pAllocationList, v21);
    *(_QWORD *)(v32 + 24) = v16;
    WdLogEvent5_WdError(v32);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v36);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33, v23);
  if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v33);
  return (unsigned int)v16;
}
