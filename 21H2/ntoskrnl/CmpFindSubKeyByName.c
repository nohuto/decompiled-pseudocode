/*
 * XREFs of CmpFindSubKeyByName @ 0x1407ACAD4
 * Callers:
 *     CmpGetSystemControlValues @ 0x140A60C0C (CmpGetSystemControlValues.c)
 *     CmpLoadServicesNode @ 0x140A612C8 (CmpLoadServicesNode.c)
 *     CmpFindGroupOrderList @ 0x140A6136C (CmpFindGroupOrderList.c)
 *     CmpSortDriverList @ 0x140A61418 (CmpSortDriverList.c)
 *     CmpIsLoadType @ 0x140A6212C (CmpIsLoadType.c)
 *     CmpGetStateSepKeysRedirectionPathValue @ 0x140A62390 (CmpGetStateSepKeysRedirectionPathValue.c)
 *     CmpLoadManufacturingModeNode @ 0x140A8FCCC (CmpLoadManufacturingModeNode.c)
 *     CmpLoadManufacturingProfileNode @ 0x140A8FDBC (CmpLoadManufacturingProfileNode.c)
 *     CmpLoadManufacturingProfileServicesNode @ 0x140A8FE84 (CmpLoadManufacturingProfileServicesNode.c)
 * Callees:
 *     CmpFindSubKeyByNameWithStatus @ 0x1407ACAF8 (CmpFindSubKeyByNameWithStatus.c)
 */

__int64 __fastcall CmpFindSubKeyByName(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // [rsp+48h] [rbp+20h] BYREF

  v4 = 0;
  CmpFindSubKeyByNameWithStatus(a1, a2, a3, &v4);
  return v4;
}
