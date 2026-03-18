/*
 * XREFs of ?OnSceneFrameTick@CCompositionMipmapSurface@@EEAAJPEAUISpectreRenderer@@_K@Z @ 0x1801B9CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ @ 0x1801BA1EC (-UpdateMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ.c)
 */

__int64 __fastcall CCompositionMipmapSurface::OnSceneFrameTick(
        CCompositionMipmapSurface *this,
        struct ISpectreRenderer *a2)
{
  int updated; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx

  updated = CCompositionMipmapSurface::UpdateMipmapSurface((CCompositionMipmapSurface *)((char *)this - 80));
  v4 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, updated, 0xA5u, 0LL);
  return v4;
}
