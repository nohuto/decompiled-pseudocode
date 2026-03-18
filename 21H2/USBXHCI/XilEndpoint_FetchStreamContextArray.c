/*
 * XREFs of XilEndpoint_FetchStreamContextArray @ 0x1C0037708
 * Callers:
 *     ESM_UpdatingTransferRingDequeuePointers @ 0x1C000C0A0 (ESM_UpdatingTransferRingDequeuePointers.c)
 *     ESM_NotifyingTransferRingsFSEReceived @ 0x1C000CD20 (ESM_NotifyingTransferRingsFSEReceived.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1C00393F0 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnResetEndpointResetCompletion @ 0x1C0039670 (Endpoint_OnResetEndpointResetCompletion.c)
 *     Endpoint_SM_NotifyTransferRingsEndpointHalted @ 0x1C0039C4C (Endpoint_SM_NotifyTransferRingsEndpointHalted.c)
 * Callees:
 *     XilEndpoint_SendRequestToGetSecureStreamContextArray @ 0x1C0037A58 (XilEndpoint_SendRequestToGetSecureStreamContextArray.c)
 */

__int64 __fastcall XilEndpoint_FetchStreamContextArray(__int64 a1)
{
  unsigned int v1; // ebx
  int SecureStreamContextArray; // eax

  v1 = 0;
  if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 658LL) )
  {
    SecureStreamContextArray = XilEndpoint_SendRequestToGetSecureStreamContextArray(
                                 (unsigned int)*(_QWORD *)a1 + 1312,
                                 *(_QWORD *)(a1 + 40),
                                 a1,
                                 1 << (*(_DWORD *)(a1 + 12) + 1),
                                 *(void **)(*(_QWORD *)(a1 + 32) + 16LL));
    if ( SecureStreamContextArray >= 0 )
      return 0;
    return (unsigned int)SecureStreamContextArray;
  }
  return v1;
}
