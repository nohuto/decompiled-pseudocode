/*
 * XREFs of ?DxgkSignalSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@H@Z @ 0x1C0154B20
 * Callers:
 *     ?DxgkCddSignalSynchronizationObjectFromGpu@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@@Z @ 0x1C0154B00 (-DxgkCddSignalSynchronizationObjectFromGpu@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@@.c)
 *     DxgkSignalSynchronizationObjectFromGpu @ 0x1C0294480 (DxgkSignalSynchronizationObjectFromGpu.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0027200 (memmove.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FAE40 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C00FAFA0 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C01670FC (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromGpuInternal(
        struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU *a1,
        int a2,
        __int64 a3)
{
  void **v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGPROCESS *v11; // rsi
  struct DXGPROCESS *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // ebx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx
  PVOID v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // r8
  size_t v35; // r8
  const void *v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  int v41; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v42; // [rsp+68h] [rbp-C0h]
  char v43; // [rsp+70h] [rbp-B8h]
  unsigned int v44; // [rsp+78h] [rbp-B0h] BYREF
  struct DXGPROCESS *v45; // [rsp+80h] [rbp-A8h]
  void *Src[11]; // [rsp+90h] [rbp-98h] BYREF
  PVOID P; // [rsp+E8h] [rbp-40h] BYREF
  _BYTE v48[16]; // [rsp+F0h] [rbp-38h] BYREF
  unsigned int v49; // [rsp+100h] [rbp-28h]

  v4 = (void **)a1;
  v41 = -1;
  v42 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v43 = 1;
    v41 = 2190;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2190);
  }
  else
  {
    v43 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v41, 2190LL);
  CurrentProcess = PsGetCurrentProcess(v6, v5);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v11 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent(v10, v9)) == 0LL
    || (v12 = (struct DXGPROCESS *)*((_QWORD *)Current + 1)) == 0LL )
  {
    v12 = v11;
  }
  v45 = v12;
  if ( !v12 )
  {
    v21 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v21 + 24) = PsGetCurrentProcess(v23, v22);
    *(_QWORD *)(v21 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v21);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41, v24);
    if ( !v43 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
    goto LABEL_47;
  }
  P = 0LL;
  v49 = 0;
  memset(Src, 0, 0x50uLL);
  if ( !a2 )
  {
    if ( *((_DWORD *)v4 + 1) )
    {
LABEL_9:
      v44 = *(_DWORD *)v4;
      v16 = SignalSynchronizationObjectInternal(
              *((unsigned int *)v4 + 1),
              (unsigned int *)v4[1],
              0,
              1u,
              &v44,
              (unsigned __int64 *)v4[2],
              0LL,
              0LL,
              v12,
              a2 != 0,
              0);
      if ( v16 < 0 )
      {
        if ( P != v48 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v49 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41, v15);
        if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v39, &EventProfilerExit, v40, v41);
        return (unsigned int)v16;
      }
      else
      {
        if ( P != v48 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v49 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41, v15);
        if ( v43 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v41);
        }
        return 0LL;
      }
    }
    v37 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v37 + 24) = *(unsigned int *)v4;
    *(_QWORD *)(v37 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v37);
    if ( P != v48 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v49 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41, v38);
    if ( !v43 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
LABEL_47:
    McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v41);
    return 3221225485LL;
  }
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (void **)MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)v4;
  *(_OWORD *)&Src[2] = *((_OWORD *)v4 + 1);
  *(_OWORD *)&Src[4] = *((_OWORD *)v4 + 2);
  *(_OWORD *)&Src[6] = *((_OWORD *)v4 + 3);
  *(_OWORD *)&Src[8] = *((_OWORD *)v4 + 4);
  if ( HIDWORD(Src[0]) )
  {
    PagedPoolZeroedArray<unsigned int,4>::AllocateElements(&P, HIDWORD(Src[0]));
    v32 = P;
    if ( P )
    {
      v35 = 4LL * v49;
      v36 = Src[1];
      if ( (char *)Src[1] + v35 < Src[1] || (char *)Src[1] + v35 > (void *)MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v32, v36, v35);
      Src[1] = P;
      v4 = Src;
      Src[10] = Src;
      goto LABEL_9;
    }
    P = 0LL;
    v49 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41, v31);
    if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v33, &EventProfilerExit, v34, v41);
    return 3221225495LL;
  }
  else
  {
    v27 = WdLogNewEntry5_WdError(MmUserProbeAddress, v13);
    *(_QWORD *)(v27 + 24) = LODWORD(Src[0]);
    *(_QWORD *)(v27 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v27);
    if ( P != v48 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v49 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41, v28);
    if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v29, &EventProfilerExit, v30, v41);
    return 3221225485LL;
  }
}
