/*
 * XREFs of _anonymous_namespace_::RequestPriorityUpdate @ 0x18D26
 * Callers:
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_edf0efb3d7d609a29e2fbe5ff28087a2___ @ 0x17674 (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_edf0efb3d7d609a29e2fbe5ff28087a2__.c)
 *     ?UpdateProcessPriorityWhenEnableStateIsChanging@PriorityBoostCUI@@YGXPAUtagWND@@H@Z @ 0x18B3C (-UpdateProcessPriorityWhenEnableStateIsChanging@PriorityBoostCUI@@YGXPAUtagWND@@H@Z.c)
 *     ?TransitionForegroundPriority@PriorityBoostCUI@@YGXPAUtagTHREADINFO@@PAUtagWND@@@Z @ 0x18BD2 (-TransitionForegroundPriority@PriorityBoostCUI@@YGXPAUtagTHREADINFO@@PAUtagWND@@@Z.c)
 *     ?UpdateProcessPriorityWhenComponentAdded@PriorityBoostCUI@@YGXPAUtagWND@@0@Z @ 0xC437E (-UpdateProcessPriorityWhenComponentAdded@PriorityBoostCUI@@YGXPAUtagWND@@0@Z.c)
 *     _anonymous_namespace_::TransitionForegroundPriority_DeBoostWindowHelper @ 0x185373 (_anonymous_namespace_--TransitionForegroundPriority_DeBoostWindowHelper.c)
 *     ?UpdateProcessPriorityWhenComponentRemoved@PriorityBoostCUI@@YGXPAUtagWND@@0@Z @ 0x185390 (-UpdateProcessPriorityWhenComponentRemoved@PriorityBoostCUI@@YGXPAUtagWND@@0@Z.c)
 *     _SetForegroundPriority@8 @ 0x18543F (_SetForegroundPriority@8.c)
 * Callees:
 *     _anonymous_namespace_::SetForegroundPriorityProcess @ 0x18D4E (_anonymous_namespace_--SetForegroundPriorityProcess.c)
 */

int __fastcall anonymous_namespace_::RequestPriorityUpdate(int a1, int a2)
{
  int v2; // eax
  int v3; // ecx

  v2 = 0;
  v3 = *(_DWORD *)(a1 + 232);
  if ( !a2 )
    v2 = ((*(_DWORD *)(v3 + 8) & 0x800) != 0) + 1;
  return anonymous_namespace_::SetForegroundPriorityProcess(v2);
}
