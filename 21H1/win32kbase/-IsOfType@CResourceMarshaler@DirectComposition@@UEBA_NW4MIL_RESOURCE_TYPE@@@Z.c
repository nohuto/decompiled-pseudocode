/*
 * XREFs of ?IsOfType@CResourceMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C0016920
 * Callers:
 *     ?IsOfType@CLegacyRenderTargetMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C00168F0 (-IsOfType@CLegacyRenderTargetMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CRemoteRenderTargetMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C00CBD50 (-IsOfType@CRemoteRenderTargetMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CDDisplayRenderTargetMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C01D7470 (-IsOfType@CDDisplayRenderTargetMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CGenericMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C01D74A0 (-IsOfType@CGenericMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSharedSectionWrapperMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C01D7520 (-IsOfType@CSharedSectionWrapperMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSharedReadCaptureControllerMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C01FACD0 (-IsOfType@CSharedReadCaptureControllerMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSharedWriteCaptureControllerMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C01FAF00 (-IsOfType@CSharedWriteCaptureControllerMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@.c)
 *     ?IsOfType@CSharedClientProjectedShadowCasterMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C01FB2B0 (-IsOfType@CSharedClientProjectedShadowCasterMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TY.c)
 *     ?IsOfType@CSharedHostProjectedShadowCasterMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C01FB4E0 (-IsOfType@CSharedHostProjectedShadowCasterMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE.c)
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CResourceMarshaler::IsOfType(__int64 a1, int a2)
{
  int i; // eax

  for ( i = *(_DWORD *)(a1 + 40); ; i = dword_1C024D430[2 * i + 1] )
  {
    if ( i == 205 )
      return 0;
    if ( a2 == dword_1C024D430[2 * i] )
      break;
  }
  return 1;
}
