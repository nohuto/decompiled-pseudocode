/*
 * XREFs of HalpDmaProcessMapRegisterQueueV2 @ 0x1404CCF28
 * Callers:
 *     HalpGrowMapBufferWorker @ 0x1404B91A0 (HalpGrowMapBufferWorker.c)
 *     IoFreeMapRegistersV2 @ 0x1404CD1E0 (IoFreeMapRegistersV2.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     IoFreeAdapterChannel @ 0x1404B8F50 (IoFreeAdapterChannel.c)
 *     HalpQueueMapBufferWorker @ 0x1404BC828 (HalpQueueMapBufferWorker.c)
 *     HalpDmaAllocateMapRegisters @ 0x1404C6B3C (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaDequeueAdapter @ 0x1404C7638 (HalpDmaDequeueAdapter.c)
 *     HalpDmaFreeMapRegisters @ 0x1404C7CF8 (HalpDmaFreeMapRegisters.c)
 *     HalpDmaQueueAdapter @ 0x1404C7FD4 (HalpDmaQueueAdapter.c)
 */

void __fastcall HalpDmaProcessMapRegisterQueueV2(__int64 a1, char a2)
{
  __int64 *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 MapRegisters; // rax
  int v10; // eax
  unsigned int v11; // r8d

  while ( 1 )
  {
    v4 = HalpDmaDequeueAdapter(a1, a2);
    v7 = (__int64)v4;
    if ( !v4 )
      break;
    v8 = v4[43];
    MapRegisters = HalpDmaAllocateMapRegisters((__int64)v4, *((_DWORD *)v4 + 60), v5, v6);
    *(_QWORD *)(v7 + 232) = MapRegisters;
    if ( !MapRegisters )
    {
      HalpDmaQueueAdapter(v7);
      HalpQueueMapBufferWorker(v7, *(_DWORD *)(v7 + 240));
      return;
    }
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(v8 + 24))(
            *(_QWORD *)(v8 + 48),
            *(_QWORD *)(v8 + 56),
            MapRegisters,
            *(_QWORD *)(v8 + 32));
    if ( v10 == 3 )
    {
      *(_DWORD *)(v7 + 240) = 0;
      v10 = 2;
    }
    if ( v10 == 2 )
    {
      v11 = *(_DWORD *)(v7 + 240);
      if ( v11 )
      {
        HalpDmaFreeMapRegisters(v7, *(_QWORD **)(v7 + 232), v11);
        *(_DWORD *)(v7 + 240) = 0;
      }
      IoFreeAdapterChannel((PDMA_ADAPTER)v7);
    }
  }
}
