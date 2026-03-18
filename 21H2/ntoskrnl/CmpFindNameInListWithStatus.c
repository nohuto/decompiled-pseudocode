/*
 * XREFs of CmpFindNameInListWithStatus @ 0x1407221B0
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x1406803C0 (CmpGetSymbolicLinkTarget.c)
 *     CmDeleteValueKey @ 0x140714E58 (CmDeleteValueKey.c)
 *     CmpFindNameInList @ 0x14071F68C (CmpFindNameInList.c)
 *     CmSetValueKey @ 0x140720260 (CmSetValueKey.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x140721FFC (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x14091210C (CmQueryMultipleValueForLayeredKey.c)
 *     CmpMergeKeyValues @ 0x14091FCD8 (CmpMergeKeyValues.c)
 * Callees:
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpFindNameInListCellWithStatus @ 0x140722280 (CmpFindNameInListCellWithStatus.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407C97FC (HvpGetCellContextReinitialize.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 */

__int64 __fastcall CmpFindNameInListWithStatus(
        ULONG_PTR BugCheckParameter3,
        _DWORD *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v9; // rdi
  __int64 CellFlat; // rax
  unsigned int NameInListCellWithStatus; // esi
  __int64 v13; // [rsp+68h] [rbp+10h] BYREF

  v13 = 0LL;
  v9 = 0LL;
  HvpGetCellContextReinitialize(&v13);
  if ( *a2 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, (unsigned int)a2[1], &v13);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3);
    v9 = CellFlat;
  }
  NameInListCellWithStatus = CmpFindNameInListCellWithStatus(BugCheckParameter3, a4, a5, a6);
  if ( v9 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v13);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v13);
  }
  return NameInListCellWithStatus;
}
