/*
 * XREFs of ?QueryStats@CCompositionSurface@@QEBAJPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x1C00782A8
 * Callers:
 *     ?PairedQueryStats@CompositionSurfaceObject@@UEBAJPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x1C0077D90 (-PairedQueryStats@CompositionSurfaceObject@@UEBAJPEAUCSM_BUFFER_STATISTICS@@@Z.c)
 * Callees:
 *     ?GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C000668C (-GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 */

__int64 __fastcall CCompositionSurface::QueryStats(CCompositionSurface *this, struct CSM_BUFFER_STATISTICS *a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  int v6; // eax
  struct CCompositionBuffer *ActiveBuffer; // rax

  v4 = *((_QWORD *)this + 13);
  v5 = -1073741823;
  if ( !v4
    || (v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 48LL))(v4), v5 = v6, !*((_QWORD *)this + 13))
    || v6 == -1073741637 )
  {
    ActiveBuffer = CCompositionSurface::GetActiveBuffer(this);
    if ( ActiveBuffer )
    {
      v5 = -1073741823;
      if ( *((_BYTE *)ActiveBuffer + 41) )
      {
        v5 = 0;
        *(_OWORD *)a2 = *((_OWORD *)ActiveBuffer + 12);
        *((_OWORD *)a2 + 1) = *((_OWORD *)ActiveBuffer + 13);
        *((_OWORD *)a2 + 2) = *((_OWORD *)ActiveBuffer + 14);
        *((_OWORD *)a2 + 3) = *((_OWORD *)ActiveBuffer + 15);
      }
    }
  }
  if ( v5 < 0 )
    memset(a2, 0, 0x40uLL);
  return (unsigned int)v5;
}
