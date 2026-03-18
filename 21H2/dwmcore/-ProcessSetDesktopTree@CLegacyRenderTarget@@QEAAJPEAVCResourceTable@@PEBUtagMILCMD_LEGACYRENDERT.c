/*
 * XREFs of ?ProcessSetDesktopTree@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDERTARGET_SETDESKTOPTREE@@@Z @ 0x1800F790C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?SetVisualTree@CRenderTarget@@IEAAXPEAVCVisualTree@@@Z @ 0x180025294 (-SetVisualTree@CRenderTarget@@IEAAXPEAVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C07E8 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??4?$com_ptr_t@VCDesktopTree@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDesktopTree@@@Z @ 0x1800F7978 (--4-$com_ptr_t@VCDesktopTree@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDesktopTree@@@Z.c)
 */

__int64 __fastcall CLegacyRenderTarget::ProcessSetDesktopTree(
        CLegacyRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_LEGACYRENDERTARGET_SETDESKTOPTREE *a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edx
  struct CVisualTree *Resource; // rdi
  __int64 v8; // rcx

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( v5 && (Resource = (struct CVisualTree *)CResourceTable::GetResource((__int64)a2, v5, 0x33u)) == 0LL )
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, -2003303421, 0x2Fu);
  }
  else
  {
    wil::com_ptr_t<CDesktopTree,wil::err_returncode_policy>::operator=((char *)this + 160, Resource);
    CRenderTarget::SetVisualTree(this, Resource);
  }
  return v4;
}
