/*
 * XREFs of EtwpCoverageResetWorkItemCallback @ 0x140935730
 * Callers:
 *     <none>
 * Callees:
 *     EtwpCoverageReset @ 0x140935274 (EtwpCoverageReset.c)
 */

struct _KTHREAD *__fastcall EtwpCoverageResetWorkItemCallback(__int64 a1)
{
  *(_DWORD *)(EtwpCoverageNonPagedContext + 8) = 0;
  return EtwpCoverageReset(a1, 2);
}
