/*
 * XREFs of MiSectionClose @ 0x140633C80
 * Callers:
 *     <none>
 * Callees:
 *     MiSectionControlArea @ 0x1402A1930 (MiSectionControlArea.c)
 *     MiRemoveSharedCommitNode @ 0x140633470 (MiRemoveSharedCommitNode.c)
 */

void __fastcall MiSectionClose(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  unsigned __int64 v3; // r9

  v2 = (_QWORD *)MiSectionControlArea(a2);
  MiRemoveSharedCommitNode(v2, v3, 0);
}
