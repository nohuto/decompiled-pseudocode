/*
 * XREFs of NtRevertContainerImpersonation @ 0x14057C9E0
 * Callers:
 *     <none>
 * Callees:
 *     PspRevertContainerImpersonation @ 0x1402149A0 (PspRevertContainerImpersonation.c)
 */

__int64 __fastcall NtRevertContainerImpersonation(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  return PspRevertContainerImpersonation((ULONG_PTR)KeGetCurrentThread(), a2, a3, a4);
}
