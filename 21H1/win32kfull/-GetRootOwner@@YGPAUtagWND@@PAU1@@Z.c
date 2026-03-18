/*
 * XREFs of ?GetRootOwner@@YGPAUtagWND@@PAU1@@Z @ 0x979A6
 * Callers:
 *     ?SetTopmostEnum@@YGXPAUtagWND@@HH@Z @ 0x176E4 (-SetTopmostEnum@@YGXPAUtagWND@@HH@Z.c)
 *     ?TrackBackground@@YGHPAUtagWINDOWPOS@@PAUtagWND@@1111@Z @ 0x32AE4 (-TrackBackground@@YGHPAUtagWINDOWPOS@@PAUtagWND@@1111@Z.c)
 *     _SetWindowGroupBand@12 @ 0x97764 (_SetWindowGroupBand@12.c)
 *     _anonymous_namespace_::EligibleWindow @ 0xF4E24 (_anonymous_namespace_--EligibleWindow.c)
 *     _anonymous_namespace_::GetWindowInGroupFromHint @ 0x19F198 (_anonymous_namespace_--GetWindowInGroupFromHint.c)
 *     ?TemplateWindow@CWindow@@QAE_NPAUtagWND@@W4TemplateWindowOptions@@@Z @ 0x19F569 (-TemplateWindow@CWindow@@QAE_NPAUtagWND@@W4TemplateWindowOptions@@@Z.c)
 * Callees:
 *     ?GetRealOwner@@YGPAUtagWND@@PAU1@@Z @ 0x1C9C2 (-GetRealOwner@@YGPAUtagWND@@PAU1@@Z.c)
 */

struct tagWND *__thiscall GetRootOwner(struct tagWND *this)
{
  struct tagWND *RealOwner; // eax

  while ( 1 )
  {
    RealOwner = GetRealOwner(this);
    if ( !RealOwner || *(char *)(*((_DWORD *)RealOwner + 5) + 11) < 0 )
      break;
    this = RealOwner;
  }
  return this;
}
