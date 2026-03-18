/*
 * XREFs of SeCreateAccessState @ 0x140613740
 * Callers:
 *     SepCreateTokenEx @ 0x1402D874C (SepCreateTokenEx.c)
 *     PsOpenThread @ 0x1405E14B4 (PsOpenThread.c)
 *     ObReferenceObjectByName @ 0x140613480 (ObReferenceObjectByName.c)
 *     ObDuplicateObject @ 0x14061ECE0 (ObDuplicateObject.c)
 *     ObReferenceObjectByNameEx @ 0x14064B8F0 (ObReferenceObjectByNameEx.c)
 *     WmipCreateGuidObject @ 0x140682008 (WmipCreateGuidObject.c)
 *     NtGetNextThread @ 0x1406E03F0 (NtGetNextThread.c)
 *     SeSubProcessToken @ 0x1406F7240 (SeSubProcessToken.c)
 *     NtGetNextProcess @ 0x1407760C0 (NtGetNextProcess.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x140917F80 (SepCopyAnonymousTokenAndSetSilo.c)
 *     CMFCheckAccess @ 0x140953564 (CMFCheckAccess.c)
 * Callees:
 *     SeCreateAccessStateEx @ 0x140613790 (SeCreateAccessStateEx.c)
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
