/*
 * XREFs of DxgkWin32kSetPointerShape @ 0x1C0279E40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH@Z @ 0x1C01137F0 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C0116E44 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkWin32kSetPointerShape(
        struct _LUID *a1,
        struct _DXGKARG_SETPOINTERPOSITION *a2,
        struct _DXGKARG_SETPOINTERSHAPE *a3,
        int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct DXGADAPTER *v14; // rsi
  _QWORD *v15; // rax
  __int64 v16; // rcx
  unsigned int Value; // eax
  unsigned int v18; // ebx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v22; // [rsp+40h] [rbp-38h] BYREF
  __int64 v23; // [rsp+48h] [rbp-30h]
  char v24; // [rsp+50h] [rbp-28h]
  unsigned __int64 v25; // [rsp+90h] [rbp+18h] BYREF

  v22 = -1;
  v23 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v24 = 1;
    v22 = 2129;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 2129);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v22, 2129LL);
  if ( !a3 )
    goto LABEL_14;
  Global = DXGGLOBAL::GetGlobal(v9, v8);
  v11 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v25);
  v14 = v11;
  if ( !v11 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12);
    v15[3] = a1->HighPart;
    v15[4] = a1->LowPart;
LABEL_13:
    WdLogEvent5_WdError(v15);
LABEL_14:
    v18 = -1073741811;
    goto LABEL_15;
  }
  v16 = *(unsigned int *)(*((_QWORD *)v11 + 334) + 80LL);
  if ( a2->VidPnSourceId >= (unsigned int)v16 || (Value = a2->Flags.Value, Value >= 4) || (Value & 2) != 0 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v16, v12);
    v15[3] = a1->HighPart;
    v15[4] = a1->LowPart;
    v15[5] = a2->VidPnSourceId;
    goto LABEL_13;
  }
  v18 = DxgkSetPointerShape(v14, a2, a3, a3->Width, a3->Height, a4, 1);
  DXGADAPTER::ReleaseReferenceNoTracking(v14);
LABEL_15:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22, v8);
  if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v22);
  return v18;
}
