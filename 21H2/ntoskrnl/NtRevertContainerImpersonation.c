/*
 * XREFs of NtRevertContainerImpersonation @ 0x140246140
 * Callers:
 *     IopProcessWorkItem @ 0x1402F8870 (IopProcessWorkItem.c)
 * Callees:
 *     PspRevertContainerImpersonation @ 0x1402A86B0 (PspRevertContainerImpersonation.c)
 */

__int64 NtRevertContainerImpersonation()
{
  return PspRevertContainerImpersonation((ULONG_PTR)KeGetCurrentThread());
}
