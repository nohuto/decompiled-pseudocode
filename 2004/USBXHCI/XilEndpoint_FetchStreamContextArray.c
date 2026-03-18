/*
 * XREFs of XilEndpoint_FetchStreamContextArray @ 0x1C0036CE0
 * Callers:
 *     ESM_NotifyingTransferRingsFSEReceived @ 0x1C000E460 (ESM_NotifyingTransferRingsFSEReceived.c)
 *     ESM_UpdatingTransferRingDequeuePointers @ 0x1C000F370 (ESM_UpdatingTransferRingDequeuePointers.c)
 *     ESM_NotifyingTransferRingsEndpointHalted @ 0x1C0018C90 (ESM_NotifyingTransferRingsEndpointHalted.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1C0038900 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnResetEndpointResetCompletion @ 0x1C0038B80 (Endpoint_OnResetEndpointResetCompletion.c)
 * Callees:
 *     XilEndpoint_SendRequestToGetSecureStreamContextArray @ 0x1C0037048 (XilEndpoint_SendRequestToGetSecureStreamContextArray.c)
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
