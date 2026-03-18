/*
 * XREFs of PopFxReleaseAcpiRefDevice @ 0x14056689C
 * Callers:
 *     PopFxDestroyDeviceDpm @ 0x1403C91E8 (PopFxDestroyDeviceDpm.c)
 *     PoFxAbandonDevice @ 0x140734340 (PoFxAbandonDevice.c)
 *     PopFxRegisterDeviceWorker @ 0x14079CBDC (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 */

LONG __fastcall PopFxReleaseAcpiRefDevice(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 276), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent((PRKEVENT)(a1 + 280), 0, 0);
  return result;
}
