/*
 * XREFs of ndisGenerateCorrelationIds @ 0x1C00AE07C
 * Callers:
 *     ?ndisGenerateNetBufferListCorrelationIds@@YAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C00AE0A0 (-ndisGenerateNetBufferListCorrelationIds@@YAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisGenerateCorrelationIds(unsigned int a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd(&dword_1C00E3D00, a1);
  if ( (unsigned int)result + a1 < (unsigned int)result )
    return (unsigned int)_InterlockedExchangeAdd(&dword_1C00E3D00, a1);
  return result;
}
