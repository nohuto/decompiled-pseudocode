/*
 * XREFs of ?DdiSetTrackedWorkloadPowerLevel@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_SETTRACKEDWORKLOADPOWERLEVEL@@@Z @ 0x1C021AF64
 * Callers:
 *     ?EndTrackedWorkload@DXGTRACKEDWORKLOAD@@IEAAJXZ @ 0x1C02B7E10 (-EndTrackedWorkload@DXGTRACKEDWORKLOAD@@IEAAJXZ.c)
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

__int64 __fastcall ADAPTER_RENDER::DdiSetTrackedWorkloadPowerLevel(
        ADAPTER_RENDER *this,
        void *a2,
        struct _DXGKARG_SETTRACKEDWORKLOADPOWERLEVEL *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  struct DXGPROCESS *Current; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int8 CurrentIrql; // r15
  struct DXGTHREAD *v13; // rdi
  struct DXGTHREAD *v14; // rax
  int v15; // r14d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rax
  _QWORD *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  int v30; // [rsp+20h] [rbp-49h] BYREF
  __int64 v31; // [rsp+28h] [rbp-41h]
  char v32; // [rsp+30h] [rbp-39h]
  _BYTE v33[24]; // [rsp+38h] [rbp-31h] BYREF
  _BYTE v34[8]; // [rsp+50h] [rbp-19h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-11h] BYREF

  v30 = -1;
  v31 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v32 = 1;
    v30 = 5140;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 5140);
  }
  else
  {
    v32 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v30, 5140LL);
  if ( *(_QWORD *)(*((_QWORD *)this + 2) + 1304LL) )
  {
    Current = DXGPROCESS::GetCurrent(v7, v6);
    DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v33, Current);
    DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4324LL));
    CurrentIrql = KeGetCurrentIrql();
    v13 = 0LL;
    if ( CurrentIrql < 2u && (v14 = DXGTHREAD::GetCurrent(v11, v10), (v13 = v14) != 0LL) )
      v15 = *((_DWORD *)v14 + 8);
    else
      v15 = 0;
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
      (DXGVALIDATIONPROCESSATTACH *)v34,
      *((struct DXGADAPTER **)this + 2));
    v8 = (*(int (__fastcall **)(void *, struct _DXGKARG_SETTRACKEDWORKLOADPOWERLEVEL *))(*((_QWORD *)this + 2) + 1304LL))(
           a2,
           a3);
    if ( v34[0] )
      KeUnstackDetachProcess(&ApcState);
    if ( CurrentIrql != KeGetCurrentIrql() )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v16);
      v20[3] = 275LL;
      v20[4] = 16LL;
      v20[5] = this;
      v20[6] = CurrentIrql;
      v20[7] = KeGetCurrentIrql();
      WdLogEvent5_WdCriticalError(v20);
    }
    if ( v13 && *((_DWORD *)v13 + 8) != v15 )
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v16);
      v21[3] = 275LL;
      v21[4] = 38LL;
      v22 = *((int *)v13 + 8);
      v21[7] = 0LL;
      v21[5] = v22;
      v21[6] = v15;
      WdLogEvent5_WdCriticalError(v21);
    }
    _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4324LL));
    v23 = WdLogNewEntry5_WdTrace(v17, v16, v18, v19);
    *(_QWORD *)(v23 + 24) = v8;
    *(_QWORD *)(v23 + 32) = a2;
    if ( (_DWORD)v8 != -1073741592 && (_DWORD)v8 )
    {
      v26 = WdLogNewEntry5_WdError(v25, v24);
      *(_QWORD *)(v26 + 24) = v8;
      WdLogEvent5_WdError(v26);
    }
    DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v33);
  }
  else
  {
    LODWORD(v8) = -1073741822;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30, v6);
  if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v27, &EventProfilerExit, v28, v30);
  return (unsigned int)v8;
}
