/*
 * XREFs of ExReInitializeRundownProtection @ 0x14037C960
 * Callers:
 *     EtwpCoverageSamplerStart @ 0x140943BFC (EtwpCoverageSamplerStart.c)
 * Callees:
 *     <none>
 */

void __stdcall ExReInitializeRundownProtection(PEX_RUNDOWN_REF RunRef)
{
  _InterlockedExchange64((volatile __int64 *)RunRef, 0LL);
}
