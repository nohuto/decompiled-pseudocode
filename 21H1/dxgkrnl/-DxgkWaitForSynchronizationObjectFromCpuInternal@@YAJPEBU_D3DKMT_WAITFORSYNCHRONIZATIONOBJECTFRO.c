/*
 * XREFs of ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX@Z @ 0x1C0121974
 * Callers:
 *     ?DxgkCddWaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@@Z @ 0x1C0121FF0 (-DxgkCddWaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@.c)
 *     DxgkWaitForSynchronizationObjectFromCpu @ 0x1C015A270 (DxgkWaitForSynchronizationObjectFromCpu.c)
 *     ?VmBusWaitForSyncObjectFromCpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024C5A0 (-VmBusWaitForSyncObjectFromCpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C000E994 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z @ 0x1C0019D04 (-AllocateElements@-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00DB790 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAX@Z @ 0x1C01209B4 (-WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDX.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C01574DC (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ?VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@E@Z @ 0x1C02498BC (-VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT.c)
 */

__int64 __fastcall DxgkWaitForSynchronizationObjectFromCpuInternal(
        struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *a1,
        int a2,
        void *a3)
{
  void **v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned int v14; // eax
  __int64 v15; // rdx
  unsigned int v16; // ebx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v20; // rdx
  _BYTE *v21; // r9
  size_t v22; // r8
  const void *v23; // rdx
  __int64 v24; // rdx
  PVOID v25; // rcx
  size_t v26; // r8
  const void *v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r8
  int v42; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v43; // [rsp+38h] [rbp-E0h]
  char v44; // [rsp+40h] [rbp-D8h]
  struct DXGDEVICE *v45[2]; // [rsp+48h] [rbp-D0h] BYREF
  struct DXGDEVICE *v46; // [rsp+58h] [rbp-C0h] BYREF
  void *Src[2]; // [rsp+60h] [rbp-B8h] BYREF
  void *v48[2]; // [rsp+70h] [rbp-A8h]
  void *v49; // [rsp+80h] [rbp-98h]
  void **v50; // [rsp+88h] [rbp-90h]
  PVOID v51; // [rsp+90h] [rbp-88h] BYREF
  _BYTE v52[16]; // [rsp+98h] [rbp-80h] BYREF
  unsigned int v53; // [rsp+A8h] [rbp-70h]
  PVOID P; // [rsp+B0h] [rbp-68h] BYREF
  _BYTE v55[32]; // [rsp+B8h] [rbp-60h] BYREF
  unsigned int v56; // [rsp+D8h] [rbp-40h]

  v5 = (void **)a1;
  v42 = -1;
  v43 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v44 = 1;
    v42 = 2043;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 2043);
  }
  else
  {
    v44 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v42, 2043LL);
  Current = DXGPROCESS::GetCurrent(v7, v6);
  v45[1] = Current;
  if ( !Current )
  {
    v36 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v36 + 24) = PsGetCurrentProcess(v38, v37);
    *(_QWORD *)(v36 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v36);
    goto LABEL_73;
  }
  v51 = 0LL;
  v53 = 0;
  P = 0LL;
  v56 = 0;
  *(_OWORD *)Src = 0LL;
  *(_OWORD *)v48 = 0LL;
  v49 = 0LL;
  if ( !a2 )
  {
    v50 = v5;
    if ( *((_DWORD *)v5 + 1) && *((_DWORD *)v5 + 8) < 2u )
    {
LABEL_7:
      v46 = 0LL;
      DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
        (DXGDEVICEBYHANDLE *)v45,
        *(unsigned int *)v5,
        (struct _KTHREAD **)Current,
        &v46);
      if ( v46 )
      {
        v13 = *(_QWORD *)(*((_QWORD *)v46 + 2) + 16LL);
        if ( *(_BYTE *)(v13 + 209) )
          v14 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromCpu(
                  (DXG_GUEST_VIRTUALGPU_VMBUS *)(v13 + 4208),
                  Current,
                  *((_DWORD *)v46 + 110),
                  (const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *)v5,
                  0);
        else
          v14 = WaitForSynchronizationObjectFromCpu(
                  (const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *)v5,
                  Current,
                  v46,
                  a3);
        v16 = v14;
        if ( v45[0] )
        {
          v15 = _InterlockedDecrement64((volatile signed __int64 *)v45[0] + 8);
          if ( !v15 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v45[0] + 2), v45[0]);
        }
        if ( P != v55 && P )
          ExFreePoolWithTag(P, 0);
        v56 = 0;
        P = 0LL;
        if ( v51 != v52 && v51 )
          ExFreePoolWithTag(v51, 0);
        v51 = 0LL;
        v53 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, v15);
        if ( v44 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v42);
        }
        return v16;
      }
      v39 = WdLogNewEntry5_WdError(v12, v11);
      *(_QWORD *)(v39 + 24) = *(unsigned int *)v5;
      *(_QWORD *)(v39 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v39);
      if ( v45[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v45[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v45[0] + 2), v45[0]);
      if ( P != v55 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v56 = 0;
      if ( v51 != v52 && v51 )
        ExFreePoolWithTag(v51, 0);
      v51 = 0LL;
      v53 = 0;
    }
LABEL_73:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, v8);
    if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v40, &EventProfilerExit, v41, v42);
    return 3221225485LL;
  }
  if ( (unsigned __int64)v5 >= MmUserProbeAddress )
    v5 = (void **)MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)v5;
  *(_OWORD *)v48 = *((_OWORD *)v5 + 1);
  v49 = v5[4];
  if ( HIDWORD(Src[0]) )
  {
    if ( ((unsigned int)v49 & 0xFFFFFFFE) != 0 )
    {
      P = 0LL;
      v56 = 0;
      v51 = 0LL;
      v53 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, v8);
      if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v42);
      return 3221225485LL;
    }
    else
    {
      PagedPoolZeroedArray<unsigned int,4>::AllocateElements(&v51, HIDWORD(Src[0]));
      v21 = v51;
      if ( v51 )
      {
        v22 = 4LL * v53;
        v23 = Src[1];
        if ( (char *)Src[1] + v22 < Src[1] || (char *)Src[1] + v22 > (void *)MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v21, v23, v22);
        Src[1] = v51;
        NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::AllocateElements(&P, HIDWORD(Src[0]));
        v25 = P;
        if ( P )
        {
          v26 = 8LL * v56;
          v27 = v48[0];
          if ( (char *)v48[0] + v26 < v48[0] || (char *)v48[0] + v26 > (void *)MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v25, v27, v26);
          v48[0] = P;
          v5 = Src;
          v50 = Src;
          goto LABEL_7;
        }
        P = 0LL;
        v56 = 0;
        if ( v51 != v52 && v51 )
          ExFreePoolWithTag(v51, 0);
        v51 = 0LL;
        v53 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, v24);
        if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v34, &EventProfilerExit, v35, v42);
        return 3221225495LL;
      }
      else
      {
        if ( P != v55 && P )
        {
          ExFreePoolWithTag(P, 0);
          v21 = v51;
        }
        P = 0LL;
        v56 = 0;
        if ( v21 != v52 && v21 )
          ExFreePoolWithTag(v21, 0);
        v51 = 0LL;
        v53 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, v20);
        if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v32, &EventProfilerExit, v33, v42);
        return 3221225495LL;
      }
    }
  }
  else
  {
    P = 0LL;
    v56 = 0;
    v51 = 0LL;
    v53 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, v8);
    if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v42);
    return 3221225485LL;
  }
}
