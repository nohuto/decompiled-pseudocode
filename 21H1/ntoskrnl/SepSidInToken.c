/*
 * XREFs of SepSidInToken @ 0x140204C10
 * Callers:
 *     SepTokenIsOwner @ 0x140204D30 (SepTokenIsOwner.c)
 *     SepMaximumAccessCheck @ 0x140205D00 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x1402089D0 (SepNormalAccessCheck.c)
 *     SepCheckForCriticalAceRemoval @ 0x1402E1A50 (SepCheckForCriticalAceRemoval.c)
 *     SepMaximumAccessCheckEx @ 0x140370CD4 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x140370DFC (SepNormalAccessCheckEx.c)
 *     SeMaximumAuditMask @ 0x1405902B4 (SeMaximumAuditMask.c)
 *     AuthzBasepMemberOf @ 0x1405BC508 (AuthzBasepMemberOf.c)
 *     SeTokenIsAdmin @ 0x14064BC20 (SeTokenIsAdmin.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1406CCA20 (SepIsImpersonationAllowedDueToCapability.c)
 *     SeExamineSacl @ 0x14091CD20 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x14091D650 (SepExamineSaclEx.c)
 * Callees:
 *     SepSidInTokenSidHash @ 0x140204C5C (SepSidInTokenSidHash.c)
 */

__int64 __fastcall SepSidInToken(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, char a6, char a7)
{
  return SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)((a5 != 0 ? 504LL : 232LL) + a1), a5, a6, a7);
}
