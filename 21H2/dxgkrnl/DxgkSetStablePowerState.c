/*
 * XREFs of DxgkSetStablePowerState @ 0x1C03389E0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z @ 0x1C000A448 (-GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000F8D4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01798C0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AddStablePowerReference@ADAPTER_RENDER@@QEAAXXZ @ 0x1C02C314C (-AddStablePowerReference@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?ReleaseStablePowerReference@ADAPTER_RENDER@@QEAAXXZ @ 0x1C02C43F0 (-ReleaseStablePowerReference@ADAPTER_RENDER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkSetStablePowerState(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct DXGPROCESS *Current; // rsi
  __int64 v9; // rbx
  struct DXGADAPTER *v10; // r14
  int PairingAdapters; // ebx
  __int64 v12; // rcx
  __int64 v13; // r8
  ADAPTER_RENDER **v15; // r14
  ADAPTER_RENDER *v16; // rbx
  struct DXGADAPTER *v17; // r12
  struct DXGPROCESS_RENDER_ADAPTER_INFO *RenderAdapterInfo; // rbx
  ADAPTER_RENDER *v19; // r13
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // eax
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v28; // [rsp+58h] [rbp-F0h]
  char v29; // [rsp+60h] [rbp-E8h]
  struct DXGADAPTER *v30; // [rsp+68h] [rbp-E0h] BYREF
  DXGADAPTER *v31; // [rsp+70h] [rbp-D8h] BYREF
  __int64 v32; // [rsp+80h] [rbp-C8h]
  unsigned __int64 v33; // [rsp+88h] [rbp-C0h] BYREF
  _BYTE v34[144]; // [rsp+90h] [rbp-B8h] BYREF

  v3 = (__int64 *)a1;
  v27 = -1;
  v28 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v29 = 1;
    v27 = 2124;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2124);
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v27, 2124);
  Current = DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, 4132LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid process context", 4132LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_26;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  v9 = *v3;
  v32 = v9;
  v30 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v31, v9, (struct _KTHREAD **)Current, &v30, 1);
  v10 = v30;
  if ( !v30 )
  {
    WdLogSingleEntry2(2LL, Current, (unsigned int)v9);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid adapter, pDxgProcess=0x%I64x, hAdapter=0x%8x",
      (__int64)Current,
      (unsigned int)v9,
      0LL,
      0LL,
      0LL);
    if ( !v31 )
      goto LABEL_26;
    goto LABEL_25;
  }
  v30 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(v10, 0, &v30, &v33, 0LL, 0LL, 0);
  if ( PairingAdapters < 0 )
  {
    WdLogSingleEntry1(3LL, v10);
LABEL_15:
    if ( v31 )
      DXGADAPTER::ReleaseReference(v31);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
    if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v12, &EventProfilerExit, v13, v27);
    return (unsigned int)PairingAdapters;
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)Current + 216, 0LL);
  *((_QWORD *)Current + 28) = KeGetCurrentThread();
  v15 = (ADAPTER_RENDER **)v30;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v34, v30, 0LL);
  PairingAdapters = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v34, 0LL);
  DXGADAPTER::ReleaseReference((DXGADAPTER *)v15);
  if ( PairingAdapters < 0 )
  {
    WdLogSingleEntry1(3LL, v15);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v34);
    *((_QWORD *)Current + 28) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 216, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_15;
  }
  v16 = v15[350];
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)v16 + 72, 0LL);
  *((_QWORD *)v16 + 10) = KeGetCurrentThread();
  v17 = v30;
  RenderAdapterInfo = DXGPROCESS::GetRenderAdapterInfo(Current, *((_DWORD *)v30 + 60));
  v19 = v15[350];
  if ( !RenderAdapterInfo )
  {
    *((_QWORD *)v19 + 10) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v19 + 72, 0LL);
    KeLeaveCriticalRegion();
    WdLogSingleEntry2(3LL, v17, Current);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v34);
    *((_QWORD *)Current + 28) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 216, 0LL);
    KeLeaveCriticalRegion();
    if ( !v31 )
    {
LABEL_26:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
      if ( v29 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v27);
      }
      return 3221225485LL;
    }
LABEL_25:
    DXGADAPTER::ReleaseReference(v31);
    goto LABEL_26;
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)v19 + 1672, 0LL);
  *((_QWORD *)v19 + 210) = KeGetCurrentThread();
  v22 = *((_DWORD *)RenderAdapterInfo + 7);
  if ( HIDWORD(v32) )
  {
    if ( !v22 )
    {
      ADAPTER_RENDER::AddStablePowerReference(v15[350]);
      v22 = *((_DWORD *)RenderAdapterInfo + 7);
    }
    *((_DWORD *)RenderAdapterInfo + 7) = v22 + 1;
  }
  else if ( v22 )
  {
    v23 = v22 - 1;
    *((_DWORD *)RenderAdapterInfo + 7) = v23;
    if ( !v23 )
      ADAPTER_RENDER::ReleaseStablePowerReference(v15[350]);
  }
  else
  {
    WdLogSingleEntry2(3LL, Current, v30);
  }
  *((_QWORD *)v19 + 210) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v19 + 1672, 0LL);
  KeLeaveCriticalRegion();
  v24 = (__int64)v15[350] + 72;
  *(_QWORD *)(v24 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v24, 0LL);
  KeLeaveCriticalRegion();
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v34);
  *((_QWORD *)Current + 28) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Current + 216, 0LL);
  KeLeaveCriticalRegion();
  if ( v31 )
    DXGADAPTER::ReleaseReference(v31);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
  if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v27);
  return 0LL;
}
