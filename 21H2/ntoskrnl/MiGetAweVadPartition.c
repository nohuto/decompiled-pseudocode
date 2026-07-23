/*
 * XREFs of MiGetAweVadPartition @ 0x14054C6C0
 * Callers:
 *     MiQueryAddressState @ 0x14033A480 (MiQueryAddressState.c)
 *     MmQueryVirtualMemory @ 0x1406885A0 (MmQueryVirtualMemory.c)
 * Callees:
 *     MiLocateLockedVadEvent @ 0x14030911C (MiLocateLockedVadEvent.c)
 *     MiGetAweInfoPartition @ 0x14054C5D4 (MiGetAweInfoPartition.c)
 */

__int64 __fastcall MiGetAweVadPartition(__int64 a1)
{
  __int64 **LockedVadEvent; // rax

  if ( (*(_DWORD *)(a1 + 48) & 0x3100000) == 0x2100000 )
    return *(_QWORD *)(qword_140C4E688 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessorPadding[5]);
  LockedVadEvent = MiLocateLockedVadEvent(a1, 256);
  return MiGetAweInfoPartition((__int64)LockedVadEvent[5]);
}
