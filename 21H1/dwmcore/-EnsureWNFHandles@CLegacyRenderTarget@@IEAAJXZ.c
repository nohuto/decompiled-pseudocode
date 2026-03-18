/*
 * XREFs of ?EnsureWNFHandles@CLegacyRenderTarget@@IEAAJXZ @ 0x1800B6E48
 * Callers:
 *     ?CheckForFullScreenVideoNotifications@CLegacyRenderTarget@@AEAAXXZ @ 0x1800B6CD4 (-CheckForFullScreenVideoNotifications@CLegacyRenderTarget@@AEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     PubSebRegisterRpc @ 0x1800B6EE0 (PubSebRegisterRpc.c)
 */

__int64 __fastcall CLegacyRenderTarget::EnsureWNFHandles(CLegacyRenderTarget *this)
{
  unsigned int v1; // ebx
  int v4; // eax
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx

  v1 = 0;
  if ( *((_QWORD *)this + 2325) || (v4 = PubSebRegisterRpc(WNF_SEB_FULL_SCREEN_VIDEO_PLAYBACK), v1 = v4, v4 >= 0) )
  {
    if ( !*((_QWORD *)this + 2326) )
    {
      v6 = PubSebRegisterRpc(WNF_SEB_FULL_SCREEN_HDR_VIDEO_PLAYBACK);
      v1 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_1802DC4E8, 2u, v6, 0x1DDu, 0LL);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_1802DC4E8, 2u, v4, 0x1D7u, 0LL);
  }
  return v1;
}
