/*
 * XREFs of KeInitializeGate @ 0x14035FD10
 * Callers:
 *     NtSetInformationProcess @ 0x1406A02E0 (NtSetInformationProcess.c)
 *     PspGetContextThreadInternal @ 0x1406AD5A8 (PspGetContextThreadInternal.c)
 *     PspSetContextThreadInternal @ 0x1406ADEB0 (PspSetContextThreadInternal.c)
 *     MiInitializePartition @ 0x140780EE8 (MiInitializePartition.c)
 *     MmScrubMemory @ 0x1408D8B1C (MmScrubMemory.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x14090B7EC (PspRundownUmsThreadForApcDelivery.c)
 *     KiInitializeProcessor @ 0x14099B800 (KiInitializeProcessor.c)
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
