/*
 * XREFs of KeInitializeGate @ 0x14025E6B4
 * Callers:
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 *     MiInitializePartition @ 0x14081D450 (MiInitializePartition.c)
 *     MmScrubMemory @ 0x140983C8C (MmScrubMemory.c)
 *     KiInitializeProcessor @ 0x140A5943C (KiInitializeProcessor.c)
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
