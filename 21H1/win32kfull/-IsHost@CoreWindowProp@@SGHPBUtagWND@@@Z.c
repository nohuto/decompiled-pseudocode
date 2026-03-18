/*
 * XREFs of ?IsHost@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0x1C92C
 * Callers:
 *     ??$ForEachDescendantInComponentHierarchy@P6GXPBUtagWND@@@Z@CoreWindowProp@@SGXPBUtagWND@@P6GX0@Z@Z @ 0x1765A (--$ForEachDescendantInComponentHierarchy@P6GXPBUtagWND@@@Z@CoreWindowProp@@SGXPBUtagWND@@P6GX0@Z.c)
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_edf0efb3d7d609a29e2fbe5ff28087a2___ @ 0x17674 (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_edf0efb3d7d609a29e2fbe5ff28087a2__.c)
 *     ?IsPartOfCompositeApplication@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0x18B9E (-IsPartOfCompositeApplication@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 *     ?TransitionForegroundPriority@PriorityBoostCUI@@YGXPAUtagTHREADINFO@@PAUtagWND@@@Z @ 0x18BD2 (-TransitionForegroundPriority@PriorityBoostCUI@@YGXPAUtagTHREADINFO@@PAUtagWND@@@Z.c)
 *     ?GetTopLevelHost@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z @ 0x18CC2 (-GetTopLevelHost@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z.c)
 *     _zzzSetWindowCompositionCloak@12 @ 0x1C5F8 (_zzzSetWindowCompositionCloak@12.c)
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_9eec84fa5d6124b437e3ad3c3e50d459___ @ 0x9BED0 (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_9eec84fa5d6124b437e3ad3c3e50d459__.c)
 *     _xxxSetBridgeWindowChild@8 @ 0x16F43B (_xxxSetBridgeWindowChild@8.c)
 *     ?UpdateProcessPriorityWhenComponentRemoved@PriorityBoostCUI@@YGXPAUtagWND@@0@Z @ 0x185390 (-UpdateProcessPriorityWhenComponentRemoved@PriorityBoostCUI@@YGXPAUtagWND@@0@Z.c)
 * Callees:
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCoreWindowProp@@@Z @ 0x1C952 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCoreWindowProp@@@Z.c)
 */

int __cdecl CoreWindowProp::IsHost()
{
  int v0; // esi

  v0 = 0;
  if ( CWindowProp::GetProp<CoreWindowProp>() )
    return MEMORY[8];
  return v0;
}
