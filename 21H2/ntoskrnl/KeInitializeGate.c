/*
 * XREFs of KeInitializeGate @ 0x1402D2C10
 * Callers:
 *     PspSetContextThreadInternal @ 0x140647C9C (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140647E54 (PspGetContextThreadInternal.c)
 *     NtSetInformationProcess @ 0x14070A4B0 (NtSetInformationProcess.c)
 *     MiInitializePartition @ 0x14079C65C (MiInitializePartition.c)
 *     MmScrubMemory @ 0x1408DC11C (MmScrubMemory.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x14090EBCC (PspRundownUmsThreadForApcDelivery.c)
 *     KiInitializeProcessor @ 0x14099F1D4 (KiInitializeProcessor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeInitializeGate(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 4) = 0;
  result = a1 + 8;
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *(_QWORD *)(a1 + 8) = a1 + 8;
  *(_WORD *)a1 = 263;
  *(_BYTE *)(a1 + 2) = 6;
  return result;
}
