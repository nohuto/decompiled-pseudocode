/*
 * XREFs of ?ChannelClosed@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAXXZ @ 0x1C015B740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DXG_HOST_REMOTEOBJECTCHANNEL::ChannelClosed(DXG_HOST_REMOTEOBJECTCHANNEL *this)
{
  *((_BYTE *)this + 16) = 1;
}
