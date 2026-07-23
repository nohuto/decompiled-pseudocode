/*
 * XREFs of ExAllocatePool2 @ 0x1409B51B0
 * Callers:
 *     EtwpAllocateFreeBuffers @ 0x14029E658 (EtwpAllocateFreeBuffers.c)
 *     KiLogUserCetSetContextIpValidationFailure @ 0x1403F2C54 (KiLogUserCetSetContextIpValidationFailure.c)
 *     SepSetProcessTrustLabelAceForToken @ 0x1403F8C74 (SepSetProcessTrustLabelAceForToken.c)
 *     sub_1405B3078 @ 0x1405B3078 (sub_1405B3078.c)
 *     NtCopyFileChunk @ 0x1405CDD80 (NtCopyFileChunk.c)
 *     RtlAddDynamicEnforcedAddressRange @ 0x1405CFDB0 (RtlAddDynamicEnforcedAddressRange.c)
 *     EtwTimLogControlProtectionUserModeReturnMismatch @ 0x1405D0494 (EtwTimLogControlProtectionUserModeReturnMismatch.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x1405D09D0 (EtwTimLogRedirectionTrustPolicy.c)
 *     EtwTimLogUserCetSetContextIpValidationFailure @ 0x1405D1528 (EtwTimLogUserCetSetContextIpValidationFailure.c)
 *     VrpPostEnumerateKey @ 0x1405D37A4 (VrpPostEnumerateKey.c)
 *     NtSetInformationProcess @ 0x140721890 (NtSetInformationProcess.c)
 *     CmFcpManagerAllocateChangeSubscription @ 0x14087E640 (CmFcpManagerAllocateChangeSubscription.c)
 *     RtlAddDynamicEHContinuationTarget @ 0x14091AA48 (RtlAddDynamicEHContinuationTarget.c)
 *     SepAddTokenOriginClaim @ 0x140922CB0 (SepAddTokenOriginClaim.c)
 *     VerifierExAllocatePool2 @ 0x1409D59E0 (VerifierExAllocatePool2.c)
 *     SepVariableInitialization @ 0x140A49B6C (SepVariableInitialization.c)
 *     VslConnectSwInterrupt @ 0x140A60044 (VslConnectSwInterrupt.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140212910 (RtlRaiseStatus.c)
 *     ExpAllocatePoolWithTagFromNode @ 0x140346ED0 (ExpAllocatePoolWithTagFromNode.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14035DD70 (ExAllocatePoolWithQuotaTag.c)
 *     ExpPoolFlagsToPoolType @ 0x1409B5030 (ExpPoolFlagsToPoolType.c)
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
