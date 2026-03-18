/*
 * XREFs of ?find@?$_Tree@V?$_Tset_traits@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTracker@@@std@@@std@@@2@AEBQEAVCInteractionTracker@@@Z @ 0x18018E65C
 * Callers:
 *     ?CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18018D914 (-CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1801D215C (-AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4.c)
 *     ?FindExistingGradient@CGradientSource@@IEAA_NPEAVCD3DDevice@@_NAEBVRetrievalParams@1@@Z @ 0x18020B9E8 (-FindExistingGradient@CGradientSource@@IEAA_NPEAVCD3DDevice@@_NAEBVRetrievalParams@1@@Z.c)
 *     ?Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@_N33W4D2D1_EXTEND_MODE@@@Z @ 0x18020BB34 (-Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V-$span@$$CBUD2D1_GRADIENT.c)
 *     ?NotifyAtlasEntryInvalidated@CGradientSource@@MEAAXPEBVCD3DDevice@@@Z @ 0x18020BF2C (-NotifyAtlasEntryInvalidated@CGradientSource@@MEAAXPEBVCD3DDevice@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall std::_Tree<std::_Tset_traits<CInteractionTracker *,std::less<CInteractionTracker *>,std::allocator<CInteractionTracker *>,0>>::find(
        __int64 **a1,
        __int64 **a2,
        _QWORD *a3)
{
  __int64 *v3; // r9
  __int64 *v4; // rcx
  __int64 *v5; // r10
  __int64 *v6; // rax

  v3 = *a1;
  v4 = v3;
  v5 = v3;
  v6 = (__int64 *)v3[1];
  if ( !*((_BYTE *)v6 + 25) )
  {
    do
    {
      if ( (unsigned __int64)v6[4] >= *a3 )
      {
        v4 = v6;
        v6 = (__int64 *)*v6;
      }
      else
      {
        v6 = (__int64 *)v6[2];
      }
    }
    while ( !*((_BYTE *)v6 + 25) );
    v5 = v3;
  }
  if ( v4 == v5 || *a3 < (unsigned __int64)v4[4] )
    v4 = v3;
  *a2 = v4;
  return a2;
}
