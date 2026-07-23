/*
 * XREFs of _RtlImpersonateSelf@4 @ 0x4B2EBF50
 * Callers:
 *     <none>
 * Callees:
 *     _RtlImpersonateSelfEx@12 @ 0x4B2EBF70 (_RtlImpersonateSelfEx@12.c)
 */

NTSTATUS __cdecl RtlImpersonateSelf(SECURITY_IMPERSONATION_LEVEL ImpersonationLevel)
{
  return RtlImpersonateSelfEx(ImpersonationLevel, 0, 0);
}
