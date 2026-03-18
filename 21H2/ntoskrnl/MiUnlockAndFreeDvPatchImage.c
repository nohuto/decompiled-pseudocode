/*
 * XREFs of MiUnlockAndFreeDvPatchImage @ 0x1405A29F8
 * Callers:
 *     MiLockPatchIatForDV @ 0x1405A1D20 (MiLockPatchIatForDV.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x1405A216C (MiReapplyImportOptimizationForDriverVerifier.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
 *     MiUnlockDriverPages @ 0x14080C400 (MiUnlockDriverPages.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockAndFreeDvPatchImage(_QWORD *P)
{
  __int64 v2; // rcx

  v2 = P[15];
  if ( v2 )
  {
    if ( (*(_BYTE *)(v2 + 10) & 1) != 0 )
    {
      MmUnmapLockedPages(*(PVOID *)(v2 + 24), (PMDL)v2);
      v2 = P[15];
    }
    IoFreeMdl((PMDL)v2);
  }
  MiUnlockDriverPages(P + 2);
  ExFreePoolWithTag(P, 0);
}
