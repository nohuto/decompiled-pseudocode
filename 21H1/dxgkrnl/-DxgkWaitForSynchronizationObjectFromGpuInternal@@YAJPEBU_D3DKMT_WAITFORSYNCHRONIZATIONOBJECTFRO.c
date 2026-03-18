/*
 * XREFs of ?DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU@@_N1PEB_K1@Z @ 0x1C00F8A50
 * Callers:
 *     DxgkWaitForSynchronizationObjectFromGpu @ 0x1C00F6910 (DxgkWaitForSynchronizationObjectFromGpu.c)
 *     DxgkKernelModeWaitForSynchronizationObjectFromGpu @ 0x1C01109C4 (DxgkKernelModeWaitForSynchronizationObjectFromGpu.c)
 *     ?VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024C860 (-VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z @ 0x1C00F6940 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBEF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkWaitForSynchronizationObjectFromGpuInternal(
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU *a1,
        bool a2,
        __int64 a3,
        unsigned __int64 *a4,
        bool a5)
{
  bool v6; // r13
  const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU *v8; // rdi
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  struct DXGPROCESS *v13; // rbx
  struct DXGPROCESS *v14; // rsi
  __int128 v15; // xmm2
  void *v16; // r15
  __int64 v17; // rdi
  unsigned int *PoolWithTag; // rbx
  size_t v19; // r8
  const void *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  int v29; // ebx
  __int64 v30; // rcx
  __int64 v31; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // r8
  int v39; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v40; // [rsp+58h] [rbp-D0h]
  char v41; // [rsp+60h] [rbp-C8h]
  struct DXGPROCESS *v42; // [rsp+68h] [rbp-C0h]
  void *Src[2]; // [rsp+70h] [rbp-B8h]
  unsigned __int64 v44[2]; // [rsp+80h] [rbp-A8h]
  __int128 v45; // [rsp+90h] [rbp-98h]
  __int128 v46; // [rsp+A0h] [rbp-88h]
  __int128 v47; // [rsp+B0h] [rbp-78h]
  PVOID P; // [rsp+C0h] [rbp-68h]
  _BYTE v49[16]; // [rsp+C8h] [rbp-60h] BYREF
  unsigned int v50; // [rsp+D8h] [rbp-50h]

  v6 = a3;
  v8 = a1;
  v39 = -1;
  v40 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v41 = 1;
    v39 = 2043;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2043);
  }
  else
  {
    v41 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v39, 2043LL);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v13 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v14 = (struct DXGPROCESS *)*((_QWORD *)Current + 1)) == 0LL )
  {
    v14 = v13;
  }
  v42 = v14;
  if ( v14 )
  {
    P = 0LL;
    v50 = 0;
    if ( !a2 )
    {
      *(_OWORD *)Src = *(_OWORD *)&v8->hContext;
      *(_OWORD *)v44 = *(_OWORD *)&v8->MonitoredFenceValueArray;
      PoolWithTag = (unsigned int *)Src[1];
      v16 = Src[0];
LABEL_37:
      if ( !a4 )
        a4 = (unsigned __int64 *)v44[0];
      v29 = WaitForSynchronizationObjectFromGpu(
              HIDWORD(v16),
              PoolWithTag,
              a4,
              v44[0],
              (unsigned int)v16,
              v14,
              a2,
              0,
              v6,
              a5);
      if ( v29 < 0 )
      {
        if ( P != v49 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v50 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39, v28);
        if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v37, &EventProfilerExit, v38, v39);
        return (unsigned int)v29;
      }
      else
      {
        if ( P != v49 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v50 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39, v28);
        if ( v41 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v39);
        }
        return 0LL;
      }
    }
    if ( (unsigned __int64)v8 >= MmUserProbeAddress )
      v8 = (const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU *)MmUserProbeAddress;
    v15 = *(_OWORD *)&v8->hContext;
    *(_OWORD *)Src = v15;
    *(_OWORD *)v44 = *(_OWORD *)&v8->MonitoredFenceValueArray;
    v45 = *(_OWORD *)&v8->Reserved[2];
    v46 = *(_OWORD *)&v8->Reserved[4];
    v47 = *(_OWORD *)&v8->Reserved[6];
    v16 = (void *)v15;
    if ( DWORD1(v15) )
    {
      v17 = HIDWORD(Src[0]);
      if ( HIDWORD(Src[0]) > 4 )
      {
        v11 = 0xFFFFFFFFFFFFFFFFuLL % HIDWORD(Src[0]);
        if ( 0xFFFFFFFFFFFFFFFFuLL / HIDWORD(Src[0]) < 4 )
        {
          PoolWithTag = (unsigned int *)P;
LABEL_28:
          if ( PoolWithTag != (unsigned int *)v49 && PoolWithTag )
            ExFreePoolWithTag(PoolWithTag, 0);
          P = 0LL;
          v50 = 0;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39, v11);
          if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v39);
          return 3221225495LL;
        }
        PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 4LL * HIDWORD(Src[0]), 0x4B677844u);
        P = PoolWithTag;
      }
      else
      {
        PoolWithTag = (unsigned int *)v49;
        P = v49;
      }
      v50 = v17;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 4 * v17);
        PoolWithTag = (unsigned int *)P;
        if ( P )
        {
          v19 = 4LL * v50;
          v20 = Src[1];
          if ( (char *)Src[1] + v19 < Src[1] || (char *)Src[1] + v19 > (void *)MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(PoolWithTag, v20, v19);
          Src[1] = PoolWithTag;
          goto LABEL_37;
        }
      }
      goto LABEL_28;
    }
    v21 = WdLogNewEntry5_WdError(MmUserProbeAddress, v11);
    *(_QWORD *)(v21 + 24) = (unsigned int)v15;
    *(_QWORD *)(v21 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v21);
    if ( P != v49 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v50 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39, v22);
    if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v39);
    return 3221225485LL;
  }
  else
  {
    v33 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v33 + 24) = PsGetCurrentProcess();
    *(_QWORD *)(v33 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v33);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39, v34);
    if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v35, &EventProfilerExit, v36, v39);
    return 3221225485LL;
  }
}
