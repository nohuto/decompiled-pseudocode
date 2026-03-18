/*
 * XREFs of ?DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C00E4CDC
 * Callers:
 *     ?ADAPTER_RENDER_DdiDestroyDevice@@YAJPEAVADAPTER_RENDER@@PEAX@Z @ 0x1C0041400 (-ADAPTER_RENDER_DdiDestroyDevice@@YAJPEAVADAPTER_RENDER@@PEAX@Z.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00E4974 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0003D20 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0003DE0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0003E80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00098E0 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FAE40 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiDestroyDevice(ADAPTER_RENDER *this, void *a2, __int64 a3)
{
  struct DXGPROCESS *Current; // rax
  unsigned __int8 CurrentIrql; // r15
  struct DXGTHREAD *v7; // rbx
  struct DXGTHREAD *v8; // rax
  int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  _QWORD *v20; // rax
  unsigned __int8 v21; // cl
  _QWORD *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // [rsp+20h] [rbp-39h] BYREF
  __int64 v26; // [rsp+28h] [rbp-31h]
  char v27; // [rsp+30h] [rbp-29h]
  _BYTE v28[24]; // [rsp+38h] [rbp-21h] BYREF
  _BYTE v29[8]; // [rsp+50h] [rbp-9h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-1h] BYREF

  v25 = -1;
  v26 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v27 = 1;
    v25 = 5027;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5027);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v25, 5027LL);
  Current = DXGPROCESS::GetCurrent();
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v28, Current);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
  CurrentIrql = KeGetCurrentIrql();
  v7 = 0LL;
  if ( CurrentIrql < 2u && (v8 = DXGTHREAD::GetCurrent(), (v7 = v8) != 0LL) )
    v9 = *((_DWORD *)v8 + 8);
  else
    v9 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v29,
    *((struct DXGADAPTER **)this + 2));
  v11 = (*(int (__fastcall **)(void *))(*((_QWORD *)this + 2) + 616LL))(a2);
  if ( v29[0] )
    KeUnstackDetachProcess(&ApcState);
  v12 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v12 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v12, v10);
    v20[3] = 275LL;
    v20[4] = 16LL;
    v20[5] = this;
    v20[6] = CurrentIrql;
    v21 = KeGetCurrentIrql();
    v20[7] = v21;
    WdLogEvent5_WdCriticalError(v20);
  }
  if ( v7 && *((_DWORD *)v7 + 8) != v9 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v12, v10);
    v22[3] = 275LL;
    v22[4] = 38LL;
    v23 = *((int *)v7 + 8);
    v22[7] = 0LL;
    v22[5] = v23;
    v22[6] = v9;
    WdLogEvent5_WdCriticalError(v22);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
  v13 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v13 + 24) = v11;
  *(_QWORD *)(v13 + 32) = a2;
  WdLogEvent5_WdEvent(v13);
  if ( (_DWORD)v11 )
  {
    v24 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v24 + 24) = v11;
    WdLogEvent5_WdError(v24);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v28);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25, v16);
  if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v25);
  return (unsigned int)v11;
}
