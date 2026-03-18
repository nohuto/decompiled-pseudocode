/*
 * XREFs of HalpUnloadMicrocode @ 0x140862BA0
 * Callers:
 *     HalpMcExportAndChargeNeededData @ 0x140784568 (HalpMcExportAndChargeNeededData.c)
 *     HalpLoadMicrocode @ 0x1408629F0 (HalpLoadMicrocode.c)
 * Callees:
 *     HalpMcSetUpdateInfoInvalid @ 0x1403ABE54 (HalpMcSetUpdateInfoInvalid.c)
 *     MmReturnChargesToLockPagedPool @ 0x1408C4EE0 (MmReturnChargesToLockPagedPool.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 HalpUnloadMicrocode()
{
  PVOID v0; // rbx

  HalpMcUpdateMicrocodeFunc = 0LL;
  HalpMcUpdateMicrocodeFuncEx = 0LL;
  HalpMcUpdateLockFunc = 0LL;
  HalpMcUpdateUnlockFunc = 0LL;
  HalpMcUpdatePostUpdateFunc = 0LL;
  HalpMcUpdateExportDataFunc = 0LL;
  HalpMcSetUpdateInfoInvalid();
  v0 = HalpMcUpdateData;
  if ( HalpMcUpdateData )
  {
    HalpMcUpdateData = 0LL;
    if ( HalpMcUpdateDataCharged )
    {
      MmReturnChargesToLockPagedPool(v0, (unsigned int)HalpMcUpdateDataSize);
      HalpMcUpdateDataCharged = 0;
    }
    LODWORD(HalpMcUpdateDataSize) = 0;
    ExFreePoolWithTag(v0, 0);
  }
  return 0LL;
}
