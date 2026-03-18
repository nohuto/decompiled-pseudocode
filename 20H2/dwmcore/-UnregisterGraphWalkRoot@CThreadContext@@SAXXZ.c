/*
 * XREFs of ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x180064910
 * Callers:
 *     ?EndWalk@?$CGraphWalker@VCVisual@@@@QEAAXPEAVCVisual@@@Z @ 0x180064974 (-EndWalk@-$CGraphWalker@VCVisual@@@@QEAAXPEAVCVisual@@@Z.c)
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEAAXPEBVCOcclusionContext@@AEBVRenderTargetInfo@@@Z @ 0x18009CF9C (-UpdateCVIRenderTargets@CDesktopTree@@QEAAXPEBVCOcclusionContext@@AEBVRenderTargetInfo@@@Z.c)
 *     ?EndWalk@?$CGraphWalker@VCVectorShape@@@@QEAAXPEAVCVectorShape@@@Z @ 0x18025E7C8 (-EndWalk@-$CGraphWalker@VCVectorShape@@@@QEAAXPEAVCVectorShape@@@Z.c)
 * Callees:
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180062CE8 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800BD378 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?RemoveAt@CPtrArrayBase@@IEAAX_K@Z @ 0x1800BD944 (-RemoveAt@CPtrArrayBase@@IEAAX_K@Z.c)
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
