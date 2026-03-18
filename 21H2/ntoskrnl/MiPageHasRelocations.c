/*
 * XREFs of MiPageHasRelocations @ 0x1406F3800
 * Callers:
 *     MiWalkEntireImage @ 0x140336B30 (MiWalkEntireImage.c)
 *     MiWalkEntireImagePageNeedsProcessing @ 0x1405B239C (MiWalkEntireImagePageNeedsProcessing.c)
 *     MiRevertRelocatedImagePfn @ 0x1406F367C (MiRevertRelocatedImagePfn.c)
 *     MiInitializePrivateFixupBitmap @ 0x1406F3738 (MiInitializePrivateFixupBitmap.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x140203DC0 (HalSystemVectorDispatchEntry.c)
 *     MiDoesPageRequireRetpolineFixups @ 0x1406F3860 (MiDoesPageRequireRetpolineFixups.c)
 */

__int64 __fastcall MiPageHasRelocations(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rax
  __int64 v4; // r9
  __int64 v5; // r10
  __int64 *v6; // rcx
  int v7; // edx
  char v8; // r11

  v3 = *(__int64 **)(a1 + 32);
  v4 = (unsigned int)a2;
  v5 = *v3;
  v6 = v3 + 9;
  if ( (a3 & 1) == 0 || (unsigned int)a2 >= *((_DWORD *)v3 + 14) )
    return 0LL;
  while ( !*(_QWORD *)(v5 + 8LL * (unsigned int)a2)
       && !(unsigned int)MiDoesPageRequireRetpolineFixups(v6, a2, a3, v4)
       && ((v8 & 2) == 0 || !(unsigned int)HalSystemVectorDispatchEntry()) )
  {
    a2 = (unsigned int)(v7 + 1);
    if ( (_DWORD)a2 != (_DWORD)v4 )
      return 0LL;
  }
  return 1LL;
}
