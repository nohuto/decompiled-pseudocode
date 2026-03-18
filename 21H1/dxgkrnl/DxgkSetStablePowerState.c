/*
 * XREFs of DxgkSetStablePowerState @ 0x1C0282D10
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000ECD8 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C00FA240 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AddStablePowerReference@ADAPTER_RENDER@@QEAAXXZ @ 0x1C021149C (-AddStablePowerReference@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?ReleaseStablePowerReference@ADAPTER_RENDER@@QEAAXXZ @ 0x1C02127D4 (-ReleaseStablePowerReference@ADAPTER_RENDER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkSetStablePowerState(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct DXGADAPTER *v14; // r14
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  int PairingAdapters; // ebx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  ADAPTER_RENDER **v25; // r14
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rdx
  ADAPTER_RENDER *v31; // rbx
  struct DXGADAPTER *v32; // r12
  __int64 v33; // rbx
  ADAPTER_RENDER *v34; // r13
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  int v45; // eax
  __int64 v46; // rax
  int v47; // eax
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  int v53; // [rsp+40h] [rbp-108h] BYREF
  __int64 v54; // [rsp+48h] [rbp-100h]
  char v55; // [rsp+50h] [rbp-F8h]
  struct DXGADAPTER *v56; // [rsp+58h] [rbp-F0h] BYREF
  struct DXGADAPTER *v57; // [rsp+60h] [rbp-E8h] BYREF
  DXGADAPTER *v58; // [rsp+68h] [rbp-E0h] BYREF
  __int64 v59; // [rsp+78h] [rbp-D0h]
  unsigned __int64 v60; // [rsp+80h] [rbp-C8h] BYREF
  _BYTE v61[144]; // [rsp+90h] [rbp-B8h] BYREF

  v3 = (__int64 *)a1;
  v53 = -1;
  v54 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v55 = 1;
    v53 = 2124;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2124);
  }
  else
  {
    v55 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v53, 2124LL);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v9 + 24) = 4009LL;
    WdLogEvent5_WdError(v9);
    goto LABEL_26;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  v11 = *v3;
  v59 = v11;
  v57 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)&v58,
    (unsigned int)v11,
    (struct _KTHREAD **)Current,
    &v57,
    1);
  v14 = v57;
  if ( !v57 )
  {
    v15 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v15 + 24) = Current;
    *(_QWORD *)(v15 + 32) = (unsigned int)v11;
    WdLogEvent5_WdError(v15);
    if ( !v58 )
      goto LABEL_26;
    goto LABEL_25;
  }
  v56 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(v57, 0LL, &v56, &v60, 0LL, 0LL, 0);
  if ( PairingAdapters < 0 )
  {
    v20 = WdLogNewEntry5_WdWarning(v17, v16, v19);
    *(_QWORD *)(v20 + 24) = v14;
    WdLogEvent5_WdWarning(v20);
LABEL_15:
    if ( v58 )
      DXGADAPTER::ReleaseReferenceNoTracking(v58);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53, v21);
    if ( v55 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v53);
    return (unsigned int)PairingAdapters;
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)Current + 176, 0LL);
  *((_QWORD *)Current + 23) = KeGetCurrentThread();
  v25 = (ADAPTER_RENDER **)v56;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v61, v56, 0LL);
  PairingAdapters = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v61, 0LL);
  DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v25);
  if ( PairingAdapters < 0 )
  {
    v29 = WdLogNewEntry5_WdWarning(v27, v26, v28);
    *(_QWORD *)(v29 + 24) = v25;
    WdLogEvent5_WdWarning(v29);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v61, v30);
    *((_QWORD *)Current + 23) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 176, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_15;
  }
  v31 = v25[335];
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)v31 + 72, 0LL);
  *((_QWORD *)v31 + 10) = KeGetCurrentThread();
  v32 = v56;
  v33 = *(_QWORD *)(*((_QWORD *)Current + 6) + 8LL * *((unsigned int *)v56 + 58));
  v34 = v25[335];
  if ( !v33 )
  {
    *((_QWORD *)v34 + 10) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v34 + 72, 0LL);
    KeLeaveCriticalRegion();
    v38 = WdLogNewEntry5_WdWarning(v36, v35, v37);
    *(_QWORD *)(v38 + 24) = v32;
    *(_QWORD *)(v38 + 32) = Current;
    WdLogEvent5_WdWarning(v38);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v61, v39);
    *((_QWORD *)Current + 23) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 176, 0LL);
    KeLeaveCriticalRegion();
    if ( !v58 )
    {
LABEL_26:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53, v10);
      if ( v55 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v40, &EventProfilerExit, v41, v53);
      }
      return 3221225485LL;
    }
LABEL_25:
    DXGADAPTER::ReleaseReferenceNoTracking(v58);
    goto LABEL_26;
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)v34 + 1608, 0LL);
  *((_QWORD *)v34 + 202) = KeGetCurrentThread();
  v45 = *(_DWORD *)(v33 + 28);
  if ( HIDWORD(v59) )
  {
    if ( !v45 )
    {
      ADAPTER_RENDER::AddStablePowerReference(v25[335]);
      v45 = *(_DWORD *)(v33 + 28);
    }
    *(_DWORD *)(v33 + 28) = v45 + 1;
  }
  else if ( v45 )
  {
    v47 = v45 - 1;
    *(_DWORD *)(v33 + 28) = v47;
    if ( !v47 )
      ADAPTER_RENDER::ReleaseStablePowerReference(v25[335]);
  }
  else
  {
    v46 = WdLogNewEntry5_WdWarning(v43, v42, v44);
    *(_QWORD *)(v46 + 24) = Current;
    *(_QWORD *)(v46 + 32) = v56;
    WdLogEvent5_WdWarning(v46);
  }
  *((_QWORD *)v34 + 202) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v34 + 1608, 0LL);
  KeLeaveCriticalRegion();
  v48 = (__int64)v25[335] + 72;
  *(_QWORD *)(v48 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v48, 0LL);
  KeLeaveCriticalRegion();
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v61, v49);
  *((_QWORD *)Current + 23) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Current + 176, 0LL);
  KeLeaveCriticalRegion();
  if ( v58 )
    DXGADAPTER::ReleaseReferenceNoTracking(v58);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53, v50);
  if ( v55 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v51, &EventProfilerExit, v52, v53);
  return 0LL;
}
