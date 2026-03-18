/*
 * XREFs of XilEndpoint_CommitStreamContextArrayUpdates @ 0x1C0036A24
 * Callers:
 *     Endpoint_Enable @ 0x1C0007CC0 (Endpoint_Enable.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1C0038900 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x1C003A360 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C003A630 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 * Callees:
 *     XilEndpoint_SendRequestToSetSecureStreamContextArray @ 0x1C0037250 (XilEndpoint_SendRequestToSetSecureStreamContextArray.c)
 */

__int64 __fastcall XilEndpoint_CommitStreamContextArrayUpdates(__int64 a1)
{
  unsigned int v1; // ebx
  int v2; // eax

  v1 = 0;
  if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 658LL) )
  {
    v2 = XilEndpoint_SendRequestToSetSecureStreamContextArray(
           (unsigned int)*(_QWORD *)a1 + 1312,
           *(_QWORD *)(a1 + 40),
           a1,
           1 << (*(_DWORD *)(a1 + 12) + 1),
           *(void **)(*(_QWORD *)(a1 + 32) + 16LL));
    if ( v2 >= 0 )
      return 0;
    return (unsigned int)v2;
  }
  return v1;
}
