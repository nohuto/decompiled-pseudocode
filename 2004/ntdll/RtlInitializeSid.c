/*
 * XREFs of RtlInitializeSid @ 0x180040060
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x18001FD40 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlpCompareKnownAces @ 0x180038240 (RtlpCompareKnownAces.c)
 *     RtlCreateServiceSid @ 0x18003FA70 (RtlCreateServiceSid.c)
 *     RtlpOwnerAcesPresent @ 0x18003FB88 (RtlpOwnerAcesPresent.c)
 *     RtlCapabilityCheck @ 0x18003FC80 (RtlCapabilityCheck.c)
 *     RtlInitializeSidEx @ 0x180040000 (RtlInitializeSidEx.c)
 *     RtlGetAppContainerParent @ 0x180043E00 (RtlGetAppContainerParent.c)
 *     RtlpSetSecurityObject @ 0x1800766AC (RtlpSetSecurityObject.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x180079270 (RtlpCapabilityCheckSystemCapability.c)
 *     RtlCreateVirtualAccountSid @ 0x180084030 (RtlCreateVirtualAccountSid.c)
 *     RtlDefaultNpAcl @ 0x1800D6950 (RtlDefaultNpAcl.c)
 *     WerpAllocateAndInitializeSid @ 0x1800DD78C (WerpAllocateAndInitializeSid.c)
 *     RtlpCompareKnownObjectAces @ 0x1800E6F58 (RtlpCompareKnownObjectAces.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800E75EC (RtlpConvertAclToAutoInherit.c)
 *     RtlpValidLabelSubjectContext @ 0x1800E88B0 (RtlpValidLabelSubjectContext.c)
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
