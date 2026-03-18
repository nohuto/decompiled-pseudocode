/*
 * XREFs of ?DdiControlModeBehavior@DXGADAPTER@@QEAAJPEAU_DXGKARG_CONTROLMODEBEHAVIOR@@@Z @ 0x1C0218E74
 * Callers:
 *     ?SetModeBehavior@DXGADAPTER@@AEAAXEE@Z @ 0x1C0218DF4 (-SetModeBehavior@DXGADAPTER@@AEAAXEE@Z.c)
 *     ?SendColorimetricControlToDriverCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C02F2A00 (-SendColorimetricControlToDriverCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
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

__int64 __fastcall DXGADAPTER::DdiControlModeBehavior(
        DXGADAPTER *this,
        struct _DXGKARG_CONTROLMODEBEHAVIOR *a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct DXGPROCESS *Current; // rax
  KIRQL CurrentIrql; // al
  __int64 v11; // r12
  struct DXGTHREAD *v12; // rbx
  struct DXGTHREAD *v13; // rax
  int v14; // r14d
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  KIRQL v22; // al
  int v23; // [rsp+50h] [rbp-49h] BYREF
  __int64 v24; // [rsp+58h] [rbp-41h]
  char v25; // [rsp+60h] [rbp-39h]
  _BYTE v26[24]; // [rsp+68h] [rbp-31h] BYREF
  _BYTE v27[8]; // [rsp+80h] [rbp-19h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-11h] BYREF

  v23 = -1;
  v24 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v25 = 1;
    v23 = 5071;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5071);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v23, 5071);
  Current = DXGPROCESS::GetCurrent(v6, v5, v7, v8);
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v26, Current);
  DXGADAPTER::AcquireDdiSync((__int64)this, 1);
  _InterlockedIncrement((volatile signed __int32 *)this + 1121);
  CurrentIrql = KeGetCurrentIrql();
  v11 = CurrentIrql;
  v12 = 0LL;
  if ( CurrentIrql < 2u && (v13 = DXGTHREAD::GetCurrent(), (v12 = v13) != 0LL) )
    v14 = *((_DWORD *)v13 + 12);
  else
    v14 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v27, this);
  v15 = (*((int (__fastcall **)(_QWORD, struct _DXGKARG_CONTROLMODEBEHAVIOR *))this + 134))(*((_QWORD *)this + 35), a2);
  if ( v27[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v11 != KeGetCurrentIrql() )
  {
    v22 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v11, v22);
  }
  if ( v12 )
  {
    v17 = *((int *)v12 + 12);
    if ( (_DWORD)v17 != v14 )
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v12 + 12), v14, 0LL);
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 1121);
  v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v17, v16);
  v18[3] = v15;
  v18[4] = *((_QWORD *)this + 35);
  v18[5] = a2->Request.Value;
  v18[6] = a2->Satisfied.Value;
  v18[7] = a2->NotSatisfied.Value;
  if ( (_DWORD)v15 != -1073741637 && (_DWORD)v15 != -1073741801 && (_DWORD)v15 )
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
  DXGADAPTER::ReleaseDdiSync(this);
  if ( (a2->Satisfied.Value & a2->NotSatisfied.Value) != 0 )
  {
    WdLogSingleEntry1(1LL, 172LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pArgControlModeBehavior->Satisfied.Value & pArgControlModeBehavior->NotSatisfied.Value) == 0",
      172LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v26);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
  if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v23);
  return (unsigned int)v15;
}
