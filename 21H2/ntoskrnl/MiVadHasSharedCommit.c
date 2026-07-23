/*
 * XREFs of MiVadHasSharedCommit @ 0x1408D9B90
 * Callers:
 *     MiAllocateChildVads @ 0x1408D8BF0 (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x1408D9688 (MiDeletePartialCloneVads.c)
 * Callees:
 *     MiIncludeSharedCommit @ 0x14031FC80 (MiIncludeSharedCommit.c)
 */

_BOOL8 __fastcall MiVadHasSharedCommit(__int64 a1)
{
  int v1; // edx
  __int64 *v2; // rcx
  _BOOL8 result; // rax

  v1 = *(_DWORD *)(a1 + 48);
  result = 1;
  if ( (v1 & 0x70) != 0x20 )
  {
    if ( (v1 & 0x100000) != 0 )
      return 0;
    if ( *(__int64 *)(a1 + 120) < 0 )
      return 0;
    v2 = *(__int64 **)(a1 + 72);
    if ( !v2 || !(unsigned int)MiIncludeSharedCommit(*v2) )
      return 0;
  }
  return result;
}
