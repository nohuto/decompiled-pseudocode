/*
 * XREFs of HvlpAllocateOverlayPages @ 0x1404F51CC
 * Callers:
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x1404ECC00 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     HvlInitializeProcessor @ 0x14078217C (HvlInitializeProcessor.c)
 * Callees:
 *     MmAllocateContiguousNodeMemory @ 0x1402F8F60 (MmAllocateContiguousNodeMemory.c)
 */

__int64 HvlpAllocateOverlayPages()
{
  __int64 ContiguousNodeMemory; // rcx
  unsigned int v1; // edi
  __int64 v2; // rsi
  unsigned int v3; // eax

  ContiguousNodeMemory = 0LL;
  v1 = 0;
  v2 = -1LL;
  do
  {
    v3 = v1++;
    if ( v3 >= 4 )
      break;
    v2 += 0x40000000LL;
    ContiguousNodeMemory = MmAllocateContiguousNodeMemory(4096, 0LL, v2, 0, 4u, 0x80000000);
  }
  while ( !ContiguousNodeMemory );
  if ( !ContiguousNodeMemory )
    return MmAllocateContiguousNodeMemory(4096, 0LL, -1LL, 0, 4u, 0x80000000);
  return ContiguousNodeMemory;
}
