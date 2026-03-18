/*
 * XREFs of CmpMarkCurrentValueDirty @ 0x14083D474
 * Callers:
 *     CmpLoadHiveThread @ 0x14083C870 (CmpLoadHiveThread.c)
 * Callees:
 *     CmpFindValueByName @ 0x1406B4108 (CmpFindValueByName.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     HvpMarkCellDirty @ 0x14071F300 (HvpMarkCellDirty.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x14082F12C (CmpFindSubKeyByNameWithStatus.c)
 */

__int64 __fastcall CmpMarkCurrentValueDirty(ULONG_PTR BugCheckParameter3, ULONG_PTR a2)
{
  __int64 result; // rax
  unsigned int ValueByName; // edi
  ULONG_PTR BugCheckParameter4; // [rsp+30h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+20h] BYREF

  v6 = 0xFFFFFFFFLL;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    result = HvpGetCellFlat(BugCheckParameter3, a2, &v6);
  else
    result = HvpGetCellPaged(BugCheckParameter3, a2, (unsigned int *)&v6);
  if ( result )
  {
    LODWORD(BugCheckParameter4) = 0;
    CmpFindSubKeyByNameWithStatus(
      BugCheckParameter3,
      result,
      (const UNICODE_STRING *)&CmpSelectString,
      &BugCheckParameter4);
    result = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
           ? HvpReleaseCellFlat(BugCheckParameter3, &v6)
           : HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v6);
    if ( (_DWORD)BugCheckParameter4 != -1 )
    {
      result = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
             ? HvpGetCellFlat(BugCheckParameter3, (unsigned int)BugCheckParameter4, &v6)
             : HvpGetCellPaged(BugCheckParameter3, BugCheckParameter4, (unsigned int *)&v6);
      if ( result )
      {
        ValueByName = CmpFindValueByName(BugCheckParameter3, result, (int)&CmpCurrentString);
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          result = HvpReleaseCellFlat(BugCheckParameter3, &v6);
        else
          result = HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v6);
        if ( ValueByName != -1 )
          return HvpMarkCellDirty(BugCheckParameter3, ValueByName, 0);
      }
    }
  }
  return result;
}
