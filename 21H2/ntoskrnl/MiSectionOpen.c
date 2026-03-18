/*
 * XREFs of MiSectionOpen @ 0x1406FC2C0
 * Callers:
 *     <none>
 * Callees:
 *     MiSectionControlArea @ 0x140287970 (MiSectionControlArea.c)
 *     MiInsertSharedCommitNode @ 0x1406FC590 (MiInsertSharedCommitNode.c)
 */

__int64 __fastcall MiSectionOpen(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  __int64 v5; // r10

  v4 = MiSectionControlArea(a4);
  return MiInsertSharedCommitNode(v4, v5, 0LL);
}
