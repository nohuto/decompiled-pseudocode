/*
 * XREFs of ?GetNextComponentWindow@CoreWindowProp@@SGPAUtagWND@@PBU2@0@Z @ 0x19C5BF
 * Callers:
 *     ??$ForEachDescendantInComponentHierarchy@P6GXPBUtagWND@@@Z@CoreWindowProp@@SGXPBUtagWND@@P6GX0@Z@Z @ 0x1765A (--$ForEachDescendantInComponentHierarchy@P6GXPBUtagWND@@@Z@CoreWindowProp@@SGXPBUtagWND@@P6GX0@Z.c)
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_edf0efb3d7d609a29e2fbe5ff28087a2___ @ 0x17674 (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_edf0efb3d7d609a29e2fbe5ff28087a2__.c)
 *     ?TransitionForegroundPriority@PriorityBoostCUI@@YGXPAUtagTHREADINFO@@PAUtagWND@@@Z @ 0x18BD2 (-TransitionForegroundPriority@PriorityBoostCUI@@YGXPAUtagTHREADINFO@@PAUtagWND@@@Z.c)
 *     _zzzSetWindowCompositionCloak@12 @ 0x1C5F8 (_zzzSetWindowCompositionCloak@12.c)
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_9eec84fa5d6124b437e3ad3c3e50d459___ @ 0x9BED0 (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_9eec84fa5d6124b437e3ad3c3e50d459__.c)
 *     _xxxSetBridgeWindowChild@8 @ 0x16F43B (_xxxSetBridgeWindowChild@8.c)
 *     ?UpdateProcessPriorityWhenComponentRemoved@PriorityBoostCUI@@YGXPAUtagWND@@0@Z @ 0x185390 (-UpdateProcessPriorityWhenComponentRemoved@PriorityBoostCUI@@YGXPAUtagWND@@0@Z.c)
 * Callees:
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCoreWindowProp@@@Z @ 0x1C952 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCoreWindowProp@@@Z.c)
 */

struct tagWND *__fastcall CoreWindowProp::GetNextComponentWindow(int a1, int a2)
{
  int v3; // esi
  _DWORD *v4; // eax
  bool v6; // zf
  int v7; // [esp+Ch] [ebp-4h] BYREF

  v3 = 0;
  v7 = 0;
  if ( !CWindowProp::GetProp<CoreWindowProp>(a1, &v7) )
    return 0;
  v4 = *(_DWORD **)(v7 + 20);
  if ( a2 )
  {
    while ( v4 )
    {
      v6 = a2 == v4[1];
      v4 = (_DWORD *)*v4;
      if ( v6 )
        goto LABEL_3;
    }
    return 0;
  }
LABEL_3:
  if ( v4 )
    return (struct tagWND *)v4[1];
  return (struct tagWND *)v3;
}
