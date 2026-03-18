/*
 * XREFs of DxgkSubmitCommandToHwQueueInternal @ 0x1C0223D28
 * Callers:
 *     DxgkSubmitCommandToHwQueue @ 0x1C0313240 (DxgkSubmitCommandToHwQueue.c)
 *     ?VmBusSubmitCommandToHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C03820B0 (-VmBusSubmitCommandToHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0001AE8 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C0001C4C (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C000BC60 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000BED0 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C000EF98 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C002B26C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C002B714 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SubmitCommand@DXGHWQUEUE@@QEAAJPEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@_N@Z @ 0x1C022354A (-SubmitCommand@DXGHWQUEUE@@QEAAJPEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@_N@Z.c)
 *     ?VmBusSendSubmitCommandToHwQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@@Z @ 0x1C037DD74 (-VmBusSendSubmitCommandToHwQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_SU.c)
 */

__int64 __fastcall DxgkSubmitCommandToHwQueueInternal(struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *a1, char a2, __int64 a3)
{
  struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 CurrentProcess; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  struct DXGHWQUEUE *v20; // r14
  unsigned int NumPrimaries; // eax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v25; // r15
  __int64 v26; // rcx
  unsigned int v27; // ebx
  __int64 v28; // rcx
  __int64 v29; // r8
  bool v30; // sf
  __int64 v31; // r9
  int v32; // esi
  __int64 v33; // rcx
  __int64 v34; // r8
  int v35; // [rsp+50h] [rbp-178h] BYREF
  __int64 v36; // [rsp+58h] [rbp-170h]
  char v37; // [rsp+60h] [rbp-168h]
  struct DXGHWQUEUE *v38[2]; // [rsp+68h] [rbp-160h] BYREF
  _BYTE v39[16]; // [rsp+78h] [rbp-150h] BYREF
  _BYTE v40[8]; // [rsp+88h] [rbp-140h] BYREF
  __int64 v41; // [rsp+90h] [rbp-138h]
  char v42; // [rsp+98h] [rbp-130h]
  struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *v43; // [rsp+A0h] [rbp-128h]
  __int128 v44; // [rsp+A8h] [rbp-120h] BYREF
  __int128 v45; // [rsp+B8h] [rbp-110h]
  __int128 v46; // [rsp+C8h] [rbp-100h]
  const D3DKMT_HANDLE *WrittenPrimaries; // [rsp+D8h] [rbp-F0h]
  _BYTE v48[32]; // [rsp+E0h] [rbp-E8h] BYREF
  _BYTE v49[160]; // [rsp+100h] [rbp-C8h] BYREF

  v4 = a1;
  v35 = -1;
  v36 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v37 = 1;
    v35 = 2160;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2160);
  }
  else
  {
    v37 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v35, 2160);
  Current = DXGPROCESS::GetCurrent(v6, v5, v7, v8);
  v38[0] = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v10, v9, v12, v13);
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
LABEL_22:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
    if ( v37 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v35);
    }
    return 3221225485LL;
  }
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  WrittenPrimaries = 0LL;
  if ( a2 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *)MmUserProbeAddress;
    v44 = *(_OWORD *)&v4->hHwQueue;
    v45 = *(_OWORD *)&v4->CommandBuffer;
    v46 = *(_OWORD *)&v4->pPrivateDriverData;
    WrittenPrimaries = v4->WrittenPrimaries;
    v4 = (struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *)&v44;
  }
  v43 = v4;
  v38[0] = 0LL;
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v39, v4->hHwQueue, Current, v38, 0);
  v20 = v38[0];
  if ( !v38[0] )
  {
    WdLogSingleEntry3(2LL, Current, v4->hHwQueue, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x failed with invalid hHwQueue 0x%I64x returning 0x%I64x",
      (__int64)Current,
      v4->hHwQueue,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_21;
  }
  NumPrimaries = v4->NumPrimaries;
  if ( NumPrimaries > 0x10 )
  {
    WdLogSingleEntry4(2LL, v38[0], NumPrimaries, 16LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x fails as specified NumWrittenPrimaries 0x%I64x exceeds limit 0x%I64x returning 0x%I64x",
      (__int64)v20,
      v4->NumPrimaries,
      16LL,
      -1073741811LL,
      0LL);
LABEL_21:
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v39);
    goto LABEL_22;
  }
  if ( !v4->pPrivateDriverData )
  {
    if ( !v4->PrivateDriverDataSize )
      goto LABEL_26;
LABEL_20:
    WdLogSingleEntry1(3LL, 1208LL);
    goto LABEL_21;
  }
  if ( !v4->PrivateDriverDataSize )
    goto LABEL_20;
LABEL_26:
  v25 = *(_QWORD *)(*((_QWORD *)v38[0] + 2) + 16LL);
  v26 = *(_QWORD *)(*(_QWORD *)(v25 + 16) + 16LL);
  if ( *(_BYTE *)(v26 + 209) )
  {
    v27 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitCommandToHwQueue(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(v26 + 4344),
            Current,
            v4);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v39);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
    if ( !v37 )
      return v27;
    LOBYTE(v28) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v30 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_29:
    if ( v30 )
      McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v35);
    return v27;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v38,
    *(struct DXGDEVICE **)(*((_QWORD *)v38[0] + 2) + 16LL));
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v48,
    (struct _KTHREAD **)(*((_QWORD *)v20 + 2) + 448LL));
  v41 = *(_QWORD *)(*(_QWORD *)(v25 + 16) + 16LL);
  v42 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v40);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v49, v25, 0, v31, 0);
  v32 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v49, 0LL);
  if ( v32 >= 0 )
  {
    v27 = DXGHWQUEUE::SubmitCommand((struct _SLIST_ENTRY **)v20, v4, a2);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v49);
    if ( v42 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v40);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v48);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v38);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v39);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
    if ( !v37 )
      return v27;
    v30 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_29;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v49);
  if ( v42 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v40);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v48);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v38);
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v39);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
  if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v33, &EventProfilerExit, v34, v35);
  return (unsigned int)v32;
}
