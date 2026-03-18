/*
 * XREFs of IpmiLibReadOneByte @ 0x140652C28
 * Callers:
 *     IpmiLibpKcsHandleError @ 0x140652FB8 (IpmiLibpKcsHandleError.c)
 *     IpmiLibpKcsReceiveResponseFromBmc @ 0x140653104 (IpmiLibpKcsReceiveResponseFromBmc.c)
 *     IpmiLibpKcsSendRequestToBMC @ 0x140653374 (IpmiLibpKcsSendRequestToBMC.c)
 *     IpmiLibpKcsSpinRegister @ 0x14065355C (IpmiLibpKcsSpinRegister.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall IpmiLibReadOneByte(__int64 a1, unsigned __int8 a2)
{
  if ( BYTE8(xmmword_140C10CB0) )
    return __inbyte(xmmword_140C10D00 + a2 * BYTE8(WheaIpmiContext));
  else
    return *(_BYTE *)(xmmword_140C10D00 + BYTE8(WheaIpmiContext) * (unsigned int)a2);
}
