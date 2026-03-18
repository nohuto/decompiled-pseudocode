/*
 * XREFs of NtRIMSetTestModeStatus @ 0x1C0154E30
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x1C00289E8 (ApiSetEditionIsUsermodeRIMAccessAllowed.c)
 *     RIMSetTestModeStatus @ 0x1C0153080 (RIMSetTestModeStatus.c)
 */

__int64 __fastcall NtRIMSetTestModeStatus(int a1)
{
  if ( (unsigned int)ApiSetEditionIsUsermodeRIMAccessAllowed() )
    return RIMSetTestModeStatus(a1);
  else
    return 3221225506LL;
}
