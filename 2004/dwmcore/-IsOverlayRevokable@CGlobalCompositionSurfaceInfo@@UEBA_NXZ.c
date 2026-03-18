/*
 * XREFs of ?IsOverlayRevokable@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x1801F9D30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CGlobalCompositionSurfaceInfo::IsOverlayRevokable(CGlobalCompositionSurfaceInfo *this)
{
  __int64 v1; // rcx
  char result; // al

  v1 = *((_QWORD *)this + 23);
  result = 1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 72LL))(v1);
  return result;
}
