/*
 * XREFs of SepSidInToken @ 0x1402057A0
 * Callers:
 *     SepCheckForCriticalAceRemoval @ 0x140204C68 (SepCheckForCriticalAceRemoval.c)
 *     SepMaximumAccessCheck @ 0x140204FB0 (SepMaximumAccessCheck.c)
 *     SepTokenIsOwner @ 0x1402058C0 (SepTokenIsOwner.c)
 *     SepNormalAccessCheck @ 0x140226B20 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x140373854 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x14037397C (SepNormalAccessCheckEx.c)
 *     SeMaximumAuditMask @ 0x140594444 (SeMaximumAuditMask.c)
 *     AuthzBasepMemberOf @ 0x1405C0788 (AuthzBasepMemberOf.c)
 *     SeTokenIsAdmin @ 0x1405E34A0 (SeTokenIsAdmin.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1406C1CA0 (SepIsImpersonationAllowedDueToCapability.c)
 *     SeExamineSacl @ 0x140923C50 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x140924580 (SepExamineSaclEx.c)
 * Callees:
 *     SepSidInTokenSidHash @ 0x1402057EC (SepSidInTokenSidHash.c)
 */

__int64 __fastcall SepSidInToken(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, char a6, char a7)
{
  return SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)((a5 != 0 ? 504LL : 232LL) + a1), a5, a6, a7);
}
