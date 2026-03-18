/*
 * XREFs of MiSectionOpen @ 0x140633C50
 * Callers:
 *     <none>
 * Callees:
 *     MiSectionControlArea @ 0x1402A1930 (MiSectionControlArea.c)
 *     MiInsertSharedCommitNode @ 0x1406336E0 (MiInsertSharedCommitNode.c)
 */

__int64 __fastcall MiSectionOpen(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rax
  unsigned __int64 v5; // r10

  v4 = (_QWORD *)MiSectionControlArea(a4);
  return MiInsertSharedCommitNode(v4, v5, 0);
}
