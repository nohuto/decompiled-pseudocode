/*
 * XREFs of ?DdiDPI2CIoTransmission@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_DPI2CIOTRANSMISSION@@@Z @ 0x1C02155DC
 * Callers:
 *     NtDxgkDisplayPortOperation @ 0x1C004E010 (NtDxgkDisplayPortOperation.c)
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

__int64 __fastcall ADAPTER_DISPLAY::DdiDPI2CIoTransmission(
        ADAPTER_DISPLAY *this,
        struct _DXGKARG_DPI2CIOTRANSMISSION *a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int8 CurrentIrql; // r15
  struct DXGTHREAD *v8; // rdi
  struct DXGTHREAD *Current; // rax
  int v10; // r14d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 (__fastcall *v13)(_QWORD, struct _DXGKARG_DPI2CIOTRANSMISSION *); // rax
  int v14; // ebx
  _QWORD *v15; // rax
  unsigned __int8 v16; // cl
  _QWORD *v17; // rax
  __int64 v18; // rcx
  bool v19; // sf
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  int v26; // [rsp+20h] [rbp-60h] BYREF
  __int64 v27; // [rsp+28h] [rbp-58h]
  char v28; // [rsp+30h] [rbp-50h]
  _BYTE v29[8]; // [rsp+38h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-40h] BYREF

  v26 = -1;
  v27 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v28 = 1;
    v26 = 5152;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5152);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v26, 5152LL);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4324LL));
  CurrentIrql = KeGetCurrentIrql();
  v8 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(v6, v5), (v8 = Current) != 0LL) )
    v10 = *((_DWORD *)Current + 8);
  else
    v10 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v29,
    *((struct DXGADAPTER **)this + 2));
  v12 = *(_QWORD *)(*((_QWORD *)this + 2) + 1360LL);
  if ( v12 && (v13 = *(__int64 (__fastcall **)(_QWORD, struct _DXGKARG_DPI2CIOTRANSMISSION *))(v12 + 56)) != 0LL )
    v14 = v13(*(_QWORD *)(v12 + 8), a2);
  else
    v14 = -1073741637;
  if ( v29[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v12, v11);
    v15[3] = 275LL;
    v15[4] = 16LL;
    v15[5] = this;
    v15[6] = CurrentIrql;
    v16 = KeGetCurrentIrql();
    v15[7] = v16;
    WdLogEvent5_WdCriticalError(v15);
  }
  if ( v8 && *((_DWORD *)v8 + 8) != v10 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v12, v11);
    v17[3] = 275LL;
    v17[4] = 38LL;
    v18 = *((int *)v8 + 8);
    v17[7] = 0LL;
    v17[5] = v18;
    v17[6] = v10;
    WdLogEvent5_WdCriticalError(v17);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4324LL));
  if ( v14 != -1073741823 && v14 != -1073741811 && v14 != -1073741637 )
  {
    v19 = v14 < 0;
    if ( !v14 )
      goto LABEL_26;
    v20 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v20 + 24) = v14;
    WdLogEvent5_WdError(v20);
  }
  v19 = v14 < 0;
LABEL_26:
  if ( v19 )
  {
    v21 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v21 + 24) = v14;
    WdLogEvent5_WdError(v21);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26, v22);
  if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v26);
  return (unsigned int)v14;
}
