/*
 * XREFs of ??4?$com_ptr_t@VCVisualGroup@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisualGroup@@@Z @ 0x180192B1C
 * Callers:
 *     ?AddToDDAExcludeVisualList@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x180192DC0 (-AddToDDAExcludeVisualList@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ?AddToMagnifierList@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x180192E90 (-AddToMagnifierList@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ?ProcessSetFilterList@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET_SETFILTERLIST@@@Z @ 0x1801C7F48 (-ProcessSetFilterList@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRE.c)
 * Callees:
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x1800B1804 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

CResource **__fastcall wil::com_ptr_t<CVisualGroup,wil::err_returncode_policy>::operator=(CResource **a1, __int64 a2)
{
  CResource *v2; // rdi

  v2 = *a1;
  *a1 = (CResource *)a2;
  if ( a2 )
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(a2 + 8));
  if ( v2 )
    CResource::InternalRelease(v2);
  return a1;
}
