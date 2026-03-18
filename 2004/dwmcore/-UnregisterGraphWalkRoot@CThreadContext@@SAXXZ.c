/*
 * XREFs of ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x18009E2D4
 * Callers:
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEAAXPEBVCOcclusionContext@@AEBVRenderTargetInfo@@@Z @ 0x18007E07C (-UpdateCVIRenderTargets@CDesktopTree@@QEAAXPEBVCOcclusionContext@@AEBVRenderTargetInfo@@@Z.c)
 *     ?EndWalk@?$CGraphWalker@VCVisual@@@@QEAAXPEAVCVisual@@@Z @ 0x18009E254 (-EndWalk@-$CGraphWalker@VCVisual@@@@QEAAXPEAVCVisual@@@Z.c)
 *     ?EndWalk@?$CGraphWalker@VCVectorShape@@@@QEAAXPEAVCVectorShape@@@Z @ 0x18025F5A8 (-EndWalk@-$CGraphWalker@VCVectorShape@@@@QEAAXPEAVCVectorShape@@@Z.c)
 * Callees:
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180054D44 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800BD6F8 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?RemoveAt@CPtrArrayBase@@IEAAX_K@Z @ 0x1800BDC84 (-RemoveAt@CPtrArrayBase@@IEAAX_K@Z.c)
 */

void CThreadContext::UnregisterGraphWalkRoot(void)
{
  unsigned __int64 Count; // rax
  CPtrArrayBase *v1; // rcx
  CPtrArrayBase *v2; // [rsp+30h] [rbp+8h] BYREF

  if ( (int)CThreadContext::GetCurrent(&v2) >= 0 )
  {
    Count = CPtrArrayBase::GetCount(v2);
    CPtrArrayBase::RemoveAt(v1, Count - 1);
  }
}
