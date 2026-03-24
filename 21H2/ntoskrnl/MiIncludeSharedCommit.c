/*
 * XREFs of MiIncludeSharedCommit @ 0x140314F30
 * Callers:
 *     MiReleaseControlAreaCharges @ 0x1403145C8 (MiReleaseControlAreaCharges.c)
 *     MiUpdateProcessSharedCommit @ 0x14069CF34 (MiUpdateProcessSharedCommit.c)
 *     MiRemoveSharedCommitNode @ 0x1406EB4E0 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x1406EB750 (MiInsertSharedCommitNode.c)
 *     MiVadHasSharedCommit @ 0x1408D9A30 (MiVadHasSharedCommit.c)
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
  if ( (v1 & 0x400) == 0 && a1 != qword_140C4CC28 && !*(_QWORD *)(a1 + 64) )
  {
    v2 = 0;
    for ( i = &unk_140C4CBC0; a1 != *i; i += 8 )
    {
      if ( ++v2 )
        return 1LL;
    }
  }
  return 0LL;
}
