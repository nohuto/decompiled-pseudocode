/*
 * XREFs of ?DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@EI@Z @ 0x1C019E994
 * Callers:
 *     DXGADAPTER_DdiControlInterrupt @ 0x1C000E710 (DXGADAPTER_DdiControlInterrupt.c)
 *     ?StartHwVSync@DXGDODPRESENT@@QEAAXXZ @ 0x1C03BEFFC (-StartHwVSync@DXGDODPRESENT@@QEAAXXZ.c)
 *     ?StopHwVSync@DXGDODPRESENT@@QEAAXXZ @ 0x1C03BF118 (-StopHwVSync@DXGDODPRESENT@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000B800 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000B8C0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000BB00 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@EI@Z @ 0x1C000E730 (-DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@EI@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGADAPTER::DdiControlInterrupt(
        DXGADAPTER *this,
        DXGK_INTERRUPT_TYPE a2,
        __int64 a3,
        unsigned int a4)
{
  DXGK_INTERRUPT_STATE v4; // ebx
  __int64 v5; // r15
  __int64 v7; // r12
  struct DXGTHREAD *v9; // r14
  struct DXGTHREAD *Current; // rax
  int v11; // r13d
  __int64 v12; // r8
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  KIRQL v16; // al
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  KIRQL CurrentIrql; // [rsp+50h] [rbp-59h]
  struct _DXGKARG_CONTROLINTERRUPT2 v21; // [rsp+58h] [rbp-51h]
  int v22; // [rsp+60h] [rbp-49h] BYREF
  __int64 v23; // [rsp+68h] [rbp-41h]
  char v24; // [rsp+70h] [rbp-39h]
  _BYTE v25[8]; // [rsp+78h] [rbp-31h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-29h] BYREF

  v4 = DXGK_INTERRUPT_ENABLE;
  v5 = (unsigned __int8)a3;
  v7 = a2;
  if ( *((int *)this + 673) >= 1300 && *((_QWORD *)this + 111) )
  {
    v21.InterruptType = a2;
    LOBYTE(v4) = (_BYTE)a3 == 0;
    v21.InterruptState = v4;
    return DXGADAPTER::DdiControlInterrupt2(this, v21, 0LL, a4);
  }
  else
  {
    v22 = -1;
    v23 = 0LL;
    if ( (qword_1C012F870 & 2) != 0 )
    {
      v24 = 1;
      v22 = 5038;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5038);
    }
    else
    {
      v24 = 0;
    }
    DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v22, 5038);
    DXGADAPTER::AcquireDdiSync((__int64)this, 1);
    _InterlockedIncrement((volatile signed __int32 *)this + 1121);
    CurrentIrql = KeGetCurrentIrql();
    v9 = 0LL;
    if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v9 = Current) != 0LL) )
      v11 = *((_DWORD *)Current + 12);
    else
      v11 = 0;
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v25, this);
    LOBYTE(v12) = v5;
    v13 = (*((int (__fastcall **)(_QWORD, _QWORD, __int64))this + 86))(*((_QWORD *)this + 35), (unsigned int)v7, v12);
    if ( v25[0] )
      KeUnstackDetachProcess(&ApcState);
    if ( CurrentIrql != KeGetCurrentIrql() )
    {
      v16 = KeGetCurrentIrql();
      WdLogSingleEntry5(0LL, 275LL, 16LL, this, CurrentIrql, v16);
    }
    if ( v9 )
    {
      v15 = *((int *)v9 + 12);
      if ( (_DWORD)v15 != v11 )
        WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v9 + 12), v11, 0LL);
    }
    _InterlockedDecrement((volatile signed __int32 *)this + 1121);
    if ( (_DWORD)v7 == 3 && (int)v13 >= 0 )
    {
      LOBYTE(v15) = v5;
      PoNotifyVSyncChange(v15);
    }
    v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v15, v14);
    v17[3] = v13;
    v17[4] = v7;
    v17[5] = v5;
    if ( (_DWORD)v13 != -1073741823 && (_DWORD)v13 != -1073741822 && (_DWORD)v13 )
    {
      WdLogSingleEntry1(2LL, v13);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
        v13,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGADAPTER::ReleaseDdiSync(this);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v22);
    }
    return (unsigned int)v13;
  }
}
