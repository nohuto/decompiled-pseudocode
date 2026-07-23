/*
 * XREFs of ExAllocatePool2 @ 0x1409B1280
 * Callers:
 *     KiLogUserCetSetContextIpValidationFailure @ 0x1403ED560 (KiLogUserCetSetContextIpValidationFailure.c)
 *     RtlAddDynamicEnforcedAddressRange @ 0x1405C86C4 (RtlAddDynamicEnforcedAddressRange.c)
 *     EtwTimLogControlProtectionUserModeReturnMismatch @ 0x1405C8D00 (EtwTimLogControlProtectionUserModeReturnMismatch.c)
 *     EtwTimLogUserCetSetContextIpValidationFailure @ 0x1405C91F0 (EtwTimLogUserCetSetContextIpValidationFailure.c)
 *     NtSetInformationProcess @ 0x1406A02E0 (NtSetInformationProcess.c)
 *     CmFcpManagerAllocateChangeSubscription @ 0x14087AFD0 (CmFcpManagerAllocateChangeSubscription.c)
 *     RtlAddDynamicEHContinuationTarget @ 0x1409174D8 (RtlAddDynamicEHContinuationTarget.c)
 *     VerifierExAllocatePool2 @ 0x1409D19D0 (VerifierExAllocatePool2.c)
 *     VslConnectSwInterrupt @ 0x140A4F53C (VslConnectSwInterrupt.c)
 * Callees:
 *     ExpAllocatePoolWithTagFromNode @ 0x14028C720 (ExpAllocatePoolWithTagFromNode.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140297DA0 (ExAllocatePoolWithQuotaTag.c)
 *     RtlRaiseStatus @ 0x1403281A0 (RtlRaiseStatus.c)
 *     ExpPoolFlagsToPoolType @ 0x1409B1010 (ExpPoolFlagsToPoolType.c)
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
