/*
 * XREFs of CmpFindSubKeyByName @ 0x140793664
 * Callers:
 *     CmpGetStateSepKeysRedirectionPathValue @ 0x140A58990 (CmpGetStateSepKeysRedirectionPathValue.c)
 *     CmpLoadServicesNode @ 0x140A58A98 (CmpLoadServicesNode.c)
 *     CmpFindGroupOrderList @ 0x140A58B3C (CmpFindGroupOrderList.c)
 *     CmpSortDriverList @ 0x140A58BE8 (CmpSortDriverList.c)
 *     CmpIsLoadType @ 0x140A598FC (CmpIsLoadType.c)
 *     CmpGetSystemControlValues @ 0x140A5A000 (CmpGetSystemControlValues.c)
 *     CmpLoadManufacturingModeNode @ 0x140A8CB74 (CmpLoadManufacturingModeNode.c)
 *     CmpLoadManufacturingProfileNode @ 0x140A8CC64 (CmpLoadManufacturingProfileNode.c)
 *     CmpLoadManufacturingProfileServicesNode @ 0x140A8CD2C (CmpLoadManufacturingProfileServicesNode.c)
 * Callees:
 *     CmpFindSubKeyByNameWithStatus @ 0x1406CFC28 (CmpFindSubKeyByNameWithStatus.c)
 */

__int64 __fastcall CmpFindSubKeyByName(__int64 a1, __int64 a2, unsigned __int16 *a3)
{
  unsigned int v4; // [rsp+48h] [rbp+20h] BYREF

  v4 = 0;
  CmpFindSubKeyByNameWithStatus(a1, a2, a3, &v4);
  return v4;
}
