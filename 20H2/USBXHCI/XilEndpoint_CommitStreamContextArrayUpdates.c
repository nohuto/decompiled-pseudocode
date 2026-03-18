/*
 * XREFs of XilEndpoint_CommitStreamContextArrayUpdates @ 0x1C0037F04
 * Callers:
 *     Endpoint_Enable @ 0x1C00083B0 (Endpoint_Enable.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1C0039DE0 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x1C003B840 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C003BB10 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 * Callees:
 *     XilEndpoint_SendRequestToSetSecureStreamContextArray @ 0x1C0038730 (XilEndpoint_SendRequestToSetSecureStreamContextArray.c)
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
