/*
 * XREFs of MiPageHasRelocations @ 0x1405FB1EC
 * Callers:
 *     MiWalkEntireImage @ 0x1402DED00 (MiWalkEntireImage.c)
 *     MiRevertRelocatedImagePfn @ 0x1405FB138 (MiRevertRelocatedImagePfn.c)
 * Callees:
 *     MiDoesPageRequireRetpolineFixups @ 0x1406EBCF4 (MiDoesPageRequireRetpolineFixups.c)
 */

__int64 __fastcall MiPageHasRelocations(__int64 a1, unsigned int a2)
{
  __int64 *v2; // r10
  __int64 v3; // r11
  int v4; // edx
  int v5; // r9d

  v2 = *(__int64 **)(a1 + 32);
  v3 = *v2;
  if ( a2 >= (unsigned __int64)v2[7] )
    return 0LL;
  while ( !*(_QWORD *)(v3 + 8LL * a2) && !(unsigned int)MiDoesPageRequireRetpolineFixups(v2 + 9) )
  {
    a2 = v4 + 1;
    if ( a2 != v5 )
      return 0LL;
  }
  return 1LL;
}
