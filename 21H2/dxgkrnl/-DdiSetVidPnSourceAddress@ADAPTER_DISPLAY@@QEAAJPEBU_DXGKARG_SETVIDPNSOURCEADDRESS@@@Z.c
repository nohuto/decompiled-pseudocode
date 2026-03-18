/*
 * XREFs of ?DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x1C0016730
 * Callers:
 *     ?ADAPTER_DISPLAY_DdiSetVidPnSourceAddress@@YAJPEAVADAPTER_DISPLAY@@PEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x1C0016710 (-ADAPTER_DISPLAY_DdiSetVidPnSourceAddress@@YAJPEAVADAPTER_DISPLAY@@PEBU_DXGKARG_SETVIDPNSOURCEAD.c)
 * Callees:
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C000A8F8 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000B800 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000B8C0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C01961F0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiSetVidPnSourceAddress(
        ADAPTER_DISPLAY *this,
        const struct _DXGKARG_SETVIDPNSOURCEADDRESS *a2,
        __int64 a3)
{
  char v5; // r14
  __int64 v6; // rax
  KIRQL CurrentIrql; // al
  __int64 v8; // rbp
  struct DXGTHREAD *v9; // r15
  int v10; // r12d
  struct DXGADAPTER *v11; // rsi
  unsigned int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  struct DXGTHREAD *Current; // rax
  struct DXGGLOBAL *Global; // rax
  DXGGLOBAL *v21; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  struct _KPROCESS *v23; // rcx
  KIRQL v24; // al
  int v25; // edx
  int v26; // ecx
  int v27; // r8d
  __int64 v28; // [rsp+60h] [rbp-98h] BYREF
  __int64 v29; // [rsp+68h] [rbp-90h]
  char v30; // [rsp+70h] [rbp-88h]
  char v31; // [rsp+78h] [rbp-80h]
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-78h] BYREF

  LODWORD(v28) = -1;
  v29 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v30 = 1;
    LODWORD(v28) = 5010;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(this, &EventProfilerEnter, a3, 5010LL);
  }
  else
  {
    v30 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v28, 5010);
  v5 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
    v5 = 1;
  }
  v6 = *((_QWORD *)this + 2);
  if ( *(int *)(v6 + 2692) < 1105 )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, const struct _DXGKARG_SETVIDPNSOURCEADDRESS *))(v6 + 632))(
            *(_QWORD *)(v6 + 280),
            a2);
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 4484));
    CurrentIrql = KeGetCurrentIrql();
    v8 = CurrentIrql;
    v9 = 0LL;
    if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v9 = Current) != 0LL) )
      v10 = *((_DWORD *)Current + 12);
    else
      v10 = 0;
    v11 = (struct DXGADAPTER *)*((_QWORD *)this + 2);
    v31 = 0;
    if ( KeGetCurrentIrql() < 2u )
    {
      Global = DXGGLOBAL_GetGlobal();
      if ( DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext((struct DXGGLOBAL *)((char *)Global + 1716), v11) )
      {
        v21 = DXGGLOBAL_GetGlobal();
        SessionData = DXGGLOBAL::GetSessionData(v21);
        if ( SessionData )
        {
          v23 = (struct _KPROCESS *)*((_QWORD *)SessionData + 2340);
          if ( v23 )
          {
            KeStackAttachProcess(v23, &ApcState);
            v31 = 1;
          }
        }
      }
    }
    v12 = (*(__int64 (__fastcall **)(_QWORD, const struct _DXGKARG_SETVIDPNSOURCEADDRESS *))(*((_QWORD *)this + 2)
                                                                                           + 632LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 280LL),
            a2);
    if ( v31 )
      KeUnstackDetachProcess(&ApcState);
    if ( (_BYTE)v8 != KeGetCurrentIrql() )
    {
      v24 = KeGetCurrentIrql();
      WdLogSingleEntry5(0LL, 275LL, 16LL, this, v8, v24);
    }
    if ( v9 )
    {
      v14 = *((int *)v9 + 12);
      if ( (_DWORD)v14 != v10 )
        WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v9 + 12), v10, 0LL);
    }
    _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4484LL));
  }
  v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13);
  v15[3] = (int)v12;
  v15[4] = a2->VidPnSourceId;
  v15[5] = a2->PrimarySegment;
  v15[6] = a2->PrimaryAddress.QuadPart;
  v15[7] = a2->hAllocation;
  if ( v12 )
  {
    if ( v12 != -1073741811 && v12 != -1073741801 )
    {
      WdLogSingleEntry1(2LL, (int)v12);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v26,
            v25,
            v27,
            0,
            0,
            -1,
            (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
            (int)v12,
            0LL,
            0LL,
            0LL,
            0LL,
            v28,
            v29);
      }
    }
  }
  if ( v5 )
    DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
  if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, (unsigned int)v28);
  return v12;
}
