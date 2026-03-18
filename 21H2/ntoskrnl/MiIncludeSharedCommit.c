/*
 * XREFs of MiIncludeSharedCommit @ 0x140287930
 * Callers:
 *     MiReleaseControlAreaCharges @ 0x1402874E8 (MiReleaseControlAreaCharges.c)
 *     MiUpdateProcessSharedCommit @ 0x1406A43A4 (MiUpdateProcessSharedCommit.c)
 *     MiRemoveSharedCommitNode @ 0x1406FC2F0 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x1406FC590 (MiInsertSharedCommitNode.c)
 *     MiVadHasSharedCommit @ 0x140983978 (MiVadHasSharedCommit.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIncludeSharedCommit(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 56);
  return (v1 & 0x20) != 0
      || (v1 & 0x400) == 0 && a1 != qword_140C4F3E0 && !*(_QWORD *)(a1 + 64) && a1 != qword_140C4F378;
}
