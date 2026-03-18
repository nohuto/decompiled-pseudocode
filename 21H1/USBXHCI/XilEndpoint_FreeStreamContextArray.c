/*
 * XREFs of XilEndpoint_FreeStreamContextArray @ 0x1C0036D54
 * Callers:
 *     Endpoint_Disable_Internal @ 0x1C000A394 (Endpoint_Disable_Internal.c)
 *     Endpoint_EndpointStaticStreamsDisableCompletion @ 0x1C00376A0 (Endpoint_EndpointStaticStreamsDisableCompletion.c)
 *     Endpoint_EndpointStaticStreamsEnableCompletion @ 0x1C0037960 (Endpoint_EndpointStaticStreamsEnableCompletion.c)
 *     Endpoint_EvtStaticStreamsCleanupCallback @ 0x1C0037E40 (Endpoint_EvtStaticStreamsCleanupCallback.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x1C003A360 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C003A630 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 * Callees:
 *     CommonBuffer_ReleaseBuffer @ 0x1C0018AA0 (CommonBuffer_ReleaseBuffer.c)
 *     XilEndpoint_SendRequestToFreeSecureStreamContextArray @ 0x1C0036F80 (XilEndpoint_SendRequestToFreeSecureStreamContextArray.c)
 */

void __fastcall XilEndpoint_FreeStreamContextArray(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx

  v2 = *(_QWORD *)(*(_QWORD *)*a1 + 120LL);
  if ( *(_BYTE *)(*a1 + 1336LL) && a1[5] )
  {
    XilEndpoint_SendRequestToFreeSecureStreamContextArray();
    a1[5] = 0LL;
  }
  v3 = a1[4];
  if ( v3 )
  {
    CommonBuffer_ReleaseBuffer(v2, v3);
    a1[4] = 0LL;
  }
}
