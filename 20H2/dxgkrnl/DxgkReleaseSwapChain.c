/*
 * XREFs of DxgkReleaseSwapChain @ 0x1C02AD730
 * Callers:
 *     <none>
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0027140 (memmove.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     ?SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x1C02AB6DC (-SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 */

__int64 __fastcall DxgkReleaseSwapChain(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  void *v5; // r14
  void *v6; // rdi
  _OWORD *v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  SIZE_T v14; // rax
  PVOID v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  HANDLE v24; // r12
  NTSTATUS v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rdx
  void *v32; // r8
  PVOID v33; // r12
  _DWORD *v34; // r8
  __int64 v35; // r9
  _QWORD *v36; // rdx
  _QWORD *v37; // rdx
  ULONG64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // r8
  int v41; // [rsp+30h] [rbp-88h] BYREF
  __int64 v42; // [rsp+38h] [rbp-80h]
  char v43; // [rsp+40h] [rbp-78h]
  HANDLE Handle[2]; // [rsp+50h] [rbp-68h] BYREF
  __int128 v45; // [rsp+60h] [rbp-58h]
  void *v46[2]; // [rsp+70h] [rbp-48h]
  void *Src[2]; // [rsp+80h] [rbp-38h]
  PVOID Object; // [rsp+C8h] [rbp+10h] BYREF
  PVOID v49; // [rsp+D0h] [rbp+18h]

  v41 = -1;
  v42 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v43 = 1;
    v41 = 2112;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2112);
  }
  else
  {
    v43 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v41, 2112LL);
  v5 = 0LL;
  v6 = 0LL;
  v49 = 0LL;
  v7 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v7 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Handle = *v7;
  v45 = v7[1];
  *(_OWORD *)v46 = v7[2];
  *(_OWORD *)Src = v7[3];
  v8 = LODWORD(Src[0]);
  if ( LODWORD(Src[0]) > 0x32 )
  {
    v9 = WdLogNewEntry5_WdError(MmUserProbeAddress, v4);
    *(_QWORD *)(v9 + 24) = v8;
LABEL_12:
    WdLogEvent5_WdError(v9);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41, v10);
    if ( v43 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, v41);
    }
    return 3221225485LL;
  }
  if ( LODWORD(Src[0]) )
  {
    v5 = Src[1];
    if ( !Src[1] )
    {
      v9 = WdLogNewEntry5_WdError(MmUserProbeAddress, v4);
      *(_QWORD *)(v9 + 24) = 1264LL;
      goto LABEL_12;
    }
    v14 = 4LL * LODWORD(Src[0]);
    if ( !is_mul_ok(LODWORD(Src[0]), 4uLL) )
      v14 = -1LL;
    v15 = operator new[](v14, 0x4B677844u, PagedPool);
    v6 = v15;
    v49 = v15;
    if ( !v15 )
    {
      v20 = WdLogNewEntry5_WdLowResource(v17, v16, v18, v19);
      *(_QWORD *)(v20 + 24) = 1271LL;
      WdLogEvent5_WdLowResource(v20);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41, v21);
      if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v41);
      return 3221225495LL;
    }
    memset(v15, 0, 4 * v8);
    Src[1] = v6;
  }
  Object = 0LL;
  v24 = Handle[0];
  v25 = ObReferenceObjectByHandle(Handle[0], 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &Object, 0LL);
  v29 = v25;
  if ( v25 >= 0 )
  {
    v32 = v46[1];
    v46[1] = 0LL;
    v33 = Object;
    LODWORD(v29) = SwapChainReleaseInternal(
                     *(struct DXGSWAPCHAIN **)Object,
                     (struct _D3DKMT_RELEASESWAPCHAIN *)Handle,
                     v32,
                     1);
    if ( (int)v29 >= 0 )
    {
      v34 = (_DWORD *)(a1 + 48);
      if ( a1 + 48 >= MmUserProbeAddress )
        v34 = (_DWORD *)MmUserProbeAddress;
      v35 = LODWORD(Src[0]);
      *v34 = Src[0];
      if ( (_QWORD)v45 )
      {
        v36 = (_QWORD *)(a1 + 16);
        if ( a1 + 16 >= MmUserProbeAddress )
          v36 = (_QWORD *)MmUserProbeAddress;
        *v36 = v45;
        v37 = (_QWORD *)(a1 + 24);
        if ( a1 + 24 >= MmUserProbeAddress )
          v37 = (_QWORD *)MmUserProbeAddress;
        *v37 = *((_QWORD *)&v45 + 1);
      }
      if ( (_DWORD)v35 )
      {
        v38 = (ULONG64)v5 + 4 * v35;
        if ( v38 > MmUserProbeAddress || v38 <= (unsigned __int64)v5 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v5, Src[1], 4 * v35);
      }
    }
    ObfDereferenceObject(v33);
  }
  else
  {
    v30 = WdLogNewEntry5_WdWarning(v27, v26, v28);
    *(_QWORD *)(v30 + 24) = v24;
    *(_QWORD *)(v30 + 32) = v29;
    WdLogEvent5_WdWarning(v30);
  }
  if ( v6 )
    operator delete[](v6);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41, v31);
  if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v39, &EventProfilerExit, v40, v41);
  return (unsigned int)v29;
}
