/*
 * XREFs of MiUnlockEntireDriver @ 0x1408CD774
 * Callers:
 *     MmRemoveImportOptimizationForDriverVerifier @ 0x14053F05C (MmRemoveImportOptimizationForDriverVerifier.c)
 * Callees:
 *     MiGetPteAddress @ 0x140221EF0 (MiGetPteAddress.c)
 *     IoFreeMdl @ 0x140267A50 (IoFreeMdl.c)
 *     MiReleasePtes @ 0x140284720 (MiReleasePtes.c)
 *     MiUnlockDriverPages @ 0x1408C17C0 (MiUnlockDriverPages.c)
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
      MiReleasePtes((__int64)&qword_140C4ED40, PteAddress, v5);
      *(_WORD *)(a2 + 10) &= ~1u;
    }
    IoFreeMdl((PMDL)a2);
  }
  MiUnlockDriverPages(a1);
}
