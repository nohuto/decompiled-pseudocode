/*
 * XREFs of wil::details::lambda_call__lambda_25b49f371ea5384d971ea42b85384a02___::_lambda_call__lambda_25b49f371ea5384d971ea42b85384a02___ @ 0x180095C7C
 * Callers:
 *     __lambda_7e6963f912875587faeb037360c0fdaa_::operator()_::_1_::dtor$0 @ 0x180095FE1 (__lambda_7e6963f912875587faeb037360c0fdaa_--operator()_--_1_--dtor$0.c)
 *     __lambda_8c9079aa2485ab0718fabcb8e444aaab_::operator()_::_1_::dtor$0 @ 0x180096099 (__lambda_8c9079aa2485ab0718fabcb8e444aaab_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::lambda_call__lambda_25b49f371ea5384d971ea42b85384a02___::_lambda_call__lambda_25b49f371ea5384d971ea42b85384a02___(
        __int64 *a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 8) )
  {
    result = *a1;
    *((_BYTE *)a1 + 8) = 0;
    *(_BYTE *)(result + 332) = 0;
  }
  return result;
}
