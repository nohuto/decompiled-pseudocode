/*
 * XREFs of ?GetTopLevelHostForComponent@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z @ 0x26218
 * Callers:
 *     ?GetTopLevelHost@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z @ 0x18CC2 (-GetTopLevelHost@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x19E68 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     _NtUserGetForegroundWindow@0 @ 0x25C7C (_NtUserGetForegroundWindow@0.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0x269F0 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 *     _xxxSetWindowPos@28 @ 0x32F7A (_xxxSetWindowPos@28.c)
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     ?CalcForegroundInsertAfterComponentUIAware@@YGPAUtagWND@@PAU1@@Z @ 0x93274 (-CalcForegroundInsertAfterComponentUIAware@@YGPAUtagWND@@PAU1@@Z.c)
 *     _PostIAMShellHookMessageEx@12 @ 0x9ABEE (_PostIAMShellHookMessageEx@12.c)
 *     _IsWindowEffectivelyCloaked@4 @ 0xAB818 (_IsWindowEffectivelyCloaked@4.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z @ 0xAB848 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z.c)
 *     ?GetCompositeAppFrameWindow@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z @ 0xAB862 (-GetCompositeAppFrameWindow@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z.c)
 *     _IsWindowShellCloaked@8 @ 0xC3F32 (_IsWindowShellCloaked@8.c)
 *     ?CompositeAppHasForeground@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0xC7072 (-CompositeAppHasForeground@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 *     ?GetTopLevelWindowFromInputForVisualWindowOrSelf@@YGPAUtagWND@@PAU1@@Z @ 0x155D29 (-GetTopLevelWindowFromInputForVisualWindowOrSelf@@YGPAUtagWND@@PAU1@@Z.c)
 *     __GetNextQueueWindow@12 @ 0x15D1B0 (__GetNextQueueWindow@12.c)
 *     _NtUserNavigateFocus@8 @ 0x16716A (_NtUserNavigateFocus@8.c)
 *     ?WindowArrangementHotKeyCallback@@YGXIJ@Z @ 0x172BB1 (-WindowArrangementHotKeyCallback@@YGXIJ@Z.c)
 *     _anonymous_namespace_::GetWindowInGroupFromHint @ 0x19F198 (_anonymous_namespace_--GetWindowInGroupFromHint.c)
 * Callees:
 *     ?IsComponent@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0x26A8A (-IsComponent@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 *     ?GetHost@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z @ 0xAE592 (-GetHost@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z.c)
 */

struct tagWND *__stdcall CoreWindowProp::GetTopLevelHostForComponent()
{
  struct tagWND *Host; // esi
  const struct tagWND *v2; // [esp+0h] [ebp-Ch]
  const struct tagWND *v3; // [esp+0h] [ebp-Ch]
  const struct tagWND *v4; // [esp+0h] [ebp-Ch]

  Host = 0;
  if ( CoreWindowProp::IsComponent(v2) )
  {
    do
      Host = CoreWindowProp::GetHost(v3);
    while ( Host && CoreWindowProp::IsComponent(v4) );
  }
  return Host;
}
