/*
 * XREFs of PopFxReleaseAcpiRefDevice @ 0x14056A91C
 * Callers:
 *     PopFxRegisterDeviceWorker @ 0x1407AFEEC (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 */

LONG __fastcall PopFxReleaseAcpiRefDevice(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 276), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent((PRKEVENT)(a1 + 280), 0, 0);
  return result;
}
