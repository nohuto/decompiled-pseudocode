/*
 * XREFs of MiIncludeSharedCommit @ 0x14024A650
 * Callers:
 *     MiReleaseControlAreaCharges @ 0x14024B270 (MiReleaseControlAreaCharges.c)
 *     MiRemoveSharedCommitNode @ 0x1405FE430 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x1405FE6A0 (MiInsertSharedCommitNode.c)
 *     MiUpdateProcessSharedCommit @ 0x14060C100 (MiUpdateProcessSharedCommit.c)
 *     MiVadHasSharedCommit @ 0x1408D6430 (MiVadHasSharedCommit.c)
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
  if ( (v1 & 0x400) == 0 && a1 != qword_140C4CA28 && !*(_QWORD *)(a1 + 64) )
  {
    v2 = 0;
    for ( i = &unk_140C4C9C0; a1 != *i; i += 8 )
    {
      if ( ++v2 )
        return 1LL;
    }
  }
  return 0LL;
}
