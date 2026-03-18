/*
 * XREFs of CmpFindSubKeyByName @ 0x14078B224
 * Callers:
 *     CmpGetSystemControlValues @ 0x140A49A40 (CmpGetSystemControlValues.c)
 *     CmpLoadServicesNode @ 0x140A4A0FC (CmpLoadServicesNode.c)
 *     CmpFindGroupOrderList @ 0x140A4A1A0 (CmpFindGroupOrderList.c)
 *     CmpSortDriverList @ 0x140A4A24C (CmpSortDriverList.c)
 *     CmpIsLoadType @ 0x140A4AF60 (CmpIsLoadType.c)
 *     CmpGetStateSepKeysRedirectionPathValue @ 0x140A4B1C4 (CmpGetStateSepKeysRedirectionPathValue.c)
 *     CmpLoadManufacturingModeNode @ 0x140A8C15C (CmpLoadManufacturingModeNode.c)
 *     CmpLoadManufacturingProfileNode @ 0x140A8C24C (CmpLoadManufacturingProfileNode.c)
 *     CmpLoadManufacturingProfileServicesNode @ 0x140A8C314 (CmpLoadManufacturingProfileServicesNode.c)
 * Callees:
 *     CmpFindSubKeyByNameWithStatus @ 0x14063F268 (CmpFindSubKeyByNameWithStatus.c)
 */

__int64 __fastcall CmpFindSubKeyByName(__int64 a1, __int64 a2, unsigned __int16 *a3)
{
  unsigned int v4; // [rsp+48h] [rbp+20h] BYREF

  v4 = 0;
  CmpFindSubKeyByNameWithStatus(a1, a2, a3, &v4);
  return v4;
}
