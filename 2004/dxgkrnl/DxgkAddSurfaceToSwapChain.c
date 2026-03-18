/*
 * XREFs of DxgkAddSurfaceToSwapChain @ 0x1C02AD170
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0pqqpq_EtwWriteTransfer @ 0x1C004B5DC (McTemplateK0pqqpq_EtwWriteTransfer.c)
 *     ??0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z @ 0x1C02A9648 (--0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z.c)
 *     ??1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ @ 0x1C02A96B8 (--1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z @ 0x1C02A96EC (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z.c)
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z @ 0x1C02A9D70 (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z.c)
 */

__int64 __fastcall DxgkAddSurfaceToSwapChain(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  _OWORD *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  HANDLE v11; // rsi
  NTSTATUS v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  const void ***v21; // r15
  struct DXGSWAPCHAIN *v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  _DWORD *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // r8
  PVOID *Object; // [rsp+20h] [rbp-118h]
  __int64 v33; // [rsp+28h] [rbp-110h]
  __int64 v34; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v35; // [rsp+48h] [rbp-F0h]
  char v36; // [rsp+50h] [rbp-E8h]
  PVOID v37; // [rsp+58h] [rbp-E0h] BYREF
  struct DXGDEVICE *v38; // [rsp+60h] [rbp-D8h] BYREF
  HANDLE Handle[2]; // [rsp+68h] [rbp-D0h]
  void *v40[2]; // [rsp+78h] [rbp-C0h] BYREF
  ULONG64 v41; // [rsp+88h] [rbp-B0h]
  struct DXGSWAPCHAIN *v42; // [rsp+90h] [rbp-A8h]
  _BYTE v43[128]; // [rsp+A0h] [rbp-98h] BYREF

  v41 = a1;
  LODWORD(v34) = -1;
  v35 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v36 = 1;
    LODWORD(v34) = 2200;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2200);
  }
  else
  {
    v36 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v34, 2200LL);
  v5 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v5 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Handle = *v5;
  *(_OWORD *)v40 = v5[1];
  if ( !LODWORD(Handle[1]) )
  {
    v6 = WdLogNewEntry5_WdError(MmUserProbeAddress, v4);
    *(_QWORD *)(v6 + 24) = 857LL;
    WdLogEvent5_WdError(v6);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34, v7);
    if ( v36 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v8, &EventProfilerExit, v9, v34);
    }
    return 3221225485LL;
  }
  v37 = 0LL;
  v11 = Handle[0];
  v12 = ObReferenceObjectByHandle(Handle[0], 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &v37, 0LL);
  v16 = v12;
  if ( v12 < 0 )
  {
    v17 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    *(_QWORD *)(v17 + 24) = v11;
    *(_QWORD *)(v17 + 32) = v16;
    WdLogEvent5_WdWarning(v17);
LABEL_14:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34, v18);
    if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v34);
    return (unsigned int)v16;
  }
  v21 = (const void ***)v37;
  v22 = *(struct DXGSWAPCHAIN **)v37;
  v42 = v22;
  v38 = 0LL;
  DXGSWAPCHAINLOCKWITHDEVICE::DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v43, v22, 1, 1);
  LODWORD(v16) = DXGSWAPCHAINLOCKWITHDEVICE::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)v43, &v38, 1);
  if ( (int)v16 < 0 )
  {
LABEL_28:
    ObfDereferenceObject(v21);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100000000LL) != 0 )
    {
      LODWORD(v33) = Handle[1];
      LODWORD(Object) = v16;
      McTemplateK0pqqpq_EtwWriteTransfer(
        v30,
        &EventIndirectSwapChainAddSurface,
        v31,
        v22,
        Object,
        v33,
        v40[0],
        LODWORD(v40[1]),
        v34,
        v35);
    }
    DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v43);
    goto LABEL_14;
  }
  if ( *((_DWORD *)v22 + 56) )
  {
    LODWORD(v16) = DXGSWAPCHAIN::AddSurface(
                     *v21,
                     *((DXGADAPTER ***)v38 + 2),
                     (int)Handle[1],
                     v40[0],
                     (unsigned int *)&v40[1]);
    if ( (int)v16 >= 0 )
    {
      v25 = (_DWORD *)(a1 + 24);
      if ( a1 + 24 >= MmUserProbeAddress )
        v25 = (_DWORD *)MmUserProbeAddress;
      *v25 = v40[1];
    }
    goto LABEL_28;
  }
  v26 = WdLogNewEntry5_WdError(v24, v23);
  *(_QWORD *)(v26 + 24) = 903LL;
  WdLogEvent5_WdError(v26);
  DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v43);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34, v27);
  if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v34);
  return 3221225659LL;
}
