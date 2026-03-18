/*
 * XREFs of ?IsValid@CCompositionSpotLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x18020DE70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEBVCVisual@@PEAV3@@Z @ 0x1802009E8 (-IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEBVCVisual@@PEAV3@@Z.c)
 */

char __fastcall CCompositionSpotLight::IsValid(
        CCompositionSpotLight *this,
        const struct CVisualTree *a2,
        const struct CVisual *a3)
{
  struct CVisual *v4; // rax
  CCompositionLight *v5; // rcx
  const struct CVisual *v6; // r8
  char v7; // bl

  v4 = (struct CVisual *)(*(__int64 (__fastcall **)(CCompositionSpotLight *, const struct CVisualTree *, const struct CVisual *))(*(_QWORD *)this + 200LL))(
                           this,
                           a2,
                           a3);
  v7 = 0;
  if ( v4 )
    return CCompositionLight::IsValidCoordinateSpace(v5, a2, v6, v4);
  return v7;
}
