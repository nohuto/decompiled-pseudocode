/*
 * XREFs of ?DdiPowerRuntimeControlRequest@DXGADAPTER@@QEAAJPEBU_GUID@@PEAX_K12PEA_K@Z @ 0x1C003CAD0
 * Callers:
 *     ?DxgkPowerRuntimeControlCallback@@YAJPEAXPEBU_GUID@@0_K02PEA_K@Z @ 0x1C003EA80 (-DxgkPowerRuntimeControlCallback@@YAJPEAXPEBU_GUID@@0_K02PEA_K@Z.c)
 *     ?PrepareToRemove@DXGADAPTER@@QEAAXXZ @ 0x1C020E26C (-PrepareToRemove@DXGADAPTER@@QEAAXXZ.c)
 *     ?StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ @ 0x1C020F66C (-StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C020F7B4 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0004030 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBBF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGADAPTER::DdiPowerRuntimeControlRequest(
        DXGADAPTER *this,
        const struct _GUID *a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        unsigned __int64 a6,
        unsigned __int64 *a7)
{
  unsigned __int8 CurrentIrql; // r15
  struct DXGTHREAD *v12; // rbx
  struct DXGTHREAD *Current; // rax
  int v14; // r14d
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rcx
  _QWORD *v18; // rax
  unsigned __int8 v19; // cl
  _QWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  int v25; // [rsp+40h] [rbp-71h] BYREF
  __int64 v26; // [rsp+48h] [rbp-69h]
  char v27; // [rsp+50h] [rbp-61h]
  unsigned __int64 *v28; // [rsp+58h] [rbp-59h]
  void *v29; // [rsp+60h] [rbp-51h]
  _BYTE v30[8]; // [rsp+68h] [rbp-49h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-41h] BYREF

  v25 = -1;
  v26 = 0LL;
  v29 = a5;
  v28 = a7;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v27 = 1;
    v25 = 5126;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5126);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v25, 5126LL);
  _InterlockedIncrement((volatile signed __int32 *)this + 1091);
  CurrentIrql = KeGetCurrentIrql();
  v12 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v12 = Current) != 0LL) )
    v14 = *((_DWORD *)Current + 8);
  else
    v14 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v30, this);
  v16 = (*((int (__fastcall **)(_QWORD, const struct _GUID *, __int64, __int64, void *, unsigned __int64, unsigned __int64 *))this
         + 94))(
          *((_QWORD *)this + 34),
          a2,
          a3,
          a4,
          v29,
          a6,
          v28);
  if ( v30[0] )
    KeUnstackDetachProcess(&ApcState);
  v17 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v17 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v15);
    v18[3] = 275LL;
    v18[4] = 16LL;
    v18[5] = this;
    v18[6] = CurrentIrql;
    v19 = KeGetCurrentIrql();
    v18[7] = v19;
    WdLogEvent5_WdCriticalError(v18);
  }
  if ( v12 && *((_DWORD *)v12 + 8) != v14 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v15);
    v20[3] = 275LL;
    v20[4] = 38LL;
    v20[5] = *((int *)v12 + 8);
    v20[6] = v14;
    v20[7] = 0LL;
    WdLogEvent5_WdCriticalError(v20);
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 1091);
  if ( (_DWORD)v16 != -1073741811 && (_DWORD)v16 )
  {
    v21 = WdLogNewEntry5_WdError(v17, v15);
    *(_QWORD *)(v21 + 24) = v16;
    WdLogEvent5_WdError(v21);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25, v15);
  if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v25);
  return (unsigned int)v16;
}
