/*
 * XREFs of MiDereferenceSessionGlobal @ 0x1405994CC
 * Callers:
 *     MiActOnPatchInAllSessions @ 0x140970E00 (MiActOnPatchInAllSessions.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x140971848 (MiApplyHotPatchToLoadedDriver.c)
 *     MiUnapplyDriverHotPatch @ 0x1409779A4 (MiUnapplyDriverHotPatch.c)
 * Callees:
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x140693EA8 (MiReleaseProcessReferenceToSessionDataPage.c)
 */

__int64 __fastcall MiDereferenceSessionGlobal(void *a1)
{
  return MiReleaseProcessReferenceToSessionDataPage(a1);
}
