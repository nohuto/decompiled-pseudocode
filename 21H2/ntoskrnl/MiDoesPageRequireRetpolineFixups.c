/*
 * XREFs of MiDoesPageRequireRetpolineFixups @ 0x1406F3860
 * Callers:
 *     MiPageHasRelocations @ 0x1406F3800 (MiPageHasRelocations.c)
 *     MiCreateFileOnlyImageFixupList @ 0x14097023C (MiCreateFileOnlyImageFixupList.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiDoesPageRequireRetpolineFixups(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(a1 + 16);
  return v2 && *(_QWORD *)(v2 + 8LL * a2 + 56);
}
