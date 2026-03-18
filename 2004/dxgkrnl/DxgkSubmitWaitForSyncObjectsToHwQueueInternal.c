/*
 * XREFs of DxgkSubmitWaitForSyncObjectsToHwQueueInternal @ 0x1C0274448
 * Callers:
 *     ?VmBusWaitForSyncObjectFromGpuCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00DAB80 (-VmBusWaitForSyncObjectFromGpuCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0250B60 (-VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkSubmitWaitForSyncObjectsToHwQueue @ 0x1C0274430 (DxgkSubmitWaitForSyncObjectsToHwQueue.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0027200 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C01670FC (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ?SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z @ 0x1C02703B0 (-SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z.c)
 */

__int64 __fastcall DxgkSubmitWaitForSyncObjectsToHwQueueInternal(__int64 a1, bool a2, __int64 a3)
{
  unsigned int *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  ULONG64 v8; // rcx
  struct _KTHREAD **Current; // r15
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  PVOID v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // r8
  size_t v26; // r8
  char *v27; // rdx
  __int64 v28; // rdx
  unsigned int v29; // ebx
  __int64 v30; // rcx
  __int64 v31; // r8
  int v32; // [rsp+40h] [rbp-88h] BYREF
  __int64 v33; // [rsp+48h] [rbp-80h]
  char v34; // [rsp+50h] [rbp-78h]
  unsigned int *v35; // [rsp+58h] [rbp-70h]
  struct _KTHREAD **v36; // [rsp+60h] [rbp-68h]
  __int128 v37; // [rsp+68h] [rbp-60h] BYREF
  __int64 v38; // [rsp+78h] [rbp-50h]
  PVOID P; // [rsp+80h] [rbp-48h] BYREF
  _BYTE v40[16]; // [rsp+88h] [rbp-40h] BYREF
  unsigned int v41; // [rsp+98h] [rbp-30h]

  v4 = (unsigned int *)a1;
  v32 = -1;
  v33 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v34 = 1;
    v32 = 2162;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2162);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v32, 2162LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v6, v5);
  v36 = Current;
  if ( !Current )
  {
    v10 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v10 + 24) = PsGetCurrentProcess(v12, v11);
    *(_QWORD *)(v10 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v10);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32, v13);
    if ( v34 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v32);
    }
    return 3221225485LL;
  }
  P = 0LL;
  v41 = 0;
  v37 = 0LL;
  v38 = 0LL;
  if ( a2 )
  {
    v8 = MmUserProbeAddress;
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (unsigned int *)MmUserProbeAddress;
    v37 = *(_OWORD *)v4;
    v38 = *((_QWORD *)v4 + 2);
    v4 = (unsigned int *)&v37;
  }
  v35 = v4;
  v17 = v4[1];
  if ( !(_DWORD)v17 )
  {
    v18 = WdLogNewEntry5_WdError(v8, v17);
    *(_QWORD *)(v18 + 24) = *v4;
    *(_QWORD *)(v18 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v18);
    if ( P != v40 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v41 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32, v19);
    if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v32);
    return 3221225485LL;
  }
  if ( a2 )
  {
    v23 = PagedPoolZeroedArray<unsigned int,4>::AllocateElements(&P, v17);
    if ( !v23 )
    {
      if ( P != v40 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v41 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32, v22);
      if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v32);
      return 3221225495LL;
    }
    v26 = 4LL * v41;
    v27 = (char *)*((_QWORD *)v4 + 1);
    if ( &v27[v26] < v27 || (unsigned __int64)&v27[v26] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v23, v27, v26);
    *((_QWORD *)v4 + 1) = v23;
  }
  v29 = SubmitWaitForSyncObjectsFromGpu(
          v4[1],
          *((const unsigned int **)v4 + 1),
          *((const unsigned __int64 **)v4 + 2),
          *v4,
          Current,
          a2,
          0);
  if ( P != v40 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v41 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32, v28);
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v32);
  return v29;
}
