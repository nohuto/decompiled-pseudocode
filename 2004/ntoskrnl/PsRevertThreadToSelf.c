/*
 * XREFs of PsRevertThreadToSelf @ 0x1409054C0
 * Callers:
 *     <none>
 * Callees:
 *     PsImpersonateClient @ 0x140681160 (PsImpersonateClient.c)
 */

NTSTATUS __fastcall PsRevertThreadToSelf(struct _KTHREAD *a1)
{
  return PsImpersonateClient(a1, 0LL, 0, 0, SecurityImpersonation);
}
