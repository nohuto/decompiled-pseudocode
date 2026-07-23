/*
 * XREFs of MiRevertRelocatedImagePfn @ 0x1405FB138
 * Callers:
 *     MiValidateImagePfn @ 0x1405FAEC4 (MiValidateImagePfn.c)
 * Callees:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     KeCopyPage @ 0x140403030 (KeCopyPage.c)
 *     MiPageHasRelocations @ 0x1405FB1EC (MiPageHasRelocations.c)
 *     MiPerformFixups @ 0x1406EBD18 (MiPerformFixups.c)
 */

__int64 __fastcall MiRevertRelocatedImagePfn(__int64 a1, ULONG_PTR a2, unsigned int a3)
{
  __int64 v4; // rcx
  __int64 result; // rax
  ULONG_PTR v7; // rbx

  v4 = *(_QWORD *)(a2 + 96);
  if ( !*(_QWORD *)(v4 + 32) || !(unsigned int)MiPageHasRelocations(v4, a3) )
    return -1LL;
  result = (__int64)MiAllocatePool(256, 0x1000uLL, 0x68496D4Du);
  v7 = result;
  if ( result )
  {
    KeCopyPage(result, a1);
    MiPerformFixups(v7, a2, 0LL, 3);
    return v7;
  }
  return result;
}
