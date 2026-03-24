/*
 * XREFs of NtRevertContainerImpersonation @ 0x140581E20
 * Callers:
 *     <none>
 * Callees:
 *     PspRevertContainerImpersonation @ 0x14021FAE0 (PspRevertContainerImpersonation.c)
 */

__int64 __fastcall NtRevertContainerImpersonation(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  return PspRevertContainerImpersonation((ULONG_PTR)KeGetCurrentThread(), a2, a3, a4);
}
