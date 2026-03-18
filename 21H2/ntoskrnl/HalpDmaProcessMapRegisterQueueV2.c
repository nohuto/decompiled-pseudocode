/*
 * XREFs of HalpDmaProcessMapRegisterQueueV2 @ 0x1404584D6
 * Callers:
 *     IoFreeMapRegistersV2 @ 0x140458780 (IoFreeMapRegistersV2.c)
 *     HalpGrowMapBufferWorker @ 0x140505810 (HalpGrowMapBufferWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     IoFreeAdapterChannel @ 0x140456A00 (IoFreeAdapterChannel.c)
 *     HalpDmaAllocateMapRegisters @ 0x140456F16 (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaDequeueAdapter @ 0x140457308 (HalpDmaDequeueAdapter.c)
 *     HalpDmaFreeMapRegisters @ 0x14045746C (HalpDmaFreeMapRegisters.c)
 *     HalpQueueMapBufferWorker @ 0x14050905C (HalpQueueMapBufferWorker.c)
 *     HalpDmaQueueAdapter @ 0x140513AD4 (HalpDmaQueueAdapter.c)
 */

__int64 *__fastcall HalpDmaProcessMapRegisterQueueV2(__int64 a1, char a2)
{
  __int64 *result; // rax
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 MapRegisters; // rax
  int v8; // eax
  unsigned int v9; // r8d

  while ( 1 )
  {
    result = HalpDmaDequeueAdapter(a1, a2);
    v5 = (__int64)result;
    if ( !result )
      return result;
    v6 = result[43];
    MapRegisters = HalpDmaAllocateMapRegisters((__int64)result, *((_DWORD *)result + 60));
    *(_QWORD *)(v5 + 232) = MapRegisters;
    if ( !MapRegisters )
    {
      HalpDmaQueueAdapter(v5);
      return (__int64 *)HalpQueueMapBufferWorker(v5, *(unsigned int *)(v5 + 240));
    }
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(v6 + 24))(
           *(_QWORD *)(v6 + 48),
           *(_QWORD *)(v6 + 56),
           MapRegisters,
           *(_QWORD *)(v6 + 32));
    if ( v8 == 3 )
    {
      *(_DWORD *)(v5 + 240) = 0;
      goto LABEL_6;
    }
    if ( v8 == 2 )
    {
LABEL_6:
      v9 = *(_DWORD *)(v5 + 240);
      if ( v9 )
      {
        HalpDmaFreeMapRegisters(v5, *(_QWORD **)(v5 + 232), v9);
        *(_DWORD *)(v5 + 240) = 0;
      }
      IoFreeAdapterChannel((PDMA_ADAPTER)v5);
    }
  }
}
