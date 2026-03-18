/*
 * XREFs of SeCreateAccessState @ 0x140668A20
 * Callers:
 *     SepCreateTokenEx @ 0x14026E3A0 (SepCreateTokenEx.c)
 *     WmipCreateGuidObject @ 0x1405DC758 (WmipCreateGuidObject.c)
 *     ObDuplicateObject @ 0x1405E96C0 (ObDuplicateObject.c)
 *     SeSubProcessToken @ 0x140613E54 (SeSubProcessToken.c)
 *     ObReferenceObjectByNameEx @ 0x14062DD40 (ObReferenceObjectByNameEx.c)
 *     PsOpenThread @ 0x1406677B4 (PsOpenThread.c)
 *     ObReferenceObjectByName @ 0x140668760 (ObReferenceObjectByName.c)
 *     NtGetNextThread @ 0x140703180 (NtGetNextThread.c)
 *     NtGetNextProcess @ 0x1407784D0 (NtGetNextProcess.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x140919230 (SepCopyAnonymousTokenAndSetSilo.c)
 *     CMFCheckAccess @ 0x140954C34 (CMFCheckAccess.c)
 * Callees:
 *     SeCreateAccessStateEx @ 0x140668A70 (SeCreateAccessStateEx.c)
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
