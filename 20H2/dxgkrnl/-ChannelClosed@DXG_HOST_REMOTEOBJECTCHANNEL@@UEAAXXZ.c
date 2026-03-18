/*
 * XREFs of ?ChannelClosed@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAXXZ @ 0x1C0169FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DXG_HOST_REMOTEOBJECTCHANNEL::ChannelClosed(DXG_HOST_REMOTEOBJECTCHANNEL *this)
{
  *((_BYTE *)this + 16) = 1;
}
