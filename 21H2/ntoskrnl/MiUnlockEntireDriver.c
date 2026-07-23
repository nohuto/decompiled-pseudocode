/*
 * XREFs of MiUnlockEntireDriver @ 0x1408D0ED4
 * Callers:
 *     MmRemoveImportOptimizationForDriverVerifier @ 0x14054476C (MmRemoveImportOptimizationForDriverVerifier.c)
 * Callees:
 *     IoFreeMdl @ 0x14029A950 (IoFreeMdl.c)
 *     MiReleasePtes @ 0x1402EA050 (MiReleasePtes.c)
 *     MiGetPteAddress @ 0x140322E50 (MiGetPteAddress.c)
 *     MiUnlockDriverPages @ 0x1408C4F20 (MiUnlockDriverPages.c)
 */

void __fastcall MiUnlockEntireDriver(__int64 *a1, __int64 a2)
{
  _QWORD *PteAddress; // rax
  unsigned int v5; // r8d

  if ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 10) & 1) != 0 )
    {
      PteAddress = (_QWORD *)MiGetPteAddress(*(_QWORD *)(a2 + 24));
      MiReleasePtes((__int64)&qword_140C4EF80, PteAddress, v5);
      *(_WORD *)(a2 + 10) &= ~1u;
    }
    IoFreeMdl((PMDL)a2);
  }
  MiUnlockDriverPages(a1);
}
