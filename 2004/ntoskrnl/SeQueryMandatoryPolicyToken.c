/*
 * XREFs of SeQueryMandatoryPolicyToken @ 0x14032C208
 * Callers:
 *     NtQueryInformationToken @ 0x14067EC80 (NtQueryInformationToken.c)
 *     SepCopyTokenAccessInformation @ 0x1406D7740 (SepCopyTokenAccessInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeQueryMandatoryPolicyToken(__int64 a1, _DWORD *a2)
{
  *a2 = *(_DWORD *)(a1 + 212);
  return 0LL;
}
