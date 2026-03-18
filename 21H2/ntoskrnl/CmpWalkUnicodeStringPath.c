/*
 * XREFs of CmpWalkUnicodeStringPath @ 0x14082F95C
 * Callers:
 *     CmpWalkPath @ 0x14082F914 (CmpWalkPath.c)
 *     CmpFindHiveSubKey @ 0x140B14608 (CmpFindHiveSubKey.c)
 * Callees:
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x14082F12C (CmpFindSubKeyByNameWithStatus.c)
 *     CmpGetNextName @ 0x14082FA20 (CmpGetNextName.c)
 */

__int64 __fastcall CmpWalkUnicodeStringPath(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, __int128 *a3)
{
  unsigned int v3; // edi
  __int64 CellFlat; // rax
  UNICODE_STRING v7; // [rsp+20h] [rbp-20h] BYREF
  __int128 v8; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v9; // [rsp+68h] [rbp+28h] BYREF
  __int64 v10; // [rsp+70h] [rbp+30h] BYREF

  v10 = 0xFFFFFFFFLL;
  v3 = BugCheckParameter4;
  v7 = 0LL;
  v8 = *a3;
  while ( 1 )
  {
    CmpGetNextName(&v8, &v7, &v9);
    if ( !v7.Length )
      break;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, v3, &v10);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3, v3, (unsigned int *)&v10);
    if ( CellFlat )
    {
      v9 = 0;
      CmpFindSubKeyByNameWithStatus(BugCheckParameter3, CellFlat, &v7, &v9);
      v3 = v9;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v10);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v10);
      if ( v3 != -1 )
        continue;
    }
    return 0xFFFFFFFFLL;
  }
  return v3;
}
