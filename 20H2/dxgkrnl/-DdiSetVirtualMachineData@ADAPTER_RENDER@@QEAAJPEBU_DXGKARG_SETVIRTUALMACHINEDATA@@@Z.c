/*
 * XREFs of ?DdiSetVirtualMachineData@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIRTUALMACHINEDATA@@@Z @ 0x1C021E478
 * Callers:
 *     ?Initialize@DXGPROCESS_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C015AB2C (-Initialize@DXGPROCESS_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0003D20 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0003DE0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0003E80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00F9DB0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSetVirtualMachineData(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_SETVIRTUALMACHINEDATA *a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int8 CurrentIrql; // r15
  struct DXGTHREAD *v11; // rbx
  struct DXGTHREAD *Current; // rax
  int v13; // r14d
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  unsigned __int8 v17; // cl
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  int v24; // [rsp+20h] [rbp-60h] BYREF
  __int64 v25; // [rsp+28h] [rbp-58h]
  char v26; // [rsp+30h] [rbp-50h]
  _BYTE v27[8]; // [rsp+38h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-40h] BYREF

  v24 = -1;
  v25 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v26 = 1;
    v24 = 5113;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5113);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v24, 5113LL);
  v6 = *((_QWORD *)this + 2);
  LODWORD(v7) = 0;
  if ( *(_QWORD *)(v6 + 1240) )
  {
    DXGADAPTER::AcquireDdiSync(v6, 1);
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
    CurrentIrql = KeGetCurrentIrql();
    v11 = 0LL;
    if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(v9, v8), (v11 = Current) != 0LL) )
      v13 = *((_DWORD *)Current + 8);
    else
      v13 = 0;
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
      (DXGVALIDATIONPROCESSATTACH *)v27,
      *((struct DXGADAPTER **)this + 2));
    v7 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_SETVIRTUALMACHINEDATA *))(*((_QWORD *)this + 2) + 1240LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 272LL),
           a2);
    if ( v27[0] )
      KeUnstackDetachProcess(&ApcState);
    v15 = KeGetCurrentIrql();
    if ( CurrentIrql != (_BYTE)v15 )
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v14);
      v16[3] = 275LL;
      v16[4] = 16LL;
      v16[5] = this;
      v16[6] = CurrentIrql;
      v17 = KeGetCurrentIrql();
      v16[7] = v17;
      WdLogEvent5_WdCriticalError(v16);
    }
    if ( v11 && *((_DWORD *)v11 + 8) != v13 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v14);
      v18[3] = 275LL;
      v18[4] = 38LL;
      v19 = *((int *)v11 + 8);
      v18[7] = 0LL;
      v18[5] = v19;
      v18[6] = v13;
      WdLogEvent5_WdCriticalError(v18);
    }
    _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
    if ( (_DWORD)v7 )
    {
      v20 = WdLogNewEntry5_WdError(v15, v14);
      *(_QWORD *)(v20 + 24) = v7;
      WdLogEvent5_WdError(v20);
    }
    DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24, v5);
  if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v21, &EventProfilerExit, v22, v24);
  return (unsigned int)v7;
}
