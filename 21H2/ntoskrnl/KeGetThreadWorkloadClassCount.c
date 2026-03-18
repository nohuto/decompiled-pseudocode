/*
 * XREFs of KeGetThreadWorkloadClassCount @ 0x14025E824
 * Callers:
 *     KiInitializeThreadCycleTable @ 0x140A59068 (KiInitializeThreadCycleTable.c)
 *     KiAllocateHeteroConfigBuffer @ 0x140A5B8A4 (KiAllocateHeteroConfigBuffer.c)
 * Callees:
 *     <none>
 */

__int64 KeGetThreadWorkloadClassCount()
{
  return (unsigned int)KiHgsPlusConfiguration;
}
