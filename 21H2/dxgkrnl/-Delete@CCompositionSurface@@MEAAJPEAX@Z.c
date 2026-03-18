/*
 * XREFs of ?Delete@CCompositionSurface@@MEAAJPEAX@Z @ 0x1C00036D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ @ 0x1C00036FC (-ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurface::Delete(CCompositionSurface *this, void *a2)
{
  __int64 v3; // rcx

  CCompositionSurface::ReleaseAllBuffers(this);
  v3 = *((_QWORD *)this + 13);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return 0LL;
}
