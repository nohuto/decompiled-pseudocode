/*
 * XREFs of ?RecordStats@CCompositionSurfaceBitmap@@UEAAXAEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800B7580
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionSurfaceBitmap::RecordStats(
        CCompositionSurfaceBitmap *this,
        const struct CMILMatrix *a2,
        __int64 a3)
{
  __int64 v3; // rcx

  v3 = *((_QWORD *)this + 4);
  if ( v3 )
    (*(void (__fastcall **)(__int64, const struct CMILMatrix *, __int64))(*(_QWORD *)v3 + 192LL))(v3, a2, a3);
}
