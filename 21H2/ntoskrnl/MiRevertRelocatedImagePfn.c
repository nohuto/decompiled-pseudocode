/*
 * XREFs of MiRevertRelocatedImagePfn @ 0x14069BF78
 * Callers:
 *     MiValidateImagePfn @ 0x14069BD04 (MiValidateImagePfn.c)
 * Callees:
 *     MiAllocatePool @ 0x14025AD70 (MiAllocatePool.c)
 *     KeCopyPage @ 0x140402E50 (KeCopyPage.c)
 *     MiPerformFixups @ 0x1405FC5B8 (MiPerformFixups.c)
 *     MiPageHasRelocations @ 0x14069C02C (MiPageHasRelocations.c)
 */

__int64 __fastcall MiRevertRelocatedImagePfn(__int64 a1, _QWORD *a2, unsigned int a3)
{
  __int64 v5; // rcx
  __int64 v7; // rdi
  __int64 result; // rax
  ULONG_PTR v9; // rbx

  v5 = a2[12];
  v7 = *(_QWORD *)(v5 + 32);
  if ( !v7 || !(unsigned int)MiPageHasRelocations(v5, a3) )
    return -1LL;
  result = (__int64)MiAllocatePool(256, 0x1000uLL, 0x68496D4Du);
  v9 = result;
  if ( result )
  {
    KeCopyPage(result, a1);
    MiPerformFixups(v9, a2, a3, *(_QWORD *)(v7 + 48) - *(_QWORD *)(v7 + 40), 0LL, 3);
    return v9;
  }
  return result;
}
