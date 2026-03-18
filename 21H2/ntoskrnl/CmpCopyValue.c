/*
 * XREFs of CmpCopyValue @ 0x14065B108
 * Callers:
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x14065AAAC (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpCopyKeyPartial @ 0x1406D3BF0 (CmpCopyKeyPartial.c)
 *     CmpMergeKeyValues @ 0x14091FCD8 (CmpMergeKeyValues.c)
 *     CmpSyncKeyValues @ 0x1409207EC (CmpSyncKeyValues.c)
 * Callees:
 *     CmpSetValueDataNew @ 0x1406BE2FC (CmpSetValueDataNew.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpCopyCell @ 0x14079BC7C (CmpCopyCell.c)
 *     HvFreeCell @ 0x14079BD98 (HvFreeCell.c)
 *     CmpFreeValueData @ 0x14079CF44 (CmpFreeValueData.c)
 *     CmpGetValueData @ 0x1407C46A0 (CmpGetValueData.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407C97FC (HvpGetCellContextReinitialize.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpCopyValue(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4,
        ULONG_PTR a3,
        int a4,
        unsigned int *a5)
{
  unsigned int v6; // r12d
  unsigned int v8; // esi
  __int64 CellFlat; // rax
  __int64 v10; // r13
  unsigned int v11; // eax
  unsigned int v12; // r15d
  int v13; // eax
  unsigned int v14; // esi
  int v15; // r14d
  bool v16; // sf
  __int64 v17; // rax
  bool v18; // zf
  int *CellPaged; // rax
  int v21; // r14d
  __int64 v22; // rax
  char ValueData; // al
  unsigned int v24; // r14d
  ULONG_PTR BugCheckParameter3a; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v26; // [rsp+48h] [rbp-28h]
  __int64 v27; // [rsp+50h] [rbp-20h] BYREF
  __int64 v28; // [rsp+58h] [rbp-18h] BYREF
  PVOID P[2]; // [rsp+60h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter4a; // [rsp+B0h] [rbp+40h] BYREF
  int v31; // [rsp+B8h] [rbp+48h]
  int v32; // [rsp+C8h] [rbp+58h]

  v32 = a4;
  v31 = BugCheckParameter4;
  v28 = 0LL;
  BugCheckParameter3a = -1LL;
  v6 = -1;
  v8 = BugCheckParameter4;
  HvpGetCellContextReinitialize(&v28);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v8);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  v10 = CellFlat;
  v11 = *(_DWORD *)(CellFlat + 4);
  LODWORD(v27) = v11;
  v12 = v11 + 0x80000000;
  if ( v11 < 0x80000000 )
    v12 = v11;
  P[0] = (PVOID)(v10 + 8);
  LODWORD(BugCheckParameter4a) = *(_DWORD *)(v10 + 8);
  v26 = v12;
  v13 = CmpCopyCell(BugCheckParameter3, v8, (__int64)&BugCheckParameter3a + 4);
  v14 = HIDWORD(BugCheckParameter3a);
  v15 = v13;
  if ( v13 >= 0 )
  {
    if ( !v12 )
    {
LABEL_21:
      *a5 = v14;
      v14 = -1;
      v6 = -1;
      v15 = 0;
      goto LABEL_22;
    }
    if ( v12 <= 4 )
    {
      CellPaged = (int *)P[0];
      if ( (unsigned int)v27 < 0x80000000 )
      {
        v24 = *(_DWORD *)P[0];
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, &v28);
        else
          HvpReleaseCellPaged(BugCheckParameter3, &v28);
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          CellPaged = (int *)HvpGetCellFlat(BugCheckParameter3, v24);
        else
          CellPaged = (int *)HvpGetCellPaged(BugCheckParameter3);
      }
      v21 = *CellPaged;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v28);
      else
        HvpReleaseCellPaged(BugCheckParameter3, &v28);
      if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
        v22 = HvpGetCellFlat(a3, v14);
      else
        v22 = HvpGetCellPaged(a3);
      *(_DWORD *)(v22 + 8) = v21;
      *(_DWORD *)(v22 + 4) = v12 + 0x80000000;
      v18 = (*(_BYTE *)(a3 + 140) & 1) == 0;
      goto LABEL_18;
    }
    if ( (*(_DWORD *)(BugCheckParameter3 + 220) < 4u || v12 - 16345 > 0x7FFFC026)
      && (*(_DWORD *)(a3 + 220) < 4u || v12 - 16345 > 0x7FFFC026) )
    {
      v15 = CmpCopyCell(BugCheckParameter3, (unsigned int)BugCheckParameter4a, (__int64)&BugCheckParameter3a);
      v16 = v15 < 0;
    }
    else
    {
      P[0] = 0LL;
      v27 = 0xFFFFFFFFLL;
      LOBYTE(BugCheckParameter4a) = 0;
      ValueData = CmpGetValueData(BugCheckParameter3, (__int64)P, (__int64)&BugCheckParameter4a, (__int64)&v27);
      v12 = v26;
      if ( !ValueData )
      {
        v14 = HIDWORD(BugCheckParameter3a);
        v15 = -1073741670;
        goto LABEL_22;
      }
      v15 = CmpSetValueDataNew(a3, P[0], v26, (__int64)&BugCheckParameter3a);
      if ( (_BYTE)BugCheckParameter4a )
      {
        ExFreePoolWithTag(P[0], 0);
      }
      else if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      {
        HvpReleaseCellFlat(BugCheckParameter3, &v27);
      }
      else
      {
        HvpReleaseCellPaged(BugCheckParameter3, &v27);
      }
      v16 = v15 < 0;
    }
    if ( !v16 )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v28);
      else
        HvpReleaseCellPaged(BugCheckParameter3, &v28);
      if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
        v17 = HvpGetCellFlat(a3, v14);
      else
        v17 = HvpGetCellPaged(a3);
      *(_DWORD *)(v17 + 8) = BugCheckParameter3a;
      *(_DWORD *)(v17 + 4) = v12;
      v18 = (*(_BYTE *)(a3 + 140) & 1) == 0;
LABEL_18:
      if ( v18 )
        HvpReleaseCellPaged(a3, &v28);
      else
        HvpReleaseCellFlat(a3, &v28);
      v10 = 0LL;
      goto LABEL_21;
    }
    v6 = BugCheckParameter3a;
  }
LABEL_22:
  if ( v10 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v28);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v28);
  }
  if ( v6 != -1 )
    CmpFreeValueData(a3, v6);
  if ( v14 != -1 )
    HvFreeCell(a3, v14);
  return (unsigned int)v15;
}
