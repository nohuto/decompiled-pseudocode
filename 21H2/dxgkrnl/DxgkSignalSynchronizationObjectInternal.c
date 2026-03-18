/*
 * XREFs of DxgkSignalSynchronizationObjectInternal @ 0x1C01D1400
 * Callers:
 *     ?AddSignalToContext@CAdapter@@UEAAJII_K@Z @ 0x1C0076650 (-AddSignalToContext@CAdapter@@UEAAJII_K@Z.c)
 *     DxgkSignalSynchronizationObject @ 0x1C01D13E0 (DxgkSignalSynchronizationObject.c)
 *     ?DxgkCddSignalSynchronizationObject@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2@@@Z @ 0x1C01EE920 (-DxgkCddSignalSynchronizationObject@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2@@@Z.c)
 *     DxgkWslSignalSynchronizationObject @ 0x1C0344180 (DxgkWslSignalSynchronizationObject.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N66@Z @ 0x1C017EED0 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectInternal(__int64 a1, int a2, void *a3, bool a4)
{
  _OWORD *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  struct DXGPROCESS *v17; // r14
  __int64 v18; // rcx
  struct DXGPROCESS *v19; // rsi
  unsigned int *v20; // rax
  __int64 v21; // rcx
  unsigned int v22; // ebx
  __int64 v23; // rbx
  unsigned int *Pool2; // r8
  __int64 v25; // rax
  unsigned int v26; // r9d
  int v27; // ebx
  __int64 v28; // rcx
  __int64 v29; // r8
  unsigned int *v31; // rcx
  __int64 v32; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  int v47; // [rsp+60h] [rbp-288h] BYREF
  __int64 v48; // [rsp+68h] [rbp-280h]
  char v49; // [rsp+70h] [rbp-278h]
  struct DXGPROCESS *v50; // [rsp+78h] [rbp-270h]
  unsigned int v51; // [rsp+80h] [rbp-268h] BYREF
  unsigned int v52; // [rsp+84h] [rbp-264h]
  unsigned int v53[33]; // [rsp+88h] [rbp-260h] BYREF
  unsigned int v54; // [rsp+10Ch] [rbp-1DCh]
  _DWORD v55[64]; // [rsp+110h] [rbp-1D8h]
  void *v56; // [rsp+210h] [rbp-D8h] BYREF
  PVOID P; // [rsp+250h] [rbp-98h]
  unsigned int v58[16]; // [rsp+258h] [rbp-90h] BYREF
  int v59; // [rsp+298h] [rbp-50h]

  v7 = (_OWORD *)a1;
  v47 = -1;
  v48 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v49 = 1;
    v47 = 2044;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, (__int64)a3, 2044);
  }
  else
  {
    v49 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v47, 2044);
  CurrentProcess = PsGetCurrentProcess(v9, v8, v10, v11);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v17 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess
    && (v18 = *(_DWORD *)(ProcessDxgProcess + 424) >> 7, (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0)
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v19 = (struct DXGPROCESS *)*((_QWORD *)Current + 3)) == 0LL )
  {
    v19 = v17;
  }
  v50 = v19;
  if ( v19 )
  {
    if ( !a2 )
    {
      v31 = &v51;
      v32 = 3LL;
      do
      {
        *(_OWORD *)v31 = *v7;
        *((_OWORD *)v31 + 1) = v7[1];
        *((_OWORD *)v31 + 2) = v7[2];
        *((_OWORD *)v31 + 3) = v7[3];
        *((_OWORD *)v31 + 4) = v7[4];
        *((_OWORD *)v31 + 5) = v7[5];
        *((_OWORD *)v31 + 6) = v7[6];
        v31 += 32;
        *((_OWORD *)v31 - 1) = v7[7];
        v7 += 8;
        --v32;
      }
      while ( v32 );
      *(_OWORD *)v31 = *v7;
      *((_OWORD *)v31 + 1) = v7[1];
      *((_OWORD *)v31 + 2) = v7[2];
      *((_OWORD *)v31 + 3) = v7[3];
      *((_OWORD *)v31 + 4) = v7[4];
      v22 = v54;
      goto LABEL_16;
    }
    if ( (unsigned __int64)v7 >= MmUserProbeAddress )
      v7 = (_OWORD *)MmUserProbeAddress;
    v20 = &v51;
    v21 = 3LL;
    do
    {
      *(_OWORD *)v20 = *v7;
      *((_OWORD *)v20 + 1) = v7[1];
      *((_OWORD *)v20 + 2) = v7[2];
      *((_OWORD *)v20 + 3) = v7[3];
      *((_OWORD *)v20 + 4) = v7[4];
      *((_OWORD *)v20 + 5) = v7[5];
      *((_OWORD *)v20 + 6) = v7[6];
      v20 += 32;
      *((_OWORD *)v20 - 1) = v7[7];
      v7 += 8;
      --v21;
    }
    while ( v21 );
    *(_OWORD *)v20 = *v7;
    *((_OWORD *)v20 + 1) = v7[1];
    *((_OWORD *)v20 + 2) = v7[2];
    *((_OWORD *)v20 + 3) = v7[3];
    *((_OWORD *)v20 + 4) = v7[4];
    v22 = v54;
    if ( v54 > 0x40 )
    {
      WdLogSingleEntry1(3LL, v54);
    }
    else
    {
      if ( v52 <= 0x20 )
      {
        if ( a3 )
          v56 = a3;
LABEL_16:
        P = 0LL;
        v59 = 0;
        v23 = v22 + 1;
        if ( (unsigned int)v23 > 0x10 )
        {
          if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v23 < 4 )
          {
            Pool2 = 0LL;
LABEL_20:
            if ( Pool2 )
            {
              *Pool2 = v51;
              v25 = 0LL;
              v26 = v54;
              if ( v54 )
              {
                do
                {
                  v44 = (unsigned int)(v25 + 1);
                  Pool2[v44] = v55[v25];
                  v25 = v44;
                  v26 = v54;
                }
                while ( (unsigned int)v44 < v54 );
              }
              v27 = SignalSynchronizationObjectInternal(
                      v52,
                      v53,
                      (struct _D3DDDICB_SIGNALFLAGS)v53[32],
                      v26 + 1,
                      Pool2,
                      0LL,
                      (unsigned __int64)v56,
                      &v56,
                      v19,
                      a2 != 0,
                      0,
                      a4);
              if ( v27 < 0 )
              {
                if ( P != v58 && P )
                  ExFreePoolWithTag(P, 0);
                P = 0LL;
                v59 = 0;
                DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47);
                if ( v49 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
                  McTemplateK0q_EtwWriteTransfer(v45, &EventProfilerExit, v46, v47);
                return (unsigned int)v27;
              }
              else
              {
                if ( P != v58 && P )
                  ExFreePoolWithTag(P, 0);
                P = 0LL;
                v59 = 0;
                DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47);
                if ( v49 )
                {
                  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
                    McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v47);
                }
                return 0LL;
              }
            }
            else
            {
              P = 0LL;
              v59 = 0;
              DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47);
              if ( v49 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
                McTemplateK0q_EtwWriteTransfer(v42, &EventProfilerExit, v43, v47);
              return 3221225495LL;
            }
          }
          Pool2 = (unsigned int *)ExAllocatePool2(256LL, 4 * v23, 1265072196LL, v16);
          P = Pool2;
        }
        else
        {
          Pool2 = v58;
          P = v58;
          if ( (_DWORD)v23 )
          {
            memset(v58, 0, 4LL * (unsigned int)v23);
            Pool2 = (unsigned int *)P;
          }
        }
        v59 = v23;
        goto LABEL_20;
      }
      WdLogSingleEntry1(2LL, v52);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Signaling too many objects %d", v52, 0LL, 0LL, 0LL, 0LL);
    }
  }
  else
  {
    v34 = PsGetCurrentProcess(v18, v14, v15, v16);
    WdLogSingleEntry2(2LL, v34, -1073741811LL);
    v39 = PsGetCurrentProcess(v36, v35, v37, v38);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"unexpected process 0x%I64x returning 0x%I64x",
      v39,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47);
  if ( v49 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v40, &EventProfilerExit, v41, v47);
  return 3221225485LL;
}
