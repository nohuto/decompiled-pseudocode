/*
 * XREFs of ?IsPartOfCompositeApplication@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0x18B9E
 * Callers:
 *     ?UpdateProcessPriorityWhenEnableStateIsChanging@PriorityBoostCUI@@YGXPAUtagWND@@H@Z @ 0x18B3C (-UpdateProcessPriorityWhenEnableStateIsChanging@PriorityBoostCUI@@YGXPAUtagWND@@H@Z.c)
 *     ?xxxDeliverRestoreFocusMessage@@YGXPAUtagWND@@@Z @ 0xAC35E (-xxxDeliverRestoreFocusMessage@@YGXPAUtagWND@@@Z.c)
 *     _NtUserSetForegroundWindowForApplication@4 @ 0xC57D2 (_NtUserSetForegroundWindowForApplication@4.c)
 * Callees:
 *     ?GetTopLevelHost@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z @ 0x18CC2 (-GetTopLevelHost@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z.c)
 *     ?IsHost@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0x1C92C (-IsHost@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0x26A8A (-IsComponent@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 */

BOOL __thiscall CoreWindowProp::IsPartOfCompositeApplication(void *this)
{
  const struct tagWND *v2; // [esp+0h] [ebp-4h]
  const struct tagWND *v3; // [esp+0h] [ebp-4h]

  if ( !this )
    return 0;
  if ( CoreWindowProp::IsComponent(v2) )
    return CoreWindowProp::GetTopLevelHost(v3) != 0;
  return CoreWindowProp::IsHost(v3) != 0;
}
