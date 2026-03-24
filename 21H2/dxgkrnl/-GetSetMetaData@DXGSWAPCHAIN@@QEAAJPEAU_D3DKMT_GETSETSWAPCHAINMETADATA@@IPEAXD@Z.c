/*
 * XREFs of ?GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z @ 0x1C02AADB4
 * Callers:
 *     ?SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z @ 0x1C02AC9F8 (-SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     ?GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO@1@PEAPEAUSWAPCHAIN_CLIENT_SURF_INFO@1@@Z @ 0x1C004BDBC (-GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO.c)
 *     McTemplateK0pqddqqqqq_EtwWriteTransfer @ 0x1C004C0C4 (McTemplateK0pqddqqqqq_EtwWriteTransfer.c)
 *     ?GetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@IPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@DPEAI@Z @ 0x1C02AAC08 (-GetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@IPEAXAEAUSWAPCHAIN_METADATA_ET.c)
 *     ?SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@D@Z @ 0x1C02AC724 (-SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADA.c)
 */

__int64 __fastcall DXGSWAPCHAIN::GetSetMetaData(
        struct _KTHREAD **this,
        struct _D3DKMT_GETSETSWAPCHAINMETADATA *a2,
        unsigned int a3,
        void *a4,
        char a5)
{
  struct _D3DKMT_GETSETSWAPCHAINMETADATA *v6; // rsi
  __int64 v7; // r15
  __int64 v9; // rax
  __int64 v10; // rax
  BOOL *p_bSetMetaData; // r14
  __int64 v12; // rax
  BOOL bGlobalMetaData; // eax
  int bProducer; // ecx
  struct AUTOEXPANDALLOCATION *v15; // rdx
  unsigned int BufferSize; // r8d
  struct _KTHREAD **v17; // rcx
  unsigned int MetaDataInternal; // eax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  char *v22; // rbx
  unsigned int v23; // r8d
  unsigned int v24; // ebx
  const EVENT_DESCRIPTOR *v25; // rdx
  __int64 v27; // rcx
  size_t v28; // [rsp+20h] [rbp-61h]
  size_t v29; // [rsp+20h] [rbp-61h]
  size_t v30; // [rsp+20h] [rbp-61h]
  void *Src; // [rsp+28h] [rbp-59h]
  struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *v32; // [rsp+30h] [rbp-51h]
  __int64 v33; // [rsp+38h] [rbp-49h]
  __int64 v34; // [rsp+60h] [rbp-21h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v35; // [rsp+68h] [rbp-19h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v36; // [rsp+70h] [rbp-11h] BYREF
  int v37; // [rsp+78h] [rbp-9h] BYREF
  BOOL v38; // [rsp+7Ch] [rbp-5h]
  __int128 v39; // [rsp+80h] [rbp-1h]
  int v40; // [rsp+90h] [rbp+Fh]

  v6 = a2;
  v7 = a3;
  if ( this[2] != KeGetCurrentThread() )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v9 + 24) = 3037LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( v6->pBuffer )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v10 + 24) = 3042LL;
    WdLogEvent5_WdAssertion(v10);
  }
  p_bSetMetaData = &v6->bSetMetaData;
  if ( !(_DWORD)v7 || *p_bSetMetaData )
  {
    bGlobalMetaData = v6->bGlobalMetaData;
    v40 = 0;
    bProducer = v6->bProducer;
    v37 = bProducer;
    v38 = bGlobalMetaData;
    v39 = 0LL;
    if ( bGlobalMetaData )
    {
      v15 = (struct AUTOEXPANDALLOCATION *)(this + 9);
      BufferSize = v6->BufferSize;
      v17 = this;
      if ( *p_bSetMetaData )
      {
        LODWORD(v28) = v6->BufferSize;
        LODWORD(v34) = 1;
        MetaDataInternal = DXGSWAPCHAIN::SetMetaDataInternal(
                             (DXGSWAPCHAIN *)this,
                             v15,
                             (int *)&v34,
                             v7,
                             v28,
                             a4,
                             (struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *)&v37,
                             a5);
LABEL_19:
        v24 = MetaDataInternal;
        if ( *p_bSetMetaData )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100000000LL) == 0 )
            return v24;
          v25 = (const EVENT_DESCRIPTOR *)&EventIndirectSwapChainSetMetaData;
        }
        else
        {
          if ( !v6->pBuffer || (Microsoft_Windows_DxgKrnlEnableBits & 0x100000000LL) == 0 )
            return v24;
          v25 = (const EVENT_DESCRIPTOR *)&EventIndirectSwapChainGetMetaData;
        }
        LODWORD(v33) = v39;
        LODWORD(v32) = v38;
        LODWORD(Src) = v37;
        LODWORD(v29) = MetaDataInternal;
        McTemplateK0pqddqqqqq_EtwWriteTransfer(
          v19,
          v25,
          v20,
          this,
          v29,
          Src,
          v32,
          v33,
          DWORD1(v39),
          DWORD2(v39),
          HIDWORD(v39),
          v40,
          v34);
        return v24;
      }
    }
    else
    {
      v21 = (unsigned int)-bProducer;
      v22 = (char *)this + ((_DWORD)v21 != 0 ? 136LL : 88LL);
      v23 = *((_DWORD *)v22 + 10);
      if ( v23 == -1
        || (v35 = 0LL,
            v36 = 0LL,
            DXGSWAPCHAIN::GetClientSurfaceInfo(
              (DXGSWAPCHAIN *)this,
              (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)((char *)this + ((_DWORD)v21 != 0 ? 136LL : 88LL)),
              v23,
              &v35,
              &v36),
            a2 = (struct _D3DKMT_GETSETSWAPCHAINMETADATA *)v35,
            *(_DWORD *)v35 != 1)
        || *((_DWORD *)v35 + 1) != *((_DWORD *)v22 + 7) )
      {
        v12 = WdLogNewEntry5_WdError(v21, a2);
        v27 = *((_QWORD *)v22 + 2);
        *(_QWORD *)(v12 + 32) = this;
        *(_QWORD *)(v12 + 24) = v27;
        goto LABEL_28;
      }
      if ( v6->bSetMetaData )
      {
        LODWORD(v30) = v6->BufferSize;
        MetaDataInternal = DXGSWAPCHAIN::SetMetaDataInternal(
                             (DXGSWAPCHAIN *)this,
                             *((struct AUTOEXPANDALLOCATION **)v35 + 2),
                             (int *)v35 + 6,
                             v7,
                             v30,
                             a4,
                             (struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *)&v37,
                             a5);
        goto LABEL_19;
      }
      v15 = (struct AUTOEXPANDALLOCATION *)*((_QWORD *)v35 + 2);
      BufferSize = v6->BufferSize;
      v17 = this;
    }
    MetaDataInternal = DXGSWAPCHAIN::GetMetaDataInternal(
                         v17,
                         v15,
                         BufferSize,
                         (char *)a4,
                         (struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *)&v37,
                         a5,
                         &v6->DataCopied);
    goto LABEL_19;
  }
  v12 = WdLogNewEntry5_WdError(this, a2);
  *(_QWORD *)(v12 + 24) = v7;
LABEL_28:
  WdLogEvent5_WdError(v12);
  return 3221225485LL;
}
