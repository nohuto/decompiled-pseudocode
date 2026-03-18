/*
 * XREFs of PoDeletePowerRequest @ 0x1407EF700
 * Callers:
 *     PoUnregisterSystemState @ 0x140202100 (PoUnregisterSystemState.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     PopPowerRequestHandleClose @ 0x14036A100 (PopPowerRequestHandleClose.c)
 */

void __stdcall PoDeletePowerRequest(PVOID PowerRequest)
{
  PopPowerRequestHandleClose(PowerRequest);
  ObfDereferenceObject(PowerRequest);
}
