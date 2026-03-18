/*
 * XREFs of ?DxgkSubmitSignalSyncObjectsToHwQueueInternal@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@_N@Z @ 0x1C030E5C8
 * Callers:
 *     DxgkSubmitSignalSyncObjectsToHwQueue @ 0x1C0224290 (DxgkSubmitSignalSyncObjectsToHwQueue.c)
 *     ?DxgkCddSubmitSignalSyncObjectsToHwQueue@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@@Z @ 0x1C02DD3D0 (-DxgkCddSubmitSignalSyncObjectsToHwQueue@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C01CE214 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$0BA@@@QEAAPEAII@Z @ 0x1C02D5A10 (-AllocateElements@-$PagedPoolZeroedArray@I$0BA@@@QEAAPEAII@Z.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1C0310230 (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 */

__int64 __fastcall DxgkSubmitSignalSyncObjectsToHwQueueInternal(
        struct _D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE *a1,
        bool a2,
        __int64 a3)
{
  void **v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 CurrentProcess; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v23; // rcx
  __int64 v24; // r8
  void *Elements; // rdi
  __int64 v26; // rcx
  __int64 v27; // r8
  size_t v28; // r8
  const void *v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  __int64 v33; // r8
  void *v34; // rdi
  __int64 v35; // rcx
  __int64 v36; // r8
  size_t v37; // r8
  const void *v38; // rdx
  unsigned int v39; // edi
  __int64 v40; // rcx
  __int64 v41; // r8
  int v42; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v43; // [rsp+58h] [rbp-E0h]
  char v44; // [rsp+60h] [rbp-D8h]
  void *v45[2]; // [rsp+68h] [rbp-D0h] BYREF
  void *Src[2]; // [rsp+78h] [rbp-C0h]
  void *v47; // [rsp+88h] [rbp-B0h]
  struct DXGPROCESS *v48; // [rsp+90h] [rbp-A8h]
  void **v49; // [rsp+98h] [rbp-A0h]
  PVOID v50; // [rsp+A0h] [rbp-98h] BYREF
  _BYTE v51[16]; // [rsp+A8h] [rbp-90h] BYREF
  unsigned int v52; // [rsp+B8h] [rbp-80h]
  PVOID P; // [rsp+C0h] [rbp-78h] BYREF
  _BYTE v54[64]; // [rsp+C8h] [rbp-70h] BYREF
  unsigned int v55; // [rsp+108h] [rbp-30h]

  v4 = (void **)a1;
  v42 = -1;
  v43 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v44 = 1;
    v42 = 2161;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2161);
  }
  else
  {
    v44 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v42, 2161);
  Current = DXGPROCESS::GetCurrent(v6, v5, v7, v8);
  v48 = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v10, v9, v12, v13);
    WdLogSingleEntry2(2LL, CurrentProcess, -1073741811LL);
    v19 = PsGetCurrentProcess(v16, v15, v17, v18);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"unexpected process 0x%I64x returning 0x%I64x",
      v19,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
    if ( v44 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v42);
    }
    return 3221225485LL;
  }
  v50 = 0LL;
  v52 = 0;
  P = 0LL;
  v55 = 0;
  *(_OWORD *)v45 = 0LL;
  *(_OWORD *)Src = 0LL;
  v47 = 0LL;
  if ( a2 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (void **)MmUserProbeAddress;
    *(_OWORD *)v45 = *(_OWORD *)v4;
    *(_OWORD *)Src = *((_OWORD *)v4 + 1);
    v47 = v4[4];
    if ( !LODWORD(Src[0]) )
    {
      WdLogSingleEntry1(2LL, 1995LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"There should be at least one sync object passed to signal.",
        1995LL,
        0LL,
        0LL,
        0LL,
        0LL);
      if ( P != v54 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v55 = 0;
      if ( v50 != v51 && v50 )
        ExFreePoolWithTag(v50, 0);
      v50 = 0LL;
      v52 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
      if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v42);
      return 3221225485LL;
    }
    Elements = (void *)PagedPoolZeroedArray<unsigned int,4>::AllocateElements(
                         (__int64 *)&v50,
                         (unsigned int)Src[0],
                         v12,
                         v13);
    if ( !Elements )
    {
      if ( P != v54 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v55 = 0;
      if ( v50 != v51 && v50 )
        ExFreePoolWithTag(v50, 0);
      v50 = 0LL;
      v52 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
      if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v42);
      return 3221225495LL;
    }
    v28 = 4LL * v52;
    v29 = Src[1];
    if ( (char *)Src[1] + v28 < Src[1] || (char *)Src[1] + v28 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(Elements, v29, v28);
    Src[1] = Elements;
    if ( !HIDWORD(v45[0]) )
    {
      WdLogSingleEntry1(2LL, 2012LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"There should be at least one broadcast hardware queue passed to signal.",
        2012LL,
        0LL,
        0LL,
        0LL,
        0LL);
      if ( P != v54 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v55 = 0;
      if ( v50 != v51 && v50 )
        ExFreePoolWithTag(v50, 0);
      v50 = 0LL;
      v52 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
      if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v32, &EventProfilerExit, v33, v42);
      return 3221225485LL;
    }
    v34 = (void *)PagedPoolZeroedArray<unsigned int,16>::AllocateElements((__int64 *)&P, HIDWORD(v45[0]), v30, v31);
    if ( !v34 )
    {
      if ( P != v54 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v55 = 0;
      if ( v50 != v51 && v50 )
        ExFreePoolWithTag(v50, 0);
      v50 = 0LL;
      v52 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
      if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v35, &EventProfilerExit, v36, v42);
      return 3221225495LL;
    }
    v37 = 4LL * v55;
    v38 = v45[1];
    if ( (char *)v45[1] + v37 < v45[1] || (char *)v45[1] + v37 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v34, v38, v37);
    v45[1] = v34;
    v4 = v45;
    v49 = v45;
  }
  v39 = SubmitSignalSyncObjectsToHwQueue(
          *((_DWORD *)v4 + 4),
          (const unsigned int *)v4[3],
          *(struct _D3DDDICB_SIGNALFLAGS *)v4,
          *((_DWORD *)v4 + 1),
          (const unsigned int *)v4[1],
          (const unsigned __int64 *)v4[4],
          Current,
          a2,
          0);
  if ( P != v54 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v55 = 0;
  if ( v50 != v51 && v50 )
    ExFreePoolWithTag(v50, 0);
  v50 = 0LL;
  v52 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
  if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v40, &EventProfilerExit, v41, v42);
  return v39;
}
