/*
 * XREFs of HvlIsSchedulerAssistAvailable @ 0x140545C50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool HvlIsSchedulerAssistAvailable()
{
  return (HvlpFlags & 0x8000) != 0;
}
