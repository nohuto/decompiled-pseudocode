/*
 * XREFs of MiGetAweVadPartition @ 0x1405AAFD8
 * Callers:
 *     MiQueryAddressState @ 0x140318330 (MiQueryAddressState.c)
 *     MmQueryVirtualMemory @ 0x1407BA750 (MmQueryVirtualMemory.c)
 * Callees:
 *     MiLocateLockedVadEvent @ 0x1402EE0E0 (MiLocateLockedVadEvent.c)
 *     MiGetAweInfoPartition @ 0x1405AAEC8 (MiGetAweInfoPartition.c)
 */

__int64 __fastcall MiGetAweVadPartition(__int64 a1)
{
  unsigned __int64 LockedVadEvent; // rax

  if ( (*(_DWORD *)(a1 + 48) & 0x6200000) == 0x4200000 )
    return *(_QWORD *)(qword_140C51F48 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessor[25]);
  LockedVadEvent = MiLocateLockedVadEvent(a1, 256);
  return MiGetAweInfoPartition(*(_QWORD *)(LockedVadEvent + 40));
}
