/*
 * XREFs of Etw_EndpointCreate @ 0x1C0001F54
 * Callers:
 *     Endpoint_Create @ 0x1C006B6C8 (Endpoint_Create.c)
 * Callees:
 *     McTemplateK0pppnnn_EtwWriteTransfer @ 0x1C0048B8C (McTemplateK0pppnnn_EtwWriteTransfer.c)
 */

__int64 __fastcall Etw_EndpointCreate(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp-38h]
  int v4; // [rsp+40h] [rbp-28h]

  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
    return McTemplateK0pppnnn_EtwWriteTransfer(
             (int)a2 + 103,
             (unsigned int)&USBXHCI_ETW_EVENT_ENDPOINT_CREATE,
             0,
             *(_QWORD *)(*a2 + 8LL),
             a2[1],
             a2[3],
             v3,
             (__int64)(a2 + 12),
             v4,
             (__int64)a2 + 103);
  return result;
}
