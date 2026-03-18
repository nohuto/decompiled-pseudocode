/*
 * XREFs of KiRequestTimer2Expiration @ 0x14033F3D8
 * Callers:
 *     KeSetTimer2 @ 0x14027EDC0 (KeSetTimer2.c)
 *     KiAdjustTimer2DueTimes @ 0x14039B660 (KiAdjustTimer2DueTimes.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x140273DA8 (KiRequestSoftwareInterrupt.c)
 *     KiSetDpcRequestFlag @ 0x14033F43C (KiSetDpcRequestFlag.c)
 *     KiSendSoftwareInterrupt @ 0x14033F4A0 (KiSendSoftwareInterrupt.c)
 */

__int64 KiRequestTimer2Expiration()
{
  unsigned int v0; // edi
  struct _KPRCB *v1; // rbx
  __int64 result; // rax
  __int64 v3; // rdx

  v0 = KiClockTimerOwner;
  v1 = (struct _KPRCB *)KiProcessorBlock[(unsigned int)KiClockTimerOwner];
  result = KiSetDpcRequestFlag(&v1->12588, 8LL);
  if ( (result & 0x29) == 0 )
  {
    LOBYTE(v3) = 2;
    if ( KeGetCurrentPrcb() == v1 )
      return KiRequestSoftwareInterrupt(v1, 2);
    else
      return KiSendSoftwareInterrupt(v0, v3);
  }
  return result;
}
