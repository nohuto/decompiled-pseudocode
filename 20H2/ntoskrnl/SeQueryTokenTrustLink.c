/*
 * XREFs of SeQueryTokenTrustLink @ 0x14029F2A8
 * Callers:
 *     PsRestoreImpersonation @ 0x14067E6F0 (PsRestoreImpersonation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeQueryTokenTrustLink(__int64 a1)
{
  return *(_QWORD *)(a1 + 1112);
}
