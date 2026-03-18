/*
 * XREFs of HvlIsPartitionCpuManager @ 0x1403A4A70
 * Callers:
 *     PoInitSystem @ 0x140A3BD5C (PoInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 HvlIsPartitionCpuManager()
{
  return (HvlpFlags >> 1) & 1;
}
