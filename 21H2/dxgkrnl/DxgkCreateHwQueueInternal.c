/*
 * XREFs of DxgkCreateHwQueueInternal @ 0x1C0312760
 * Callers:
 *     DxgkCreateHwQueue @ 0x1C0223D10 (DxgkCreateHwQueue.c)
 *     ?VmBusCreateHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0369B50 (-VmBusCreateHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x1C0008FF0 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0009178 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00096EC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009730 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C000BC60 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@E$0BA@@@QEAAPEAEI@Z @ 0x1C030D9FC (-AllocateElements@-$PagedPoolZeroedArray@E$0BA@@@QEAAPEAEI@Z.c)
 *     ?CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z @ 0x1C030DAEC (-CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z.c)
 */

__int64 __fastcall DxgkCreateHwQueueInternal(__int64 a1, char a2, __int64 a3)
{
  struct _D3DKMT_CREATEHWQUEUE *v4; // r13
  ULONG64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  PVOID v8; // r12
  struct _D3DKMT_CREATEHWQUEUE *v9; // rax
  struct _D3DKMT_CREATEHWQUEUE *v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 PrivateDriverDataSize; // rdx
  __int64 Elements; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r8
  size_t v19; // r8
  char *pPrivateDriverData; // rdx
  PVOID v21; // r10
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct DXGPROCESS *Current; // r8
  __int64 v25; // r9
  __int64 CurrentProcess; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  DXGCONTEXT *v31; // r15
  __int64 v32; // rcx
  __int64 v33; // r8
  struct DXGDEVICE *v34; // rbx
  __int64 v35; // r9
  int v36; // ebx
  __int64 v37; // rcx
  __int64 v38; // r8
  struct DXGHWQUEUE *v39; // rdx
  __int64 v40; // rax
  char *v41; // rcx
  __int64 v42; // [rsp+20h] [rbp-1C8h]
  int v44; // [rsp+58h] [rbp-190h] BYREF
  __int64 v45; // [rsp+60h] [rbp-188h]
  char v46; // [rsp+68h] [rbp-180h]
  struct DXGCONTEXT *v47; // [rsp+70h] [rbp-178h] BYREF
  _QWORD v48[2]; // [rsp+78h] [rbp-170h] BYREF
  struct _D3DKMT_CREATEHWQUEUE *v49; // [rsp+88h] [rbp-160h]
  PVOID v50; // [rsp+90h] [rbp-158h]
  struct DXGHWQUEUE *v51; // [rsp+98h] [rbp-150h] BYREF
  _BYTE v52[16]; // [rsp+A0h] [rbp-148h] BYREF
  struct _D3DKMT_CREATEHWQUEUE v53; // [rsp+B0h] [rbp-138h] BYREF
  size_t v54; // [rsp+E0h] [rbp-108h]
  char *v55; // [rsp+E8h] [rbp-100h]
  PVOID v56; // [rsp+F0h] [rbp-F8h]
  PVOID P; // [rsp+F8h] [rbp-F0h] BYREF
  _BYTE v58[16]; // [rsp+100h] [rbp-E8h] BYREF
  int v59; // [rsp+110h] [rbp-D8h]
  _BYTE v60[160]; // [rsp+120h] [rbp-C8h] BYREF

  v4 = (struct _D3DKMT_CREATEHWQUEUE *)a1;
  v44 = -1;
  v45 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v46 = 1;
    v44 = 2153;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2153);
  }
  else
  {
    v46 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v44, 2153);
  memset(&v53, 0, sizeof(v53));
  v49 = 0LL;
  P = 0LL;
  v59 = 0;
  v8 = 0LL;
  v50 = 0LL;
  if ( a2 )
  {
    v5 = MmUserProbeAddress;
    v9 = v4;
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v9 = (struct _D3DKMT_CREATEHWQUEUE *)MmUserProbeAddress;
    v53 = *v9;
    v10 = &v53;
    v49 = &v53;
  }
  else
  {
    v10 = v4;
    v49 = v4;
  }
  if ( v10->pPrivateDriverData )
  {
    if ( v10->PrivateDriverDataSize )
      goto LABEL_21;
LABEL_14:
    WdLogSingleEntry1(3LL, 719LL);
    if ( P != v58 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v59 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
    if ( v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, v44);
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
      Elements = PagedPoolZeroedArray<unsigned char,16>::AllocateElements((__int64 *)&P, PrivateDriverDataSize, v6, v7);
      v16 = v10->PrivateDriverDataSize;
      if ( !Elements )
      {
        WdLogSingleEntry3(3LL, v10->hHwContext, (unsigned int)v16, -1073741801LL);
        if ( P != v58 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v59 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
        if ( v46 )
        {
          LOBYTE(v17) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v44);
        }
        return 3221225495LL;
      }
      v19 = v10->PrivateDriverDataSize;
      v54 = v19;
      pPrivateDriverData = (char *)v10->pPrivateDriverData;
      v55 = pPrivateDriverData;
      v21 = P;
      v56 = P;
      if ( &pPrivateDriverData[v16] < pPrivateDriverData
        || (unsigned __int64)&pPrivateDriverData[v16] > MmUserProbeAddress )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      memmove(v21, pPrivateDriverData, v19);
      v8 = P;
      v50 = P;
    }
    else
    {
      v8 = v10->pPrivateDriverData;
      v50 = v8;
    }
  }
  Current = DXGPROCESS::GetCurrent(v5, PrivateDriverDataSize, v6, v7);
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v23, v22, 0LL, v25);
    WdLogSingleEntry2(2LL, CurrentProcess, -1073741811LL);
    v42 = PsGetCurrentProcess(v28, v27, v29, v30);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"unexpected process 0x%I64x, returning 0x%I64x",
      v42,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_47:
    if ( P != v58 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v59 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
    if ( v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v32, &EventProfilerExit, v33, v44);
    return 3221225485LL;
  }
  if ( (v10->Flags.Value & 8) != 0 && !g_OSTestSigningEnabled )
  {
    WdLogSingleEntry1(2LL, 770LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"NoKmdAccess can be used only with testsigning",
      770LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_47;
  }
  v47 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v52, v10->hHwContext, Current, &v47, 0, 1);
  v31 = v47;
  if ( !v47 )
  {
    WdLogSingleEntry2(2LL, v10->hHwContext, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hHwContext (0x%I64x) specified, returning 0x%I64x",
      v10->hHwContext,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_46:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v52);
    goto LABEL_47;
  }
  if ( (*((_DWORD *)v47 + 101) & 0x10) == 0 )
  {
    WdLogSingleEntry1(2LL, v10->hHwContext);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot create HW queue on context (0x%x) that doesn't support hardware queues.",
      v10->hHwContext,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_46;
  }
  v34 = (struct DXGDEVICE *)*((_QWORD *)v47 + 2);
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v48, v34);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v60, (__int64)v34, 0, v35, 0);
  v36 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v60, 0LL);
  if ( v36 >= 0 )
  {
    v51 = 0LL;
    v36 = DXGCONTEXT::CreateHwQueue(v31, v10, v8, &v51);
    if ( v36 >= 0 )
    {
      v39 = v51;
      if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v51 + 2) + 16LL) + 16LL) + 16LL) + 209LL) )
      {
        v10->hHwQueueProgressFence = *(_DWORD *)(*((_QWORD *)v51 + 6) + 40LL);
        v10->HwQueueProgressFenceCPUVirtualAddress = *(void **)(*((_QWORD *)v39 + 6) + 56LL);
        v10->HwQueueProgressFenceGPUVirtualAddress = *(_QWORD *)(*((_QWORD *)v39 + 6) + 48LL);
      }
      v10->hHwQueue = *((_DWORD *)v39 + 6);
      if ( a2 )
      {
        if ( (unsigned __int64)v4 >= MmUserProbeAddress )
          v4 = (struct _D3DKMT_CREATEHWQUEUE *)MmUserProbeAddress;
        *(_OWORD *)&v4->hHwContext = *(_OWORD *)&v10->hHwContext;
        *(_OWORD *)&v4->pPrivateDriverData = *(_OWORD *)&v10->pPrivateDriverData;
        *(_OWORD *)&v4->HwQueueProgressFenceCPUVirtualAddress = *(_OWORD *)&v10->HwQueueProgressFenceCPUVirtualAddress;
        v40 = v10->PrivateDriverDataSize;
        if ( (_DWORD)v40 )
        {
          v41 = (char *)v10->pPrivateDriverData;
          if ( (unsigned __int64)&v41[v40] > MmUserProbeAddress || &v41[v40] <= v41 )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v41, v8, (unsigned int)v40);
        }
      }
    }
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v60);
  if ( v48[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v48);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v52);
  if ( P != v58 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v59 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
  if ( v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v37, &EventProfilerExit, v38, v44);
  return (unsigned int)v36;
}
