/*
 * XREFs of wil::details::lambda_call__lambda_43b71e22d5bb22f0043b8e015b635e1d___::_lambda_call__lambda_43b71e22d5bb22f0043b8e015b635e1d___ @ 0x180073598
 * Callers:
 *     ?PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z @ 0x180009468 (-PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     _AtmosCheck::PerformLicenseCheckInternalLegacy_::_1_::dtor$2 @ 0x18007672A (_AtmosCheck--PerformLicenseCheckInternalLegacy_--_1_--dtor$2.c)
 * Callees:
 *     _lambda_43b71e22d5bb22f0043b8e015b635e1d_::operator() @ 0x18007374C (_lambda_43b71e22d5bb22f0043b8e015b635e1d_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_43b71e22d5bb22f0043b8e015b635e1d___::_lambda_call__lambda_43b71e22d5bb22f0043b8e015b635e1d___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 32) )
  {
    *(_BYTE *)(a1 + 32) = 0;
    return lambda_43b71e22d5bb22f0043b8e015b635e1d_::operator()();
  }
  return result;
}
