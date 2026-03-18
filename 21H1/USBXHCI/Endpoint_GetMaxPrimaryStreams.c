/*
 * XREFs of Endpoint_GetMaxPrimaryStreams @ 0x1C0007CA8
 * Callers:
 *     UsbDevice_InitializeEndpointContext @ 0x1C0007A80 (UsbDevice_InitializeEndpointContext.c)
 *     Crashdump_UsbDevice_ConfigureEndpointsForSaveState @ 0x1C004D6B8 (Crashdump_UsbDevice_ConfigureEndpointsForSaveState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Endpoint_GetMaxPrimaryStreams(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 37) )
    return *(unsigned int *)(*(_QWORD *)(a1 + 136) + 12LL);
  else
    return 0LL;
}
