/*
 * XREFs of MiIncludeSharedCommit @ 0x14022E8F0
 * Callers:
 *     MiReleaseControlAreaCharges @ 0x14029E6D0 (MiReleaseControlAreaCharges.c)
 *     MiRemoveSharedCommitNode @ 0x140623DA0 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x140624010 (MiInsertSharedCommitNode.c)
 *     MiUpdateProcessSharedCommit @ 0x1406B2D50 (MiUpdateProcessSharedCommit.c)
 *     MiVadHasSharedCommit @ 0x1408DC270 (MiVadHasSharedCommit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIncludeSharedCommit(__int64 a1)
{
  int v1; // eax
  int v2; // edx
  _QWORD *i; // rax

  v1 = *(_DWORD *)(a1 + 56);
  if ( (v1 & 0x20) != 0 )
    return 1LL;
  if ( (v1 & 0x400) == 0 && a1 != qword_140C4CAA8 && !*(_QWORD *)(a1 + 64) )
  {
    v2 = 0;
    for ( i = &unk_140C4CA40; a1 != *i; i += 8 )
    {
      if ( ++v2 )
        return 1LL;
    }
  }
  return 0LL;
}
