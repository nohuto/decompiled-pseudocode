/*
 * XREFs of ?FindBackingSurfaceIndex@COverlayContext@@CAHAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@AEBVOverlayPlaneInfo@1@@Z @ 0x18017BBF8
 * Callers:
 *     ?RemoveUnbackedSurfaces@COverlayContext@@CAXPEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18003CA64 (-RemoveUnbackedSurfaces@COverlayContext@@CAXPEAV-$vector_facade@PEAVOverlayPlaneInfo@COverlayCon.c)
 * Callees:
 *     ??A?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@_J@Z @ 0x180179D04 (--A-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayCo.c)
 */

__int64 __fastcall COverlayContext::FindBackingSurfaceIndex(unsigned __int64 *a1, _QWORD *a2)
{
  unsigned int v2; // esi
  unsigned int v3; // ebx

  v2 = -1;
  v3 = 0;
  if ( *(_DWORD *)a1 )
  {
    while ( *a2 != **(_QWORD **)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](a1, v3)
         || a2[23] != *(_QWORD *)(*(_QWORD *)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](a1, v3) + 8LL) )
    {
      if ( ++v3 >= *(_DWORD *)a1 )
        return v2;
    }
    return v3;
  }
  return v2;
}
