/*
 * XREFs of CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_edf0efb3d7d609a29e2fbe5ff28087a2___ @ 0x17674
 * Callers:
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_edf0efb3d7d609a29e2fbe5ff28087a2___ @ 0x17674 (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_edf0efb3d7d609a29e2fbe5ff28087a2__.c)
 *     ?TransitionForegroundPriority@PriorityBoostCUI@@YGXPAUtagTHREADINFO@@PAUtagWND@@@Z @ 0x18BD2 (-TransitionForegroundPriority@PriorityBoostCUI@@YGXPAUtagTHREADINFO@@PAUtagWND@@@Z.c)
 * Callees:
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_edf0efb3d7d609a29e2fbe5ff28087a2___ @ 0x17674 (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_edf0efb3d7d609a29e2fbe5ff28087a2__.c)
 *     _anonymous_namespace_::RequestPriorityUpdate @ 0x18D26 (_anonymous_namespace_--RequestPriorityUpdate.c)
 *     ?IsHost@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0x1C92C (-IsHost@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 *     ?GetNextComponentWindow@CoreWindowProp@@SGPAUtagWND@@PBU2@0@Z @ 0x19C5BF (-GetNextComponentWindow@CoreWindowProp@@SGPAUtagWND@@PBU2@0@Z.c)
 */

void __thiscall CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_edf0efb3d7d609a29e2fbe5ff28087a2___(
        void *this,
        int a2)
{
  struct tagWND *NextComponentWindow; // eax
  const struct tagWND *v3; // [esp+0h] [ebp-Ch]
  const struct tagWND *v4; // [esp+0h] [ebp-Ch]
  const struct tagWND *v5; // [esp+4h] [ebp-8h]

  if ( this && CoreWindowProp::IsHost(v3) )
  {
    while ( 1 )
    {
      NextComponentWindow = CoreWindowProp::GetNextComponentWindow(v4, v5);
      if ( !NextComponentWindow )
        break;
      if ( (*(_BYTE *)(*((_DWORD *)NextComponentWindow + 5) + 23) & 8) == 0 )
        anonymous_namespace_::RequestPriorityUpdate(*((_DWORD *)NextComponentWindow + 2), 0);
      CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_edf0efb3d7d609a29e2fbe5ff28087a2___(a2);
    }
  }
}
