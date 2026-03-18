/*
 * XREFs of ??$ForEachDescendantInComponentHierarchy@P6AXPEBUtagWND@@@Z@CoreWindowProp@@SAXPEBUtagWND@@P6AX0@Z@Z @ 0x1C0035894
 * Callers:
 *     ?TransitionForegroundPriority@PriorityBoostCUI@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C00351B8 (-TransitionForegroundPriority@PriorityBoostCUI@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ??$ForEachDescendantInComponentHierarchy@P6AXPEBUtagWND@@@Z@CoreWindowProp@@SAXPEBUtagWND@@P6AX0@Z@Z @ 0x1C0035894 (--$ForEachDescendantInComponentHierarchy@P6AXPEBUtagWND@@@Z@CoreWindowProp@@SAXPEBUtagWND@@P6AX0.c)
 *     ?UpdateProcessPriorityWhenComponentRemoved@PriorityBoostCUI@@YAXPEAUtagWND@@0@Z @ 0x1C0224004 (-UpdateProcessPriorityWhenComponentRemoved@PriorityBoostCUI@@YAXPEAUtagWND@@0@Z.c)
 * Callees:
 *     ?GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z @ 0x1C000803C (-GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z.c)
 *     ?IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0022A80 (-IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ??$ForEachDescendantInComponentHierarchy@P6AXPEBUtagWND@@@Z@CoreWindowProp@@SAXPEBUtagWND@@P6AX0@Z@Z @ 0x1C0035894 (--$ForEachDescendantInComponentHierarchy@P6AXPEBUtagWND@@@Z@CoreWindowProp@@SAXPEBUtagWND@@P6AX0.c)
 *     _anonymous_namespace_::TransitionForegroundPriority_DeBoostWindowHelper @ 0x1C0223FE0 (_anonymous_namespace_--TransitionForegroundPriority_DeBoostWindowHelper.c)
 */

void __fastcall CoreWindowProp::ForEachDescendantInComponentHierarchy<void (*)(tagWND const *)>(
        const struct tagWND *a1)
{
  const struct tagWND *i; // rdx
  struct tagWND *NextComponentWindow; // rax
  struct tagWND *v4; // rdi

  if ( a1 && (unsigned int)CoreWindowProp::IsHost(a1) )
  {
    for ( i = 0LL; ; i = v4 )
    {
      NextComponentWindow = CoreWindowProp::GetNextComponentWindow(a1, i);
      v4 = NextComponentWindow;
      if ( !NextComponentWindow )
        break;
      anonymous_namespace_::TransitionForegroundPriority_DeBoostWindowHelper(NextComponentWindow);
      CoreWindowProp::ForEachDescendantInComponentHierarchy<void (*)(tagWND const *)>(v4);
    }
  }
}
