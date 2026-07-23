/*
 * XREFs of ExAllocatePool2 @ 0x1409B7280
 * Callers:
 *     KiLogUserCetSetContextIpValidationFailure @ 0x1403F1750 (KiLogUserCetSetContextIpValidationFailure.c)
 *     SepSetProcessTrustLabelAceForToken @ 0x1403F6F78 (SepSetProcessTrustLabelAceForToken.c)
 *     sub_1405B1448 @ 0x1405B1448 (sub_1405B1448.c)
 *     NtCopyFileChunk @ 0x1405CBD40 (NtCopyFileChunk.c)
 *     PipIommuRetrieveSecondaryDeviceId @ 0x1405CCE28 (PipIommuRetrieveSecondaryDeviceId.c)
 *     RtlAddDynamicEnforcedAddressRange @ 0x1405CDAC0 (RtlAddDynamicEnforcedAddressRange.c)
 *     EtwTimLogControlProtectionUserModeReturnMismatch @ 0x1405CE1A4 (EtwTimLogControlProtectionUserModeReturnMismatch.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x1405CE694 (EtwTimLogRedirectionTrustPolicy.c)
 *     EtwTimLogUserCetSetContextIpValidationFailure @ 0x1405CF1EC (EtwTimLogUserCetSetContextIpValidationFailure.c)
 *     NtSetInformationProcess @ 0x14069AAC0 (NtSetInformationProcess.c)
 *     CmFcpManagerAllocateChangeSubscription @ 0x140880B40 (CmFcpManagerAllocateChangeSubscription.c)
 *     RtlAddDynamicEHContinuationTarget @ 0x14091D108 (RtlAddDynamicEHContinuationTarget.c)
 *     SepAddTokenOriginClaim @ 0x140925380 (SepAddTokenOriginClaim.c)
 *     VerifierExAllocatePool2 @ 0x1409D79F0 (VerifierExAllocatePool2.c)
 *     VslConnectSwInterrupt @ 0x140A5E4D8 (VslConnectSwInterrupt.c)
 *     SepVariableInitialization @ 0x140A667BC (SepVariableInitialization.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14020A530 (ExAllocatePoolWithQuotaTag.c)
 *     ExpAllocatePoolWithTagFromNode @ 0x140211FF0 (ExpAllocatePoolWithTagFromNode.c)
 *     RtlRaiseStatus @ 0x1402FB1C0 (RtlRaiseStatus.c)
 *     ExpPoolFlagsToPoolType @ 0x1409B70D0 (ExpPoolFlagsToPoolType.c)
 */

PVOID __fastcall ExAllocatePool2(__int64 a1, SIZE_T a2, ULONG a3)
{
  NTSTATUS v5; // eax
  POOL_TYPE PoolType[6]; // [rsp+30h] [rbp-18h] BYREF
  char v8; // [rsp+60h] [rbp+18h] BYREF
  char v9; // [rsp+68h] [rbp+20h] BYREF

  PoolType[0] = NonPagedPool;
  v9 = 0;
  v8 = 0;
  if ( a3 )
  {
    v5 = ExpPoolFlagsToPoolType(a1, 0, (int *)PoolType, &v9, &v8);
    if ( v5 >= 0 )
    {
      if ( v9 )
        return ExAllocatePoolWithQuotaTag(PoolType[0], a2, a3);
      else
        return (PVOID)ExpAllocatePoolWithTagFromNode(
                        PoolType[0],
                        a2,
                        a3,
                        KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0] | 0x80000000,
                        v8 != 0);
    }
  }
  else
  {
    v5 = -1073741811;
  }
  if ( (a1 & 0x20) != 0 )
    RtlRaiseStatus(v5);
  return 0LL;
}
