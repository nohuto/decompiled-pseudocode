/*
 * XREFs of VfFreeAdapterChannel @ 0x1409CE960
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14020B100 (ExFreeToNPagedLookasideList.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     ViRemoveChannelWcb @ 0x14059F888 (ViRemoveChannelWcb.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x1409CCCE0 (DECREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x1409CCFDC (SUBTRACT_MAP_REGISTERS.c)
 *     VF_ASSERT_IRQL @ 0x1409CD0FC (VF_ASSERT_IRQL.c)
 *     ViFreeMapRegisterFile @ 0x1409D13D4 (ViFreeMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x1409D1758 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x1409D1A60 (ViGetRealDmaOperation.c)
 */

void __fastcall VfFreeAdapterChannel(__int64 a1)
{
  void (__fastcall *RealDmaOperation)(__int64); // rbx
  __int64 AdapterInformationInternal; // rsi
  __int64 v4; // rbx

  VF_ASSERT_IRQL(2u);
  RealDmaOperation = (void (__fastcall *)(__int64))ViGetRealDmaOperation(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  RealDmaOperation(a1);
  if ( AdapterInformationInternal )
  {
    _InterlockedExchange((volatile __int32 *)(AdapterInformationInternal + 188), 0);
    v4 = ViRemoveChannelWcb(AdapterInformationInternal, 0LL, 0LL);
    if ( v4 )
    {
      DECREMENT_ADAPTER_CHANNELS(AdapterInformationInternal);
      SUBTRACT_MAP_REGISTERS(AdapterInformationInternal, *(_DWORD *)(v4 + 48));
      if ( *(_QWORD *)(v4 + 96) )
        ViFreeMapRegisterFile(AdapterInformationInternal);
      ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, (PVOID)v4);
    }
  }
}
