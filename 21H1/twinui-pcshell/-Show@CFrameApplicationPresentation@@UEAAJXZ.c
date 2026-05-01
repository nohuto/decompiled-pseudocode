/*
 * XREFs of ?Show@CFrameApplicationPresentation@@UEAAJXZ @ 0x1800835D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_SuppressSplashScreenIfAppropriate@CFrameApplicationPresentation@@AEAAXXZ @ 0x180026C78 (-_SuppressSplashScreenIfAppropriate@CFrameApplicationPresentation@@AEAAXXZ.c)
 *     ?_SetFrameCloakSerialized@CFrameApplicationPresentation@@AEAAXW4__MIDL___MIDL_itf_privilegedoperations_0000_0002_0001@@@Z @ 0x180167438 (-_SetFrameCloakSerialized@CFrameApplicationPresentation@@AEAAXW4__MIDL___MIDL_itf_privilegedoper.c)
 */

__int64 __fastcall CFrameApplicationPresentation::Show(CFrameApplicationPresentation *this, __int64 a2, __int64 a3)
{
  if ( !*((_BYTE *)this + 52) )
  {
    CFrameApplicationPresentation::_SuppressSplashScreenIfAppropriate(this, a2, a3);
    if ( *((_DWORD *)this + 57) != 1 )
      CFrameApplicationPresentation::_SetFrameCloakSerialized(this, 0LL);
    *((_BYTE *)this + 52) = 1;
  }
  return 0LL;
}
