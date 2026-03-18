/*
 * XREFs of DxgkSignalSynchronizationObjectInternal @ 0x1C0157D30
 * Callers:
 *     ?AddSignalToContext@CAdapter@@UEAAJII_K@Z @ 0x1C0063940 (-AddSignalToContext@CAdapter@@UEAAJII_K@Z.c)
 *     DxgkSignalSynchronizationObject @ 0x1C00DE100 (DxgkSignalSynchronizationObject.c)
 *     ?DxgkCddSignalSynchronizationObject@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2@@@Z @ 0x1C01714B0 (-DxgkCddSignalSynchronizationObject@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C00FAFA0 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$0BA@@@QEAAPEAII@Z @ 0x1C0158068 (-AllocateElements@-$PagedPoolZeroedArray@I$0BA@@@QEAAPEAII@Z.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectInternal(__int64 a1, int a2, __int64 a3)
{
  _OWORD *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v10; // r8
  unsigned int *v11; // rax
  __int64 v12; // rdx
  unsigned int v13; // edx
  unsigned int *v14; // rax
  __int64 v15; // rdx
  unsigned int *v16; // r8
  __int64 v17; // rax
  unsigned int v18; // r9d
  __int64 v19; // rdx
  int v20; // ebx
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned int *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  int v40; // [rsp+60h] [rbp-258h] BYREF
  __int64 v41; // [rsp+68h] [rbp-250h]
  char v42; // [rsp+70h] [rbp-248h]
  struct DXGPROCESS *v43; // [rsp+78h] [rbp-240h]
  unsigned int v44; // [rsp+80h] [rbp-238h] BYREF
  unsigned int v45; // [rsp+84h] [rbp-234h]
  unsigned int v46[33]; // [rsp+88h] [rbp-230h] BYREF
  unsigned int v47; // [rsp+10Ch] [rbp-1ACh]
  _DWORD v48[64]; // [rsp+110h] [rbp-1A8h]
  void *v49; // [rsp+210h] [rbp-A8h] BYREF
  PVOID P; // [rsp+250h] [rbp-68h] BYREF
  _BYTE v51[64]; // [rsp+258h] [rbp-60h] BYREF
  int v52; // [rsp+298h] [rbp-20h]

  v4 = (_OWORD *)a1;
  v40 = -1;
  v41 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v42 = 1;
    v40 = 2044;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2044);
  }
  else
  {
    v42 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v40, 2044LL);
  Current = DXGPROCESS::GetCurrent(v6, v5);
  v43 = Current;
  if ( Current )
  {
    if ( !a2 )
    {
      v24 = &v44;
      v25 = 3LL;
      do
      {
        *(_OWORD *)v24 = *v4;
        *((_OWORD *)v24 + 1) = v4[1];
        *((_OWORD *)v24 + 2) = v4[2];
        *((_OWORD *)v24 + 3) = v4[3];
        *((_OWORD *)v24 + 4) = v4[4];
        *((_OWORD *)v24 + 5) = v4[5];
        *((_OWORD *)v24 + 6) = v4[6];
        v24 += 32;
        *((_OWORD *)v24 - 1) = v4[7];
        v4 += 8;
        --v25;
      }
      while ( v25 );
      *(_OWORD *)v24 = *v4;
      *((_OWORD *)v24 + 1) = v4[1];
      *((_OWORD *)v24 + 2) = v4[2];
      *((_OWORD *)v24 + 3) = v4[3];
      *((_OWORD *)v24 + 4) = v4[4];
      v13 = v47;
LABEL_11:
      P = 0LL;
      v52 = 0;
      v14 = (unsigned int *)PagedPoolZeroedArray<unsigned int,16>::AllocateElements(&P, v13 + 1);
      v16 = v14;
      if ( v14 )
      {
        *v14 = v44;
        v17 = 0LL;
        v18 = v47;
        if ( v47 )
        {
          do
          {
            v37 = (unsigned int)(v17 + 1);
            v16[v37] = v48[v17];
            v17 = v37;
            v18 = v47;
          }
          while ( (unsigned int)v37 < v47 );
        }
        v20 = SignalSynchronizationObjectInternal(
                v45,
                v46,
                (struct _D3DDDICB_SIGNALFLAGS)v46[32],
                v18 + 1,
                v16,
                0LL,
                (unsigned __int64)v49,
                &v49,
                Current,
                a2 != 0,
                0);
        if ( v20 < 0 )
        {
          if ( P != v51 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v52 = 0;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40, v19);
          if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v38, &EventProfilerExit, v39, v40);
          return (unsigned int)v20;
        }
        else
        {
          if ( P != v51 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v52 = 0;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40, v19);
          if ( v42 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v21, &EventProfilerExit, v22, v40);
          }
          return 0LL;
        }
      }
      else
      {
        if ( P != v51 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v52 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40, v15);
        if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v35, &EventProfilerExit, v36, v40);
        return 3221225495LL;
      }
    }
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (_OWORD *)MmUserProbeAddress;
    v11 = &v44;
    v12 = 3LL;
    do
    {
      *(_OWORD *)v11 = *v4;
      *((_OWORD *)v11 + 1) = v4[1];
      *((_OWORD *)v11 + 2) = v4[2];
      *((_OWORD *)v11 + 3) = v4[3];
      *((_OWORD *)v11 + 4) = v4[4];
      *((_OWORD *)v11 + 5) = v4[5];
      *((_OWORD *)v11 + 6) = v4[6];
      v11 += 32;
      *((_OWORD *)v11 - 1) = v4[7];
      v4 += 8;
      --v12;
    }
    while ( v12 );
    *(_OWORD *)v11 = *v4;
    *((_OWORD *)v11 + 1) = v4[1];
    *((_OWORD *)v11 + 2) = v4[2];
    *((_OWORD *)v11 + 3) = v4[3];
    *((_OWORD *)v11 + 4) = v4[4];
    v13 = v47;
    if ( v47 > 0x40 )
    {
      v30 = WdLogNewEntry5_WdWarning(128LL, v47, v10);
      *(_QWORD *)(v30 + 24) = v47;
      WdLogEvent5_WdWarning(v30);
      goto LABEL_26;
    }
    if ( v45 <= 0x20 )
      goto LABEL_11;
    v32 = WdLogNewEntry5_WdError(128LL, v47);
    *(_QWORD *)(v32 + 24) = v45;
    v29 = v32;
  }
  else
  {
    v26 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v26 + 24) = PsGetCurrentProcess(v28, v27);
    *(_QWORD *)(v26 + 32) = -1073741811LL;
    v29 = v26;
  }
  WdLogEvent5_WdError(v29);
LABEL_26:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40, v31);
  if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v33, &EventProfilerExit, v34, v40);
  return 3221225485LL;
}
