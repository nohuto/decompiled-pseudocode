/*
 * XREFs of MiSectionOpen @ 0x1405FEC10
 * Callers:
 *     <none>
 * Callees:
 *     MiSectionControlArea @ 0x140248900 (MiSectionControlArea.c)
 *     MiInsertSharedCommitNode @ 0x1405FE6A0 (MiInsertSharedCommitNode.c)
 */

__int64 __fastcall MiSectionOpen(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rax
  unsigned __int64 v5; // r10

  v4 = (_QWORD *)MiSectionControlArea(a4);
  return MiInsertSharedCommitNode(v4, v5, 0);
}
