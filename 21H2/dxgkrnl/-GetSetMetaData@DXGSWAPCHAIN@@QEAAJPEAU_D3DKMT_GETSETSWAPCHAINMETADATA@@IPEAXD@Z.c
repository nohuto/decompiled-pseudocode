/*
 * XREFs of ?GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z @ 0x1C034AD18
 * Callers:
 *     ?SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z @ 0x1C034CC34 (-SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO@1@PEAPEAUSWAPCHAIN_CLIENT_SURF_INFO@1@@Z @ 0x1C005AE1C (-GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO.c)
 *     McTemplateK0pqddqqqqq_EtwWriteTransfer @ 0x1C005B27C (McTemplateK0pqddqqqqq_EtwWriteTransfer.c)
 *     ?GetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@IPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@DPEAI@Z @ 0x1C034AB18 (-GetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@IPEAXAEAUSWAPCHAIN_METADATA_ET.c)
 *     ?SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@D@Z @ 0x1C034C870 (-SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADA.c)
 */

__int64 __fastcall DXGSWAPCHAIN::GetSetMetaData(
        struct _KTHREAD **this,
        struct _D3DKMT_GETSETSWAPCHAINMETADATA *a2,
        unsigned int a3,
        void *a4,
        char a5)
{
  __int64 v5; // r14
  BOOL bGlobalMetaData; // eax
  int bProducer; // ecx
  struct AUTOEXPANDALLOCATION *v11; // rdx
  __int64 BufferSize; // r8
  struct _KTHREAD **v13; // rcx
  unsigned int MetaDataInternal; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // ecx
  char *v18; // rdi
  unsigned int v19; // r8d
  unsigned int v20; // edi
  const EVENT_DESCRIPTOR *v21; // rdx
  size_t Size; // [rsp+20h] [rbp-71h]
  size_t Sizea; // [rsp+20h] [rbp-71h]
  size_t Sizeb; // [rsp+20h] [rbp-71h]
  void *Src; // [rsp+28h] [rbp-69h]
  struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *v27; // [rsp+30h] [rbp-61h]
  char v28[8]; // [rsp+38h] [rbp-59h]
  __int64 v29; // [rsp+40h] [rbp-51h]
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v30; // [rsp+60h] [rbp-31h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v31; // [rsp+68h] [rbp-29h] BYREF
  int v32; // [rsp+70h] [rbp-21h] BYREF
  BOOL v33; // [rsp+74h] [rbp-1Dh]
  __int128 v34; // [rsp+78h] [rbp-19h]
  int v35; // [rsp+88h] [rbp-9h]

  v5 = a3;
  if ( this[3] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 3090LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_SwapChainLock.IsOwner()", 3090LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( a2->pBuffer )
  {
    WdLogSingleEntry1(1LL, 3095LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pGetSetMetaData->pBuffer == nullptr",
      3095LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !(_DWORD)v5 || a2->bSetMetaData )
  {
    bGlobalMetaData = a2->bGlobalMetaData;
    bProducer = a2->bProducer;
    v35 = 0;
    v32 = bProducer;
    v33 = bGlobalMetaData;
    v34 = 0LL;
    if ( bGlobalMetaData )
    {
      v11 = (struct AUTOEXPANDALLOCATION *)(this + 10);
      BufferSize = a2->BufferSize;
      v13 = this;
      if ( a2->bSetMetaData )
      {
        LODWORD(Size) = a2->BufferSize;
        LODWORD(v30) = 1;
        MetaDataInternal = DXGSWAPCHAIN::SetMetaDataInternal(
                             (DXGSWAPCHAIN *)this,
                             v11,
                             (int *)&v30,
                             v5,
                             Size,
                             a4,
                             (struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *)&v32,
                             a5);
LABEL_19:
        v20 = MetaDataInternal;
        if ( a2->bSetMetaData )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) == 0 )
            return v20;
          v21 = (const EVENT_DESCRIPTOR *)&EventIndirectSwapChainSetMetaData;
        }
        else
        {
          if ( !a2->pBuffer || (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) == 0 )
            return v20;
          v21 = (const EVENT_DESCRIPTOR *)&EventIndirectSwapChainGetMetaData;
        }
        LODWORD(v29) = DWORD1(v34);
        *(_DWORD *)v28 = v34;
        LODWORD(v27) = v33;
        LODWORD(Src) = v32;
        LODWORD(Sizea) = MetaDataInternal;
        McTemplateK0pqddqqqqq_EtwWriteTransfer(
          v15,
          v21,
          v16,
          this,
          Sizea,
          Src,
          v27,
          *(_QWORD *)v28,
          v29,
          DWORD2(v34),
          HIDWORD(v34),
          v35,
          v30);
        return v20;
      }
    }
    else
    {
      v17 = -bProducer;
      v18 = (char *)this + (v17 != 0 ? 144LL : 96LL);
      v19 = *((_DWORD *)v18 + 10);
      if ( v19 == -1
        || (v30 = 0LL,
            v31 = 0LL,
            DXGSWAPCHAIN::GetClientSurfaceInfo(
              (DXGSWAPCHAIN *)this,
              (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)((char *)this + (v17 != 0 ? 144LL : 96LL)),
              v19,
              &v30,
              &v31),
            *(_DWORD *)v30 != 1)
        || *((_DWORD *)v30 + 1) != *((_DWORD *)v18 + 7) )
      {
        WdLogSingleEntry2(2LL, *((_QWORD *)v18 + 2), this);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"GetSetMetadata caller (0x%I64x) does not own the swapchain 0x%I64x",
          *((_QWORD *)v18 + 2),
          (__int64)this,
          0LL,
          0LL,
          0LL);
        return 3221225485LL;
      }
      if ( a2->bSetMetaData )
      {
        LODWORD(Sizeb) = a2->BufferSize;
        MetaDataInternal = DXGSWAPCHAIN::SetMetaDataInternal(
                             (DXGSWAPCHAIN *)this,
                             *((struct AUTOEXPANDALLOCATION **)v30 + 2),
                             (int *)v30 + 6,
                             v5,
                             Sizeb,
                             a4,
                             (struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *)&v32,
                             a5);
        goto LABEL_19;
      }
      v11 = (struct AUTOEXPANDALLOCATION *)*((_QWORD *)v30 + 2);
      BufferSize = a2->BufferSize;
      v13 = this;
    }
    MetaDataInternal = DXGSWAPCHAIN::GetMetaDataInternal(
                         v13,
                         v11,
                         BufferSize,
                         (char *)a4,
                         (struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *)&v32,
                         a5,
                         &a2->DataCopied);
    goto LABEL_19;
  }
  WdLogSingleEntry1(2LL, v5);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Getting meta data with non-zero offset (0x%I64x) is not supported",
    v5,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225485LL;
}
