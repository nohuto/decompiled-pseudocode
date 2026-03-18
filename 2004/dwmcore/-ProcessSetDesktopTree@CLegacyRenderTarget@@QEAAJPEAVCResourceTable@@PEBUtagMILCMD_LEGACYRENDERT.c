/*
 * XREFs of ?ProcessSetDesktopTree@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDERTARGET_SETDESKTOPTREE@@@Z @ 0x1800265E0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?SetVisualTree@CRenderTarget@@IEAAJPEAVCVisualTree@@@Z @ 0x180026700 (-SetVisualTree@CRenderTarget@@IEAAJPEAVCVisualTree@@@Z.c)
 *     ??4?$com_ptr_t@VCDeviceTextureTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTextureTarget@@@Z @ 0x1800268A8 (--4-$com_ptr_t@VCDeviceTextureTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTe.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800A61E4 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CLegacyRenderTarget::ProcessSetDesktopTree(
        CLegacyRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_LEGACYRENDERTARGET_SETDESKTOPTREE *a3)
{
  struct CVisualTree *Resource; // rbx
  __int64 v5; // rdx
  unsigned int v7; // ecx
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx

  Resource = 0LL;
  v5 = *((unsigned int *)a3 + 2);
  if ( (_DWORD)v5 && (Resource = (struct CVisualTree *)CResourceTable::GetResource(a2, v5, 51LL)) == 0LL )
  {
    v10 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2003303421, 0x31u, 0LL);
  }
  else
  {
    wil::com_ptr_t<CDeviceTextureTarget,wil::err_returncode_policy>::operator=((char *)this + 176, Resource);
    v8 = CRenderTarget::SetVisualTree(this, Resource);
    v10 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x37u, 0LL);
  }
  return v10;
}
