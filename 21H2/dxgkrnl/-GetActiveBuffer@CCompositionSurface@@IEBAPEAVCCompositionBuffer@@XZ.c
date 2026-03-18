/*
 * XREFs of ?GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C000668C
 * Callers:
 *     ?UnBind@CCompositionSurface@@QEAAJ_N@Z @ 0x1C0004208 (-UnBind@CCompositionSurface@@QEAAJ_N@Z.c)
 *     ?Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N11PEA_K@Z @ 0x1C0004950 (-Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N11PEA_K@Z.c)
 *     ?Bind@CCompositionSurface@@QEAAJPEAVCCompositionBuffer@@PEA_K@Z @ 0x1C0004A50 (-Bind@CCompositionSurface@@QEAAJPEAVCCompositionBuffer@@PEA_K@Z.c)
 *     ?InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z @ 0x1C00064CC (-InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z.c)
 *     ?Pair@CCompositionSurface@@QEAAJPEAUIPairedSurfaceObject@@@Z @ 0x1C00780BC (-Pair@CCompositionSurface@@QEAAJPEAUIPairedSurfaceObject@@@Z.c)
 *     ?QueryStats@CCompositionSurface@@QEBAJPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x1C00782A8 (-QueryStats@CCompositionSurface@@QEBAJPEAUCSM_BUFFER_STATISTICS@@@Z.c)
 *     ?Initialize@CContentResource@@IEAAJXZ @ 0x1C008124C (-Initialize@CContentResource@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct CCompositionBuffer *__fastcall CCompositionSurface::GetActiveBuffer(CCompositionSurface *this)
{
  struct CCompositionBuffer *result; // rax
  __int64 v2; // rcx

  result = 0LL;
  if ( *((_DWORD *)this + 22) )
  {
    v2 = *((_QWORD *)this + 9) - 24LL;
    if ( *(_BYTE *)(v2 + 40) )
      return (struct CCompositionBuffer *)v2;
  }
  return result;
}
