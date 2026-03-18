/*
 * XREFs of ?EnsureWNFHandles@CLegacyRenderTarget@@IEAAJXZ @ 0x180024484
 * Callers:
 *     ?CheckForFullScreenVideoNotifications@CLegacyRenderTarget@@AEAAXXZ @ 0x180024310 (-CheckForFullScreenVideoNotifications@CLegacyRenderTarget@@AEAAXXZ.c)
 * Callees:
 *     PubSebRegisterRpc @ 0x180024510 (PubSebRegisterRpc.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CLegacyRenderTarget::EnsureWNFHandles(CLegacyRenderTarget *this)
{
  unsigned int v1; // ebx
  int v4; // eax
  unsigned int v5; // ecx
  int v6; // eax
  unsigned int v7; // ecx

  v1 = 0;
  if ( *((_QWORD *)this + 2325) || (v4 = PubSebRegisterRpc(WNF_SEB_FULL_SCREEN_VIDEO_PLAYBACK), v1 = v4, v4 >= 0) )
  {
    if ( !*((_QWORD *)this + 2326) )
    {
      v6 = PubSebRegisterRpc(WNF_SEB_FULL_SCREEN_HDR_VIDEO_PLAYBACK);
      v1 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_1802D9568, 2u, v6, 0x1DDu, 0LL);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_1802D9568, 2u, v4, 0x1D7u, 0LL);
  }
  return v1;
}
