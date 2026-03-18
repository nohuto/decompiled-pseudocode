/*
 * XREFs of CmpSyncSubKeysAfterDelete @ 0x140920AB4
 * Callers:
 *     CmpCopySyncTree2 @ 0x14091EEC4 (CmpCopySyncTree2.c)
 * Callees:
 *     CmpFindSubKeyByNumber @ 0x1406BF278 (CmpFindSubKeyByNumber.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpFreeKeyByCell @ 0x1407164DC (CmpFreeKeyByCell.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x14082F12C (CmpFindSubKeyByNameWithStatus.c)
 *     CmpInitializeKeyNameString @ 0x14091F960 (CmpInitializeKeyNameString.c)
 *     CmpDeleteTree @ 0x1409222C0 (CmpDeleteTree.c)
 */

bool __fastcall CmpSyncSubKeysAfterDelete(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        ULONG_PTR a3,
        _DWORD *a4,
        _WORD *a5)
{
  unsigned int v5; // r14d
  int SubKeyByNumber; // ebx
  ULONG_PTR CellFlat; // rax
  ULONG_PTR v12; // rbx
  unsigned int BugCheckParameter4; // [rsp+20h] [rbp-20h] BYREF
  int BugCheckParameter4_4; // [rsp+24h] [rbp-1Ch] BYREF
  __int64 v16; // [rsp+28h] [rbp-18h] BYREF
  UNICODE_STRING v17; // [rsp+30h] [rbp-10h] BYREF

  BugCheckParameter4 = 0;
  v5 = 0;
  v16 = 0xFFFFFFFFLL;
  v17 = 0LL;
  while ( 1 )
  {
    SubKeyByNumber = CmpFindSubKeyByNumber(a3, a4, v5, &BugCheckParameter4);
    if ( SubKeyByNumber < 0 || BugCheckParameter4 == -1 )
      break;
    if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(a3, BugCheckParameter4, &v16);
    else
      CellFlat = HvpGetCellPaged(a3, BugCheckParameter4, (unsigned int *)&v16);
    v12 = CellFlat;
    if ( !CellFlat )
    {
      SubKeyByNumber = -1073741670;
      return SubKeyByNumber >= 0;
    }
    CmpInitializeKeyNameString(CellFlat, (__int64)&v17, a5);
    BugCheckParameter4_4 = 0;
    CmpFindSubKeyByNameWithStatus(BugCheckParameter3, a2, &v17, &BugCheckParameter4_4);
    if ( BugCheckParameter4_4 == -1 )
    {
      if ( *(_DWORD *)(v12 + 20) + *(_DWORD *)(v12 + 24) )
        CmpDeleteTree(a3, BugCheckParameter4);
      SubKeyByNumber = CmpFreeKeyByCell(a3, BugCheckParameter4, 1);
      if ( SubKeyByNumber < 0 )
      {
        if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(a3, &v16);
        else
          HvpReleaseCellPaged(a3, (unsigned int *)&v16);
        return SubKeyByNumber >= 0;
      }
    }
    else
    {
      ++v5;
    }
    if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(a3, &v16);
    else
      HvpReleaseCellPaged(a3, (unsigned int *)&v16);
  }
  return SubKeyByNumber >= 0;
}
