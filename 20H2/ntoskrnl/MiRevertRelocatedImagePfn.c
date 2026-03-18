/*
 * XREFs of MiRevertRelocatedImagePfn @ 0x1406BF0E8
 * Callers:
 *     MiValidateImagePfn @ 0x1406BEE74 (MiValidateImagePfn.c)
 * Callees:
 *     MiAllocatePool @ 0x14022D320 (MiAllocatePool.c)
 *     KeCopyPage @ 0x1404009F0 (KeCopyPage.c)
 *     MiPerformFixups @ 0x140681C18 (MiPerformFixups.c)
 *     MiPageHasRelocations @ 0x1406BF19C (MiPageHasRelocations.c)
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
