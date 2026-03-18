/*
 * XREFs of ?FindWorkspace@CManipulationContext@@SAXPEAUMCCollections@@PEAVCInteraction@@PEAK@Z @ 0x180235054
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@IEAAXXZ @ 0x180034610 (-OnInteractionUpdate@CManipulationManager@@IEAAXXZ.c)
 *     ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x180236A10 (-RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z.c)
 * Callees:
 *     ?FindManipulationContext@CManipulationContext@@CAPEAV1@PEBUMCCollections@@PEBVCInteraction@@PEAH@Z @ 0x180234FD0 (-FindManipulationContext@CManipulationContext@@CAPEAV1@PEBUMCCollections@@PEBVCInteraction@@PEAH.c)
 *     ?GetMCRoot@CManipulationContext@@CAPEAVCInteraction@@PEBV2@@Z @ 0x1802352E0 (-GetMCRoot@CManipulationContext@@CAPEAVCInteraction@@PEBV2@@Z.c)
 */

void __fastcall CManipulationContext::FindWorkspace(
        struct MCCollections *a1,
        struct CInteraction *a2,
        unsigned int *a3)
{
  const struct CInteraction *MCRoot; // rax
  const struct MCCollections *v5; // r8
  struct CManipulationContext *ManipulationContext; // rax

  *a3 = 0;
  if ( a2 )
  {
    MCRoot = CManipulationContext::GetMCRoot(a2);
    ManipulationContext = CManipulationContext::FindManipulationContext(v5, MCRoot, (int *)v5);
    if ( ManipulationContext )
      *a3 = *((_DWORD *)ManipulationContext + 8);
  }
}
