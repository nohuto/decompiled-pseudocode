/*
 * XREFs of NtRevertContainerImpersonation @ 0x14057C3A0
 * Callers:
 *     <none>
 * Callees:
 *     PspRevertContainerImpersonation @ 0x14026D9F0 (PspRevertContainerImpersonation.c)
 */

NTSTATUS NtRevertContainerImpersonation(void)
{
  __int64 v0; // rdx
  __int64 v1; // r8
  _DWORD *v2; // r9

  return PspRevertContainerImpersonation((ULONG_PTR)KeGetCurrentThread(), v0, v1, v2);
}
