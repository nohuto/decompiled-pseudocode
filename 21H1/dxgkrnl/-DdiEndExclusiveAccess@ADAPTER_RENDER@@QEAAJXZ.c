/*
 * XREFs of ?DdiEndExclusiveAccess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0216AC4
 * Callers:
 *     ?EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0211DD4 (-EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJXZ.c)
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

__int64 __fastcall ADAPTER_RENDER::DdiEndExclusiveAccess(ADAPTER_RENDER *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int8 CurrentIrql; // r15
  struct DXGTHREAD *v10; // rbx
  struct DXGTHREAD *Current; // rax
  int v12; // r14d
  __int64 v13; // rcx
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
  int v25; // [rsp+28h] [rbp-58h] BYREF
  __int64 v26; // [rsp+30h] [rbp-50h]
  char v27; // [rsp+38h] [rbp-48h]
  _BYTE v28[8]; // [rsp+40h] [rbp-40h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-38h] BYREF

  v25 = -1;
  v26 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v27 = 1;
    v25 = 5131;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5131);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v25, 5131LL);
  v5 = *((_QWORD *)this + 2);
  LODWORD(v6) = 0;
  if ( *(_QWORD *)(v5 + 1256) )
  {
    DXGADAPTER::AcquireDdiSync(v5, 1);
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4324LL));
    CurrentIrql = KeGetCurrentIrql();
    v10 = 0LL;
    if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(v8, v7), (v10 = Current) != 0LL) )
      v12 = *((_DWORD *)Current + 8);
    else
      v12 = 0;
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
      (DXGVALIDATIONPROCESSATTACH *)v28,
      *((struct DXGADAPTER **)this + 2));
    v13 = *((_QWORD *)this + 2);
    v24 = 0;
    v6 = (*(int (__fastcall **)(_QWORD, int *))(v13 + 1256))(*(_QWORD *)(v13 + 272), &v24);
    if ( v28[0] )
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
    if ( v10 && *((_DWORD *)v10 + 8) != v12 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v14);
      v18[3] = 275LL;
      v18[4] = 38LL;
      v19 = *((int *)v10 + 8);
      v18[7] = 0LL;
      v18[5] = v19;
      v18[6] = v12;
      WdLogEvent5_WdCriticalError(v18);
    }
    _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4324LL));
    if ( (_DWORD)v6 )
    {
      v20 = WdLogNewEntry5_WdError(v15, v14);
      *(_QWORD *)(v20 + 24) = v6;
      WdLogEvent5_WdError(v20);
    }
    DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25, v4);
  if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v21, &EventProfilerExit, v22, v25);
  return (unsigned int)v6;
}
