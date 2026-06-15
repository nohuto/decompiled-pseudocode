/*
 * XREFs of wil::details::lambda_call__lambda_931ae1010aada9b89c18ea50a383ed88___::_lambda_call__lambda_931ae1010aada9b89c18ea50a383ed88___ @ 0x180118BCC
 * Callers:
 *     _CEndpointCharacteristics::DeriveAndCacheMixFormatsForConnector_::_1_::dtor$0 @ 0x18007BE19 (_CEndpointCharacteristics--DeriveAndCacheMixFormatsForConnector_--_1_--dtor$0.c)
 * Callees:
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z @ 0x18004810C (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_931ae1010aada9b89c18ea50a383ed88___::_lambda_call__lambda_931ae1010aada9b89c18ea50a383ed88___(
        __int64 a1)
{
  unsigned int v1; // edx
  _DWORD *v2; // rax
  __int64 v3; // rcx
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    v1 = 2;
    v2 = *(_DWORD **)(a1 + 8);
    v3 = *(_QWORD *)a1;
    if ( *v2 != 3 )
      v1 = 0;
    return CEndpointCharacteristics::ClearMixFormatCache(v3, v1);
  }
  return result;
}
