/*
 * XREFs of DxgkSignalSynchronizationObjectFromGpu2 @ 0x1C00F6BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0027140 (memmove.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00F9DB0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C00F9F10 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromGpu2(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGPROCESS *v10; // rdi
  struct DXGPROCESS *v11; // rsi
  ULONG64 v12; // rcx
  __int64 v13; // rdi
  _BYTE *PoolWithTag; // rbx
  size_t v15; // r8
  const void *v16; // rdx
  __int64 Value; // rdi
  _BYTE *v18; // rbx
  size_t v19; // r8
  const void *v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx
  int v31; // ebx
  __int64 v32; // rcx
  __int64 v33; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rcx
  __int64 v42; // r8
  int v43; // [rsp+60h] [rbp-108h] BYREF
  __int64 v44; // [rsp+68h] [rbp-100h]
  char v45; // [rsp+70h] [rbp-F8h]
  struct DXGPROCESS *v46; // [rsp+78h] [rbp-F0h]
  void *Src[2]; // [rsp+80h] [rbp-E8h]
  struct _D3DDDICB_SIGNALFLAGS v48[4]; // [rsp+90h] [rbp-D8h]
  void *v49[2]; // [rsp+A0h] [rbp-C8h] BYREF
  __int128 v50; // [rsp+B0h] [rbp-B8h]
  __int128 v51; // [rsp+C0h] [rbp-A8h]
  __int128 v52; // [rsp+D0h] [rbp-98h]
  PVOID v53; // [rsp+E0h] [rbp-88h]
  _BYTE v54[16]; // [rsp+E8h] [rbp-80h] BYREF
  unsigned int v55; // [rsp+F8h] [rbp-70h]
  PVOID P; // [rsp+100h] [rbp-68h]
  _BYTE v57[64]; // [rsp+108h] [rbp-60h] BYREF
  unsigned int v58; // [rsp+148h] [rbp-20h]

  v3 = (_OWORD *)a1;
  v43 = -1;
  v44 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v45 = 1;
    v43 = 2191;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2191);
  }
  else
  {
    v45 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v43, 2191LL);
  CurrentProcess = PsGetCurrentProcess(v5, v4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v10 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v11 = (struct DXGPROCESS *)*((_QWORD *)Current + 1)) == 0LL )
  {
    v11 = v10;
  }
  v46 = v11;
  if ( !v11 )
  {
    v35 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v35 + 24) = PsGetCurrentProcess(v37, v36);
    *(_QWORD *)(v35 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v35);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43, v38);
    if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v39, &EventProfilerExit, v40, v43);
    return 3221225485LL;
  }
  v53 = 0LL;
  v55 = 0;
  P = 0LL;
  v58 = 0;
  v12 = MmUserProbeAddress;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Src = *v3;
  *(_OWORD *)&v48[0].0 = v3[1];
  *(_OWORD *)v49 = v3[2];
  v50 = v3[3];
  v51 = v3[4];
  v52 = v3[5];
  v13 = LODWORD(Src[0]);
  if ( LODWORD(Src[0]) )
  {
    if ( LODWORD(Src[0]) > 4 )
    {
      v8 = 0xFFFFFFFFFFFFFFFFuLL % LODWORD(Src[0]);
      if ( 0xFFFFFFFFFFFFFFFFuLL / LODWORD(Src[0]) < 4 )
      {
        PoolWithTag = v53;
        goto LABEL_28;
      }
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4LL * LODWORD(Src[0]), 0x4B677844u);
      v53 = PoolWithTag;
    }
    else
    {
      PoolWithTag = v54;
      v53 = v54;
    }
    v55 = v13;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 4 * v13);
      PoolWithTag = v53;
      if ( v53 )
      {
        v15 = 4LL * v55;
        v16 = Src[1];
        if ( (char *)Src[1] + v15 < Src[1] || (char *)Src[1] + v15 > (void *)MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(PoolWithTag, v16, v15);
        Src[1] = PoolWithTag;
        goto LABEL_17;
      }
    }
LABEL_28:
    if ( P != v57 && P )
    {
      ExFreePoolWithTag(P, 0);
      PoolWithTag = v53;
    }
    P = 0LL;
    v58 = 0;
    if ( PoolWithTag != v54 && PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    v53 = 0LL;
    v55 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43, v8);
    if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v21, &EventProfilerExit, v22, v43);
    return 3221225495LL;
  }
LABEL_17:
  Value = v48[1].Value;
  if ( v48[1].Value )
  {
    if ( v48[1].Value > 0x10 )
    {
      v8 = 0xFFFFFFFFFFFFFFFFuLL % v48[1].Value;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v48[1].Value < 4 )
      {
        v18 = P;
LABEL_52:
        if ( v18 != v57 && v18 )
          ExFreePoolWithTag(v18, 0);
        P = 0LL;
        v58 = 0;
        if ( v53 != v54 && v53 )
          ExFreePoolWithTag(v53, 0);
        v53 = 0LL;
        v55 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43, v8);
        if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v43);
        return 3221225495LL;
      }
      v18 = ExAllocatePoolWithTag(PagedPool, 4LL * v48[1].Value, 0x4B677844u);
      P = v18;
    }
    else
    {
      v18 = v57;
      P = v57;
    }
    v58 = Value;
    if ( v18 )
    {
      memset(v18, 0, 4 * Value);
      v18 = P;
      if ( P )
      {
        v19 = 4LL * v58;
        v20 = *(const void **)&v48[2].0;
        if ( *(_QWORD *)&v48[2].0 + v19 < *(_QWORD *)&v48[2].0 || *(_QWORD *)&v48[2].0 + v19 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v18, v20, v19);
        *(_QWORD *)&v48[2].0 = v18;
        v31 = SignalSynchronizationObjectInternal(
                (unsigned int)Src[0],
                (const unsigned int *)Src[1],
                v48[0],
                v48[1].Value,
                (const unsigned int *)v18,
                (const unsigned __int64 *)v49[0],
                (unsigned __int64)v49[0],
                v49,
                v11,
                1,
                0);
        if ( v31 < 0 )
        {
          if ( P != v57 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v58 = 0;
          if ( v53 != v54 && v53 )
            ExFreePoolWithTag(v53, 0);
          v53 = 0LL;
          v55 = 0;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43, v30);
          if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v41, &EventProfilerExit, v42, v43);
          return (unsigned int)v31;
        }
        else
        {
          if ( P != v57 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v58 = 0;
          if ( v53 != v54 && v53 )
            ExFreePoolWithTag(v53, 0);
          v53 = 0LL;
          v55 = 0;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43, v30);
          if ( v45 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v32, &EventProfilerExit, v33, v43);
          }
          return 0LL;
        }
      }
    }
    goto LABEL_52;
  }
  v24 = WdLogNewEntry5_WdError(v12, v8);
  *(_QWORD *)(v24 + 24) = 913LL;
  WdLogEvent5_WdError(v24);
  if ( P != v57 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v58 = 0;
  if ( v53 != v54 && v53 )
    ExFreePoolWithTag(v53, 0);
  v53 = 0LL;
  v55 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43, v25);
  if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v43);
  return 3221225485LL;
}
