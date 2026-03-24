/*
 * XREFs of DxgkReclaimAllocations2 @ 0x1C01102D0
 * Callers:
 *     ?VmBusReclaimAllocations@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0245A10 (-VmBusReclaimAllocations@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00022BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004090 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0004160 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00045C8 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C00058C8 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0005940 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x1C001E140 (-Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ @ 0x1C0025F98 (-ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBBF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@E@Z @ 0x1C0100490 (-ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@E@Z.c)
 */

__int64 __fastcall DxgkReclaimAllocations2(struct _D3DKMT_RECLAIMALLOCATIONS2 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _KTHREAD **v10; // r14
  struct _KTHREAD **v11; // rsi
  char CurrentThreadPreviousMode; // al
  bool v13; // r14
  struct _D3DKMT_RECLAIMALLOCATIONS2 *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct DXGDEVICE *v18; // rsi
  __int64 v19; // r9
  __int64 v20; // r9
  int v21; // esi
  _QWORD *p_PagingFenceValue; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  int v40; // [rsp+30h] [rbp-128h] BYREF
  __int64 v41; // [rsp+38h] [rbp-120h]
  char v42; // [rsp+40h] [rbp-118h]
  struct DXGPAGINGQUEUE *v43; // [rsp+48h] [rbp-110h] BYREF
  DXGPAGINGQUEUE *v44; // [rsp+50h] [rbp-108h] BYREF
  __int64 v45; // [rsp+58h] [rbp-100h] BYREF
  int v46; // [rsp+60h] [rbp-F8h]
  struct _D3DKMT_RECLAIMALLOCATIONS2 v47; // [rsp+68h] [rbp-F0h] BYREF
  struct DXGDEVICE *v48; // [rsp+90h] [rbp-C8h]
  _BYTE v49[8]; // [rsp+A0h] [rbp-B8h] BYREF
  _BYTE v50[64]; // [rsp+A8h] [rbp-B0h] BYREF
  _BYTE v51[16]; // [rsp+E8h] [rbp-70h] BYREF
  __int64 v52; // [rsp+F8h] [rbp-60h]
  __int64 v53; // [rsp+128h] [rbp-30h]
  char v54; // [rsp+130h] [rbp-28h]

  v40 = -1;
  v41 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v42 = 1;
    v40 = 2071;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2071);
  }
  else
  {
    v42 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v40, 2071LL);
  CurrentProcess = PsGetCurrentProcess(v5, v4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v10 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent(v9, v8)) == 0LL
    || (v11 = (struct _KTHREAD **)*((_QWORD *)Current + 1)) == 0LL )
  {
    v11 = v10;
    if ( !v10 )
    {
      v28 = WdLogNewEntry5_WdError(v9, v8);
      *(_QWORD *)(v28 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v28);
LABEL_33:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40, v29);
      if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v31, &EventProfilerExit, v32, v40);
      return 3221225485LL;
    }
  }
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  v13 = CurrentThreadPreviousMode == 1;
  if ( CurrentThreadPreviousMode == 1 )
  {
    v14 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v14 = (struct _D3DKMT_RECLAIMALLOCATIONS2 *)MmUserProbeAddress;
    v47 = *v14;
  }
  else
  {
    v47 = *a1;
  }
  v43 = 0LL;
  DXGPAGINGQUEUEBYHANDLE::Open((DXGPAGINGQUEUEBYHANDLE *)&v44, v47.hPagingQueue, v11, &v43, 1);
  if ( !v43 )
  {
    v30 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v30 + 24) = v47.hPagingQueue;
    *(_QWORD *)(v30 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v30);
    if ( v44 )
      DXGPAGINGQUEUE::ReleaseReference(v44, v29);
    goto LABEL_33;
  }
  v18 = (struct DXGDEVICE *)*((_QWORD *)v43 + 2);
  v48 = v18;
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v45,
    v18);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v49, (__int64)v18, 0, v19, 0);
  if ( v54 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v51, 0LL);
    if ( *(_DWORD *)(v52 + 200) != 1 )
      goto LABEL_40;
  }
  COREACCESS::AcquireShared((COREACCESS *)v50, 0LL);
  if ( *(_DWORD *)(v53 + 576) == 1 )
  {
    LOBYTE(v20) = v13;
    v21 = DXGDEVICE::ReclaimAllocations(v18, (__int64)v43, &v47, v20);
    if ( v21 >= 0 )
    {
      if ( v13 )
      {
        p_PagingFenceValue = &a1->PagingFenceValue;
        if ( (unsigned __int64)&a1->PagingFenceValue >= MmUserProbeAddress )
          p_PagingFenceValue = (_QWORD *)MmUserProbeAddress;
        *p_PagingFenceValue = v47.PagingFenceValue;
      }
      else
      {
        a1->PagingFenceValue = v47.PagingFenceValue;
      }
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v49);
    if ( v46 )
      ExReleasePushLockSharedEx(v45 + 144, 0LL);
    else
      ExReleaseResourceLite(*(PERESOURCE *)(v45 + 136));
    KeLeaveCriticalRegion();
    if ( v44 )
      DXGPAGINGQUEUE::ReleaseReference(v44, v23);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40, v23);
    if ( v42 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v40);
    }
    return (unsigned int)v21;
  }
  COREACCESS::Release((COREACCESS *)v50);
  if ( v54 )
LABEL_40:
    COREACCESS::Release((COREACCESS *)v51);
  v36 = WdLogNewEntry5_WdWarning(v34, v33, v35);
  *(_QWORD *)(v36 + 24) = v18;
  *(_QWORD *)(v36 + 32) = -1073741130LL;
  WdLogEvent5_WdWarning(v36);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v49);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v45);
  if ( v44 )
    DXGPAGINGQUEUE::ReleaseReference(v44, v37);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40, v37);
  if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v38, &EventProfilerExit, v39, v40);
  return 3221226166LL;
}
