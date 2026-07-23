/*
 * XREFs of SepSidInToken @ 0x14026D774
 * Callers:
 *     SepTokenIsOwner @ 0x14026D890 (SepTokenIsOwner.c)
 *     SepCheckForCriticalAceRemoval @ 0x140272120 (SepCheckForCriticalAceRemoval.c)
 *     SepMaximumAccessCheck @ 0x1402986C0 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x14029B4E0 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x140371904 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x140371A2C (SepNormalAccessCheckEx.c)
 *     SeMaximumAuditMask @ 0x1405909A4 (SeMaximumAuditMask.c)
 *     AuthzBasepMemberOf @ 0x1405BCC28 (AuthzBasepMemberOf.c)
 *     SeTokenIsAdmin @ 0x140626CB0 (SeTokenIsAdmin.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1406EDD20 (SepIsImpersonationAllowedDueToCapability.c)
 *     SeExamineSacl @ 0x14091DFD0 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x14091E900 (SepExamineSaclEx.c)
 * Callees:
 *     SepSidInTokenSidHash @ 0x14026D7C0 (SepSidInTokenSidHash.c)
 */

__int64 __fastcall SepSidInToken(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, char a6, char a7)
{
  return SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)((a5 != 0 ? 504LL : 232LL) + a1), a5, a6, a7);
}
