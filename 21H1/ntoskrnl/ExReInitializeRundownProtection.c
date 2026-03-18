/*
 * XREFs of ExReInitializeRundownProtection @ 0x14037BBE0
 * Callers:
 *     EtwpCoverageSamplerStart @ 0x140942988 (EtwpCoverageSamplerStart.c)
 * Callees:
 *     <none>
 */

void __stdcall ExReInitializeRundownProtection(PEX_RUNDOWN_REF RunRef)
{
  _InterlockedExchange64((volatile __int64 *)RunRef, 0LL);
}
