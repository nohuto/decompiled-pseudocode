/*
 * XREFs of ?DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@EI@Z @ 0x1C011F67C
 * Callers:
 *     DXGADAPTER_DdiControlInterrupt @ 0x1C0007720 (DXGADAPTER_DdiControlInterrupt.c)
 *     ?StartHwVSync@DXGDODPRESENT@@QEAAXXZ @ 0x1C02FFE54 (-StartHwVSync@DXGDODPRESENT@@QEAAXXZ.c)
 *     ?StopHwVSync@DXGDODPRESENT@@QEAAXXZ @ 0x1C02FFF1C (-StopHwVSync@DXGDODPRESENT@@QEAAXXZ.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0003ED0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0003F90 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0004030 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@EI@Z @ 0x1C0007738 (-DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@EI@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBBF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
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
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGTHREAD *v11; // r14
  struct DXGTHREAD *Current; // rax
  int v13; // r13d
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  _QWORD *v20; // rax
  unsigned __int8 v21; // cl
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  struct _DXGKARG_CONTROLINTERRUPT2 v30; // [rsp+20h] [rbp-49h]
  unsigned __int8 CurrentIrql; // [rsp+20h] [rbp-49h]
  int v32; // [rsp+28h] [rbp-41h] BYREF
  __int64 v33; // [rsp+30h] [rbp-39h]
  char v34; // [rsp+38h] [rbp-31h]
  _BYTE v35[8]; // [rsp+40h] [rbp-29h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-21h] BYREF

  v4 = DXGK_INTERRUPT_ENABLE;
  v5 = (unsigned __int8)a3;
  v7 = a2;
  if ( *((int *)this + 649) >= 1300 && *((_QWORD *)this + 100) )
  {
    v30.InterruptType = a2;
    LOBYTE(v4) = (_BYTE)a3 == 0;
    v30.InterruptState = v4;
    return DXGADAPTER::DdiControlInterrupt2(this, v30, 0LL, a4);
  }
  else
  {
    v32 = -1;
    v33 = 0LL;
    if ( (qword_1C00B19B0 & 2) != 0 )
    {
      v34 = 1;
      v32 = 5038;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5038);
    }
    else
    {
      v34 = 0;
    }
    DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v32, 5038LL);
    DXGADAPTER::AcquireDdiSync((__int64)this, 1);
    _InterlockedIncrement((volatile signed __int32 *)this + 1091);
    CurrentIrql = KeGetCurrentIrql();
    v11 = 0LL;
    if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(v10, v9), (v11 = Current) != 0LL) )
      v13 = *((_DWORD *)Current + 8);
    else
      v13 = 0;
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v35, this);
    LOBYTE(v14) = v5;
    v16 = (*((int (__fastcall **)(_QWORD, _QWORD, __int64))this + 75))(*((_QWORD *)this + 34), (unsigned int)v7, v14);
    if ( v35[0] )
      KeUnstackDetachProcess(&ApcState);
    v19 = KeGetCurrentIrql();
    if ( CurrentIrql != (_BYTE)v19 )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v15);
      v20[3] = 275LL;
      v20[4] = 16LL;
      v20[5] = this;
      v20[6] = CurrentIrql;
      v21 = KeGetCurrentIrql();
      v20[7] = v21;
      WdLogEvent5_WdCriticalError(v20);
    }
    if ( v11 && *((_DWORD *)v11 + 8) != v13 )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v15);
      v22[3] = 275LL;
      v22[4] = 38LL;
      v22[5] = *((int *)v11 + 8);
      v22[6] = v13;
      v22[7] = 0LL;
      WdLogEvent5_WdCriticalError(v22);
    }
    _InterlockedDecrement((volatile signed __int32 *)this + 1091);
    if ( (_DWORD)v7 == 3 && (int)v16 >= 0 )
    {
      LOBYTE(v19) = v5;
      PoNotifyVSyncChange(v19);
    }
    v23 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, v15, v17, v18);
    v23[3] = v16;
    v23[4] = v7;
    v23[5] = v5;
    if ( (_DWORD)v16 != -1073741823 && (_DWORD)v16 != -1073741822 && (_DWORD)v16 )
    {
      v26 = WdLogNewEntry5_WdError(v25, v24);
      *(_QWORD *)(v26 + 24) = v16;
      WdLogEvent5_WdError(v26);
    }
    DXGADAPTER::ReleaseDdiSync(this);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32, v27);
    if ( v34 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v32);
    }
    return (unsigned int)v16;
  }
}
