/*
 * XREFs of SeQueryMandatoryPolicyToken @ 0x1402D8738
 * Callers:
 *     NtQueryInformationToken @ 0x140606BA0 (NtQueryInformationToken.c)
 *     SepCopyTokenAccessInformation @ 0x1406726C0 (SepCopyTokenAccessInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeQueryMandatoryPolicyToken(__int64 a1, _DWORD *a2)
{
  *a2 = *(_DWORD *)(a1 + 212);
  return 0LL;
}
