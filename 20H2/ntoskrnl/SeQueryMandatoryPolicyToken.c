/*
 * XREFs of SeQueryMandatoryPolicyToken @ 0x140202B98
 * Callers:
 *     SepCopyTokenAccessInformation @ 0x1405D657C (SepCopyTokenAccessInformation.c)
 *     NtQueryInformationToken @ 0x14061D520 (NtQueryInformationToken.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeQueryMandatoryPolicyToken(__int64 a1, _DWORD *a2)
{
  *a2 = *(_DWORD *)(a1 + 212);
  return 0LL;
}
