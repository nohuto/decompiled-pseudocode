/*
 * XREFs of MiIsVadEligibleForCommitRelease @ 0x14052B6A8
 * Callers:
 *     MiProcessCommitIntact @ 0x140201780 (MiProcessCommitIntact.c)
 *     MiUserFault @ 0x14020D770 (MiUserFault.c)
 *     MiReleaseCommitForResetPages @ 0x14052C554 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x14052C708 (MiReleaseOutSwappedProcessCommit.c)
 * Callees:
 *     MiVadSupportsPrivateCommit @ 0x14021B240 (MiVadSupportsPrivateCommit.c)
 *     MiVadMapsLargeImage @ 0x14021CC20 (MiVadMapsLargeImage.c)
 */

_BOOL8 __fastcall MiIsVadEligibleForCommitRelease(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rax
  _BOOL8 result; // rax

  result = 0;
  if ( MiVadSupportsPrivateCommit(a1) && !MiVadMapsLargeImage(v1) )
  {
    v4 = *(unsigned int *)(v3 + 52);
    LODWORD(v4) = v4 & 0x7FFFFFFF;
    if ( (v4 | ((unsigned __int64)*(unsigned __int8 *)(v2 + 34) << 31)) - 1 <= 0x7FFFFFFFBLL
      && (*(_DWORD *)(v3 + 48) & 8) == 0 )
    {
      return 1;
    }
  }
  return result;
}
