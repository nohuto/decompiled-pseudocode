/*
 * XREFs of MiUnlockEntireDriver @ 0x1408D0D74
 * Callers:
 *     MmRemoveImportOptimizationForDriverVerifier @ 0x14054452C (MmRemoveImportOptimizationForDriverVerifier.c)
 * Callees:
 *     MiReleasePtes @ 0x140245800 (MiReleasePtes.c)
 *     IoFreeMdl @ 0x1402E9600 (IoFreeMdl.c)
 *     MiGetPteAddress @ 0x140318100 (MiGetPteAddress.c)
 *     MiUnlockDriverPages @ 0x1408C4DC0 (MiUnlockDriverPages.c)
 */

void __fastcall MiUnlockEntireDriver(unsigned __int64 *a1, __int64 a2)
{
  _QWORD *PteAddress; // rax
  unsigned int v5; // r8d

  if ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 10) & 1) != 0 )
    {
      PteAddress = (_QWORD *)MiGetPteAddress(*(_QWORD *)(a2 + 24));
      MiReleasePtes((__int64)&qword_140C4EF40, PteAddress, v5);
      *(_WORD *)(a2 + 10) &= ~1u;
    }
    IoFreeMdl((PMDL)a2);
  }
  MiUnlockDriverPages(a1);
}
