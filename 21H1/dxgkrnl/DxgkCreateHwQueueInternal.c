/*
 * XREFs of DxgkCreateHwQueueInternal @ 0x1C026CA88
 * Callers:
 *     ?VmBusCreateHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023A280 (-VmBusCreateHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkCreateHwQueue @ 0x1C026CA70 (DxgkCreateHwQueue.c)
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0007F18 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0008020 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0008348 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000B200 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000E890 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000F00C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0024550 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@E$0BA@@@QEAAPEAEI@Z @ 0x1C02680A4 (-AllocateElements@-$PagedPoolZeroedArray@E$0BA@@@QEAAPEAEI@Z.c)
 *     ?CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z @ 0x1C02681AC (-CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z.c)
 */

__int64 __fastcall DxgkCreateHwQueueInternal(__int64 a1, char a2, __int64 a3)
{
  struct _D3DKMT_CREATEHWQUEUE *v4; // r12
  __int64 v5; // rdx
  ULONG64 v6; // rcx
  __int64 v7; // r8
  PVOID v8; // r15
  struct _D3DKMT_CREATEHWQUEUE *v9; // rax
  struct _D3DKMT_CREATEHWQUEUE *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 PrivateDriverDataSize; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  PVOID v24; // rcx
  size_t v25; // r8
  char *pPrivateDriverData; // rdx
  struct DXGPROCESS *Current; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rcx
  DXGCONTEXT *v36; // r13
  __int64 v37; // rax
  __int64 hHwContext; // rcx
  __int64 v39; // rcx
  __int64 v40; // r8
  struct DXGDEVICE *v41; // rbx
  __int64 v42; // r9
  int v43; // ebx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  struct DXGHWQUEUE *v47; // rdx
  __int64 v48; // rax
  char *v49; // rcx
  int v51; // [rsp+38h] [rbp-180h] BYREF
  __int64 v52; // [rsp+40h] [rbp-178h]
  char v53; // [rsp+48h] [rbp-170h]
  struct DXGCONTEXT *v54; // [rsp+50h] [rbp-168h] BYREF
  _QWORD v55[2]; // [rsp+58h] [rbp-160h] BYREF
  struct _D3DKMT_CREATEHWQUEUE *v56; // [rsp+68h] [rbp-150h]
  PVOID v57; // [rsp+70h] [rbp-148h]
  struct DXGHWQUEUE *v58; // [rsp+78h] [rbp-140h] BYREF
  _BYTE v59[16]; // [rsp+80h] [rbp-138h] BYREF
  struct _D3DKMT_CREATEHWQUEUE v60; // [rsp+90h] [rbp-128h] BYREF
  PVOID v61; // [rsp+C0h] [rbp-F8h]
  PVOID P; // [rsp+C8h] [rbp-F0h] BYREF
  _BYTE v63[16]; // [rsp+D0h] [rbp-E8h] BYREF
  int v64; // [rsp+E0h] [rbp-D8h]
  _BYTE v65[160]; // [rsp+F0h] [rbp-C8h] BYREF

  v4 = (struct _D3DKMT_CREATEHWQUEUE *)a1;
  v51 = -1;
  v52 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v53 = 1;
    v51 = 2153;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2153);
  }
  else
  {
    v53 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v51, 2153LL);
  memset(&v60, 0, sizeof(v60));
  v56 = 0LL;
  P = 0LL;
  v64 = 0;
  v8 = 0LL;
  v57 = 0LL;
  if ( a2 )
  {
    v6 = MmUserProbeAddress;
    v9 = v4;
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v9 = (struct _D3DKMT_CREATEHWQUEUE *)MmUserProbeAddress;
    v60 = *v9;
    v10 = &v60;
    v56 = &v60;
  }
  else
  {
    v10 = v4;
    v56 = v4;
  }
  if ( v10->pPrivateDriverData )
  {
    if ( v10->PrivateDriverDataSize )
      goto LABEL_21;
LABEL_14:
    v11 = WdLogNewEntry5_WdWarning(v6, v5, v7);
    *(_QWORD *)(v11 + 24) = 601LL;
    WdLogEvent5_WdWarning(v11);
    if ( P != v63 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v64 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51, v12);
    if ( v53 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v51);
    return 3221225485LL;
  }
  if ( v10->PrivateDriverDataSize )
    goto LABEL_14;
LABEL_21:
  PrivateDriverDataSize = v10->PrivateDriverDataSize;
  if ( (_DWORD)PrivateDriverDataSize )
  {
    if ( a2 )
    {
      if ( !PagedPoolZeroedArray<unsigned char,16>::AllocateElements(&P, PrivateDriverDataSize) )
      {
        v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19);
        v20[3] = v10->hHwContext;
        v20[4] = v10->PrivateDriverDataSize;
        v20[5] = -1073741801LL;
        WdLogEvent5_WdWarning(v20);
        if ( P != v63 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v64 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51, v21);
        if ( v53 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v51);
        }
        return 3221225495LL;
      }
      v24 = P;
      v61 = P;
      v25 = v10->PrivateDriverDataSize;
      pPrivateDriverData = (char *)v10->pPrivateDriverData;
      if ( &pPrivateDriverData[v25] < pPrivateDriverData
        || (unsigned __int64)&pPrivateDriverData[v25] > MmUserProbeAddress )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      memmove(v24, pPrivateDriverData, v25);
      v8 = P;
      v57 = P;
    }
    else
    {
      v8 = v10->pPrivateDriverData;
      v57 = v8;
    }
  }
  Current = DXGPROCESS::GetCurrent(v6, PrivateDriverDataSize);
  if ( !Current )
  {
    v30 = WdLogNewEntry5_WdError(v29, v28);
    *(_QWORD *)(v30 + 24) = PsGetCurrentProcess(v32, v31);
    *(_QWORD *)(v30 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v30);
    goto LABEL_43;
  }
  v54 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v59, v10->hHwContext, Current, &v54, 0);
  v36 = v54;
  if ( !v54 )
  {
    v37 = WdLogNewEntry5_WdError(v35, v34);
    hHwContext = v10->hHwContext;
    *(_QWORD *)(v37 + 32) = -1073741811LL;
LABEL_42:
    *(_QWORD *)(v37 + 24) = hHwContext;
    WdLogEvent5_WdError(v37);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v59);
LABEL_43:
    if ( P != v63 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v64 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51, v33);
    if ( v53 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v39, &EventProfilerExit, v40, v51);
    return 3221225485LL;
  }
  if ( (*((_DWORD *)v54 + 105) & 0x10) == 0 )
  {
    v37 = WdLogNewEntry5_WdError(v35, v34);
    hHwContext = v10->hHwContext;
    goto LABEL_42;
  }
  v41 = (struct DXGDEVICE *)*((_QWORD *)v54 + 2);
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v55, v41);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v65, (__int64)v41, 0, v42, 0);
  v43 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v65, 0LL);
  if ( v43 >= 0 )
  {
    v58 = 0LL;
    v43 = DXGCONTEXT::CreateHwQueue(v36, v10, v8, &v58);
    if ( v43 >= 0 )
    {
      v47 = v58;
      if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v58 + 2) + 16LL) + 16LL) + 16LL) + 209LL) )
      {
        v10->hHwQueueProgressFence = *(_DWORD *)(*((_QWORD *)v58 + 6) + 40LL);
        v10->HwQueueProgressFenceCPUVirtualAddress = *(void **)(*((_QWORD *)v47 + 6) + 56LL);
        v10->HwQueueProgressFenceGPUVirtualAddress = *(_QWORD *)(*((_QWORD *)v47 + 6) + 48LL);
      }
      v10->hHwQueue = *((_DWORD *)v47 + 6);
      if ( a2 )
      {
        if ( (unsigned __int64)v4 >= MmUserProbeAddress )
          v4 = (struct _D3DKMT_CREATEHWQUEUE *)MmUserProbeAddress;
        *(_OWORD *)&v4->hHwContext = *(_OWORD *)&v10->hHwContext;
        *(_OWORD *)&v4->pPrivateDriverData = *(_OWORD *)&v10->pPrivateDriverData;
        *(_OWORD *)&v4->HwQueueProgressFenceCPUVirtualAddress = *(_OWORD *)&v10->HwQueueProgressFenceCPUVirtualAddress;
        v48 = v10->PrivateDriverDataSize;
        if ( (_DWORD)v48 )
        {
          v49 = (char *)v10->pPrivateDriverData;
          if ( (unsigned __int64)&v49[v48] > MmUserProbeAddress || &v49[v48] <= v49 )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v49, v8, (unsigned int)v48);
        }
      }
    }
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v65);
  if ( v55[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v55);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v59);
  if ( P != v63 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v64 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51, v44);
  if ( v53 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v45, &EventProfilerExit, v46, v51);
  return (unsigned int)v43;
}
