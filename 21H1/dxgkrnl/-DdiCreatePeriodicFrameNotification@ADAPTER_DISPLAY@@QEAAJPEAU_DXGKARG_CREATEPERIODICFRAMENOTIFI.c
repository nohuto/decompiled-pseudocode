/*
 * XREFs of ?DdiCreatePeriodicFrameNotification@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CREATEPERIODICFRAMENOTIFICATION@@@Z @ 0x1C0214EAC
 * Callers:
 *     ?ADAPTER_DISPLAY_DdiCreatePeriodicFrameNotification@@YAJPEAVADAPTER_DISPLAY@@PEAU_DXGKARG_CREATEPERIODICFRAMENOTIFICATION@@@Z @ 0x1C0040260 (-ADAPTER_DISPLAY_DdiCreatePeriodicFrameNotification@@YAJPEAVADAPTER_DISPLAY@@PEAU_DXGKARG_CREATE.c)
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

__int64 __fastcall ADAPTER_DISPLAY::DdiCreatePeriodicFrameNotification(
        ADAPTER_DISPLAY *this,
        struct _DXGKARG_CREATEPERIODICFRAMENOTIFICATION *a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  void *v8; // rcx
  unsigned __int8 CurrentIrql; // r12
  struct DXGTHREAD *v10; // rdi
  struct DXGTHREAD *Current; // rax
  int v12; // r14d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rax
  unsigned __int8 v19; // cl
  _QWORD *v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rdx
  HANDLE hNotification; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  int v29; // [rsp+20h] [rbp-60h] BYREF
  __int64 v30; // [rsp+28h] [rbp-58h]
  char v31; // [rsp+30h] [rbp-50h]
  _BYTE v32[8]; // [rsp+38h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-40h] BYREF

  v29 = -1;
  v30 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v31 = 1;
    v29 = 5074;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5074);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v29, 5074LL);
  v6 = *((_QWORD *)this + 2);
  if ( *(_QWORD *)(v6 + 1072) && *(int *)(v6 + 2304) >= 8704 )
  {
    DXGADAPTER::AcquireDdiSync(v6, 1);
    v8 = *(void **)(*((_QWORD *)this + 2) + 272LL);
    a2->hAdapter = v8;
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4324LL));
    CurrentIrql = KeGetCurrentIrql();
    v10 = 0LL;
    if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent((__int64)v8, v7), (v10 = Current) != 0LL) )
      v12 = *((_DWORD *)Current + 8);
    else
      v12 = 0;
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
      (DXGVALIDATIONPROCESSATTACH *)v32,
      *((struct DXGADAPTER **)this + 2));
    v15 = (*(int (__fastcall **)(struct _DXGKARG_CREATEPERIODICFRAMENOTIFICATION *))(*((_QWORD *)this + 2) + 1072LL))(a2);
    if ( v32[0] )
      KeUnstackDetachProcess(&ApcState);
    if ( CurrentIrql != KeGetCurrentIrql() )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14, v13);
      v18[3] = 275LL;
      v18[4] = 16LL;
      v18[5] = this;
      v18[6] = CurrentIrql;
      v19 = KeGetCurrentIrql();
      v18[7] = v19;
      WdLogEvent5_WdCriticalError(v18);
    }
    if ( v10 && *((_DWORD *)v10 + 8) != v12 )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14, v13);
      v20[3] = 275LL;
      v20[4] = 38LL;
      v21 = *((int *)v10 + 8);
      v20[7] = 0LL;
      v20[5] = v21;
      v20[6] = v12;
      WdLogEvent5_WdCriticalError(v20);
    }
    _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4324LL));
    v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13, v16, v17);
    v22[3] = v15;
    v22[4] = a2->hAdapter;
    v22[5] = a2->VidPnTargetId;
    v22[6] = a2->NotificationID;
    hNotification = a2->hNotification;
    v22[7] = hNotification;
    if ( (_DWORD)v15 != -1073741823 && (_DWORD)v15 != -1073741811 && (_DWORD)v15 != -1073741801 && (_DWORD)v15 )
    {
      v25 = WdLogNewEntry5_WdError(hNotification, v23);
      *(_QWORD *)(v25 + 24) = v15;
      WdLogEvent5_WdError(v25);
    }
    DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  }
  else
  {
    LODWORD(v15) = -1073741822;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29, v5);
  if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v29);
  return (unsigned int)v15;
}
