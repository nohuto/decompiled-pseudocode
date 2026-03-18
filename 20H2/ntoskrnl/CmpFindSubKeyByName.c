/*
 * XREFs of CmpFindSubKeyByName @ 0x1407A2744
 * Callers:
 *     CmpGetStateSepKeysRedirectionPathValue @ 0x140A5ED90 (CmpGetStateSepKeysRedirectionPathValue.c)
 *     CmpLoadServicesNode @ 0x140A5EE98 (CmpLoadServicesNode.c)
 *     CmpFindGroupOrderList @ 0x140A5EF3C (CmpFindGroupOrderList.c)
 *     CmpSortDriverList @ 0x140A5EFE8 (CmpSortDriverList.c)
 *     CmpIsLoadType @ 0x140A5FCFC (CmpIsLoadType.c)
 *     CmpGetSystemControlValues @ 0x140A60400 (CmpGetSystemControlValues.c)
 *     CmpLoadManufacturingModeNode @ 0x140A91E6C (CmpLoadManufacturingModeNode.c)
 *     CmpLoadManufacturingProfileNode @ 0x140A91F5C (CmpLoadManufacturingProfileNode.c)
 *     CmpLoadManufacturingProfileServicesNode @ 0x140A92024 (CmpLoadManufacturingProfileServicesNode.c)
 * Callees:
 *     CmpFindSubKeyByNameWithStatus @ 0x1406C43B8 (CmpFindSubKeyByNameWithStatus.c)
 */

__int64 __fastcall CmpFindSubKeyByName(__int64 a1, __int64 a2, unsigned __int16 *a3)
{
  unsigned int v4; // [rsp+48h] [rbp+20h] BYREF

  v4 = 0;
  CmpFindSubKeyByNameWithStatus(a1, a2, a3, &v4);
  return v4;
}
