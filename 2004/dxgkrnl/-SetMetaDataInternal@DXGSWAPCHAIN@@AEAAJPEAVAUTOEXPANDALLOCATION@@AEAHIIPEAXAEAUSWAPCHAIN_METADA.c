/*
 * XREFs of ?SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@D@Z @ 0x1C02AC214
 * Callers:
 *     ?GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z @ 0x1C02AA8A4 (-GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z.c)
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z @ 0x1C02ABB14 (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z.c)
 * Callees:
 *     ?RtlUIntAdd@@YAJIIPEAI@Z @ 0x1C0007078 (-RtlUIntAdd@@YAJIIPEAI@Z.c)
 *     memmove @ 0x1C0027200 (memmove.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C016985C (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x1C02AAF68 (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::SetMetaDataInternal(
        struct _KTHREAD **this,
        struct AUTOEXPANDALLOCATION *a2,
        int *a3,
        unsigned int a4,
        size_t a5,
        char *Src,
        struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *a7,
        char a8)
{
  __int64 v8; // r15
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  unsigned int v24; // edi
  _QWORD *v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  unsigned int v30; // ebx
  char *Buffer; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  char *v36; // rbx
  __int64 v37; // rax
  char *v38; // rbx
  size_t v39; // rdi
  size_t Size[5]; // [rsp+20h] [rbp-28h] BYREF

  v8 = a4;
  if ( this[2] != KeGetCurrentThread() )
  {
    v12 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v12 + 24) = 3226LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !(_DWORD)a5 )
  {
    v13 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v13 + 24) = PsGetCurrentProcess(v15, v14);
    WdLogEvent5_WdError(v13);
    return 3221225485LL;
  }
  LODWORD(Size[0]) = 0;
  if ( (int)RtlUIntAdd(v8, a5, (unsigned int *)Size) < 0 )
  {
    v19 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v19 + 24) = PsGetCurrentProcess(v21, v20);
    WdLogEvent5_WdError(v19);
    DXGSWAPCHAIN::MarkAbandoned(this, v22, v23);
    return 3221225485LL;
  }
  v24 = *((_DWORD *)a2 + 2);
  if ( LODWORD(Size[0]) > v24 )
    v24 = Size[0];
  if ( v24 > 0x2000 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17);
    v25[3] = PsGetCurrentProcess(v27, v26);
    v25[4] = v24;
    v25[5] = 0x2000LL;
    WdLogEvent5_WdError(v25);
    v30 = -1073741811;
LABEL_14:
    DXGSWAPCHAIN::MarkAbandoned(this, v28, v29);
    return v30;
  }
  Buffer = (char *)AUTOEXPANDALLOCATION::GetBuffer(a2, v24, *a3);
  v36 = Buffer;
  if ( !Buffer )
  {
    v37 = WdLogNewEntry5_WdLowResource(v33, v32, v34, v35);
    *(_QWORD *)(v37 + 24) = v24;
    WdLogEvent5_WdLowResource(v37);
    v30 = -1073741801;
    goto LABEL_14;
  }
  if ( !*a3 && (_DWORD)v8 )
    memset(Buffer, 0, v24);
  v38 = &v36[v8];
  if ( a8 == 1 )
  {
    v39 = (unsigned int)a5;
    if ( &Src[(unsigned int)a5] < Src || (unsigned __int64)&Src[(unsigned int)a5] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v38, Src, (unsigned int)a5);
  }
  else
  {
    v39 = (unsigned int)a5;
    memmove(v38, Src, (unsigned int)a5);
  }
  *a3 = 1;
  *((_DWORD *)a7 + 2) = a5;
  if ( (unsigned int)a5 > 0x10 )
    v39 = 16LL;
  memmove((char *)a7 + 12, v38, v39);
  return 0LL;
}
