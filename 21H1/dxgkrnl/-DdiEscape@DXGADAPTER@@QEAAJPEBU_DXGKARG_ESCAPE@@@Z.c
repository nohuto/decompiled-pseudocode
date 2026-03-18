/*
 * XREFs of ?DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z @ 0x1C0216CF0
 * Callers:
 *     CallDPDdiEscape @ 0x1C004DA68 (CallDPDdiEscape.c)
 *     DxgkEscape @ 0x1C00FB2D0 (DxgkEscape.c)
 *     ?DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z @ 0x1C02F8E9C (-DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z.c)
 * Callees:
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C000A3E0 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000A490 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000A550 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000A5F0 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBEF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGADAPTER::DdiEscape(DXGADAPTER *this, const struct _DXGKARG_ESCAPE *a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int8 CurrentIrql; // r12
  struct DXGTHREAD *v13; // rsi
  struct DXGTHREAD *Current; // rax
  int v15; // r14d
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // rax
  unsigned __int8 v19; // cl
  _QWORD *v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  int v31; // [rsp+20h] [rbp-60h] BYREF
  __int64 v32; // [rsp+28h] [rbp-58h]
  char v33; // [rsp+30h] [rbp-50h]
  _BYTE v34[8]; // [rsp+38h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-40h] BYREF

  v31 = -1;
  v32 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v33 = 1;
    v31 = 5022;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5022);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v31, 5022LL);
  Global = DXGGLOBAL::GetGlobal(v6, v5);
  if ( *((_BYTE *)Global + 1440)
    && DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext((struct DXGGLOBAL *)((char *)Global + 1436), this) )
  {
    LODWORD(v9) = -1073741637;
  }
  else
  {
    DXGADAPTER::AcquireDdiSync((__int64)this, 1);
    _InterlockedIncrement((volatile signed __int32 *)this + 1081);
    CurrentIrql = KeGetCurrentIrql();
    v13 = 0LL;
    if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(v11, v10), (v13 = Current) != 0LL) )
      v15 = *((_DWORD *)Current + 8);
    else
      v15 = 0;
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v34, this);
    v9 = (*((int (__fastcall **)(_QWORD, const struct _DXGKARG_ESCAPE *))this + 62))(*((_QWORD *)this + 34), a2);
    if ( v34[0] )
      KeUnstackDetachProcess(&ApcState);
    v17 = KeGetCurrentIrql();
    if ( CurrentIrql != (_BYTE)v17 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v16);
      v18[3] = 275LL;
      v18[4] = 16LL;
      v18[5] = this;
      v18[6] = CurrentIrql;
      v19 = KeGetCurrentIrql();
      v18[7] = v19;
      WdLogEvent5_WdCriticalError(v18);
    }
    if ( v13 && *((_DWORD *)v13 + 8) != v15 )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v16);
      v20[3] = 275LL;
      v20[4] = 38LL;
      v21 = *((int *)v13 + 8);
      v20[7] = 0LL;
      v20[5] = v21;
      v20[6] = v15;
      WdLogEvent5_WdCriticalError(v20);
    }
    _InterlockedDecrement((volatile signed __int32 *)this + 1081);
    v22 = (_QWORD *)WdLogNewEntry5_WdEvent(v17, v16);
    v22[3] = v9;
    v22[4] = *((_QWORD *)this + 34);
    v22[5] = a2->hDevice;
    v22[6] = a2->PrivateDriverDataSize;
    if ( a2->PrivateDriverDataSize <= 4 )
      v23 = 0LL;
    else
      v23 = *(unsigned int *)a2->pPrivateDriverData;
    v22[7] = v23;
    WdLogEvent5_WdEvent(v22);
    if ( (_DWORD)v9 == -1073741823 )
    {
      v27 = WdLogNewEntry5_WdEvent(v25, v24);
      *(_QWORD *)(v27 + 24) = -1073741823LL;
      WdLogEvent5_WdEvent(v27);
    }
    else if ( (_DWORD)v9 != -1073741811
           && (_DWORD)v9 != -1073741801
           && (_DWORD)v9 != -1073741795
           && (_DWORD)v9 != -1073741674
           && (_DWORD)v9 )
    {
      v26 = WdLogNewEntry5_WdError(v25, v24);
      *(_QWORD *)(v26 + 24) = v9;
      WdLogEvent5_WdError(v26);
    }
    DXGADAPTER::ReleaseDdiSync(this);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31, v8);
  if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v31);
  return (unsigned int)v9;
}
