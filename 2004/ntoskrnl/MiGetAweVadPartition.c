/*
 * XREFs of MiGetAweVadPartition @ 0x140546FB0
 * Callers:
 *     MiQueryAddressState @ 0x1402B1190 (MiQueryAddressState.c)
 *     MmQueryVirtualMemory @ 0x1405FF9D0 (MmQueryVirtualMemory.c)
 * Callees:
 *     MiLocateLockedVadEvent @ 0x14025109C (MiLocateLockedVadEvent.c)
 *     MiGetAweInfoPartition @ 0x140546EC4 (MiGetAweInfoPartition.c)
 */

__int64 __fastcall MiGetAweVadPartition(__int64 a1)
{
  __int64 **LockedVadEvent; // rax

  if ( (*(_DWORD *)(a1 + 48) & 0x3100000) == 0x2100000 )
    return *(_QWORD *)(qword_140C4E448 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessorPadding[5]);
  LockedVadEvent = MiLocateLockedVadEvent(a1, 256);
  return MiGetAweInfoPartition((__int64)LockedVadEvent[5]);
}
