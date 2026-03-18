/*
 * XREFs of ?IsValid@CCompositionDistantLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x1801BDBE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CCompositionDistantLight::IsValid(
        CCompositionDistantLight *this,
        const struct CVisualTree *a2,
        const struct CVisual *a3)
{
  struct CVisual *v5; // rax
  CCompositionLight *v6; // rcx

  v5 = (struct CVisual *)(*(__int64 (__fastcall **)(CCompositionDistantLight *))(*(_QWORD *)this + 216LL))(this);
  return CCompositionLight::IsValidCoordinateSpace(v6, a2, a3, v5);
}
