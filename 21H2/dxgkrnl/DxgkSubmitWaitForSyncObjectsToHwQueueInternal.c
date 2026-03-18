/*
 * XREFs of DxgkSubmitWaitForSyncObjectsToHwQueueInternal @ 0x1C02242A8
 * Callers:
 *     DxgkSubmitWaitForSyncObjectsToHwQueue @ 0x1C03154F0 (DxgkSubmitWaitForSyncObjectsToHwQueue.c)
 *     ?VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0383400 (-VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C01CE214 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ?SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z @ 0x1C03119C0 (-SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z.c)
 */

__int64 __fastcall DxgkSubmitWaitForSyncObjectsToHwQueueInternal(__int64 a1, bool a2, __int64 a3)
{
  unsigned int *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct DXGPROCESS *Current; // r15
  __int64 CurrentProcess; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned int v23; // edx
  __int64 v24; // rcx
  __int64 v25; // r8
  void *Elements; // rsi
  __int64 v27; // rcx
  __int64 v28; // r8
  size_t v29; // r8
  char *v30; // rdx
  unsigned int v31; // ebx
  __int64 v32; // rcx
  __int64 v33; // r8
  int v34; // [rsp+50h] [rbp-98h] BYREF
  __int64 v35; // [rsp+58h] [rbp-90h]
  char v36; // [rsp+60h] [rbp-88h]
  unsigned int *v37; // [rsp+68h] [rbp-80h]
  struct DXGPROCESS *v38; // [rsp+70h] [rbp-78h]
  __int128 v39; // [rsp+78h] [rbp-70h] BYREF
  __int64 v40; // [rsp+88h] [rbp-60h]
  size_t v41; // [rsp+90h] [rbp-58h]
  char *v42; // [rsp+98h] [rbp-50h]
  PVOID P; // [rsp+A0h] [rbp-48h] BYREF
  _BYTE v44[16]; // [rsp+A8h] [rbp-40h] BYREF
  unsigned int v45; // [rsp+B8h] [rbp-30h]

  v4 = (unsigned int *)a1;
  v34 = -1;
  v35 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v36 = 1;
    v34 = 2162;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2162);
  }
  else
  {
    v36 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v34, 2162);
  Current = DXGPROCESS::GetCurrent(v6, v5, v7, v8);
  v38 = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v10, v9, v11, v12);
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
    if ( v36 )
    {
      LOBYTE(v20) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v34);
    }
    return 3221225485LL;
  }
  P = 0LL;
  v45 = 0;
  v39 = 0LL;
  v40 = 0LL;
  if ( a2 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (unsigned int *)MmUserProbeAddress;
    v39 = *(_OWORD *)v4;
    v40 = *((_QWORD *)v4 + 2);
    v4 = (unsigned int *)&v39;
  }
  v37 = v4;
  v23 = v4[1];
  if ( !v23 )
  {
    WdLogSingleEntry2(2LL, *v4, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"hContext 0x%I64x can't wait on zero object, returning 0x%I64x",
      *v4,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( P != v44 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v45 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
    if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v34);
    return 3221225485LL;
  }
  if ( a2 )
  {
    Elements = (void *)PagedPoolZeroedArray<unsigned int,4>::AllocateElements((__int64 *)&P, v23, v11, v12);
    if ( !Elements )
    {
      if ( P != v44 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v45 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
      if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v27, &EventProfilerExit, v28, v34);
      return 3221225495LL;
    }
    v29 = 4LL * v45;
    v41 = v29;
    v30 = (char *)*((_QWORD *)v4 + 1);
    v42 = v30;
    if ( &v30[v29] < v30 || (unsigned __int64)&v30[v29] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(Elements, v30, v29);
    *((_QWORD *)v4 + 1) = Elements;
  }
  v31 = SubmitWaitForSyncObjectsFromGpu(
          v4[1],
          *((const unsigned int **)v4 + 1),
          *((const unsigned __int64 **)v4 + 2),
          *v4,
          Current,
          a2,
          0);
  if ( P != v44 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v45 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
  if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v32, &EventProfilerExit, v33, v34);
  return v31;
}
