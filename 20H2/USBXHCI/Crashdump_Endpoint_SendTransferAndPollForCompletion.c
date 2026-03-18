/*
 * XREFs of Crashdump_Endpoint_SendTransferAndPollForCompletion @ 0x1C004D798
 * Callers:
 *     Crashdump_Endpoint_SendBulkTransfer @ 0x1C004D2A8 (Crashdump_Endpoint_SendBulkTransfer.c)
 *     Crashdump_Endpoint_SendControlTransfer @ 0x1C004D5B4 (Crashdump_Endpoint_SendControlTransfer.c)
 * Callees:
 *     Crashdump_EventRing_Poll @ 0x1C004C58C (Crashdump_EventRing_Poll.c)
 */

__int64 __fastcall Crashdump_Endpoint_SendTransferAndPollForCompletion(__int64 a1)
{
  __int64 v2; // r9
  int v3; // r10d
  int *v4; // rdx
  int v5; // r8d
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // edi
  signed __int32 v10[8]; // [rsp+0h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  v3 = *(_DWORD *)(a1 + 32);
  v4 = *(int **)(**(_QWORD **)(v2 + 8) + 48LL);
  if ( v4 )
    v4 += *(unsigned __int8 *)(v2 + 56);
  *v4 = (unsigned __int8)v3 | (*(_BYTE *)(a1 + 128) != 0 ? 0x10000 : 0);
  _InterlockedOr(v10, 0);
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Ringing doorbell: SlotId: %u, EndpointDCI: %u\n", *(unsigned __int8 *)(v2 + 56), v3);
  *(_OWORD *)(a1 + 184) = 0LL;
  v6 = *(_QWORD *)a1;
  if ( !*(_DWORD *)(*(_QWORD *)a1 + 584LL) || (v7 = 200LL, *(_BYTE *)(v6 + 624)) )
    v7 = 72LL;
  v8 = Crashdump_EventRing_Poll(
         v7 + v6,
         32,
         v5,
         a1,
         (__int64 (__fastcall *)(__int64, __int64, int *))Crashdump_Endpoint_EventRingCallback);
  if ( v8 >= 0 )
  {
    if ( (*(_DWORD *)(a1 + 196) & 4) != 0 )
    {
      if ( *(_QWORD *)(a1 + 184) == *(_QWORD *)(a1 + 168) )
      {
        DbgPrintEx(0x93u, 3u, "XHCIDUMP: Received the correct Event Data Trb.\n");
        goto LABEL_13;
      }
      DbgPrintEx(0x93u, 1u, "XHCIDUMP: Event Data Trb received is not the one we are looking for\n");
    }
    else
    {
      DbgPrintEx(0x93u, 1u, "XHCIDUMP: Did not receive an Event Data Trb\n");
    }
    v8 = -1073741823;
  }
LABEL_13:
  ++*(_QWORD *)(a1 + 168);
  return (unsigned int)v8;
}
