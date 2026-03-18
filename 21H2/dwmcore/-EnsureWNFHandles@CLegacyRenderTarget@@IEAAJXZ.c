/*
 * XREFs of ?EnsureWNFHandles@CLegacyRenderTarget@@IEAAJXZ @ 0x1800BBD28
 * Callers:
 *     ?CheckForFullScreenVideoNotifications@CLegacyRenderTarget@@AEAAXXZ @ 0x1800BBBD8 (-CheckForFullScreenVideoNotifications@CLegacyRenderTarget@@AEAAXXZ.c)
 * Callees:
 *     PubSebRegisterRpc @ 0x18001F600 (PubSebRegisterRpc.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CLegacyRenderTarget::EnsureWNFHandles(struct _SEB_RPC_PUBLISH_DATA **this)
{
  unsigned int v1; // ebx
  int v4; // eax
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx

  v1 = 0;
  if ( this[2328] || (v4 = PubSebRegisterRpc(WNF_SEB_FULL_SCREEN_VIDEO_PLAYBACK, this + 2328), v1 = v4, v4 >= 0) )
  {
    if ( !this[2329] )
    {
      v6 = PubSebRegisterRpc(WNF_SEB_FULL_SCREEN_HDR_VIDEO_PLAYBACK, this + 2329);
      v1 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_180345B68, 2LL, v6, 0x277u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_180345B68, 2LL, v4, 0x271u);
  }
  return v1;
}
