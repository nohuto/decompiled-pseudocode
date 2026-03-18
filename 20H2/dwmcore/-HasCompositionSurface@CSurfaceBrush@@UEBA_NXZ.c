/*
 * XREFs of ?HasCompositionSurface@CSurfaceBrush@@UEBA_NXZ @ 0x1801EDE80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CSurfaceBrush::HasCompositionSurface(CSurfaceBrush *this)
{
  __int64 v1; // rcx
  char v2; // bl

  v1 = *((_QWORD *)this + 12);
  v2 = 0;
  if ( v1 )
    return (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 56LL))(v1, 40LL) != 0;
  return v2;
}
