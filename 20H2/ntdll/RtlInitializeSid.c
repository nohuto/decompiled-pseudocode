/*
 * XREFs of RtlInitializeSid @ 0x1800400B0
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x18001FD40 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlpCompareKnownAces @ 0x180038240 (RtlpCompareKnownAces.c)
 *     RtlCreateServiceSid @ 0x18003FAC0 (RtlCreateServiceSid.c)
 *     RtlpOwnerAcesPresent @ 0x18003FBD8 (RtlpOwnerAcesPresent.c)
 *     RtlCapabilityCheck @ 0x18003FCD0 (RtlCapabilityCheck.c)
 *     RtlInitializeSidEx @ 0x180040050 (RtlInitializeSidEx.c)
 *     RtlGetAppContainerParent @ 0x180043E50 (RtlGetAppContainerParent.c)
 *     RtlpSetSecurityObject @ 0x1800767AC (RtlpSetSecurityObject.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x180079370 (RtlpCapabilityCheckSystemCapability.c)
 *     RtlCreateVirtualAccountSid @ 0x180084130 (RtlCreateVirtualAccountSid.c)
 *     RtlDefaultNpAcl @ 0x1800D6CF0 (RtlDefaultNpAcl.c)
 *     WerpAllocateAndInitializeSid @ 0x1800DDB2C (WerpAllocateAndInitializeSid.c)
 *     RtlpCompareKnownObjectAces @ 0x1800E7400 (RtlpCompareKnownObjectAces.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800E7A94 (RtlpConvertAclToAutoInherit.c)
 *     RtlpValidLabelSubjectContext @ 0x1800E8DB4 (RtlpValidLabelSubjectContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInitializeSid(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  if ( a3 > 0xFu )
    return 3221225485LL;
  *(_BYTE *)(a1 + 1) = a3;
  *(_BYTE *)a1 = 1;
  *(_DWORD *)(a1 + 2) = *(_DWORD *)a2;
  *(_WORD *)(a1 + 6) = *(_WORD *)(a2 + 4);
  return 0LL;
}
