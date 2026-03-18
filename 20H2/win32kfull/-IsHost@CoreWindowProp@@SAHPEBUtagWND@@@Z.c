/*
 * XREFs of ?IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00C9604
 * Callers:
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6___ @ 0x1C002E5A8 (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6__.c)
 *     ??$ForEachDescendantInComponentHierarchy@P6AXPEBUtagWND@@@Z@CoreWindowProp@@SAXPEBUtagWND@@P6AX0@Z@Z @ 0x1C00C17B4 (--$ForEachDescendantInComponentHierarchy@P6AXPEBUtagWND@@@Z@CoreWindowProp@@SAXPEBUtagWND@@P6AX0.c)
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_6b19aae8bfffc3c0d0465fc64ed598e8___ @ 0x1C00C1814 (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_6b19aae8bfffc3c0d0465fc64ed598e8__.c)
 *     ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00C4248 (-GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?IsPartOfCompositeApplication@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00C776C (-IsPartOfCompositeApplication@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00C91F8 (zzzSetWindowCompositionCloak.c)
 *     xxxSetBridgeWindowChild @ 0x1C0208D68 (xxxSetBridgeWindowChild.c)
 * Callees:
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C004C7A4 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 */

__int64 __fastcall CoreWindowProp::IsHost(const struct tagWND *a1)
{
  unsigned int v1; // ebx
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v3 = 0LL;
  if ( CWindowProp::GetProp<CoreWindowProp>((__int64)a1, &v3) )
    return *(unsigned int *)(v3 + 16);
  return v1;
}
