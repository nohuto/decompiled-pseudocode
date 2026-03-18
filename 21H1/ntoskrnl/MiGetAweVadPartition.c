/*
 * XREFs of MiGetAweVadPartition @ 0x140546960
 * Callers:
 *     MiQueryAddressState @ 0x14021E510 (MiQueryAddressState.c)
 *     MmQueryVirtualMemory @ 0x140634A10 (MmQueryVirtualMemory.c)
 * Callees:
 *     MiLocateLockedVadEvent @ 0x1402AA0CC (MiLocateLockedVadEvent.c)
 *     MiGetAweInfoPartition @ 0x140546874 (MiGetAweInfoPartition.c)
 */

__int64 __fastcall MiGetAweVadPartition(__int64 a1)
{
  __int64 **LockedVadEvent; // rax

  if ( (*(_DWORD *)(a1 + 48) & 0x3100000) == 0x2100000 )
    return *(_QWORD *)(qword_140C4E588 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessorPadding[5]);
  LockedVadEvent = MiLocateLockedVadEvent(a1, 256);
  return MiGetAweInfoPartition((__int64)LockedVadEvent[5]);
}
