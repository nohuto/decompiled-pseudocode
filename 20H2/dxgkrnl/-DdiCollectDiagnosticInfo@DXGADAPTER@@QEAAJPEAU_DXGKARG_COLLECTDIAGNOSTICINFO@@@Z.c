/*
 * XREFs of ?DdiCollectDiagnosticInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C02175D0
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C025E2E4 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     ?AddDriverBlackboxInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJXZ @ 0x1C02B816C (-AddDriverBlackboxInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJXZ.c)
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

__int64 __fastcall DXGADAPTER::DdiCollectDiagnosticInfo(
        DXGADAPTER *this,
        struct _DXGKARG_COLLECTDIAGNOSTICINFO *a2,
        __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int8 CurrentIrql; // r15
  struct DXGTHREAD *v9; // rdi
  struct DXGTHREAD *Current; // rax
  int v11; // r14d
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rcx
  _QWORD *v15; // rax
  unsigned __int8 v16; // cl
  _QWORD *v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // [rsp+20h] [rbp-60h] BYREF
  __int64 v27; // [rsp+28h] [rbp-58h]
  char v28; // [rsp+30h] [rbp-50h]
  _BYTE v29[8]; // [rsp+38h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-40h] BYREF

  if ( !*((_QWORD *)this + 166) )
    return 3221225474LL;
  v26 = -1;
  v27 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v28 = 1;
    v26 = 5141;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5141);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v26, 5141LL);
  DXGADAPTER::AcquireDdiSync((__int64)this, 1);
  _InterlockedIncrement((volatile signed __int32 *)this + 1091);
  CurrentIrql = KeGetCurrentIrql();
  v9 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(v7, v6), (v9 = Current) != 0LL) )
    v11 = *((_DWORD *)Current + 8);
  else
    v11 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v29, this);
  v13 = (*((int (__fastcall **)(_QWORD, struct _DXGKARG_COLLECTDIAGNOSTICINFO *))this + 166))(
          *((_QWORD *)this + 27),
          a2);
  if ( v29[0] )
    KeUnstackDetachProcess(&ApcState);
  v14 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v14 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14, v12);
    v15[3] = 275LL;
    v15[4] = 16LL;
    v15[5] = this;
    v15[6] = CurrentIrql;
    v16 = KeGetCurrentIrql();
    v15[7] = v16;
    WdLogEvent5_WdCriticalError(v15);
  }
  if ( v9 && *((_DWORD *)v9 + 8) != v11 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14, v12);
    v17[3] = 275LL;
    v17[4] = 38LL;
    v18 = *((int *)v9 + 8);
    v17[7] = 0LL;
    v17[5] = v18;
    v17[6] = v11;
    WdLogEvent5_WdCriticalError(v17);
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 1091);
  v19 = (_QWORD *)WdLogNewEntry5_WdEvent(v14, v12);
  v19[3] = v13;
  v19[4] = *((_QWORD *)this + 27);
  v19[5] = *((_QWORD *)this + 34);
  v19[6] = *((int *)a2 + 2);
  v19[7] = *((unsigned int *)a2 + 55);
  WdLogEvent5_WdEvent(v19);
  if ( (_DWORD)v13 != -1073741823 && (_DWORD)v13 != -1073741801 && (_DWORD)v13 )
  {
    v22 = WdLogNewEntry5_WdError(v21, v20);
    *(_QWORD *)(v22 + 24) = v13;
    WdLogEvent5_WdError(v22);
  }
  DXGADAPTER::ReleaseDdiSync(this);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26, v23);
  if ( v28 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v26);
  }
  return (unsigned int)v13;
}
