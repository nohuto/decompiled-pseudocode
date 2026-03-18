/*
 * XREFs of ?GetTopLevelHost@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z @ 0x18CC2
 * Callers:
 *     ?UpdateProcessPriorityWhenEnableStateIsChanging@PriorityBoostCUI@@YGXPAUtagWND@@H@Z @ 0x18B3C (-UpdateProcessPriorityWhenEnableStateIsChanging@PriorityBoostCUI@@YGXPAUtagWND@@H@Z.c)
 *     ?IsPartOfCompositeApplication@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0x18B9E (-IsPartOfCompositeApplication@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 *     ?TransitionForegroundPriority@PriorityBoostCUI@@YGXPAUtagTHREADINFO@@PAUtagWND@@@Z @ 0x18BD2 (-TransitionForegroundPriority@PriorityBoostCUI@@YGXPAUtagTHREADINFO@@PAUtagWND@@@Z.c)
 *     ?UpdateProcessPriorityWhenComponentRemoved@PriorityBoostCUI@@YGXPAUtagWND@@0@Z @ 0x185390 (-UpdateProcessPriorityWhenComponentRemoved@PriorityBoostCUI@@YGXPAUtagWND@@0@Z.c)
 * Callees:
 *     ?IsHost@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0x1C92C (-IsHost@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z @ 0x26218 (-GetTopLevelHostForComponent@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0x26A8A (-IsComponent@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 */

struct tagWND *__thiscall CoreWindowProp::GetTopLevelHost(void *this)
{
  int v3; // edi
  const struct tagWND *v4; // [esp+0h] [ebp-Ch]
  const struct tagWND *v5; // [esp+0h] [ebp-Ch]

  if ( !this )
    return 0;
  v3 = 0;
  if ( CoreWindowProp::IsComponent(v4) )
    return CoreWindowProp::GetTopLevelHostForComponent(v5);
  if ( CoreWindowProp::IsHost(v5) )
    return (struct tagWND *)this;
  return (struct tagWND *)v3;
}
