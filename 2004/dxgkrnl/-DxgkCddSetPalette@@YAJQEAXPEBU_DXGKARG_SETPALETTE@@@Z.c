/*
 * XREFs of ?DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z @ 0x1C022DDD0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C00024A0 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0003F80 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009A9C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C00F72C0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0139CC8 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DdiSetPalette@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPALETTE@@@Z @ 0x1C021DF10 (-DdiSetPalette@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPALETTE@@@Z.c)
 */

__int64 __fastcall DxgkCddSetPalette(struct DXGADAPTER *a1, const struct _DXGKARG_SETPALETTE *a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 VidPnSourceId; // rdx
  struct DXGPROCESS *v9; // r15
  int PairingAdapters; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 *v16; // rsi
  ADAPTER_DISPLAY **v17; // rdi
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // rcx
  _QWORD *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  struct DXGADAPTER *v32; // [rsp+40h] [rbp-C0h] BYREF
  struct DXGADAPTER *v33; // [rsp+48h] [rbp-B8h] BYREF
  int v34; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v35; // [rsp+58h] [rbp-A8h]
  char v36; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v37; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v38; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v39[144]; // [rsp+80h] [rbp-80h] BYREF

  v34 = -1;
  v35 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v36 = 1;
    v34 = 3010;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 3010);
  }
  else
  {
    v36 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v34, 3010LL);
  Current = DXGPROCESS::GetCurrent(v6, v5);
  VidPnSourceId = a2->VidPnSourceId;
  v33 = 0LL;
  v32 = 0LL;
  v9 = Current;
  PairingAdapters = DxgkpGetPairingAdapters(a1, VidPnSourceId, &v33, &v38, &v32, &v37, 0);
  v13 = PairingAdapters;
  if ( PairingAdapters >= 0 )
  {
    v16 = (__int64 *)v33;
    v17 = (ADAPTER_DISPLAY **)v32;
    if ( !v33 || !v32 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v12, v11);
      *(_QWORD *)(v18 + 24) = 2304LL;
      WdLogEvent5_WdAssertion(v18);
    }
    COREADAPTERACCESS::COREADAPTERACCESS(
      (COREADAPTERACCESS *)v39,
      (struct DXGADAPTER *const)v16,
      (struct DXGADAPTER *const)v17);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v16);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v17);
    v19 = COREADAPTERACCESS::AcquireExclusive((__int64)v39, 2LL);
    v13 = v19;
    if ( v19 >= 0 )
    {
      if ( !v16[338] )
      {
        v24 = WdLogNewEntry5_WdAssertion(v21, v20);
        *(_QWORD *)(v24 + 24) = 2321LL;
        WdLogEvent5_WdAssertion(v24);
      }
      if ( !v17[337] )
      {
        v25 = WdLogNewEntry5_WdAssertion(v21, v20);
        *(_QWORD *)(v25 + 24) = 2322LL;
        WdLogEvent5_WdAssertion(v25);
      }
      ADAPTER_RENDER::FlushScheduler(v16[338], 6, 0xFFFFFFFF, 0);
      v13 = (int)ADAPTER_DISPLAY::DdiSetPalette(v17[337], a2, v26);
      ADAPTER_RENDER::FlushScheduler(v16[338], 7, 0xFFFFFFFF, 0);
      if ( (int)v13 < 0 )
      {
        v28 = (_QWORD *)WdLogNewEntry5_WdError(v27, v23);
        v28[3] = v13;
        v28[4] = v17;
        v28[5] = a2->VidPnSourceId;
        v28[6] = v9;
        WdLogEvent5_WdError(v28);
      }
    }
    else
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdEvent(v21, v20);
      v22[3] = v13;
      v22[4] = v16;
      v22[5] = v17;
      v22[6] = v9;
      WdLogEvent5_WdEvent(v22);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v39, v23);
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v14 + 24) = a1;
    *(_QWORD *)(v14 + 32) = v13;
    WdLogEvent5_WdError(v14);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34, v15);
  if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v29, &EventProfilerExit, v30, v34);
  return (unsigned int)v13;
}
