/*
 * XREFs of MiIsVadEligibleForCommitRelease @ 0x140580028
 * Callers:
 *     MiUserFault @ 0x14031CD90 (MiUserFault.c)
 *     MiProcessCommitIntact @ 0x140580CE0 (MiProcessCommitIntact.c)
 *     MiReleaseCommitForResetPages @ 0x140580FA4 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140581158 (MiReleaseOutSwappedProcessCommit.c)
 * Callees:
 *     MiVadMapsLargeImage @ 0x14030EC40 (MiVadMapsLargeImage.c)
 *     MiVadSupportsPrivateCommit @ 0x14032E910 (MiVadSupportsPrivateCommit.c)
 */

_BOOL8 __fastcall MiIsVadEligibleForCommitRelease(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // r8
  __int64 v3; // rax
  _BOOL8 result; // rax

  result = 0;
  if ( MiVadSupportsPrivateCommit(a1) && !MiVadMapsLargeImage(v1) )
  {
    v3 = *(unsigned int *)(v2 + 52);
    LODWORD(v3) = v3 & 0x7FFFFFFF;
    if ( (v3 | ((unsigned __int64)*(unsigned __int8 *)(v2 + 34) << 31)) - 1 <= 0x7FFFFFFFBLL
      && (*(_DWORD *)(v2 + 48) & 8) == 0 )
    {
      return 1;
    }
  }
  return result;
}
