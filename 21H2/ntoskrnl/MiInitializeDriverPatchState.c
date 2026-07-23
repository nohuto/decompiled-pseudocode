/*
 * XREFs of MiInitializeDriverPatchState @ 0x1408C4E64
 * Callers:
 *     MmWriteSystemImageTracepoint @ 0x14053F938 (MmWriteSystemImageTracepoint.c)
 *     MmRemoveImportOptimizationForDriverVerifier @ 0x14054476C (MmRemoveImportOptimizationForDriverVerifier.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializeDriverPatchState(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int64 result; // rax

  *(_QWORD *)a2 = a1;
  v2 = *(_DWORD *)(a1 + 64);
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  result = (v2 >> 12) + ((v2 & 0xFFF) != 0);
  *(_DWORD *)(a2 + 16) = result;
  return result;
}
