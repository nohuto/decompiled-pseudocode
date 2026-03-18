/*
 * XREFs of CmpLoadManufacturingProfileServicesNode @ 0x140B4E4C8
 * Callers:
 *     CmpFindDrivers @ 0x140B141E0 (CmpFindDrivers.c)
 * Callees:
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     CmpFindSubKeyByName @ 0x14082F108 (CmpFindSubKeyByName.c)
 *     CmpLoadManufacturingProfileNode @ 0x140B4E3D8 (CmpLoadManufacturingProfileNode.c)
 */

char __fastcall CmpLoadManufacturingProfileServicesNode(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR a2,
        const WCHAR *a3,
        __int64 *a4,
        unsigned int *a5)
{
  unsigned int SubKeyByName; // edi
  __int64 CellPaged; // rax
  __int64 v10; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+38h] [rbp-10h] BYREF

  v11 = 0LL;
  v10 = 0xFFFFFFFFLL;
  if ( !CmpLoadManufacturingProfileNode(BugCheckParameter3, a2, a3, &v11, (unsigned int *)&v10) )
    return 0;
  SubKeyByName = CmpFindSubKeyByName(BugCheckParameter3);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v10);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v10);
  if ( SubKeyByName != -1
    && ((*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0
      ? (CellPaged = HvpGetCellPaged(BugCheckParameter3, SubKeyByName, a5))
      : (CellPaged = HvpGetCellFlat(BugCheckParameter3, SubKeyByName, a5)),
        (*a4 = CellPaged) != 0) )
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
