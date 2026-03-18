/*
 * XREFs of MiSectionOpen @ 0x140624580
 * Callers:
 *     <none>
 * Callees:
 *     MiSectionControlArea @ 0x14022C010 (MiSectionControlArea.c)
 *     MiInsertSharedCommitNode @ 0x140624010 (MiInsertSharedCommitNode.c)
 */

__int64 __fastcall MiSectionOpen(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rax
  unsigned __int64 v5; // r10

  v4 = (_QWORD *)MiSectionControlArea(a4);
  return MiInsertSharedCommitNode(v4, v5, 0);
}
