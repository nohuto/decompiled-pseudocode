/*
 * XREFs of ?EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ @ 0x18018A9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ @ 0x1801852F0 (-ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ.c)
 *     ?EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ @ 0x18018AA54 (-EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ.c)
 */

__int64 __fastcall CMagnifierRenderTarget::EnsureRenderTargets(CMagnifierRenderTarget *this)
{
  unsigned int v1; // ebx
  int v3; // eax
  __int64 v4; // rcx

  v1 = 0;
  if ( *((_DWORD *)this + 470) )
  {
    if ( !*((_DWORD *)this + 450) )
    {
      v3 = CMagnifierRenderTarget::EnsureSharedRenderTargets(this);
      v1 = v3;
      if ( v3 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x191u, 0LL);
        COffScreenRenderTarget::ReleaseRenderTargets(this);
      }
    }
  }
  return v1;
}
