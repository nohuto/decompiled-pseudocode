/*
 * XREFs of ?CheckOcclusionState@CRemoteAppRenderTarget@@UEAAJXZ @ 0x1801C2160
 * Callers:
 *     ?CheckOcclusionState@CRemoteAppRenderTarget@@$4PPPPPPPM@A@EAAJXZ @ 0x180106F10 (-CheckOcclusionState@CRemoteAppRenderTarget@@$4PPPPPPPM@A@EAAJXZ.c)
 * Callees:
 *     ?EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ @ 0x1801C21F8 (-EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VailUnifiedDpi@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801C367C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VailUnifiedDpi@@@details@wil@@QEAAX_NW4Re.c)
 *     ?SendCompSurfHandle@CRemoteAppRenderTarget@@IEAAJXZ @ 0x1801C3700 (-SendCompSurfHandle@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?IsVailContainer@@YA_NXZ @ 0x18026BB8C (-IsVailContainer@@YA_NXZ.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::CheckOcclusionState(CRemoteAppRenderTarget *this)
{
  CRemoteAppRenderTarget *v2; // rdi

  if ( *(int *)(*((_QWORD *)this - 41) + 1104LL) >= 5 )
  {
    if ( *((_DWORD *)this - 60) )
    {
      if ( *((_DWORD *)this - 59) )
      {
        v2 = (CRemoteAppRenderTarget *)((char *)this - 344);
        if ( (int)CRemoteAppRenderTarget::EnsureSwapChain((CRemoteAppRenderTarget *)((char *)this - 344)) >= 0
          && *(_DWORD *)(*((_QWORD *)this - 41) + 1104LL) == 6 )
        {
          if ( *((_BYTE *)this - 52) )
          {
            if ( IsVailContainer() )
              wil::details::FeatureImpl<__WilFeatureTraits_Feature_VailUnifiedDpi>::ReportUsage(
                &`wil::Feature<__WilFeatureTraits_Feature_VailUnifiedDpi>::GetImpl'::`2'::impl,
                0LL);
            *((_BYTE *)this - 52) = 0;
          }
          if ( *((_BYTE *)this - 51) )
            CRemoteAppRenderTarget::SendCompSurfHandle(v2);
        }
      }
    }
  }
  return 142213121LL;
}
