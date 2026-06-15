/*
 * XREFs of ??_EHandleSendReceiveClient@@UEAAPEAXI@Z @ 0x140060440
 * Callers:
 *     ?SetEventHandle@CCrossProcessBaseClientEndpoint@@UEAAJPEAX@Z @ 0x140061340 (-SetEventHandle@CCrossProcessBaseClientEndpoint@@UEAAJPEAX@Z.c)
 *     ?SetEventHandle@CSpatialCrossProcessClientEndpoint@@UEAAJPEAX@Z @ 0x14006BF20 (-SetEventHandle@CSpatialCrossProcessClientEndpoint@@UEAAJPEAX@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001CCA8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?CloseConnection@HandleSendReceiveClient@@QEAAJXZ @ 0x1400515C4 (-CloseConnection@HandleSendReceiveClient@@QEAAJXZ.c)
 */

HandleSendReceiveClient *__fastcall HandleSendReceiveClient::`vector deleting destructor'(
        HandleSendReceiveClient *this,
        char a2)
{
  *(_QWORD *)this = &HandleSendReceiveClient::`vftable';
  HandleSendReceiveClient::CloseConnection(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
