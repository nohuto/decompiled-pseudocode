/*
 * XREFs of IpmiLibWriteOneByte @ 0x140652C64
 * Callers:
 *     IpmiLibpKcsHandleError @ 0x140652FB8 (IpmiLibpKcsHandleError.c)
 *     IpmiLibpKcsReceiveResponseFromBmc @ 0x140653104 (IpmiLibpKcsReceiveResponseFromBmc.c)
 *     IpmiLibpKcsSendRequestToBMC @ 0x140653374 (IpmiLibpKcsSendRequestToBMC.c)
 *     IpmiLibpHandleReadInterrupt @ 0x1406536F0 (IpmiLibpHandleReadInterrupt.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall IpmiLibWriteOneByte(__int64 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  unsigned __int8 result; // al
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( BYTE8(xmmword_140C10CB0) )
  {
    result = a3;
    __outbyte(xmmword_140C10D00 + a2 * BYTE8(WheaIpmiContext), a3);
  }
  else
  {
    result = xmmword_140C10D00;
    *(_BYTE *)(BYTE8(WheaIpmiContext) * (unsigned int)a2 + (_QWORD)xmmword_140C10D00) = a3;
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  }
  return result;
}
