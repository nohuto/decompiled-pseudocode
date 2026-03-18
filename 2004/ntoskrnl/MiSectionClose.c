/*
 * XREFs of MiSectionClose @ 0x1405FEC40
 * Callers:
 *     <none>
 * Callees:
 *     MiSectionControlArea @ 0x140248900 (MiSectionControlArea.c)
 *     MiRemoveSharedCommitNode @ 0x1405FE430 (MiRemoveSharedCommitNode.c)
 */

void __fastcall MiSectionClose(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  unsigned __int64 v3; // r9

  v2 = (_QWORD *)MiSectionControlArea(a2);
  MiRemoveSharedCommitNode(v2, v3, 0);
}
