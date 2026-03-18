/*
 * XREFs of ?DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x1C0014B90
 * Callers:
 *     ?ADAPTER_DISPLAY_DdiSetVidPnSourceAddress@@YAJPEAVADAPTER_DISPLAY@@PEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x1C0014B70 (-ADAPTER_DISPLAY_DdiSetVidPnSourceAddress@@YAJPEAVADAPTER_DISPLAY@@PEBU_DXGKARG_SETVIDPNSOURCEAD.c)
 * Callees:
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C000A3E0 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000A490 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000A550 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBEF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C01144D0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiSetVidPnSourceAddress(
        ADAPTER_DISPLAY *this,
        const struct _DXGKARG_SETVIDPNSOURCEADDRESS *a2,
        __int64 a3)
{
  __int64 v5; // rdx
  char v6; // r14
  __int64 v7; // rcx
  unsigned __int8 CurrentIrql; // bp
  struct DXGTHREAD *v9; // r15
  int v10; // r12d
  struct DXGADAPTER *v11; // rsi
  __int64 v12; // rdx
  unsigned int v13; // esi
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rdx
  HANDLE hAllocation; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  struct DXGTHREAD *Current; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  DXGGLOBAL *v25; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  struct _KPROCESS *v27; // rcx
  _QWORD *v28; // rax
  unsigned __int8 v29; // cl
  _QWORD *v30; // rax
  __int64 v31; // rax
  unsigned int v32; // [rsp+20h] [rbp-88h] BYREF
  __int64 v33; // [rsp+28h] [rbp-80h]
  char v34; // [rsp+30h] [rbp-78h]
  char v35; // [rsp+38h] [rbp-70h]
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-68h] BYREF

  v32 = -1;
  v33 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v34 = 1;
    v32 = 5010;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(this, &EventProfilerEnter, a3, 5010LL);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v32, 5010LL);
  v6 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
    v6 = 1;
  }
  v7 = *((_QWORD *)this + 2);
  if ( *(int *)(v7 + 2572) < 1105 )
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD, const struct _DXGKARG_SETVIDPNSOURCEADDRESS *))(v7 + 544))(
            *(_QWORD *)(v7 + 272),
            a2);
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 4324));
    CurrentIrql = KeGetCurrentIrql();
    v9 = 0LL;
    if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v9 = Current) != 0LL) )
      v10 = *((_DWORD *)Current + 8);
    else
      v10 = 0;
    v11 = (struct DXGADAPTER *)*((_QWORD *)this + 2);
    v35 = 0;
    if ( KeGetCurrentIrql() < 2u )
    {
      Global = DXGGLOBAL::GetGlobal(v7, v5);
      if ( DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext((struct DXGGLOBAL *)((char *)Global + 1436), v11) )
      {
        v25 = DXGGLOBAL::GetGlobal(v24, v23);
        SessionData = DXGGLOBAL::GetSessionData(v25);
        if ( SessionData )
        {
          v27 = (struct _KPROCESS *)*((_QWORD *)SessionData + 2337);
          if ( v27 )
          {
            KeStackAttachProcess(v27, &ApcState);
            v35 = 1;
          }
        }
      }
    }
    v13 = (*(__int64 (__fastcall **)(_QWORD, const struct _DXGKARG_SETVIDPNSOURCEADDRESS *))(*((_QWORD *)this + 2)
                                                                                           + 544LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 272LL),
            a2);
    if ( v35 )
      KeUnstackDetachProcess(&ApcState);
    v14 = KeGetCurrentIrql();
    if ( CurrentIrql != (_BYTE)v14 )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14, v12);
      v28[3] = 275LL;
      v28[4] = 16LL;
      v28[5] = this;
      v28[6] = CurrentIrql;
      v29 = KeGetCurrentIrql();
      v28[7] = v29;
      WdLogEvent5_WdCriticalError(v28);
    }
    if ( v9 && *((_DWORD *)v9 + 8) != v10 )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14, v12);
      v30[3] = 275LL;
      v30[4] = 38LL;
      v30[5] = *((int *)v9 + 8);
      v30[6] = v10;
      v30[7] = 0LL;
      WdLogEvent5_WdCriticalError(v30);
    }
    _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4324LL));
  }
  v15 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v15[3] = (int)v13;
  v15[4] = a2->VidPnSourceId;
  v15[5] = a2->PrimarySegment;
  v15[6] = a2->PrimaryAddress.QuadPart;
  hAllocation = a2->hAllocation;
  v15[7] = hAllocation;
  if ( v13 && v13 != -1073741811 && v13 != -1073741801 )
  {
    v31 = WdLogNewEntry5_WdError(hAllocation, v16);
    *(_QWORD *)(v31 + 24) = (int)v13;
    WdLogEvent5_WdError(v31);
  }
  if ( v6 )
    DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32, v16);
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v32);
  return v13;
}
