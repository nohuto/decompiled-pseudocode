/*
 * XREFs of MiEnumerateBasePatches @ 0x140761F24
 * Callers:
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x1405A216C (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MiApplyRequiredSessionDriverHotPatches @ 0x140761E94 (MiApplyRequiredSessionDriverHotPatches.c)
 *     MmReplaceImportEntriesForVerifier @ 0x14096A1D0 (MmReplaceImportEntriesForVerifier.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x140971848 (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

void __fastcall MiEnumerateBasePatches(__int64 a1, unsigned int (__fastcall *a2)(_QWORD *, __int64), __int64 a3)
{
  _QWORD *v3; // rdi
  _QWORD *i; // rbx

  v3 = (_QWORD *)(a1 + 296);
  for ( i = *(_QWORD **)(a1 + 296); i != v3 && a2(i - 37, a3); i = (_QWORD *)*i )
    ;
}
