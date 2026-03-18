/*
 * XREFs of ?DxgkSubmitSignalSyncObjectsToHwQueueInternal@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@_N@Z @ 0x1C026BE74
 * Callers:
 *     ?DxgkCddSubmitSignalSyncObjectsToHwQueue@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@@Z @ 0x1C022CEE0 (-DxgkCddSubmitSignalSyncObjectsToHwQueue@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@@Z.c)
 *     DxgkSubmitSignalSyncObjectsToHwQueue @ 0x1C0273430 (DxgkSubmitSignalSyncObjectsToHwQueue.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0027140 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$0BA@@@QEAAPEAII@Z @ 0x1C0156EB8 (-AllocateElements@-$PagedPoolZeroedArray@I$0BA@@@QEAAPEAII@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C0165F4C (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1C026DEBC (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 */

__int64 __fastcall DxgkSubmitSignalSyncObjectsToHwQueueInternal(
        struct _D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE *a1,
        bool a2,
        __int64 a3)
{
  void **v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  PVOID v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // r8
  size_t v25; // r8
  const void *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdx
  PVOID v33; // rbx
  __int64 v34; // rcx
  __int64 v35; // r8
  size_t v36; // r8
  const void *v37; // rdx
  __int64 v38; // rdx
  unsigned int v39; // ebx
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
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v44 = 1;
    v42 = 2161;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2161);
  }
  else
  {
    v44 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v42, 2161LL);
  Current = DXGPROCESS::GetCurrent(v6, v5);
  v48 = Current;
  if ( !Current )
  {
    v10 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v10 + 24) = PsGetCurrentProcess(v12, v11);
    *(_QWORD *)(v10 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v10);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, v13);
    if ( v44 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v42);
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
      v17 = WdLogNewEntry5_WdError(MmUserProbeAddress, 0LL);
      *(_QWORD *)(v17 + 24) = 1914LL;
      WdLogEvent5_WdError(v17);
      if ( P != v54 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v55 = 0;
      if ( v50 != v51 && v50 )
        ExFreePoolWithTag(v50, 0);
      v50 = 0LL;
      v52 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, v18);
      if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v42);
      return 3221225485LL;
    }
    v22 = PagedPoolZeroedArray<unsigned int,4>::AllocateElements(&v50, (unsigned int)Src[0]);
    if ( !v22 )
    {
      if ( P != v54 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v55 = 0;
      if ( v50 != v51 && v50 )
        ExFreePoolWithTag(v50, 0);
      v50 = 0LL;
      v52 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, v21);
      if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v42);
      return 3221225495LL;
    }
    v25 = 4LL * v52;
    v26 = Src[1];
    if ( (char *)Src[1] + v25 < Src[1] || (char *)Src[1] + v25 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v22, v26, v25);
    Src[1] = v22;
    if ( !HIDWORD(v45[0]) )
    {
      v28 = WdLogNewEntry5_WdError(v27, 0LL);
      *(_QWORD *)(v28 + 24) = 1931LL;
      WdLogEvent5_WdError(v28);
      if ( P != v54 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v55 = 0;
      if ( v50 != v51 && v50 )
        ExFreePoolWithTag(v50, 0);
      v50 = 0LL;
      v52 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, v29);
      if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v42);
      return 3221225485LL;
    }
    v33 = PagedPoolZeroedArray<unsigned int,16>::AllocateElements(&P, HIDWORD(v45[0]));
    if ( !v33 )
    {
      if ( P != v54 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v55 = 0;
      if ( v50 != v51 && v50 )
        ExFreePoolWithTag(v50, 0);
      v50 = 0LL;
      v52 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, v32);
      if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v34, &EventProfilerExit, v35, v42);
      return 3221225495LL;
    }
    v36 = 4LL * v55;
    v37 = v45[1];
    if ( (char *)v45[1] + v36 < v45[1] || (char *)v45[1] + v36 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v33, v37, v36);
    v45[1] = v33;
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
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, v38);
  if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v40, &EventProfilerExit, v41, v42);
  return v39;
}
