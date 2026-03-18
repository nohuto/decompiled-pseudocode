/*
 * XREFs of ACPIWakeMarkHiberPhase @ 0x1C00621C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void ACPIWakeMarkHiberPhase()
{
  if ( GpeTable )
    PoSetHiberRange(0LL, 0x10000u, GpeTable, (unsigned int)GpeTableSize, 0x69706341u);
}
