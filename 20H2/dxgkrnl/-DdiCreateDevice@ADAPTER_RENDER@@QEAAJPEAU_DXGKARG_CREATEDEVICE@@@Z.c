/*
 * XREFs of ?DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z @ 0x1C0129A9C
 * Callers:
 *     ?ADAPTER_RENDER_DdiCreateDevice@@YAJPEAVADAPTER_RENDER@@PEAU_DXGKARG_CREATEDEVICE@@@Z @ 0x1C0024370 (-ADAPTER_RENDER_DdiCreateDevice@@YAJPEAVADAPTER_RENDER@@PEAU_DXGKARG_CREATEDEVICE@@@Z.c)
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C0129C34 (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
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

__int64 __fastcall ADAPTER_RENDER::DdiCreateDevice(ADAPTER_RENDER *this, struct _DXGKARG_CREATEDEVICE *a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int8 CurrentIrql; // r15
  struct DXGTHREAD *v11; // rbx
  struct DXGTHREAD *v12; // rax
  int v13; // r14d
  __int64 v14; // rdx
  __int64 v15; // rdi
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
  int v29; // [rsp+20h] [rbp-39h] BYREF
  __int64 v30; // [rsp+28h] [rbp-31h]
  char v31; // [rsp+30h] [rbp-29h]
  _BYTE v32[24]; // [rsp+38h] [rbp-21h] BYREF
  _BYTE v33[8]; // [rsp+50h] [rbp-9h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-1h] BYREF

  v29 = -1;
  v30 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v31 = 1;
    v29 = 5001;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5001);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v29, 5001LL);
  Current = DXGPROCESS::GetCurrent(v6, v5);
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v32, Current);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
  CurrentIrql = KeGetCurrentIrql();
  v11 = 0LL;
  if ( CurrentIrql < 2u && (v12 = DXGTHREAD::GetCurrent(v9, v8), (v11 = v12) != 0LL) )
    v13 = *((_DWORD *)v12 + 8);
  else
    v13 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v33,
    *((struct DXGADAPTER **)this + 2));
  v15 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_CREATEDEVICE *))(*((_QWORD *)this + 2) + 368LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 272LL),
          a2);
  if ( v33[0] )
    KeUnstackDetachProcess(&ApcState);
  v16 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v16 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16, v14);
    v24[3] = 275LL;
    v24[4] = 16LL;
    v24[5] = this;
    v24[6] = CurrentIrql;
    v25 = KeGetCurrentIrql();
    v24[7] = v25;
    WdLogEvent5_WdCriticalError(v24);
  }
  if ( v11 && *((_DWORD *)v11 + 8) != v13 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16, v14);
    v26[3] = 275LL;
    v26[4] = 38LL;
    v27 = *((int *)v11 + 8);
    v26[7] = 0LL;
    v26[5] = v27;
    v26[6] = v13;
    WdLogEvent5_WdCriticalError(v26);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
  v17 = WdLogNewEntry5_WdEvent(v16, v14);
  *(_QWORD *)(v17 + 24) = v15;
  *(_QWORD *)(v17 + 32) = a2->hDevice;
  WdLogEvent5_WdEvent(v17);
  if ( (_DWORD)v15 != -1073741801 && (_DWORD)v15 )
  {
    v28 = WdLogNewEntry5_WdError(v19, v18);
    *(_QWORD *)(v28 + 24) = v15;
    WdLogEvent5_WdError(v28);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v32);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29, v20);
  if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v21, &EventProfilerExit, v22, v29);
  return (unsigned int)v15;
}
