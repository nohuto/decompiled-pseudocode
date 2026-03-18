/*
 * XREFs of PpmInitHeteroEngine @ 0x140A6F9A8
 * Callers:
 *     PoInitSystem @ 0x140A3BD5C (PoInitSystem.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x1402DE650 (KeQueryMaximumProcessorCountEx.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 PpmInitHeteroEngine()
{
  ULONG MaximumProcessorCount; // r14d
  unsigned int v1; // ebp
  unsigned int v2; // edi
  ULONG *v3; // rsi
  ULONG *v4; // rbx

  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v1 = 3 * (MaximumProcessorCount + 2);
  v2 = 0;
  PpmHeteroCapability = ExAllocatePoolWithTag(NonPagedPoolNx, v1, 0x704D5050u);
  if ( !PpmHeteroCapability )
    return (unsigned int)-1073741670;
  PpmHeteroCapabilityTest = ExAllocatePoolWithTag(NonPagedPoolNx, v1, 0x704D5050u);
  v3 = (ULONG *)PpmHeteroCapabilityTest;
  if ( !PpmHeteroCapabilityTest )
  {
    ExFreePoolWithTag(PpmHeteroCapability, 0x704D5050u);
    PpmHeteroCapability = 0LL;
    return (unsigned int)-1073741670;
  }
  v4 = (ULONG *)PpmHeteroCapability;
  memset(PpmHeteroCapability, 0, v1);
  memset(v3, 0, v1);
  *v4 = MaximumProcessorCount;
  *v3 = MaximumProcessorCount;
  return v2;
}
