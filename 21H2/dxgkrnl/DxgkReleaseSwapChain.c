/*
 * XREFs of DxgkReleaseSwapChain @ 0x1C034F250
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ?SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x1C0225CE8 (-SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 */

__int64 __fastcall DxgkReleaseSwapChain(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  void *v5; // r14
  void *v6; // rbx
  _OWORD *v7; // rax
  __int64 v8; // rbx
  const wchar_t *v9; // r9
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int64 v13; // rax
  void *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  NTSTATUS v17; // eax
  int v18; // esi
  void *v19; // r8
  PVOID v20; // r12
  _DWORD *v21; // r8
  __int64 v22; // r9
  _QWORD *v23; // rdx
  _QWORD *v24; // rdx
  ULONG64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // [rsp+50h] [rbp-88h] BYREF
  __int64 v29; // [rsp+58h] [rbp-80h]
  char v30; // [rsp+60h] [rbp-78h]
  HANDLE Handle[2]; // [rsp+70h] [rbp-68h] BYREF
  __int128 v32; // [rsp+80h] [rbp-58h]
  void *v33[2]; // [rsp+90h] [rbp-48h]
  void *Src[2]; // [rsp+A0h] [rbp-38h]
  PVOID Object; // [rsp+E8h] [rbp+10h] BYREF
  void *v36; // [rsp+F0h] [rbp+18h]

  v28 = -1;
  v29 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v30 = 1;
    v28 = 2112;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2112);
  }
  else
  {
    v30 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v28, 2112);
  v5 = 0LL;
  v6 = 0LL;
  v36 = 0LL;
  v7 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v7 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Handle = *v7;
  v32 = v7[1];
  *(_OWORD *)v33 = v7[2];
  *(_OWORD *)Src = v7[3];
  if ( LODWORD(Src[0]) > 0x32 )
  {
    v8 = LODWORD(Src[0]);
    WdLogSingleEntry1(2LL, LODWORD(Src[0]));
    v9 = L"Caller specified 0x%I64x deferred list size, this is over the maximum";
LABEL_12:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v9, v8, 0LL, 0LL, 0LL, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
    if ( v30 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v10, &EventProfilerExit, v11, v28);
    }
    return 3221225485LL;
  }
  if ( LODWORD(Src[0]) )
  {
    v5 = Src[1];
    if ( !Src[1] )
    {
      v8 = 1263LL;
      WdLogSingleEntry1(2LL, 1263LL);
      v9 = L"Caller specified non-zero free list size but failed to provide buffer";
      goto LABEL_12;
    }
    v13 = 4LL * LODWORD(Src[0]);
    if ( !is_mul_ok(LODWORD(Src[0]), 4uLL) )
      v13 = -1LL;
    v14 = (void *)operator new[](v13, 0x4B677844u, 256LL, v4);
    v6 = v14;
    v36 = v14;
    if ( !v14 )
    {
      WdLogSingleEntry1(6LL, 1270LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate deferred list",
        1270LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
      if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, v16, v28);
      return 3221225495LL;
    }
    Src[1] = v14;
  }
  Object = 0LL;
  v17 = ObReferenceObjectByHandle(Handle[0], 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &Object, 0LL);
  v18 = v17;
  if ( v17 >= 0 )
  {
    v19 = v33[1];
    v33[1] = 0LL;
    v20 = Object;
    v18 = SwapChainReleaseInternal(*(struct DXGSWAPCHAIN **)Object, (struct _D3DKMT_RELEASESWAPCHAIN *)Handle, v19, 1);
    if ( v18 >= 0 )
    {
      v21 = (_DWORD *)(a1 + 48);
      if ( a1 + 48 >= MmUserProbeAddress )
        v21 = (_DWORD *)MmUserProbeAddress;
      v22 = LODWORD(Src[0]);
      *v21 = Src[0];
      if ( (_QWORD)v32 )
      {
        v23 = (_QWORD *)(a1 + 16);
        if ( a1 + 16 >= MmUserProbeAddress )
          v23 = (_QWORD *)MmUserProbeAddress;
        *v23 = v32;
        v24 = (_QWORD *)(a1 + 24);
        if ( a1 + 24 >= MmUserProbeAddress )
          v24 = (_QWORD *)MmUserProbeAddress;
        *v24 = *((_QWORD *)&v32 + 1);
      }
      if ( (_DWORD)v22 )
      {
        v25 = (ULONG64)v5 + 4 * v22;
        if ( v25 > MmUserProbeAddress || v25 <= (unsigned __int64)v5 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v5, Src[1], 4 * v22);
      }
    }
    ObfDereferenceObject(v20);
  }
  else
  {
    WdLogSingleEntry2(3LL, Handle[0], v17);
  }
  if ( v6 )
    operator delete[](v6);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
  if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v28);
  return (unsigned int)v18;
}
