/*
 * XREFs of wil::details::ScopeExitFn__lambda_6914baa2bbb41478f35591fe55a15932___::_ScopeExitFn__lambda_6914baa2bbb41478f35591fe55a15932___ @ 0x180137140
 * Callers:
 *     ?WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x180044BC4 (-WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     __lambda_f041bb78b865ecfb9ab5fa4d5b43ebf6_::operator()_::_1_::dtor$1 @ 0x1800EF7EB (__lambda_f041bb78b865ecfb9ab5fa4d5b43ebf6_--operator()_--_1_--dtor$1.c)
 *     _CSingleViewShellExperience::WaitForWindowReadyForPresentation_::_1_::dtor$1 @ 0x180103FF6 (_CSingleViewShellExperience--WaitForWindowReadyForPresentation_--_1_--dtor$1.c)
 * Callees:
 *     _lambda_6914baa2bbb41478f35591fe55a15932_::operator() @ 0x1800EF4A8 (_lambda_6914baa2bbb41478f35591fe55a15932_--operator().c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_6914baa2bbb41478f35591fe55a15932___::_ScopeExitFn__lambda_6914baa2bbb41478f35591fe55a15932___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    lambda_6914baa2bbb41478f35591fe55a15932_::operator()(a1);
  }
}
