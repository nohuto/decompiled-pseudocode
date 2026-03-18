/*
 * XREFs of ?DdiSubmitCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMAND@@@Z @ 0x1C00149C0
 * Callers:
 *     ?ADAPTER_RENDER_DdiSubmitCommand@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SUBMITCOMMAND@@@Z @ 0x1C00149A0 (-ADAPTER_RENDER_DdiSubmitCommand@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SUBMITCOMMAND@@@Z.c)
 * Callees:
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C0002788 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0003D20 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0003DE0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00EE9E4 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FAE40 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSubmitCommand(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_SUBMITCOMMAND *a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int8 CurrentIrql; // bp
  struct DXGTHREAD *v8; // r14
  int v9; // r15d
  struct DXGADAPTER *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rcx
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 Value; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  struct DXGTHREAD *Current; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  DXGGLOBAL *v27; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  struct _KPROCESS *v29; // rcx
  _QWORD *v30; // rax
  unsigned __int8 v31; // cl
  _QWORD *v32; // rax
  __int64 v33; // rax
  unsigned int v34; // [rsp+20h] [rbp-88h] BYREF
  __int64 v35; // [rsp+28h] [rbp-80h]
  char v36; // [rsp+30h] [rbp-78h]
  char v37; // [rsp+38h] [rbp-70h]
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-68h] BYREF

  v34 = -1;
  v35 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v36 = 1;
    v34 = 5013;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(this, &EventProfilerEnter, a3, 5013LL);
  }
  else
  {
    v36 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v34, 5013LL);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
  CurrentIrql = KeGetCurrentIrql();
  v8 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v8 = Current) != 0LL) )
    v9 = *((_DWORD *)Current + 8);
  else
    v9 = 0;
  v10 = (struct DXGADAPTER *)*((_QWORD *)this + 2);
  v37 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    Global = DXGGLOBAL::GetGlobal(v6, v5);
    if ( DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext((struct DXGGLOBAL *)((char *)Global + 1548), v10) )
    {
      v27 = DXGGLOBAL::GetGlobal(v26, v25);
      SessionData = DXGGLOBAL::GetSessionData(v27);
      if ( SessionData )
      {
        v29 = (struct _KPROCESS *)*((_QWORD *)SessionData + 2337);
        if ( v29 )
        {
          KeStackAttachProcess(v29, &ApcState);
          v37 = 1;
        }
      }
    }
  }
  v12 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_SUBMITCOMMAND *))(*((_QWORD *)this + 2) + 432LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 272LL),
          a2);
  if ( v37 )
    KeUnstackDetachProcess(&ApcState);
  v13 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v13 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13, v11);
    v30[3] = 275LL;
    v30[4] = 16LL;
    v30[5] = this;
    v30[6] = CurrentIrql;
    v31 = KeGetCurrentIrql();
    v30[7] = v31;
    WdLogEvent5_WdCriticalError(v30);
  }
  if ( v8 && *((_DWORD *)v8 + 8) != v9 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13, v11);
    v32[3] = 275LL;
    v32[4] = 38LL;
    v32[5] = *((int *)v8 + 8);
    v32[6] = v9;
    v32[7] = 0LL;
    WdLogEvent5_WdCriticalError(v32);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
  v14 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v14[3] = v12;
  v14[4] = a2->hDevice;
  v14[5] = a2->DmaBufferSegmentId;
  v14[6] = a2->DmaBufferPhysicalAddress.QuadPart;
  v14[7] = a2->DmaBufferSize;
  v15 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v15[3] = a2->DmaBufferSubmissionStartOffset;
  v15[4] = a2->DmaBufferSubmissionEndOffset;
  v15[5] = a2->pDmaBufferPrivateData;
  v15[6] = a2->DmaBufferPrivateDataSize;
  v15[7] = a2->DmaBufferPrivateDataSubmissionStartOffset;
  v16 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v16[3] = a2->DmaBufferPrivateDataSubmissionEndOffset;
  v16[4] = a2->SubmissionFenceId;
  v16[5] = a2->NodeOrdinal;
  Value = a2->Flags.Value;
  v16[6] = Value;
  if ( (_DWORD)v12 )
  {
    v33 = WdLogNewEntry5_WdError(Value, v17);
    *(_QWORD *)(v33 + 24) = v12;
    WdLogEvent5_WdError(v33);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34, v19);
  if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v34);
  return (unsigned int)v12;
}
