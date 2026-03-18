/*
 * XREFs of SeCreateAccessState @ 0x1405FDD40
 * Callers:
 *     SepCreateTokenEx @ 0x1402FB674 (SepCreateTokenEx.c)
 *     ObReferenceObjectByNameEx @ 0x1405E566C (ObReferenceObjectByNameEx.c)
 *     ObReferenceObjectByName @ 0x1405FDA80 (ObReferenceObjectByName.c)
 *     PsOpenThread @ 0x14063B5B0 (PsOpenThread.c)
 *     WmipCreateGuidObject @ 0x140668338 (WmipCreateGuidObject.c)
 *     ObDuplicateObject @ 0x140677E70 (ObDuplicateObject.c)
 *     SeSubProcessToken @ 0x14068F0A8 (SeSubProcessToken.c)
 *     NtGetNextThread @ 0x1406D61C0 (NtGetNextThread.c)
 *     NtGetNextProcess @ 0x140786AD0 (NtGetNextProcess.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x14091EE60 (SepCopyAnonymousTokenAndSetSilo.c)
 *     CMFCheckAccess @ 0x14095A9F4 (CMFCheckAccess.c)
 * Callees:
 *     SeCreateAccessStateEx @ 0x1405FDD90 (SeCreateAccessStateEx.c)
 */

__int64 __fastcall SeCreateAccessState(int a1, int a2, int a3, __int64 a4)
{
  return SeCreateAccessStateEx(
           (unsigned int)KeGetCurrentThread(),
           KeGetCurrentThread()->ApcState.Process,
           a1,
           a2,
           a3,
           a4);
}
