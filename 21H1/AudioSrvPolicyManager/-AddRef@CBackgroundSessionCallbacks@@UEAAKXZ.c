/*
 * XREFs of ?AddRef@CBackgroundSessionCallbacks@@UEAAKXZ @ 0x18000FC50
 * Callers:
 *     ?AddRef@CPlaybackManager@@WBA@EAAKXZ @ 0x18001F0F0 (-AddRef@CPlaybackManager@@WBA@EAAKXZ.c)
 *     ?AddRef@CProcess@@WBI@EAAKXZ @ 0x18001F110 (-AddRef@CProcess@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBackgroundSessionCallbacks::AddRef(CBackgroundSessionCallbacks *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
