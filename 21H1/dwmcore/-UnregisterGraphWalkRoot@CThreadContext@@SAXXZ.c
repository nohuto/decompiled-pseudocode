/*
 * XREFs of ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x1800BB048
 * Callers:
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEAAXPEBVCOcclusionContext@@AEBVRenderTargetInfo@@@Z @ 0x18006CF60 (-UpdateCVIRenderTargets@CDesktopTree@@QEAAXPEBVCOcclusionContext@@AEBVRenderTargetInfo@@@Z.c)
 *     ?EndWalk@?$CGraphWalker@VCVisual@@@@QEAAXPEAVCVisual@@@Z @ 0x1800BAFC8 (-EndWalk@-$CGraphWalker@VCVisual@@@@QEAAXPEAVCVisual@@@Z.c)
 *     ?EndWalk@?$CGraphWalker@VCVectorShape@@@@QEAAXPEAVCVectorShape@@@Z @ 0x180262018 (-EndWalk@-$CGraphWalker@VCVectorShape@@@@QEAAXPEAVCVectorShape@@@Z.c)
 * Callees:
 *     ?RemoveAt@CPtrArrayBase@@IEAAX_K@Z @ 0x180037F68 (-RemoveAt@CPtrArrayBase@@IEAAX_K@Z.c)
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x18004C550 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800B32C8 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 */

void CThreadContext::UnregisterGraphWalkRoot(void)
{
  __int64 Count; // rax
  CPtrArrayBase *v1; // rcx
  CPtrArrayBase *v2; // [rsp+30h] [rbp+8h] BYREF

  if ( (int)CThreadContext::GetCurrent(&v2) >= 0 )
  {
    Count = CPtrArrayBase::GetCount(v2);
    CPtrArrayBase::RemoveAt(v1, Count - 1);
  }
}
