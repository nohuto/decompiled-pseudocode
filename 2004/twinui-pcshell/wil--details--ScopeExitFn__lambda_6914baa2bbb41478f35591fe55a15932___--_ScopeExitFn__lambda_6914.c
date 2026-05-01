/*
 * XREFs of wil::details::ScopeExitFn__lambda_6914baa2bbb41478f35591fe55a15932___::_ScopeExitFn__lambda_6914baa2bbb41478f35591fe55a15932___ @ 0x1804741A4
 * Callers:
 *     __lambda_bfb8cbc897ca7eaa5c992f00bdd4bfa8_::operator()_::_1_::dtor$1 @ 0x180100304 (__lambda_bfb8cbc897ca7eaa5c992f00bdd4bfa8_--operator()_--_1_--dtor$1.c)
 *     _CSingleViewShellExperience::WaitForWindowReadyForPresentation_::_1_::dtor$1 @ 0x180100384 (_CSingleViewShellExperience--WaitForWindowReadyForPresentation_--_1_--dtor$1.c)
 * Callees:
 *     _lambda_6914baa2bbb41478f35591fe55a15932_::operator() @ 0x180012960 (_lambda_6914baa2bbb41478f35591fe55a15932_--operator().c)
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
