/*
 * XREFs of DxgkGetPostCompositionCaps @ 0x1C014C0B0
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
 *     ?GetPostCompositionCaps@ADAPTER_DISPLAY@@QEAAJIPEAM0@Z @ 0x1C014C528 (-GetPostCompositionCaps@ADAPTER_DISPLAY@@QEAAJIPEAM0@Z.c)
 */

__int64 __fastcall DxgkGetPostCompositionCaps(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int128 *v5; // rax
  struct _KTHREAD **Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct DXGADAPTER *v14; // r14
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  int PairingAdapters; // esi
  struct DXGADAPTER *v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  struct DXGADAPTER *v28; // rsi
  __int64 v29; // rax
  _DWORD *v30; // rdx
  _DWORD *v31; // rdx
  int v32; // [rsp+40h] [rbp-118h] BYREF
  __int64 v33; // [rsp+48h] [rbp-110h]
  char v34; // [rsp+50h] [rbp-108h]
  struct DXGADAPTER *v35; // [rsp+58h] [rbp-100h] BYREF
  __int128 v36; // [rsp+60h] [rbp-F8h] BYREF
  struct DXGADAPTER *v37; // [rsp+70h] [rbp-E8h] BYREF
  DXGADAPTER *v38; // [rsp+78h] [rbp-E0h] BYREF
  unsigned __int64 v39; // [rsp+88h] [rbp-D0h] BYREF
  unsigned __int64 v40; // [rsp+90h] [rbp-C8h] BYREF
  _BYTE v41[144]; // [rsp+A0h] [rbp-B8h] BYREF

  v32 = -1;
  v33 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v34 = 1;
    v32 = 2146;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2146);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v32, 2146LL);
  v5 = (__int128 *)a1;
  if ( a1 >= MmUserProbeAddress )
    v5 = (__int128 *)MmUserProbeAddress;
  v36 = *v5;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(MmUserProbeAddress, v4);
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
LABEL_12:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32, v10);
    if ( v34 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v32);
    }
    return 3221225485LL;
  }
  v35 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v38, (unsigned int)v36, Current, &v35, 1);
  v14 = v35;
  if ( !v35 )
  {
    v15 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v15 + 24) = (unsigned int)v36;
    *(_QWORD *)(v15 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v15);
    if ( v38 )
      DXGADAPTER::ReleaseReferenceNoTracking(v38);
    goto LABEL_12;
  }
  v35 = 0LL;
  v37 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(v14, DWORD1(v36), &v35, &v39, &v37, &v40, 0);
  if ( PairingAdapters >= 0 )
  {
    v22 = v37;
  }
  else
  {
    v22 = 0LL;
    PairingAdapters = DxgkpGetPairingAdapters(v14, DWORD1(v36), &v35, &v39, 0LL, 0LL, 0);
  }
  if ( PairingAdapters >= 0 )
  {
    if ( v22 && !*((_QWORD *)v22 + 334) )
    {
      v27 = WdLogNewEntry5_WdAssertion(v20, v19);
      *(_QWORD *)(v27 + 24) = 11176LL;
      WdLogEvent5_WdAssertion(v27);
    }
    v28 = v35;
    if ( !v35 || !*((_QWORD *)v35 + 335) )
    {
      v29 = WdLogNewEntry5_WdAssertion(v20, v19);
      *(_QWORD *)(v29 + 24) = 11178LL;
      WdLogEvent5_WdAssertion(v29);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v41, v28, v22);
    DXGADAPTER::ReleaseReferenceNoTracking(v28);
    if ( v22 )
      DXGADAPTER::ReleaseReferenceNoTracking(v22);
    PairingAdapters = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v41, 0LL);
    if ( PairingAdapters >= 0 )
    {
      if ( !v22 || (**((_DWORD **)v22 + 322) & 0x80000) != 0 )
        *((_QWORD *)&v36 + 1) = 0x3F8000003F800000LL;
      else
        PairingAdapters = ADAPTER_DISPLAY::GetPostCompositionCaps(
                            *((ADAPTER_DISPLAY **)v22 + 334),
                            DWORD1(v36),
                            (float *)&v36 + 2,
                            (float *)&v36 + 3);
      v31 = (_DWORD *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v31 = (_DWORD *)MmUserProbeAddress;
      *v31 = DWORD2(v36);
      v30 = (_DWORD *)(a1 + 12);
      if ( a1 + 12 >= MmUserProbeAddress )
        v30 = (_DWORD *)MmUserProbeAddress;
      *v30 = HIDWORD(v36);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v41, (__int64)v30);
  }
  else
  {
    v23 = WdLogNewEntry5_WdError(v20, v19);
    *(_QWORD *)(v23 + 24) = v14;
    *(_QWORD *)(v23 + 32) = DWORD1(v36);
    WdLogEvent5_WdError(v23);
  }
  if ( v38 )
    DXGADAPTER::ReleaseReferenceNoTracking(v38);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32, v24);
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v32);
  return (unsigned int)PairingAdapters;
}
