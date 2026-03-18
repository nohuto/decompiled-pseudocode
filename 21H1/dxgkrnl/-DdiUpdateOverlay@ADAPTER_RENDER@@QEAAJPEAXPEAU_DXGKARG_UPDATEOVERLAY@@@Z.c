/*
 * XREFs of ?DdiUpdateOverlay@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_UPDATEOVERLAY@@@Z @ 0x1C021C18C
 * Callers:
 *     ?UpdateOverlay@DXGOVERLAY@@QEAAJPEAU_D3DKMT_UPDATEOVERLAY@@@Z @ 0x1C0276204 (-UpdateOverlay@DXGOVERLAY@@QEAAJPEAU_D3DKMT_UPDATEOVERLAY@@@Z.c)
 * Callees:
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000A490 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000A550 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000A5F0 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBEF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiUpdateOverlay(ADAPTER_RENDER *this, void *a2, struct _DXGKARG_UPDATEOVERLAY *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int8 CurrentIrql; // r15
  struct DXGTHREAD *v9; // rdi
  struct DXGTHREAD *Current; // rax
  int v11; // r14d
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  unsigned __int8 v16; // cl
  _QWORD *v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  int v27; // [rsp+20h] [rbp-60h] BYREF
  __int64 v28; // [rsp+28h] [rbp-58h]
  char v29; // [rsp+30h] [rbp-50h]
  _BYTE v30[8]; // [rsp+38h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-40h] BYREF

  v27 = -1;
  v28 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v29 = 1;
    v27 = 5033;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 5033);
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v27, 5033LL);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4324LL));
  CurrentIrql = KeGetCurrentIrql();
  v9 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(v7, v6), (v9 = Current) != 0LL) )
    v11 = *((_DWORD *)Current + 8);
  else
    v11 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v30,
    *((struct DXGADAPTER **)this + 2));
  v13 = (*(int (__fastcall **)(void *, struct _DXGKARG_UPDATEOVERLAY *))(*((_QWORD *)this + 2) + 656LL))(a2, a3);
  if ( v30[0] )
    KeUnstackDetachProcess(&ApcState);
  v14 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v14 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14, v12);
    v15[3] = 275LL;
    v15[4] = 16LL;
    v15[5] = this;
    v15[6] = CurrentIrql;
    v16 = KeGetCurrentIrql();
    v15[7] = v16;
    WdLogEvent5_WdCriticalError(v15);
  }
  if ( v9 && *((_DWORD *)v9 + 8) != v11 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14, v12);
    v17[3] = 275LL;
    v17[4] = 38LL;
    v18 = *((int *)v9 + 8);
    v17[7] = 0LL;
    v17[5] = v18;
    v17[6] = v11;
    WdLogEvent5_WdCriticalError(v17);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4324LL));
  v19 = (_QWORD *)WdLogNewEntry5_WdEvent(v14, v12);
  v19[3] = v13;
  v19[4] = a3->OverlayInfo.hAllocation;
  v19[5] = a2;
  WdLogEvent5_WdEvent(v19);
  if ( (_DWORD)v13 != -1073741811 && (_DWORD)v13 != -1073741801 && (_DWORD)v13 != -1073741670 && (_DWORD)v13 )
  {
    v22 = WdLogNewEntry5_WdError(v21, v20);
    *(_QWORD *)(v22 + 24) = v13;
    WdLogEvent5_WdError(v22);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27, v23);
  if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v27);
  return (unsigned int)v13;
}
