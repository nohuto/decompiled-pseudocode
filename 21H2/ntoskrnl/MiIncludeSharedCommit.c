/*
 * XREFs of MiIncludeSharedCommit @ 0x14031FC80
 * Callers:
 *     MiReleaseControlAreaCharges @ 0x14031F318 (MiReleaseControlAreaCharges.c)
 *     MiUpdateProcessSharedCommit @ 0x1405FC004 (MiUpdateProcessSharedCommit.c)
 *     MiRemoveSharedCommitNode @ 0x1407028C0 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x140702B30 (MiInsertSharedCommitNode.c)
 *     MiVadHasSharedCommit @ 0x1408D9B90 (MiVadHasSharedCommit.c)
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
  if ( (v1 & 0x400) == 0 && a1 != qword_140C4CC68 && !*(_QWORD *)(a1 + 64) )
  {
    v2 = 0;
    for ( i = &unk_140C4CC00; a1 != *i; i += 8 )
    {
      if ( ++v2 )
        return 1LL;
    }
  }
  return 0LL;
}
