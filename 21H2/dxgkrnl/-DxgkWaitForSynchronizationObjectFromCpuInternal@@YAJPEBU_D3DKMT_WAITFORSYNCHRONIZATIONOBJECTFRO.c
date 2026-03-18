/*
 * XREFs of ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX1@Z @ 0x1C01CD280
 * Callers:
 *     ?DxgkCddWaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@@Z @ 0x1C01CD240 (-DxgkCddWaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@.c)
 *     DxgkWaitForSynchronizationObjectFromCpu @ 0x1C01CD260 (DxgkWaitForSynchronizationObjectFromCpu.c)
 *     DxgkWslWaitForSynchronizationObjectFromCpu @ 0x1C03441A0 (DxgkWslWaitForSynchronizationObjectFromCpu.c)
 *     ?VmBusWaitForSyncObjectFromCpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C03830F0 (-VmBusWaitForSyncObjectFromCpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0009904 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z @ 0x1C0016438 (-AllocateElements@-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAX@Z @ 0x1C01CD9C0 (-WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDX.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C01CE214 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ?VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@E@Z @ 0x1C037F5E4 (-VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT.c)
 */

__int64 __fastcall DxgkWaitForSynchronizationObjectFromCpuInternal(
        struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *a1,
        int a2,
        void *a3,
        void *a4)
{
  void **v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  struct DXGDEVICE *v17; // r14
  __int64 v18; // rcx
  struct DXGDEVICE *v19; // rsi
  _BYTE *v20; // rcx
  size_t v21; // r8
  const void *v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  PVOID v25; // rcx
  size_t v26; // r8
  const void *v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rcx
  unsigned int v38; // eax
  unsigned int v39; // edi
  __int64 v40; // rcx
  __int64 v41; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // r8
  int v51; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v52; // [rsp+58h] [rbp-F0h]
  char v53; // [rsp+60h] [rbp-E8h]
  struct DXGDEVICE *v54[2]; // [rsp+68h] [rbp-E0h] BYREF
  struct DXGDEVICE *v55; // [rsp+78h] [rbp-D0h] BYREF
  void *Src[2]; // [rsp+80h] [rbp-C8h] BYREF
  void *v57[2]; // [rsp+90h] [rbp-B8h]
  void *v58; // [rsp+A0h] [rbp-A8h]
  void **v59; // [rsp+A8h] [rbp-A0h]
  size_t v60; // [rsp+B0h] [rbp-98h]
  PVOID v61; // [rsp+B8h] [rbp-90h]
  size_t v62; // [rsp+C0h] [rbp-88h]
  PVOID v63; // [rsp+C8h] [rbp-80h] BYREF
  _BYTE v64[16]; // [rsp+D0h] [rbp-78h] BYREF
  unsigned int v65; // [rsp+E0h] [rbp-68h]
  PVOID P; // [rsp+E8h] [rbp-60h] BYREF
  _BYTE v67[32]; // [rsp+F0h] [rbp-58h] BYREF
  unsigned int v68; // [rsp+110h] [rbp-38h]

  v7 = (void **)a1;
  v51 = -1;
  v52 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v53 = 1;
    v51 = 2043;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 2043);
  }
  else
  {
    v53 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v51, 2043);
  CurrentProcess = PsGetCurrentProcess(v9, v8, v10, v11);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v17 = (struct DXGDEVICE *)ProcessDxgProcess;
  if ( ProcessDxgProcess
    && (v18 = *(_DWORD *)(ProcessDxgProcess + 424) >> 7, (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0)
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v19 = (struct DXGDEVICE *)*((_QWORD *)Current + 3)) == 0LL )
  {
    v19 = v17;
  }
  v54[0] = v19;
  if ( !v19 )
  {
    v43 = PsGetCurrentProcess(v18, v14, v15, v16);
    WdLogSingleEntry2(2LL, v43, -1073741811LL);
    v48 = PsGetCurrentProcess(v45, v44, v46, v47);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"unexpected process 0x%I64x returning 0x%I64x",
      v48,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_82;
  }
  v63 = 0LL;
  v65 = 0;
  P = 0LL;
  v68 = 0;
  *(_OWORD *)Src = 0LL;
  *(_OWORD *)v57 = 0LL;
  v58 = 0LL;
  if ( !a2 )
  {
    v59 = v7;
    if ( *((_DWORD *)v7 + 1) && *((_DWORD *)v7 + 8) < 2u )
    {
LABEL_47:
      if ( a4 )
        v7[3] = a4;
      v55 = 0LL;
      DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v54, *(_DWORD *)v7, (struct _KTHREAD **)v19, &v55);
      if ( v55 )
      {
        v37 = *(_QWORD *)(*((_QWORD *)v55 + 2) + 16LL);
        if ( *(_BYTE *)(v37 + 209) )
          v38 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromCpu(
                  (DXG_GUEST_VIRTUALGPU_VMBUS *)(v37 + 4344),
                  v19,
                  *((_DWORD *)v55 + 110),
                  (const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *)v7,
                  0);
        else
          v38 = WaitForSynchronizationObjectFromCpu(
                  (const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *)v7,
                  v19,
                  v55,
                  a3);
        v39 = v38;
        if ( v54[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v54[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v54[0] + 2), v54[0]);
        if ( P != v67 && P )
          ExFreePoolWithTag(P, 0);
        v68 = 0;
        P = 0LL;
        if ( v63 != v64 && v63 )
          ExFreePoolWithTag(v63, 0);
        v63 = 0LL;
        v65 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
        if ( v53 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v40, &EventProfilerExit, v41, v51);
        }
        return v39;
      }
      WdLogSingleEntry2(2LL, *(unsigned int *)v7, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
        *(unsigned int *)v7,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      if ( v54[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v54[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v54[0] + 2), v54[0]);
      if ( P != v67 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v68 = 0;
      if ( v63 != v64 && v63 )
        ExFreePoolWithTag(v63, 0);
      v63 = 0LL;
      v65 = 0;
    }
LABEL_82:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
    if ( v53 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v49, &EventProfilerExit, v50, v51);
    return 3221225485LL;
  }
  if ( (unsigned __int64)v7 >= MmUserProbeAddress )
    v7 = (void **)MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)v7;
  *(_OWORD *)v57 = *((_OWORD *)v7 + 1);
  v58 = v7[4];
  if ( HIDWORD(Src[0]) )
  {
    if ( ((unsigned int)v58 & 0xFFFFFFFE) != 0 )
    {
      P = 0LL;
      v68 = 0;
      v63 = 0LL;
      v65 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
      if ( v53 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v31, &EventProfilerExit, v32, v51);
      return 3221225485LL;
    }
    else
    {
      PagedPoolZeroedArray<unsigned int,4>::AllocateElements(&v63, HIDWORD(Src[0]));
      v20 = v63;
      if ( v63 )
      {
        v21 = 4LL * v65;
        v60 = v21;
        v61 = v63;
        v22 = Src[1];
        if ( (char *)Src[1] + v21 < Src[1] || (char *)Src[1] + v21 > (void *)MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v20, v22, v21);
        Src[1] = v63;
        NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::AllocateElements(
          (__int64 *)&P,
          HIDWORD(Src[0]),
          v23,
          v24);
        v25 = P;
        if ( P )
        {
          v26 = 8LL * v68;
          v62 = v26;
          v54[1] = (struct DXGDEVICE *)P;
          v27 = v57[0];
          if ( (char *)v57[0] + v26 < v57[0] || (char *)v57[0] + v26 > (void *)MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v25, v27, v26);
          v57[0] = P;
          v7 = Src;
          v59 = Src;
          goto LABEL_47;
        }
        P = 0LL;
        v68 = 0;
        if ( v63 != v64 && v63 )
          ExFreePoolWithTag(v63, 0);
        v63 = 0LL;
        v65 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
        if ( v53 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v35, &EventProfilerExit, v36, v51);
        return 3221225495LL;
      }
      else
      {
        if ( P != v67 && P )
        {
          ExFreePoolWithTag(P, 0);
          v20 = v63;
        }
        P = 0LL;
        v68 = 0;
        if ( v20 != v64 && v20 )
          ExFreePoolWithTag(v20, 0);
        v63 = 0LL;
        v65 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
        if ( v53 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v33, &EventProfilerExit, v34, v51);
        return 3221225495LL;
      }
    }
  }
  else
  {
    P = 0LL;
    v68 = 0;
    v63 = 0LL;
    v65 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
    if ( v53 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v51);
    return 3221225485LL;
  }
}
