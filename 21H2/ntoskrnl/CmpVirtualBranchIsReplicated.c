/*
 * XREFs of CmpVirtualBranchIsReplicated @ 0x140718CA8
 * Callers:
 *     CmpVEExecuteRealStoreParseLogic @ 0x14071A4E8 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140917708 (CmpVEExecuteVirtualStoreParseLogic.c)
 * Callees:
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpGetCmHiveFromVirtualPath @ 0x140717624 (CmpGetCmHiveFromVirtualPath.c)
 *     CmpUnblockTwoHiveWrites @ 0x14071A784 (CmpUnblockTwoHiveWrites.c)
 *     CmpBlockTwoHiveWrites @ 0x14071B284 (CmpBlockTwoHiveWrites.c)
 *     CmpFindPathByName @ 0x14071F2D8 (CmpFindPathByName.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 */

bool __fastcall CmpVirtualBranchIsReplicated(__int64 a1, _WORD *a2, char *a3)
{
  int v4; // esi
  int v5; // edi
  void *v6; // r15
  PVOID v7; // r14
  char PathByName; // al
  ULONG_PTR v9; // rdi
  char v10; // si
  __int64 CellFlat; // rax
  bool v12; // cf
  char v13; // al
  unsigned __int16 v14; // cx
  unsigned __int16 v15; // dx
  ULONG_PTR BugCheckParameter3; // [rsp+30h] [rbp-20h] BYREF
  __int128 v19; // [rsp+38h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+90h] [rbp+40h] BYREF
  __int64 v21; // [rsp+A0h] [rbp+50h] BYREF
  PVOID v22; // [rsp+A8h] [rbp+58h] BYREF

  v21 = 0xFFFFFFFFLL;
  LODWORD(BugCheckParameter4) = 0;
  BugCheckParameter3 = 0LL;
  v22 = 0LL;
  v4 = (int)a2;
  *a3 = 0;
  v5 = a1;
  v6 = 0LL;
  v19 = 0LL;
  if ( a1 )
  {
    if ( !*a2 )
      return CmpVEEnabled && (*(_DWORD *)(a1 + 184) & 0x1000000) != 0;
    v7 = *(PVOID *)(a1 + 32);
  }
  else
  {
    if ( (int)CmpGetCmHiveFromVirtualPath((__int64)a2, (__int64)&v22) < 0 )
      return 0;
    v6 = (void *)CmpMasterHive;
    v7 = v22;
  }
  if ( (int)CmpBlockTwoHiveWrites(v6) < 0 )
    return 0;
  PathByName = CmpFindPathByName(
                 v5,
                 v4,
                 (unsigned int)&v19,
                 (unsigned int)&BugCheckParameter4,
                 (__int64)&BugCheckParameter3);
  v9 = BugCheckParameter3;
  v10 = PathByName;
  if ( BugCheckParameter3
    && ((*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
      ? (CellFlat = HvpGetCellFlat(BugCheckParameter3, (unsigned int)BugCheckParameter4, &v21))
      : (CellFlat = HvpGetCellPaged(BugCheckParameter3)),
        CellFlat) )
  {
    if ( v10 )
    {
      if ( !CmpVEEnabled || (*(_WORD *)(CellFlat + 2) & 0x100) == 0 )
        v10 = 0;
    }
    else
    {
      if ( !CmpVEEnabled || (v12 = (*(_WORD *)(CellFlat + 2) & 0x100) != 0, v13 = 1, !v12) )
        v13 = 0;
      v14 = 0;
      v15 = (unsigned __int16)v19 >> 1;
      *a3 = v13;
      if ( v15 )
      {
        while ( *(_WORD *)(*((_QWORD *)&v19 + 1) + 2LL * v14) != 92 )
        {
          if ( ++v14 >= v15 )
            goto LABEL_18;
        }
        *a3 = 0;
      }
    }
LABEL_18:
    if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v9, &v21);
    else
      HvpReleaseCellPaged(v9, &v21);
  }
  else
  {
    v10 = 0;
  }
  CmpUnblockTwoHiveWrites(v6, v7);
  return v10;
}
