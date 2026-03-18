/*
 * XREFs of MiDoesPageRequireRetpolineImportFixups @ 0x1402DB07C
 * Callers:
 *     MiUpdateImagePfnImportRelocations @ 0x1402DAEB0 (MiUpdateImagePfnImportRelocations.c)
 *     MiWalkEntireImagePageNeedsProcessing @ 0x1405B239C (MiWalkEntireImagePageNeedsProcessing.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiDoesPageRequireRetpolineImportFixups(__int64 a1, unsigned int a2)
{
  __int64 v2; // rcx
  _WORD *v3; // rcx
  _BOOL8 result; // rax

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 88LL);
  result = 0;
  if ( v2 )
  {
    v3 = *(_WORD **)(v2 + 8LL * a2 + 56);
    if ( v3 )
    {
      if ( *v3 || v3[3] == 3 )
        return 1;
    }
  }
  return result;
}
