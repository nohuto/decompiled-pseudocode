/*
 * XREFs of Endpoint_GetDequeuePointer @ 0x1C0004B68
 * Callers:
 *     UsbDevice_InitializeEndpointContext @ 0x1C00049B4 (UsbDevice_InitializeEndpointContext.c)
 *     Endpoint_Enable @ 0x1C0004FA0 (Endpoint_Enable.c)
 *     Endpoint_OnCancelSetDequeuePointer @ 0x1C000C0DC (Endpoint_OnCancelSetDequeuePointer.c)
 *     UsbDevice_SetAddress @ 0x1C00111BC (UsbDevice_SetAddress.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1C0015FA0 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x1C0037F40 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x1C0038DA0 (Endpoint_OnCancelEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x1C0038FA8 (Endpoint_OnResetEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1C00393F0 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnResetSetDequeuePointer @ 0x1C00398A4 (Endpoint_OnResetSetDequeuePointer.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C003B3B0 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 *     Crashdump_UsbDevice_ConfigureEndpointsForSaveState @ 0x1C004E00C (Crashdump_UsbDevice_ConfigureEndpointsForSaveState.c)
 * Callees:
 *     TR_GetDequeuePointer @ 0x1C0004B8C (TR_GetDequeuePointer.c)
 */

__int64 __fastcall Endpoint_GetDequeuePointer(__int64 a1, int a2)
{
  __int64 v2; // rcx
  __int64 v4; // r8

  if ( !*(_BYTE *)(a1 + 37) )
  {
    v2 = *(_QWORD *)(a1 + 88);
    return TR_GetDequeuePointer(v2);
  }
  v4 = *(_QWORD *)(a1 + 136);
  if ( a2 )
  {
    v2 = *(_QWORD *)(104LL * (unsigned int)(a2 - 1) + v4 + 48);
    return TR_GetDequeuePointer(v2);
  }
  return *(_QWORD *)(*(_QWORD *)(v4 + 32) + 24LL);
}
