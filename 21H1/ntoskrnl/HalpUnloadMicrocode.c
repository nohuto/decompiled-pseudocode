/*
 * XREFs of HalpUnloadMicrocode @ 0x140861880
 * Callers:
 *     HalpMcExportAndChargeNeededData @ 0x14077BB68 (HalpMcExportAndChargeNeededData.c)
 *     HalpLoadMicrocode @ 0x1408616D0 (HalpLoadMicrocode.c)
 * Callees:
 *     HalpMcSetUpdateInfoInvalid @ 0x1403A4D94 (HalpMcSetUpdateInfoInvalid.c)
 *     MmReturnChargesToLockPagedPool @ 0x1408C3B90 (MmReturnChargesToLockPagedPool.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
