/*
 * XREFs of ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x180225EB8
 * Callers:
 *     ?Lookup@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBA?AV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@AEBI@Z @ 0x180226230 (-Lookup@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@V.c)
 *     ?OnCaptureManipulation@CManipulationManager@@IEAAXPEAVCInteraction@@I_K@Z @ 0x18022674C (-OnCaptureManipulation@CManipulationManager@@IEAAXPEAVCInteraction@@I_K@Z.c)
 *     ?OnCapturePointer@CManipulationManager@@IEAAXIPEAVCInteraction@@@Z @ 0x1802267E8 (-OnCapturePointer@CManipulationManager@@IEAAXIPEAVCInteraction@@@Z.c)
 *     ?RemoveKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEAAHAEBI@Z @ 0x180227E54 (-RemoveKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPt.c)
 *     ?RemoveKey@?$CMap@IW4InputType@@V?$CMapEqualHelper@IW4InputType@@@@@@QEAAHAEBI@Z @ 0x180227E84 (-RemoveKey@-$CMap@IW4InputType@@V-$CMapEqualHelper@IW4InputType@@@@@@QEAAHAEBI@Z.c)
 *     ?GetContactLeaf@CManipulationContext@@UEBAPEAUIInteractionResource@@I@Z @ 0x180235110 (-GetContactLeaf@CManipulationContext@@UEBAPEAUIInteractionResource@@I@Z.c)
 *     ?GetHoverTarget@CManipulationContext@@QEBAPEAVCInteraction@@I@Z @ 0x180235198 (-GetHoverTarget@CManipulationContext@@QEBAPEAVCInteraction@@I@Z.c)
 *     ?GetLastPointerTarget@CManipulationContext@@UEBAJIPEAUTargetingInfo@@@Z @ 0x180235270 (-GetLastPointerTarget@CManipulationContext@@UEBAJIPEAUTargetingInfo@@@Z.c)
 *     ?OnContactDepart@CManipulationContext@@QEAAXIW4InputType@@PEAVCInteraction@@_N22@Z @ 0x1802357C4 (-OnContactDepart@CManipulationContext@@QEAAXIW4InputType@@PEAVCInteraction@@_N22@Z.c)
 *     ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z @ 0x1802359C4 (-OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z.c)
 *     ?RemoveKey@?$CMap@IUTargetingInfo@@V?$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAHAEBI@Z @ 0x180236170 (-RemoveKey@-$CMap@IUTargetingInfo@@V-$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAHAEBI@Z.c)
 *     ?RemoveKey@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHAEBI@Z @ 0x1802361A0 (-RemoveKey@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInte.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x180236444 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 *     ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x180236A10 (-RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z.c)
 *     ?SetLastPointerTarget@CManipulationContext@@UEAAJIPEAUTargetingInfo@@@Z @ 0x1802375B0 (-SetLastPointerTarget@CManipulationContext@@UEAAJIPEAUTargetingInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
        __int64 a1,
        int *a2)
{
  __int64 result; // rax
  int v3; // r8d
  __int64 v4; // rdx
  __int64 v5; // r9
  _DWORD *i; // rcx

  result = 0LL;
  if ( *(int *)(a1 + 16) <= 0 )
    return 0xFFFFFFFFLL;
  v3 = *a2;
  v4 = 0LL;
  v5 = *(int *)(a1 + 16);
  for ( i = *(_DWORD **)a1; *i != v3; ++i )
  {
    result = (unsigned int)(result + 1);
    if ( ++v4 >= v5 )
      return 0xFFFFFFFFLL;
  }
  return result;
}
