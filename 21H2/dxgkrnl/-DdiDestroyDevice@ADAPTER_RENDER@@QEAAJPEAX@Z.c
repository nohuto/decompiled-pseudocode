/*
 * XREFs of ?DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C016D1F8
 * Callers:
 *     ?ADAPTER_RENDER_DdiDestroyDevice@@YAJPEAVADAPTER_RENDER@@PEAX@Z @ 0x1C004B730 (-ADAPTER_RENDER_DdiDestroyDevice@@YAJPEAVADAPTER_RENDER@@PEAX@Z.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C016D390 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000A4D0 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000B800 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000B8C0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000BB00 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiDestroyDevice(ADAPTER_RENDER *this, void *a2, __int64 a3)
{
  struct DXGPROCESS *Current; // rax
  KIRQL CurrentIrql; // al
  __int64 v7; // r15
  struct DXGTHREAD *v8; // rbx
  struct DXGTHREAD *v9; // rax
  int v10; // esi
  __int64 v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r8
  KIRQL v16; // al
  int v17; // [rsp+50h] [rbp-39h] BYREF
  __int64 v18; // [rsp+58h] [rbp-31h]
  char v19; // [rsp+60h] [rbp-29h]
  _BYTE v20[24]; // [rsp+68h] [rbp-21h] BYREF
  _BYTE v21[8]; // [rsp+80h] [rbp-9h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-1h] BYREF

  v17 = -1;
  v18 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v19 = 1;
    v17 = 5027;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5027);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v17, 5027);
  Current = DXGPROCESS::GetCurrent();
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v20, Current);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4484LL));
  CurrentIrql = KeGetCurrentIrql();
  v7 = CurrentIrql;
  v8 = 0LL;
  if ( CurrentIrql < 2u && (v9 = DXGTHREAD::GetCurrent(), (v8 = v9) != 0LL) )
    v10 = *((_DWORD *)v9 + 12);
  else
    v10 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v21,
    *((struct DXGADAPTER **)this + 2));
  v11 = (*(int (__fastcall **)(void *))(*((_QWORD *)this + 2) + 704LL))(a2);
  if ( v21[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v7 != KeGetCurrentIrql() )
  {
    v16 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v7, v16);
  }
  if ( v8 )
  {
    v12 = *((int *)v8 + 12);
    if ( (_DWORD)v12 != v10 )
      WdLogSingleEntry5(0LL, 275LL, 38LL, v12, v10, 0LL);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4484LL));
  WdLogSingleEntry2(4LL, v11, a2);
  if ( (_DWORD)v11 )
  {
    WdLogSingleEntry1(2LL, v11);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v11,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
  if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v17);
  return (unsigned int)v11;
}
