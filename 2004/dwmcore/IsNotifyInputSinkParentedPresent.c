/*
 * XREFs of IsNotifyInputSinkParentedPresent @ 0x1800E3E28
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800748A0 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CInputSinkContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A051C (-PreSubgraph@CInputSinkContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1800E4670 (ApiSetQueryApiSetPresence_0.c)
 */

char IsNotifyInputSinkParentedPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_180344EE8 == 1 )
    return 1;
  if ( dword_180344EE8 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"HJ", &v1) < 0 )
    return 0;
  result = v1;
  dword_180344EE8 = 2 - (v1 != 0);
  return result;
}
