/*
 * XREFs of ?DxgkSignalSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@H_N@Z @ 0x1C0182B30
 * Callers:
 *     DxgkSignalSynchronizationObjectFromGpu @ 0x1C0183070 (DxgkSignalSynchronizationObjectFromGpu.c)
 *     ?DxgkCddSignalSynchronizationObjectFromGpu@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@@Z @ 0x1C0183460 (-DxgkCddSignalSynchronizationObjectFromGpu@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N66@Z @ 0x1C017EED0 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromGpuInternal(
        struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU *a1,
        int a2,
        __int64 a3)
{
  void **v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  struct DXGPROCESS *v14; // rsi
  __int64 v15; // rcx
  struct DXGPROCESS *v16; // rbx
  unsigned int v17; // edi
  PVOID Pool2; // rcx
  size_t v19; // r8
  const void *v20; // rdx
  __int64 v21; // r8
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // ebx
  __int64 v26; // rcx
  __int64 v27; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // r8
  int v39; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v40; // [rsp+68h] [rbp-D0h]
  char v41; // [rsp+70h] [rbp-C8h]
  unsigned int v42; // [rsp+78h] [rbp-C0h] BYREF
  struct DXGPROCESS *v43; // [rsp+80h] [rbp-B8h]
  void *Src[2]; // [rsp+90h] [rbp-A8h] BYREF
  __int128 v45; // [rsp+A0h] [rbp-98h]
  __int128 v46; // [rsp+B0h] [rbp-88h]
  __int128 v47; // [rsp+C0h] [rbp-78h]
  __int128 v48; // [rsp+D0h] [rbp-68h]
  size_t v49; // [rsp+E0h] [rbp-58h]
  PVOID v50; // [rsp+E8h] [rbp-50h]
  void **v51; // [rsp+F0h] [rbp-48h]
  PVOID P; // [rsp+F8h] [rbp-40h]
  _BYTE v53[16]; // [rsp+100h] [rbp-38h] BYREF
  unsigned int v54; // [rsp+110h] [rbp-28h]

  v4 = (void **)a1;
  v39 = -1;
  v40 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v41 = 1;
    v39 = 2190;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2190);
  }
  else
  {
    v41 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v39, 2190);
  CurrentProcess = PsGetCurrentProcess(v6, v5, v7, v8);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v14 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess
    && (v15 = *(_DWORD *)(ProcessDxgProcess + 424) >> 7, (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0)
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v16 = (struct DXGPROCESS *)*((_QWORD *)Current + 3)) == 0LL )
  {
    v16 = v14;
  }
  v43 = v16;
  if ( !v16 )
  {
    v29 = PsGetCurrentProcess(v15, v11, v12, v13);
    WdLogSingleEntry2(2LL, v29, -1073741811LL);
    v34 = PsGetCurrentProcess(v31, v30, v32, v33);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"unexpected process 0x%I64x returning 0x%I64x",
      v34,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
    if ( !v41 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_55;
  }
  P = 0LL;
  v54 = 0;
  *(_OWORD *)Src = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  if ( !a2 )
  {
    if ( *((_DWORD *)v4 + 1) )
    {
LABEL_34:
      v42 = *(_DWORD *)v4;
      v25 = SignalSynchronizationObjectInternal(
              *((_DWORD *)v4 + 1),
              (unsigned int *)v4[1],
              0,
              1LL,
              &v42,
              (unsigned __int64 *)v4[2],
              0LL,
              0LL,
              v16,
              a2 != 0,
              0,
              1);
      if ( v25 < 0 )
      {
        if ( P != v53 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v54 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
        if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v37, &EventProfilerExit, v38, v39);
        return (unsigned int)v25;
      }
      else
      {
        if ( P != v53 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v54 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
        if ( v41 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v39);
        }
        return 0LL;
      }
    }
    WdLogSingleEntry2(2LL, *(unsigned int *)v4, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"hContext 0x%I64x can't signal zero object, returning 0x%I64x",
      *(unsigned int *)v4,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( P != v53 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v54 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
    if ( !v41 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
LABEL_55:
    McTemplateK0q_EtwWriteTransfer(v35, &EventProfilerExit, v36, v39);
    return 3221225485LL;
  }
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (void **)MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)v4;
  v45 = *((_OWORD *)v4 + 1);
  v46 = *((_OWORD *)v4 + 2);
  v47 = *((_OWORD *)v4 + 3);
  v48 = *((_OWORD *)v4 + 4);
  if ( !HIDWORD(Src[0]) )
  {
    WdLogSingleEntry2(2LL, LODWORD(Src[0]), -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"hContext 0x%I64x can't signal zero object, returning 0x%I64x",
      LODWORD(Src[0]),
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( P != v53 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v54 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
    if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v21, v39);
    return 3221225485LL;
  }
  v17 = HIDWORD(Src[0]);
  if ( HIDWORD(Src[0]) > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / HIDWORD(Src[0]) < 4 )
    {
      v17 = v54;
      Pool2 = P;
      goto LABEL_14;
    }
    Pool2 = (PVOID)ExAllocatePool2(256LL, 4LL * HIDWORD(Src[0]), 1265072196LL, v13);
    P = Pool2;
  }
  else
  {
    P = v53;
    memset(v53, 0, 4LL * HIDWORD(Src[0]));
    Pool2 = P;
  }
  v54 = v17;
LABEL_14:
  if ( Pool2 )
  {
    v19 = 4LL * v17;
    v49 = v19;
    v50 = Pool2;
    v20 = Src[1];
    if ( (char *)Src[1] + v19 < Src[1] || (char *)Src[1] + v19 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(Pool2, v20, v19);
    Src[1] = P;
    v4 = Src;
    v51 = Src;
    goto LABEL_34;
  }
  P = 0LL;
  v54 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
  if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v39);
  return 3221225495LL;
}
