/*
 * XREFs of ?UnOrderedPresent@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_UNORDEREDPRESENTSWAPCHAIN@@@Z @ 0x1C034CDE4
 * Callers:
 *     DxgkUnOrderedPresentSwapChain @ 0x1C034F990 (DxgkUnOrderedPresentSwapChain.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z @ 0x1C0225596 (-AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x1C034B21C (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z @ 0x1C034BF18 (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::UnOrderedPresent(struct _KTHREAD **this, struct _D3DKMT_UNORDEREDPRESENTSWAPCHAIN *a2)
{
  __int64 result; // rax
  unsigned int v5; // eax
  struct _D3DKMT_UNORDEREDPRESENTSWAPCHAIN *v6; // rbx
  __int64 hNtSwapChain_low; // r9
  __int64 v8; // rax
  const wchar_t *v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  struct _KTHREAD *v12; // r8
  char *v13; // r14
  PVOID pMetaData; // rdx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rdi
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  const wchar_t *v23; // r9
  BOOL bProducer; // ebx
  __int64 CurrentProcess; // rax
  HANDLE hNtPresentSurfaceHandle; // rdi
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  int v33; // eax
  void *v34; // r8
  int v35; // eax
  int v36; // [rsp+38h] [rbp-F0h]
  _BYTE v37[64]; // [rsp+50h] [rbp-D8h] BYREF
  struct _D3DKMT_ACQUIRESWAPCHAIN v38; // [rsp+90h] [rbp-98h] BYREF
  __int64 v39; // [rsp+130h] [rbp+8h] BYREF

  if ( this[3] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 2561LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_SwapChainLock.IsOwner()", 2561LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*((_DWORD *)this + 58) )
  {
    WdLogSingleEntry1(2LL, 2566LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"UnOrderedPresent is not allowed for sequential swapchains",
      2566LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225659LL;
  }
  v5 = *((_DWORD *)this + 14);
  v6 = a2 + 1;
  hNtSwapChain_low = LODWORD(a2[1].hNtSwapChain);
  if ( (unsigned int)hNtSwapChain_low >= v5 )
  {
    WdLogSingleEntry2(2LL, (unsigned int)hNtSwapChain_low, v5);
    v8 = *((unsigned int *)this + 14);
    v9 = L"Surface index (0x%I64x) is outside of the range of the table size (0x%I64x)";
LABEL_7:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v9, LODWORD(v6->hNtSwapChain), v8, 0LL, 0LL, 0LL);
    DXGSWAPCHAIN::MarkAbandoned(this, v10, v11);
    return 3221225485LL;
  }
  v12 = this[8];
  v13 = (char *)v12 + 112 * hNtSwapChain_low;
  if ( !*((_DWORD *)v13 + 2) )
  {
    WdLogSingleEntry2(2LL, LODWORD(a2[1].hNtSwapChain), 0LL);
    v8 = *((int *)v13 + 2);
    v9 = L"Surface index (0x%I64x) is not in use by producer, current status (0x%I64x)";
    goto LABEL_7;
  }
  pMetaData = a2->pMetaData;
  if ( *((PVOID *)v13 + 8) == pMetaData )
  {
    memset(&v38, 0, 0x68uLL);
    v38.bProducer = a2->bProducer;
    v18 = DXGSWAPCHAIN::AcquireBuffer(this, &v38, (unsigned int *)&a2[1]);
    v17 = v18;
    if ( v18 >= 0 )
    {
      result = 259LL;
      if ( (_DWORD)v17 == 259 )
        return result;
      bProducer = a2->bProducer;
      if ( bProducer && a2->hNtPresentSurfaceHandle )
      {
        v39 = 0LL;
        CurrentProcess = PsGetCurrentProcess(v20, v19, v21, v22);
        hNtPresentSurfaceHandle = a2->hNtPresentSurfaceHandle;
        v27 = CurrentProcess;
        v32 = PsGetCurrentProcess(v29, v28, v30, v31);
        LOBYTE(v36) = 1;
        v33 = ObDuplicateObject(v32, hNtPresentSurfaceHandle, v27, &v39, 0, 0, 6, v36);
        v17 = v33;
        if ( v33 < 0 )
        {
          WdLogSingleEntry2(2LL, a2->hNtPresentSurfaceHandle, v33);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to duplicate Fence Nt handle 0x%I64x, error 0x%I64x",
            (__int64)a2->hNtPresentSurfaceHandle,
            v17,
            0LL,
            0LL,
            0LL);
          goto LABEL_19;
        }
        *((_QWORD *)v13 + 4) = v39;
        *((_QWORD *)v13 + 5) = *(_QWORD *)&a2->PresentBufferIdx;
        bProducer = a2->bProducer;
      }
      memset(v37, 0, sizeof(v37));
      v34 = *(void **)&a2[1].bProducer;
      *(_DWORD *)&v37[32] = HIDWORD(a2[1].hNtSwapChain);
      *(_DWORD *)&v37[8] = bProducer;
      v35 = DXGSWAPCHAIN::ReleaseBuffer((DXGSWAPCHAIN *)this, (struct _D3DKMT_RELEASESWAPCHAIN *)v37, v34, 1);
      v17 = v35;
      if ( v35 >= 0 )
        return (unsigned int)v17;
      WdLogSingleEntry1(2LL, v35);
      v23 = L"ReleaseBuffer() failed with 0x%I64x for un-ordered present";
    }
    else
    {
      WdLogSingleEntry1(2LL, v18);
      v23 = L"AcquireBuffer() failed with 0x%I64x for un-ordered present";
    }
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v23, v17, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)v17;
  }
  WdLogSingleEntry3(2LL, pMetaData, *((_QWORD *)v12 + 8), hNtSwapChain_low);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Surface handle (0x%I64x) provided by caller does not match the handle (0x%I64x) for that index (0x%I64x)",
    (__int64)a2->pMetaData,
    *((_QWORD *)this[8] + 8),
    LODWORD(v6->hNtSwapChain),
    0LL,
    0LL);
  LODWORD(v17) = -1073741811;
LABEL_19:
  DXGSWAPCHAIN::MarkAbandoned(this, v15, v16);
  return (unsigned int)v17;
}
