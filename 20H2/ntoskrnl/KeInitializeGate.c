/*
 * XREFs of KeInitializeGate @ 0x140330AA0
 * Callers:
 *     PspSetContextThreadInternal @ 0x140693770 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140693928 (PspGetContextThreadInternal.c)
 *     NtSetInformationProcess @ 0x14069AAC0 (NtSetInformationProcess.c)
 *     MiInitializePartition @ 0x14078E400 (MiInitializePartition.c)
 *     MmScrubMemory @ 0x1408DE95C (MmScrubMemory.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x14091141C (PspRundownUmsThreadForApcDelivery.c)
 *     KiInitializeProcessor @ 0x1409A1900 (KiInitializeProcessor.c)
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
