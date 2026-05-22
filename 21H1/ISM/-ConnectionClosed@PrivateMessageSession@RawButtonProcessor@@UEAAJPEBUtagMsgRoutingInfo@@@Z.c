/*
 * XREFs of ?ConnectionClosed@PrivateMessageSession@RawButtonProcessor@@UEAAJPEBUtagMsgRoutingInfo@@@Z @ 0x1801823D0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18003C460 (memset_0.c)
 */

__int64 __fastcall RawButtonProcessor::PrivateMessageSession::ConnectionClosed(
        RawButtonProcessor::PrivateMessageSession *this,
        const struct tagMsgRoutingInfo *a2)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 1);
  if ( *(_DWORD *)a2 == *(_DWORD *)(v2 + 288) )
    memset_0((void *)(v2 + 48), 0, 0xF0uLL);
  return 0LL;
}
