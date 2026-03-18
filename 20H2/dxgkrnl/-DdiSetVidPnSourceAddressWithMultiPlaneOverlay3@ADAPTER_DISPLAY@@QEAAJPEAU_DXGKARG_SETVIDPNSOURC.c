/*
 * XREFs of ?DdiSetVidPnSourceAddressWithMultiPlaneOverlay3@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3@@@Z @ 0x1C003CF0C
 * Callers:
 *     ?ADAPTER_DISPLAY_DdiSetVidPnSourceAddressWithMultiPlaneOverlay3@@YAJPEAVADAPTER_DISPLAY@@PEAU_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3@@@Z @ 0x1C0041200 (-ADAPTER_DISPLAY_DdiSetVidPnSourceAddressWithMultiPlaneOverlay3@@YAJPEAVADAPTER_DISPLAY@@PEAU_DX.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0003D20 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0003DE0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0003E80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?SetMockDriverState@MOCKDRIVERSTATE@@QEAAXW4MOCKDRIVERSTATE_VALIDATE_TYPE@@PEAX@Z @ 0x1C004D5BC (-SetMockDriverState@MOCKDRIVERSTATE@@QEAAXW4MOCKDRIVERSTATE_VALIDATE_TYPE@@PEAX@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00F9DB0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiSetVidPnSourceAddressWithMultiPlaneOverlay3(
        ADAPTER_DISPLAY *this,
        struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *a2,
        __int64 a3)
{
  unsigned __int8 CurrentIrql; // r12
  unsigned __int8 v6; // r15
  struct DXGTHREAD *v7; // rsi
  struct DXGTHREAD *Current; // rax
  int v9; // r14d
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rcx
  _QWORD *v13; // rax
  unsigned __int8 v14; // cl
  _QWORD *v15; // rax
  __int64 v16; // rcx
  bool v17; // sf
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  int v22; // [rsp+20h] [rbp-60h] BYREF
  __int64 v23; // [rsp+28h] [rbp-58h]
  char v24; // [rsp+30h] [rbp-50h]
  _BYTE v25[8]; // [rsp+38h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-40h] BYREF

  v22 = -1;
  v23 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v24 = 1;
    v22 = 5122;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5122);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v22, 5122LL);
  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
    DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
  v6 = KeGetCurrentIrql();
  v7 = 0LL;
  if ( v6 < 2u && (Current = DXGTHREAD::GetCurrent(), (v7 = Current) != 0LL) )
    v9 = *((_DWORD *)Current + 8);
  else
    v9 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v25,
    *((struct DXGADAPTER **)this + 2));
  v11 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *))(*((_QWORD *)this + 2) + 936LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 272LL),
          a2);
  if ( v25[0] )
    KeUnstackDetachProcess(&ApcState);
  v12 = KeGetCurrentIrql();
  if ( v6 != (_BYTE)v12 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v12, v10);
    v13[3] = 275LL;
    v13[4] = 16LL;
    v13[5] = this;
    v13[6] = v6;
    v14 = KeGetCurrentIrql();
    v13[7] = v14;
    WdLogEvent5_WdCriticalError(v13);
  }
  if ( v7 && *((_DWORD *)v7 + 8) != v9 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v12, v10);
    v15[3] = 275LL;
    v15[4] = 38LL;
    v16 = *((int *)v7 + 8);
    v15[7] = 0LL;
    v15[5] = v16;
    v15[6] = v9;
    WdLogEvent5_WdCriticalError(v15);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
  if ( (_DWORD)v11 != -1073741267 )
  {
    v17 = (int)v11 < 0;
    if ( !(_DWORD)v11 )
      goto LABEL_22;
    v18 = WdLogNewEntry5_WdError(v12, v10);
    *(_QWORD *)(v18 + 24) = v11;
    WdLogEvent5_WdError(v18);
  }
  v17 = (int)v11 < 0;
LABEL_22:
  if ( !v17 )
    MOCKDRIVERSTATE::SetMockDriverState(*(_QWORD *)(*((_QWORD *)this + 2) + 4488LL), v10, a2);
  if ( !CurrentIrql )
    DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22, v10);
  if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v22);
  return (unsigned int)v11;
}
