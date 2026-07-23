/*
 * XREFs of ExAllocatePool2 @ 0x1409B1280
 * Callers:
 *     KiLogUserCetSetContextIpValidationFailure @ 0x1403EC428 (KiLogUserCetSetContextIpValidationFailure.c)
 *     RtlAddDynamicEnforcedAddressRange @ 0x1405C76A4 (RtlAddDynamicEnforcedAddressRange.c)
 *     EtwTimLogControlProtectionUserModeReturnMismatch @ 0x1405C7CE0 (EtwTimLogControlProtectionUserModeReturnMismatch.c)
 *     EtwTimLogUserCetSetContextIpValidationFailure @ 0x1405C81D0 (EtwTimLogUserCetSetContextIpValidationFailure.c)
 *     NtSetInformationProcess @ 0x14069A210 (NtSetInformationProcess.c)
 *     RtlAddDynamicEHContinuationTarget @ 0x140916268 (RtlAddDynamicEHContinuationTarget.c)
 *     VerifierExAllocatePool2 @ 0x1409D19C0 (VerifierExAllocatePool2.c)
 *     VslConnectSwInterrupt @ 0x140A580D8 (VslConnectSwInterrupt.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1402421D0 (ExAllocatePoolWithQuotaTag.c)
 *     ExpAllocatePoolWithTagFromNode @ 0x14024FE80 (ExpAllocatePoolWithTagFromNode.c)
 *     RtlRaiseStatus @ 0x1402EE870 (RtlRaiseStatus.c)
 *     ExpPoolFlagsToPoolType @ 0x1409B10D0 (ExpPoolFlagsToPoolType.c)
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
