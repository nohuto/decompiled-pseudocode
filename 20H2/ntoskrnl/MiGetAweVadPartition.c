/*
 * XREFs of MiGetAweVadPartition @ 0x14054A980
 * Callers:
 *     MiQueryAddressState @ 0x1402B2B40 (MiQueryAddressState.c)
 *     MmQueryVirtualMemory @ 0x140621F60 (MmQueryVirtualMemory.c)
 * Callees:
 *     MiLocateLockedVadEvent @ 0x1402506EC (MiLocateLockedVadEvent.c)
 *     MiGetAweInfoPartition @ 0x14054A894 (MiGetAweInfoPartition.c)
 */

__int64 __fastcall MiGetAweVadPartition(__int64 a1)
{
  __int64 **LockedVadEvent; // rax

  if ( (*(_DWORD *)(a1 + 48) & 0x3100000) == 0x2100000 )
    return *(_QWORD *)(qword_140C4E4C8 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessorPadding[5]);
  LockedVadEvent = MiLocateLockedVadEvent(a1, 256);
  return MiGetAweInfoPartition((__int64)LockedVadEvent[5]);
}
