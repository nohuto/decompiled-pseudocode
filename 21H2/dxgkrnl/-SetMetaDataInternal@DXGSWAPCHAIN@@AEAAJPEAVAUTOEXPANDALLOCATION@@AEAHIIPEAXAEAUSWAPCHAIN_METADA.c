/*
 * XREFs of ?SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@D@Z @ 0x1C034C870
 * Callers:
 *     ?GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z @ 0x1C034AD18 (-GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z.c)
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z @ 0x1C034BF18 (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?RtlUIntAdd@@YAJIIPEAI@Z @ 0x1C000EF48 (-RtlUIntAdd@@YAJIIPEAI@Z.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C01E8B48 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x1C034B21C (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::SetMetaDataInternal(
        struct _KTHREAD **this,
        const void **a2,
        int *a3,
        unsigned int a4,
        size_t Size,
        char *Src,
        struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *a7,
        char a8)
{
  __int64 v8; // r13
  int *v9; // r9
  size_t v12; // r14
  __int64 CurrentProcess; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  int *v23; // r9
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // r8
  unsigned int v41; // ebx
  char *Buffer; // rax
  char *v43; // rsi
  char *v44; // rsi
  size_t v45; // rbx
  char *v46; // rdx
  struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *v47; // rcx

  v8 = a4;
  v9 = a3;
  if ( this[3] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 3290LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_SwapChainLock.IsOwner()", 3290LL, 0LL, 0LL, 0LL, 0LL);
    v9 = a3;
  }
  v12 = (unsigned int)Size;
  if ( !(_DWORD)Size )
  {
    CurrentProcess = PsGetCurrentProcess(this, a2, a3, v9);
    WdLogSingleEntry1((unsigned int)(v12 + 2), CurrentProcess);
    v18 = PsGetCurrentProcess(v15, v14, v16, v17);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"SetMetaDataInternal caller (0x%I64x) passed in buffer size of zero",
      v18,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  LODWORD(Size) = 0;
  if ( (int)RtlUIntAdd(v8, v12, (unsigned int *)&Size) < 0 )
  {
    v24 = PsGetCurrentProcess(v21, v20, v22, v23);
    WdLogSingleEntry1(2LL, v24);
    v29 = PsGetCurrentProcess(v26, v25, v27, v28);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"SetMetaDataInternal caller (0x%I64x) overflow when calc used size",
      v29,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGSWAPCHAIN::MarkAbandoned(this, v30, v31);
    return 3221225485LL;
  }
  v32 = *((unsigned int *)a2 + 2);
  if ( (unsigned int)Size > (unsigned int)v32 )
    v32 = (unsigned int)Size;
  if ( (unsigned int)v32 > 0x2000 )
  {
    v33 = PsGetCurrentProcess(v21, v20, v22, v23);
    WdLogSingleEntry3(2LL, v33, (unsigned int)v32, 0x2000LL);
    v38 = PsGetCurrentProcess(v35, v34, v36, v37);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"SetMetaDataInternal caller (0x%I64x) provided metadata of size 0x%I64x which is bigger than max 0x%I64x",
      v38,
      v32,
      0x2000LL,
      0LL,
      0LL);
    v41 = -1073741811;
LABEL_14:
    DXGSWAPCHAIN::MarkAbandoned(this, v39, v40);
    return v41;
  }
  Buffer = (char *)AUTOEXPANDALLOCATION::GetBuffer(a2, v32, *v23, (__int64)v23);
  v43 = Buffer;
  if ( !Buffer )
  {
    WdLogSingleEntry1(6LL, v32);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to expand metadata buffer size to 0x%lx",
      v32,
      0LL,
      0LL,
      0LL,
      0LL);
    v41 = -1073741801;
    goto LABEL_14;
  }
  if ( !*a3 && (_DWORD)v8 )
    memset(Buffer, 0, (unsigned int)v32);
  v44 = &v43[v8];
  if ( a8 == 1 )
  {
    v45 = v12;
    v46 = Src;
    if ( &Src[v12] < Src || (unsigned __int64)&Src[v12] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v44, v46, v12);
  }
  else
  {
    v45 = v12;
    memmove(v44, Src, v12);
  }
  *a3 = 1;
  v47 = a7;
  *((_DWORD *)a7 + 2) = v12;
  if ( (unsigned int)v12 > 0x10 )
    v45 = 16LL;
  memmove((char *)v47 + 12, v44, v45);
  return 0LL;
}
