/*
 * XREFs of ?SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z @ 0x1C034CC34
 * Callers:
 *     DxgkGetSetSwapChainMetadata @ 0x1C034E690 (DxgkGetSetSwapChainMetadata.c)
 *     ?CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z @ 0x1C03BB550 (-CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z.c)
 *     ?PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAVBLTENTRY@@@Z @ 0x1C03BC67C (-PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT.c)
 *     ?UpdatePresentStats@BLTQUEUE@@AEAAXPEAVBLTENTRY@@PEAU__BLTWAITINFO@1@@Z @ 0x1C03BF4C0 (-UpdatePresentStats@BLTQUEUE@@AEAAXPEAVBLTENTRY@@PEAU__BLTWAITINFO@1@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z @ 0x1C034AD18 (-GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z.c)
 */

__int64 __fastcall SwapChainGetSetMetaDataInternal(
        struct DXGSWAPCHAIN *this,
        struct _D3DKMT_GETSETSWAPCHAINMETADATA *a2,
        unsigned int a3,
        char a4)
{
  unsigned int SetMetaData; // ebx
  PVOID pBuffer; // r9
  _BYTE v11[24]; // [rsp+30h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  if ( *((_DWORD *)this + 12) )
  {
    WdLogSingleEntry1(3LL, this);
    SetMetaData = -1073741738;
  }
  else
  {
    pBuffer = a2->pBuffer;
    a2->pBuffer = 0LL;
    SetMetaData = DXGSWAPCHAIN::GetSetMetaData((struct _KTHREAD **)this, a2, a3, pBuffer, a4);
  }
  if ( v11[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
  return SetMetaData;
}
