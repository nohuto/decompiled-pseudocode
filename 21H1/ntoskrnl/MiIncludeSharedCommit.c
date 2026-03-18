/*
 * XREFs of MiIncludeSharedCommit @ 0x1402A3680
 * Callers:
 *     MiReleaseControlAreaCharges @ 0x1402A42A0 (MiReleaseControlAreaCharges.c)
 *     MiRemoveSharedCommitNode @ 0x140633470 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x1406336E0 (MiInsertSharedCommitNode.c)
 *     MiUpdateProcessSharedCommit @ 0x140641250 (MiUpdateProcessSharedCommit.c)
 *     MiVadHasSharedCommit @ 0x1408D50E0 (MiVadHasSharedCommit.c)
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
  if ( (v1 & 0x400) == 0 && a1 != qword_140C4CB68 && !*(_QWORD *)(a1 + 64) )
  {
    v2 = 0;
    for ( i = &unk_140C4CB00; a1 != *i; i += 8 )
    {
      if ( ++v2 )
        return 1LL;
    }
  }
  return 0LL;
}
