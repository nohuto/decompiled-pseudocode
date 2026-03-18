/*
 * XREFs of ?DdiCreatePeriodicFrameNotification@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CREATEPERIODICFRAMENOTIFICATION@@@Z @ 0x1C02C725C
 * Callers:
 *     ?ADAPTER_DISPLAY_DdiCreatePeriodicFrameNotification@@YAJPEAVADAPTER_DISPLAY@@PEAU_DXGKARG_CREATEPERIODICFRAMENOTIFICATION@@@Z @ 0x1C004B5D0 (-ADAPTER_DISPLAY_DdiCreatePeriodicFrameNotification@@YAJPEAVADAPTER_DISPLAY@@PEAU_DXGKARG_CREATE.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000B800 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000B8C0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000BB00 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiCreatePeriodicFrameNotification(
        ADAPTER_DISPLAY *this,
        struct _DXGKARG_CREATEPERIODICFRAMENOTIFICATION *a2,
        __int64 a3)
{
  __int64 v5; // rcx
  KIRQL CurrentIrql; // al
  __int64 v7; // r12
  struct DXGTHREAD *v8; // rdi
  struct DXGTHREAD *Current; // rax
  int v10; // r14d
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  KIRQL v14; // al
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  int v19; // [rsp+50h] [rbp-29h] BYREF
  __int64 v20; // [rsp+58h] [rbp-21h]
  char v21; // [rsp+60h] [rbp-19h]
  _BYTE v22[8]; // [rsp+68h] [rbp-11h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-9h] BYREF

  v19 = -1;
  v20 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v21 = 1;
    v19 = 5074;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5074);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v19, 5074);
  v5 = *((_QWORD *)this + 2);
  if ( *(_QWORD *)(v5 + 1136) && *(int *)(v5 + 2424) >= 8704 )
  {
    DXGADAPTER::AcquireDdiSync(v5, 1);
    a2->hAdapter = *(HANDLE *)(*((_QWORD *)this + 2) + 280LL);
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4484LL));
    CurrentIrql = KeGetCurrentIrql();
    v7 = CurrentIrql;
    v8 = 0LL;
    if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v8 = Current) != 0LL) )
      v10 = *((_DWORD *)Current + 12);
    else
      v10 = 0;
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
      (DXGVALIDATIONPROCESSATTACH *)v22,
      *((struct DXGADAPTER **)this + 2));
    v11 = (*(int (__fastcall **)(struct _DXGKARG_CREATEPERIODICFRAMENOTIFICATION *))(*((_QWORD *)this + 2) + 1136LL))(a2);
    if ( v22[0] )
      KeUnstackDetachProcess(&ApcState);
    if ( (_BYTE)v7 != KeGetCurrentIrql() )
    {
      v14 = KeGetCurrentIrql();
      WdLogSingleEntry5(0LL, 275LL, 16LL, this, v7, v14);
    }
    if ( v8 )
    {
      v13 = *((int *)v8 + 12);
      if ( (_DWORD)v13 != v10 )
        WdLogSingleEntry5(0LL, 275LL, 38LL, v13, v10, 0LL);
    }
    _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4484LL));
    v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12);
    v15[3] = v11;
    v15[4] = a2->hAdapter;
    v15[5] = a2->VidPnTargetId;
    v15[6] = a2->NotificationID;
    v15[7] = a2->hNotification;
    if ( (_DWORD)v11 != -1073741823 && (_DWORD)v11 != -1073741811 && (_DWORD)v11 != -1073741801 && (_DWORD)v11 )
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
  }
  else
  {
    LODWORD(v11) = -1073741822;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
  if ( v21 )
  {
    LOBYTE(v16) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v19);
  }
  return (unsigned int)v11;
}
