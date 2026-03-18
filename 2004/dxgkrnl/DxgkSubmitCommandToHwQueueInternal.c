/*
 * XREFs of DxgkSubmitCommandToHwQueueInternal @ 0x1C0271868
 * Callers:
 *     ?VmBusSubmitCommandToHwQueueCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00DA730 (-VmBusSubmitCommandToHwQueueCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSubmitCommandToHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024FC60 (-VmBusSubmitCommandToHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkSubmitCommandToHwQueue @ 0x1C0271850 (DxgkSubmitCommandToHwQueue.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0003EE0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0004418 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0005770 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00063E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006444 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006A30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0016A90 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C0016BB8 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendSubmitCommandToHwQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@@Z @ 0x1C024CA88 (-VmBusSendSubmitCommandToHwQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_SU.c)
 *     ?SubmitCommand@DXGHWQUEUE@@QEAAJPEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@_N@Z @ 0x1C026E7B8 (-SubmitCommand@DXGHWQUEUE@@QEAAJPEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@_N@Z.c)
 */

__int64 __fastcall DxgkSubmitCommandToHwQueueInternal(struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *a1, char a2, __int64 a3)
{
  struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct _SLIST_ENTRY **v17; // r14
  _QWORD *v18; // rax
  __int64 hHwQueue; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v25; // r15
  __int64 v26; // rcx
  __int64 v27; // rdx
  unsigned int v28; // ebx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  int v33; // esi
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  int v38; // [rsp+30h] [rbp-158h] BYREF
  __int64 v39; // [rsp+38h] [rbp-150h]
  char v40; // [rsp+40h] [rbp-148h]
  struct DXGHWQUEUE *v41[2]; // [rsp+48h] [rbp-140h] BYREF
  _BYTE v42[16]; // [rsp+58h] [rbp-130h] BYREF
  _BYTE v43[8]; // [rsp+68h] [rbp-120h] BYREF
  __int64 v44; // [rsp+70h] [rbp-118h]
  char v45; // [rsp+78h] [rbp-110h]
  struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *v46; // [rsp+80h] [rbp-108h]
  __int128 v47; // [rsp+88h] [rbp-100h] BYREF
  __int128 v48; // [rsp+98h] [rbp-F0h]
  __int128 v49; // [rsp+A8h] [rbp-E0h]
  const D3DKMT_HANDLE *WrittenPrimaries; // [rsp+B8h] [rbp-D0h]
  _BYTE v51[160]; // [rsp+C0h] [rbp-C8h] BYREF

  v4 = a1;
  v38 = -1;
  v39 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v40 = 1;
    v38 = 2160;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2160);
  }
  else
  {
    v40 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v38, 2160LL);
  Current = DXGPROCESS::GetCurrent(v6, v5);
  v41[0] = Current;
  if ( !Current )
  {
    v10 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v10 + 24) = PsGetCurrentProcess(v12, v11);
    *(_QWORD *)(v10 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v10);
LABEL_22:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38, v13);
    if ( v40 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v38);
    }
    return 3221225485LL;
  }
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  WrittenPrimaries = 0LL;
  if ( a2 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *)MmUserProbeAddress;
    v47 = *(_OWORD *)&v4->hHwQueue;
    v48 = *(_OWORD *)&v4->CommandBuffer;
    v49 = *(_OWORD *)&v4->pPrivateDriverData;
    WrittenPrimaries = v4->WrittenPrimaries;
    v4 = (struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *)&v47;
  }
  v46 = v4;
  v41[0] = 0LL;
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v42, v4->hHwQueue, (struct _KTHREAD **)Current, v41, 0);
  v17 = (struct _SLIST_ENTRY **)v41[0];
  if ( !v41[0] )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14);
    v18[3] = Current;
    hHwQueue = v4->hHwQueue;
    v18[5] = -1073741811LL;
LABEL_13:
    v18[4] = hHwQueue;
    WdLogEvent5_WdError(v18);
LABEL_21:
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v42, v20);
    goto LABEL_22;
  }
  if ( v4->NumPrimaries > 0x10 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14);
    v18[3] = v17;
    hHwQueue = v4->NumPrimaries;
    v18[5] = 16LL;
    v18[6] = -1073741811LL;
    goto LABEL_13;
  }
  if ( !v4->pPrivateDriverData )
  {
    if ( !v4->PrivateDriverDataSize )
      goto LABEL_26;
LABEL_20:
    v21 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v21 + 24) = 1128LL;
    WdLogEvent5_WdWarning(v21);
    goto LABEL_21;
  }
  if ( !v4->PrivateDriverDataSize )
    goto LABEL_20;
LABEL_26:
  v25 = *(_QWORD *)(*((_QWORD *)v41[0] + 2) + 16LL);
  v26 = *(_QWORD *)(*(_QWORD *)(v25 + 16) + 16LL);
  if ( *(_BYTE *)(v26 + 209) )
  {
    v28 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitCommandToHwQueue(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(v26 + 4240),
            Current,
            v4);
LABEL_28:
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v42, v27);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38, v29);
    if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v38);
    return v28;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v41,
    *(struct DXGDEVICE **)(*((_QWORD *)v41[0] + 2) + 16LL));
  v44 = *(_QWORD *)(*(_QWORD *)(v25 + 16) + 16LL);
  v45 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v43);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v51, v25, 0, v32, 0);
  v33 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v51, 0LL);
  if ( v33 >= 0 )
  {
    v28 = DXGHWQUEUE::SubmitCommand(v17, v4, a2);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v51);
    if ( v45 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v43);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v41);
    goto LABEL_28;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v51);
  if ( v45 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v43);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v41);
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v42, v34);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38, v35);
  if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v36, &EventProfilerExit, v37, v38);
  return (unsigned int)v33;
}
