/*
 * XREFs of ?IsOfType@CResourceMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C00263E0
 * Callers:
 *     ?IsOfType@CLegacyRenderTargetMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C00263B0 (-IsOfType@CLegacyRenderTargetMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CRemoteRenderTargetMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C00CC600 (-IsOfType@CRemoteRenderTargetMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CDDisplayRenderTargetMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C01D14F0 (-IsOfType@CDDisplayRenderTargetMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CGenericMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C01D1520 (-IsOfType@CGenericMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSharedSectionWrapperMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C01D15A0 (-IsOfType@CSharedSectionWrapperMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSharedReadCaptureControllerMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C01F52A0 (-IsOfType@CSharedReadCaptureControllerMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSharedWriteCaptureControllerMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C01F54D0 (-IsOfType@CSharedWriteCaptureControllerMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@.c)
 *     ?IsOfType@CSharedClientProjectedShadowCasterMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C01F5880 (-IsOfType@CSharedClientProjectedShadowCasterMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TY.c)
 *     ?IsOfType@CSharedHostProjectedShadowCasterMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C01F5AB0 (-IsOfType@CSharedHostProjectedShadowCasterMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE.c)
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CResourceMarshaler::IsOfType(__int64 a1, int a2)
{
  int i; // eax

  for ( i = *(_DWORD *)(a1 + 40); ; i = dword_1C0247430[2 * i + 1] )
  {
    if ( i == 205 )
      return 0;
    if ( a2 == dword_1C0247430[2 * i] )
      break;
  }
  return 1;
}
