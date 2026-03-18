/*
 * XREFs of MiInitializeDriverPatchState @ 0x140761F70
 * Callers:
 *     MiLockPatchIatForDV @ 0x1405A1D20 (MiLockPatchIatForDV.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x1405A216C (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MmWriteSystemImageTracepoint @ 0x1405A40C4 (MmWriteSystemImageTracepoint.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MiInitializeDriverPatchState(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  memset((void *)(a2 + 8), 0, 0x60uLL);
  *(_QWORD *)a2 = a1;
  result = (*(_DWORD *)(a1 + 64) >> 12) + (unsigned int)((*(_DWORD *)(a1 + 64) & 0xFFF) != 0);
  *(_DWORD *)(a2 + 24) = result;
  return result;
}
