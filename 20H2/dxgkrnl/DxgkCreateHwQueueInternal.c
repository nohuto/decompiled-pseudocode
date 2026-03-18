/*
 * XREFs of DxgkCreateHwQueueInternal @ 0x1C026FFB8
 * Callers:
 *     ?VmBusCreateHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023D3E0 (-VmBusCreateHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkCreateHwQueue @ 0x1C026FFA0 (DxgkCreateHwQueue.c)
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0001E14 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0003EE0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004050 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00041C0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006A30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00071B4 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?Feature_WSL_Device_GPU__private_IsEnabled@@YAHXZ @ 0x1C0024978 (-Feature_WSL_Device_GPU__private_IsEnabled@@YAHXZ.c)
 *     memmove @ 0x1C0027140 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$01@@QEAA@XZ @ 0x1C026B310 (--1-$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$01@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@E$0BA@@@QEAAPEAEI@Z @ 0x1C026B434 (-AllocateElements@-$PagedPoolZeroedArray@E$0BA@@@QEAAPEAEI@Z.c)
 *     ?CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z @ 0x1C026B53C (-CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z.c)
 */

__int64 __fastcall DxgkCreateHwQueueInternal(__int64 a1, char a2, __int64 a3)
{
  struct _D3DKMT_CREATEHWQUEUE *v4; // r12
  __int64 v5; // rdx
  ULONG64 v6; // rcx
  __int64 v7; // r8
  void *v8; // r15
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
  void *v24; // rcx
  size_t v25; // r8
  char *pPrivateDriverData; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  DXGCONTEXT *v39; // r13
  __int64 v40; // rax
  __int64 hHwContext; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  struct DXGDEVICE *v45; // rbx
  __int64 v46; // r9
  int v47; // ebx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  struct DXGHWQUEUE *v51; // rdx
  __int64 v52; // rax
  char *v53; // rcx
  int v55; // [rsp+38h] [rbp-180h] BYREF
  __int64 v56; // [rsp+40h] [rbp-178h]
  char v57; // [rsp+48h] [rbp-170h]
  struct DXGCONTEXT *v58; // [rsp+50h] [rbp-168h] BYREF
  _QWORD v59[2]; // [rsp+58h] [rbp-160h] BYREF
  struct _D3DKMT_CREATEHWQUEUE *v60; // [rsp+68h] [rbp-150h]
  void *v61; // [rsp+70h] [rbp-148h]
  struct DXGHWQUEUE *v62; // [rsp+78h] [rbp-140h] BYREF
  _BYTE v63[16]; // [rsp+80h] [rbp-138h] BYREF
  struct _D3DKMT_CREATEHWQUEUE v64; // [rsp+90h] [rbp-128h] BYREF
  void *v65; // [rsp+C0h] [rbp-F8h]
  void *v66[3]; // [rsp+C8h] [rbp-F0h] BYREF
  int v67; // [rsp+E0h] [rbp-D8h]
  _BYTE v68[160]; // [rsp+F0h] [rbp-C8h] BYREF

  v4 = (struct _D3DKMT_CREATEHWQUEUE *)a1;
  v55 = -1;
  v56 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v57 = 1;
    v55 = 2153;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2153);
  }
  else
  {
    v57 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v55, 2153LL);
  memset(&v64, 0, sizeof(v64));
  v60 = 0LL;
  v66[0] = 0LL;
  v67 = 0;
  v8 = 0LL;
  v61 = 0LL;
  if ( a2 )
  {
    v6 = MmUserProbeAddress;
    v9 = v4;
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v9 = (struct _D3DKMT_CREATEHWQUEUE *)MmUserProbeAddress;
    v64 = *v9;
    v10 = &v64;
    v60 = &v64;
  }
  else
  {
    v10 = v4;
    v60 = v4;
  }
  if ( v10->pPrivateDriverData )
  {
    if ( v10->PrivateDriverDataSize )
      goto LABEL_18;
LABEL_14:
    v11 = WdLogNewEntry5_WdWarning(v6, v5, v7);
    *(_QWORD *)(v11 + 24) = 634LL;
    WdLogEvent5_WdWarning(v11);
    PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>((__int64)v66);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55, v12);
    if ( v57 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v55);
    return 3221225485LL;
  }
  if ( v10->PrivateDriverDataSize )
    goto LABEL_14;
LABEL_18:
  PrivateDriverDataSize = v10->PrivateDriverDataSize;
  if ( (_DWORD)PrivateDriverDataSize )
  {
    if ( a2 )
    {
      if ( !PagedPoolZeroedArray<unsigned char,16>::AllocateElements(v66, PrivateDriverDataSize) )
      {
        v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19);
        v20[3] = v10->hHwContext;
        v20[4] = v10->PrivateDriverDataSize;
        v20[5] = -1073741801LL;
        WdLogEvent5_WdWarning(v20);
        PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>((__int64)v66);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55, v21);
        if ( v57 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v55);
        }
        return 3221225495LL;
      }
      v24 = v66[0];
      v65 = v66[0];
      v25 = v10->PrivateDriverDataSize;
      pPrivateDriverData = (char *)v10->pPrivateDriverData;
      if ( &pPrivateDriverData[v25] < pPrivateDriverData
        || (unsigned __int64)&pPrivateDriverData[v25] > MmUserProbeAddress )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      memmove(v24, pPrivateDriverData, v25);
      v8 = v66[0];
      v61 = v66[0];
    }
    else
    {
      v8 = v10->pPrivateDriverData;
      v61 = v8;
    }
  }
  Current = DXGPROCESS::GetCurrent(v6, PrivateDriverDataSize);
  if ( !Current )
  {
    v30 = WdLogNewEntry5_WdError(v28, v27);
    *(_QWORD *)(v30 + 24) = PsGetCurrentProcess(v32, v31);
    *(_QWORD *)(v30 + 32) = -1073741811LL;
    v33 = v30;
LABEL_32:
    WdLogEvent5_WdError(v33);
    goto LABEL_43;
  }
  if ( !(unsigned int)Feature_WSL_Device_GPU__private_IsEnabled() )
    v10->Flags.Value &= ~8u;
  if ( (v10->Flags.Value & 8) != 0 && !g_OSTestSigningEnabled )
  {
    v36 = WdLogNewEntry5_WdError(v35, v34);
    *(_QWORD *)(v36 + 24) = 690LL;
    v33 = v36;
    goto LABEL_32;
  }
  v58 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v63, v10->hHwContext, Current, &v58, 0);
  v39 = v58;
  if ( !v58 )
  {
    v40 = WdLogNewEntry5_WdError(v38, v37);
    hHwContext = v10->hHwContext;
    *(_QWORD *)(v40 + 32) = -1073741811LL;
LABEL_42:
    *(_QWORD *)(v40 + 24) = hHwContext;
    WdLogEvent5_WdError(v40);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v63);
LABEL_43:
    PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>((__int64)v66);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55, v42);
    if ( v57 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v43, &EventProfilerExit, v44, v55);
    return 3221225485LL;
  }
  if ( (*((_DWORD *)v58 + 105) & 0x10) == 0 )
  {
    v40 = WdLogNewEntry5_WdError(v38, v37);
    hHwContext = v10->hHwContext;
    goto LABEL_42;
  }
  v45 = (struct DXGDEVICE *)*((_QWORD *)v58 + 2);
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v59, v45);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v68, (__int64)v45, 0, v46, 0);
  v47 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v68, 0LL);
  if ( v47 >= 0 )
  {
    v62 = 0LL;
    v47 = DXGCONTEXT::CreateHwQueue(v39, v10, v8, &v62);
    if ( v47 >= 0 )
    {
      v51 = v62;
      if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v62 + 2) + 16LL) + 16LL) + 16LL) + 209LL) )
      {
        v10->hHwQueueProgressFence = *(_DWORD *)(*((_QWORD *)v62 + 6) + 40LL);
        v10->HwQueueProgressFenceCPUVirtualAddress = *(void **)(*((_QWORD *)v51 + 6) + 56LL);
        v10->HwQueueProgressFenceGPUVirtualAddress = *(_QWORD *)(*((_QWORD *)v51 + 6) + 48LL);
      }
      v10->hHwQueue = *((_DWORD *)v51 + 6);
      if ( a2 )
      {
        if ( (unsigned __int64)v4 >= MmUserProbeAddress )
          v4 = (struct _D3DKMT_CREATEHWQUEUE *)MmUserProbeAddress;
        *(_OWORD *)&v4->hHwContext = *(_OWORD *)&v10->hHwContext;
        *(_OWORD *)&v4->pPrivateDriverData = *(_OWORD *)&v10->pPrivateDriverData;
        *(_OWORD *)&v4->HwQueueProgressFenceCPUVirtualAddress = *(_OWORD *)&v10->HwQueueProgressFenceCPUVirtualAddress;
        v52 = v10->PrivateDriverDataSize;
        if ( (_DWORD)v52 )
        {
          v53 = (char *)v10->pPrivateDriverData;
          if ( (unsigned __int64)&v53[v52] > MmUserProbeAddress || &v53[v52] <= v53 )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v53, v8, (unsigned int)v52);
        }
      }
    }
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v68);
  if ( v59[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v59);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v63);
  PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>((__int64)v66);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55, v48);
  if ( v57 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v49, &EventProfilerExit, v50, v55);
  return (unsigned int)v47;
}
