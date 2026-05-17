/*
 * XREFs of RtlInitializeSid @ 0x180040070
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x18001FD40 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlpCompareKnownAces @ 0x180038240 (RtlpCompareKnownAces.c)
 *     RtlCreateServiceSid @ 0x18003FA80 (RtlCreateServiceSid.c)
 *     RtlpOwnerAcesPresent @ 0x18003FB98 (RtlpOwnerAcesPresent.c)
 *     RtlCapabilityCheck @ 0x18003FC90 (RtlCapabilityCheck.c)
 *     RtlInitializeSidEx @ 0x180040010 (RtlInitializeSidEx.c)
 *     RtlGetAppContainerParent @ 0x180043E10 (RtlGetAppContainerParent.c)
 *     RtlpSetSecurityObject @ 0x1800777DC (RtlpSetSecurityObject.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x18007A3A0 (RtlpCapabilityCheckSystemCapability.c)
 *     RtlCreateVirtualAccountSid @ 0x180084530 (RtlCreateVirtualAccountSid.c)
 *     RtlDefaultNpAcl @ 0x1800D6AA0 (RtlDefaultNpAcl.c)
 *     WerpAllocateAndInitializeSid @ 0x1800DD8DC (WerpAllocateAndInitializeSid.c)
 *     RtlpCompareKnownObjectAces @ 0x1800E7290 (RtlpCompareKnownObjectAces.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800E7924 (RtlpConvertAclToAutoInherit.c)
 *     RtlpValidLabelSubjectContext @ 0x1800E8C44 (RtlpValidLabelSubjectContext.c)
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
