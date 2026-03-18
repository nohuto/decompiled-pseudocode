/*
 * XREFs of ?SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@D@Z @ 0x1C02A7D28
 * Callers:
 *     ?GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z @ 0x1C02A63B4 (-GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z.c)
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z @ 0x1C02A7628 (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z.c)
 * Callees:
 *     memmove @ 0x1C0026580 (memmove.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C015A11C (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x1C02A6A7C (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::SetMetaDataInternal(
        struct _KTHREAD **this,
        struct AUTOEXPANDALLOCATION *a2,
        int *a3,
        unsigned int a4,
        size_t Size,
        char *Src,
        struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *a7,
        char a8)
{
  __int64 v8; // r15
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v17; // edi
  _QWORD *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  unsigned int v23; // ebx
  char *Buffer; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  char *v29; // rbx
  __int64 v30; // rax
  char *v31; // rbx
  size_t v32; // rdi

  v8 = a4;
  if ( this[2] != KeGetCurrentThread() )
  {
    v12 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v12 + 24) = 3226LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !(_DWORD)Size )
  {
    v13 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v13 + 24) = PsGetCurrentProcess(v15, v14);
    WdLogEvent5_WdError(v13);
    return 3221225485LL;
  }
  v17 = v8 + Size;
  if ( (unsigned int)(v8 + Size) <= *((_DWORD *)a2 + 2) )
    v17 = *((_DWORD *)a2 + 2);
  if ( v17 > 0x2000 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdError(this, a2);
    v18[3] = PsGetCurrentProcess(v20, v19);
    v18[4] = v17;
    v18[5] = 0x2000LL;
    WdLogEvent5_WdError(v18);
    v23 = -1073741811;
LABEL_11:
    DXGSWAPCHAIN::MarkAbandoned(this, v21, v22);
    return v23;
  }
  Buffer = (char *)AUTOEXPANDALLOCATION::GetBuffer(a2, v17, *a3);
  v29 = Buffer;
  if ( !Buffer )
  {
    v30 = WdLogNewEntry5_WdLowResource(v26, v25, v27, v28);
    *(_QWORD *)(v30 + 24) = v17;
    WdLogEvent5_WdLowResource(v30);
    v23 = -1073741801;
    goto LABEL_11;
  }
  if ( !*a3 && (_DWORD)v8 )
    memset(Buffer, 0, v17);
  v31 = &v29[v8];
  if ( a8 == 1 )
  {
    v32 = (unsigned int)Size;
    if ( &Src[(unsigned int)Size] < Src || (unsigned __int64)&Src[(unsigned int)Size] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v31, Src, (unsigned int)Size);
  }
  else
  {
    v32 = (unsigned int)Size;
    memmove(v31, Src, (unsigned int)Size);
  }
  *a3 = 1;
  *((_DWORD *)a7 + 2) = Size;
  if ( (unsigned int)Size > 0x10 )
    v32 = 16LL;
  memmove((char *)a7 + 12, v31, v32);
  return 0LL;
}
