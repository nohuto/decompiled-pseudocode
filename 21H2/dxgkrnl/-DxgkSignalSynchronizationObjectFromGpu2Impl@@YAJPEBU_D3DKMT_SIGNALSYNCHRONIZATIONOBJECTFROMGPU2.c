/*
 * XREFs of ?DxgkSignalSynchronizationObjectFromGpu2Impl@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2@@PEAX@Z @ 0x1C017B090
 * Callers:
 *     DxgkSignalSynchronizationObjectFromGpu2 @ 0x1C017B070 (DxgkSignalSynchronizationObjectFromGpu2.c)
 *     DxgkWslSignalSynchronizationObjectFromGpu2 @ 0x1C0344330 (DxgkWslSignalSynchronizationObjectFromGpu2.c)
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
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1C02CEAA0 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromGpu2Impl(
        const struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2 *a1,
        void *a2,
        __int64 a3)
{
  const struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2 *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  struct DXGPROCESS *v14; // rdi
  __int64 v15; // rcx
  struct DXGPROCESS *v16; // r14
  unsigned int v17; // ebx
  _BYTE *Pool2; // rdi
  const void *v19; // rdx
  char *v20; // rax
  struct _D3DDDICB_SIGNALFLAGS::$F4BAD952F0EA0A4BEFA84782466716D0::$DE86B16C121A84B75DA0E945D4B81535 Value; // ebx
  _BYTE *v22; // rdi
  const void *v23; // rdx
  ULONG64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // r8
  int v32; // ebx
  __int64 v33; // rcx
  __int64 v34; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 v42; // r8
  int v43; // ecx
  __int64 v44; // rcx
  __int64 v45; // r8
  int v46; // [rsp+60h] [rbp-128h] BYREF
  __int64 v47; // [rsp+68h] [rbp-120h]
  char v48; // [rsp+70h] [rbp-118h]
  struct DXGPROCESS *v49; // [rsp+78h] [rbp-110h]
  void *Src[2]; // [rsp+80h] [rbp-108h]
  struct _D3DDDICB_SIGNALFLAGS v51[4]; // [rsp+90h] [rbp-F8h]
  void *v52[2]; // [rsp+A0h] [rbp-E8h] BYREF
  __int128 v53; // [rsp+B0h] [rbp-D8h]
  __int128 v54; // [rsp+C0h] [rbp-C8h]
  __int128 v55; // [rsp+D0h] [rbp-B8h]
  PVOID v56; // [rsp+E0h] [rbp-A8h]
  _BYTE v57[16]; // [rsp+E8h] [rbp-A0h] BYREF
  unsigned int v58; // [rsp+F8h] [rbp-90h]
  PVOID P; // [rsp+100h] [rbp-88h]
  _BYTE v60[64]; // [rsp+108h] [rbp-80h] BYREF
  struct _D3DDDICB_SIGNALFLAGS::$F4BAD952F0EA0A4BEFA84782466716D0::$DE86B16C121A84B75DA0E945D4B81535 v61; // [rsp+148h] [rbp-40h]

  v4 = a1;
  v46 = -1;
  v47 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v48 = 1;
    v46 = 2191;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2191);
  }
  else
  {
    v48 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v46, 2191);
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
  v49 = v16;
  if ( !v16 )
  {
    v36 = PsGetCurrentProcess(v15, v11, v12, v13);
    WdLogSingleEntry2(2LL, v36, -1073741811LL);
    v41 = PsGetCurrentProcess(v38, v37, v39, v40);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"unexpected process 0x%I64x returning 0x%I64x",
      v41,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46);
    if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v42, v46);
    return 3221225485LL;
  }
  v56 = 0LL;
  v58 = 0;
  P = 0LL;
  v61 = 0;
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (const struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2 *)MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)&v4->ObjectCount;
  *(_OWORD *)&v51[0].0 = *(_OWORD *)&v4->Flags.0;
  *(_OWORD *)v52 = *(_OWORD *)&v4->FenceValue;
  v53 = *(_OWORD *)&v4->Reserved[2];
  v54 = *(_OWORD *)&v4->Reserved[4];
  v55 = *(_OWORD *)&v4->Reserved[6];
  v17 = (unsigned int)Src[0];
  if ( LODWORD(Src[0]) )
  {
    if ( LODWORD(Src[0]) > 4 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / LODWORD(Src[0]) < 4 )
      {
        Pool2 = v56;
        goto LABEL_27;
      }
      Pool2 = (_BYTE *)ExAllocatePool2(256LL, 4LL * LODWORD(Src[0]), 1265072196LL, v13);
      v56 = Pool2;
    }
    else
    {
      v56 = v57;
      memset(v57, 0, 4LL * LODWORD(Src[0]));
      Pool2 = v56;
    }
    v58 = v17;
    if ( Pool2 )
    {
      v19 = Src[1];
      v20 = (char *)Src[1] + 4 * v17;
      if ( v20 < Src[1] || (unsigned __int64)v20 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(Pool2, v19, 4LL * v17);
      Src[1] = Pool2;
      goto LABEL_16;
    }
LABEL_27:
    if ( P != v60 && P )
    {
      ExFreePoolWithTag(P, 0);
      Pool2 = v56;
    }
    P = 0LL;
    v61 = 0;
    if ( Pool2 != v57 && Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    v56 = 0LL;
    v58 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46);
    if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v46);
    return 3221225495LL;
  }
LABEL_16:
  Value = (struct _D3DDDICB_SIGNALFLAGS::$F4BAD952F0EA0A4BEFA84782466716D0::$DE86B16C121A84B75DA0E945D4B81535)v51[1].Value;
  if ( v51[1].Value )
  {
    if ( v51[1].Value > 0x10 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v51[1].Value < 4 )
      {
        v22 = P;
LABEL_51:
        if ( v22 != v60 && v22 )
          ExFreePoolWithTag(v22, 0);
        P = 0LL;
        v61 = 0;
        if ( v56 != v57 && v56 )
          ExFreePoolWithTag(v56, 0);
        v56 = 0LL;
        v58 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46);
        if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v46);
        return 3221225495LL;
      }
      v22 = (_BYTE *)ExAllocatePool2(256LL, 4LL * v51[1].Value, 1265072196LL, v13);
      P = v22;
    }
    else
    {
      P = v60;
      memset(v60, 0, 4LL * v51[1].Value);
      v22 = P;
    }
    v61 = Value;
    if ( v22 )
    {
      v23 = *(const void **)&v51[2].0;
      v24 = *(_QWORD *)&v51[2].0 + 4LL * *(unsigned int *)&Value;
      if ( v24 < *(_QWORD *)&v51[2].0 || v24 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v22, v23, 4LL * *(unsigned int *)&Value);
      *(_QWORD *)&v51[2].0 = v22;
      if ( a2 )
        v52[0] = a2;
      else
        a2 = v52[0];
      v32 = SignalSynchronizationObjectInternal(
              (unsigned int)Src[0],
              (const unsigned int *)Src[1],
              v51[0],
              v51[1].Value,
              (const unsigned int *)v22,
              (const unsigned __int64 *)a2,
              (unsigned __int64)a2,
              v52,
              v16,
              1,
              0,
              0);
      if ( v32 < 0 )
      {
        if ( (unsigned int)(v32 + 1073741816) <= 0x1C )
        {
          v43 = 268435489;
          if ( _bittest(&v43, v32 + 1073741816) )
          {
            if ( (*(_BYTE *)&v51[0].0 & 2) != 0 && byte_1C0130164 )
            {
              DxgCreateLiveDumpWithWdLogs(403LL, 2076LL);
              byte_1C0130164 = 0;
            }
          }
        }
        if ( P != v60 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v61 = 0;
        if ( v56 != v57 && v56 )
          ExFreePoolWithTag(v56, 0);
        v56 = 0LL;
        v58 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46);
        if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v44, &EventProfilerExit, v45, v46);
        return (unsigned int)v32;
      }
      else
      {
        if ( P != v60 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v61 = 0;
        if ( v56 != v57 && v56 )
          ExFreePoolWithTag(v56, 0);
        v56 = 0LL;
        v58 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46);
        if ( v48 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v33, &EventProfilerExit, v34, v46);
        }
        return 0LL;
      }
    }
    goto LABEL_51;
  }
  WdLogSingleEntry1(2LL, 958LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"There should be at least one broadcast context passed to signal.",
    958LL,
    0LL,
    0LL,
    0LL,
    0LL);
  if ( P != v60 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v61 = 0;
  if ( v56 != v57 && v56 )
    ExFreePoolWithTag(v56, 0);
  v56 = 0LL;
  v58 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46);
  if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v46);
  return 3221225485LL;
}
