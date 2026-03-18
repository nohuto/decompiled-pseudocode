/*
 * XREFs of ?DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z @ 0x1C02DD060
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C000A6FC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01798C0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C01BB044 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DdiSetPalette@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPALETTE@@@Z @ 0x1C02CC054 (-DdiSetPalette@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPALETTE@@@Z.c)
 */

__int64 __fastcall DxgkCddSetPalette(struct DXGADAPTER *a1, const struct _DXGKARG_SETPALETTE *a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct DXGPROCESS *Current; // rax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // edx
  __int64 v11; // r12
  int PairingAdapters; // eax
  __int64 v13; // rdi
  __int64 *v14; // rbx
  ADAPTER_DISPLAY **v15; // rsi
  int v16; // eax
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // r8
  struct DXGADAPTER *v21; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGADAPTER *v22; // [rsp+58h] [rbp-A8h] BYREF
  int v23; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v24; // [rsp+68h] [rbp-98h]
  char v25; // [rsp+70h] [rbp-90h]
  unsigned __int64 v26; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v27; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v28[144]; // [rsp+90h] [rbp-70h] BYREF

  v23 = -1;
  v24 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v25 = 1;
    v23 = 3010;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 3010);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v23, 3010);
  Current = DXGPROCESS::GetCurrent(v6, v5, v7, v8);
  VidPnSourceId = a2->VidPnSourceId;
  v11 = (__int64)Current;
  v22 = 0LL;
  v21 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(a1, VidPnSourceId, &v22, &v27, &v21, &v26, 0);
  v13 = PairingAdapters;
  if ( PairingAdapters >= 0 )
  {
    v14 = (__int64 *)v22;
    v15 = (ADAPTER_DISPLAY **)v21;
    if ( !v22 || !v21 )
    {
      WdLogSingleEntry1(1LL, 2364LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(pRenderAdapter != NULL) && (pDisplayAdapter != NULL)",
        2364LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    COREADAPTERACCESS::COREADAPTERACCESS(
      (COREADAPTERACCESS *)v28,
      (struct DXGADAPTER *const)v14,
      (struct DXGADAPTER *const)v15);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v14);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v15);
    v16 = COREADAPTERACCESS::AcquireExclusive((__int64)v28);
    LODWORD(v13) = v16;
    if ( v16 >= 0 )
    {
      if ( !v14[350] )
      {
        WdLogSingleEntry1(1LL, 2381LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pRenderAdapter->IsRenderAdapter()",
          2381LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( !v15[349] )
      {
        WdLogSingleEntry1(1LL, 2382LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
          2382LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      ADAPTER_RENDER::FlushScheduler(v14[350], 6u, 0xFFFFFFFF, 0);
      v13 = (int)ADAPTER_DISPLAY::DdiSetPalette(v15[349], a2, v17);
      ADAPTER_RENDER::FlushScheduler(v14[350], 7u, 0xFFFFFFFF, 0);
      if ( (int)v13 < 0 )
      {
        WdLogSingleEntry4(2LL, v13, v15, a2->VidPnSourceId, v11);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"0x%I64x DdiSetPalette() failed 0x%I64x 0x%I64x 0x%I64x",
          v13,
          (__int64)v15,
          a2->VidPnSourceId,
          v11,
          0LL);
      }
    }
    else
    {
      WdLogSingleEntry4(4LL, v16, v14, v15, v11);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v28);
  }
  else
  {
    WdLogSingleEntry2(2LL, a1, PairingAdapters);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get bound render adapter from Adapter 0x%I64x in DxgkCddSetPalette (ntStatus = 0x%I64x).",
      (__int64)a1,
      v13,
      0LL,
      0LL,
      0LL);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
  if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v23);
  return (unsigned int)v13;
}
