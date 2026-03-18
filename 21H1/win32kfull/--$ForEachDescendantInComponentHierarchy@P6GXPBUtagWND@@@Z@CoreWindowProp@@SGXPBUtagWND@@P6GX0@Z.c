/*
 * XREFs of ??$ForEachDescendantInComponentHierarchy@P6GXPBUtagWND@@@Z@CoreWindowProp@@SGXPBUtagWND@@P6GX0@Z@Z @ 0x1765A
 * Callers:
 *     ??$ForEachDescendantInComponentHierarchy@P6GXPBUtagWND@@@Z@CoreWindowProp@@SGXPBUtagWND@@P6GX0@Z@Z @ 0x1765A (--$ForEachDescendantInComponentHierarchy@P6GXPBUtagWND@@@Z@CoreWindowProp@@SGXPBUtagWND@@P6GX0@Z.c)
 *     ?TransitionForegroundPriority@PriorityBoostCUI@@YGXPAUtagTHREADINFO@@PAUtagWND@@@Z @ 0x18BD2 (-TransitionForegroundPriority@PriorityBoostCUI@@YGXPAUtagTHREADINFO@@PAUtagWND@@@Z.c)
 *     ?UpdateProcessPriorityWhenComponentRemoved@PriorityBoostCUI@@YGXPAUtagWND@@0@Z @ 0x185390 (-UpdateProcessPriorityWhenComponentRemoved@PriorityBoostCUI@@YGXPAUtagWND@@0@Z.c)
 * Callees:
 *     ??$ForEachDescendantInComponentHierarchy@P6GXPBUtagWND@@@Z@CoreWindowProp@@SGXPBUtagWND@@P6GX0@Z@Z @ 0x1765A (--$ForEachDescendantInComponentHierarchy@P6GXPBUtagWND@@@Z@CoreWindowProp@@SGXPBUtagWND@@P6GX0@Z.c)
 *     ?IsHost@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0x1C92C (-IsHost@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 *     _anonymous_namespace_::TransitionForegroundPriority_DeBoostWindowHelper @ 0x185373 (_anonymous_namespace_--TransitionForegroundPriority_DeBoostWindowHelper.c)
 *     ?GetNextComponentWindow@CoreWindowProp@@SGPAUtagWND@@PBU2@0@Z @ 0x19C5BF (-GetNextComponentWindow@CoreWindowProp@@SGPAUtagWND@@PBU2@0@Z.c)
 */

void __thiscall CoreWindowProp::ForEachDescendantInComponentHierarchy<void (__stdcall *)(tagWND const *)>(void *this)
{
  struct tagWND *NextComponentWindow; // eax
  struct tagWND *v2; // edi
  const struct tagWND *v3; // [esp+0h] [ebp-8h]
  const struct tagWND *v4; // [esp+0h] [ebp-8h]
  const struct tagWND *v5; // [esp+4h] [ebp-4h]

  if ( this && CoreWindowProp::IsHost(v3) )
  {
    while ( 1 )
    {
      NextComponentWindow = CoreWindowProp::GetNextComponentWindow(v4, v5);
      v2 = NextComponentWindow;
      if ( !NextComponentWindow )
        break;
      anonymous_namespace_::TransitionForegroundPriority_DeBoostWindowHelper(NextComponentWindow);
      CoreWindowProp::ForEachDescendantInComponentHierarchy<void (__stdcall *)(tagWND const *)>(
        v2,
        anonymous_namespace_::TransitionForegroundPriority_DeBoostWindowHelper);
    }
  }
}
