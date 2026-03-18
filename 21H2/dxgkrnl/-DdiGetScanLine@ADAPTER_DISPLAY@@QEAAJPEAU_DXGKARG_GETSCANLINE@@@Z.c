/*
 * XREFs of ?DdiGetScanLine@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x1C02CA2D0
 * Callers:
 *     DxgkGetScanLine @ 0x1C01EB450 (DxgkGetScanLine.c)
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

__int64 __fastcall ADAPTER_DISPLAY::DdiGetScanLine(ADAPTER_DISPLAY *this, struct _DXGKARG_GETSCANLINE *a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct DXGPROCESS *Current; // rax
  KIRQL CurrentIrql; // al
  __int64 v11; // r15
  struct DXGTHREAD *v12; // rbx
  struct DXGTHREAD *v13; // rax
  int v14; // esi
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  KIRQL v18; // al
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  int v23; // [rsp+50h] [rbp-39h] BYREF
  __int64 v24; // [rsp+58h] [rbp-31h]
  char v25; // [rsp+60h] [rbp-29h]
  _BYTE v26[24]; // [rsp+68h] [rbp-21h] BYREF
  _BYTE v27[8]; // [rsp+80h] [rbp-9h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-1h] BYREF

  v23 = -1;
  v24 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v25 = 1;
    v23 = 5036;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5036);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v23, 5036);
  Current = DXGPROCESS::GetCurrent(v6, v5, v7, v8);
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v26, Current);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4484LL));
  CurrentIrql = KeGetCurrentIrql();
  v11 = CurrentIrql;
  v12 = 0LL;
  if ( CurrentIrql < 2u && (v13 = DXGTHREAD::GetCurrent(), (v12 = v13) != 0LL) )
    v14 = *((_DWORD *)v13 + 12);
  else
    v14 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v27,
    *((struct DXGADAPTER **)this + 2));
  v15 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_GETSCANLINE *))(*((_QWORD *)this + 2) + 672LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 280LL),
          a2);
  if ( v27[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v11 != KeGetCurrentIrql() )
  {
    v18 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v11, v18);
  }
  if ( v12 )
  {
    v17 = *((int *)v12 + 12);
    if ( (_DWORD)v17 != v14 )
      WdLogSingleEntry5(0LL, 275LL, 38LL, v17, v14, 0LL);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4484LL));
  v19 = (_QWORD *)WdLogNewEntry5_WdTrace(v17, v16);
  v19[3] = v15;
  v19[4] = *(_QWORD *)(*((_QWORD *)this + 2) + 280LL);
  v19[5] = a2->ScanLine;
  if ( (_DWORD)v15 )
  {
    WdLogSingleEntry1(2LL, v15);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v15,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v26);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
  if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v23);
  return (unsigned int)v15;
}
