/*
 * XREFs of ?IsPartOfCompositeApplication@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00C776C
 * Callers:
 *     ?UpdateProcessPriorityWhenEnableStateIsChanging@PriorityBoostCUI@@YAXPEAUtagWND@@H@Z @ 0x1C00C76C4 (-UpdateProcessPriorityWhenEnableStateIsChanging@PriorityBoostCUI@@YAXPEAUtagWND@@H@Z.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C011D62C (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     NtUserSetForegroundWindowForApplication @ 0x1C01216D0 (NtUserSetForegroundWindowForApplication.c)
 * Callees:
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C004C75C (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00C4248 (-GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00C9604 (-IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 */

__int64 __fastcall CoreWindowProp::IsPartOfCompositeApplication(const struct tagWND *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !a1 )
    return 0LL;
  if ( (unsigned int)CoreWindowProp::IsComponent(a1) )
  {
    LOBYTE(v1) = CoreWindowProp::GetTopLevelHost(a1) != 0LL;
    return v1;
  }
  else
  {
    return (unsigned int)CoreWindowProp::IsHost(a1) != 0;
  }
}
