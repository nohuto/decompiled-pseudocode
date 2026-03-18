/*
 * XREFs of MiUnlockEntireDriver @ 0x140970D2C
 * Callers:
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x1405A216C (MiReapplyImportOptimizationForDriverVerifier.c)
 * Callees:
 *     MiReleasePtes @ 0x1402BB6D0 (MiReleasePtes.c)
 *     MiGetPteAddress @ 0x140313C70 (MiGetPteAddress.c)
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
 *     MiUnlockDriverPages @ 0x14080C400 (MiUnlockDriverPages.c)
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
      MiReleasePtes((__int64)&qword_140C534C0, PteAddress, v5);
      *(_WORD *)(a2 + 10) &= ~1u;
    }
    IoFreeMdl((PMDL)a2);
  }
  MiUnlockDriverPages(a1);
}
