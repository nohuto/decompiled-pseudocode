/*
 * XREFs of KdpPollBreakInWithPortLock @ 0x14050C1F0
 * Callers:
 *     KdpPrintString @ 0x1409B77A0 (KdpPrintString.c)
 * Callees:
 *     <none>
 */

bool KdpPollBreakInWithPortLock()
{
  char v0; // bl

  v0 = 0;
  if ( (_BYTE)KdDebuggerEnabled )
  {
    if ( byte_140C321C4 )
    {
      v0 = 1;
      byte_140C321C4 = 0;
    }
    else
    {
      return (unsigned int)KdReceivePacket(8LL, 0LL, 0LL, 0LL, 0LL) == 0;
    }
  }
  return v0;
}
