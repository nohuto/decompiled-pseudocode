/*
 * XREFs of CmpMarkValueDataDirty @ 0x140716D50
 * Callers:
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x14065D114 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14065D7C4 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmDeleteValueKey @ 0x140714E58 (CmDeleteValueKey.c)
 *     CmpMarkKeyDirty @ 0x140716758 (CmpMarkKeyDirty.c)
 *     CmpSetValueKeyExisting @ 0x1407169FC (CmpSetValueKeyExisting.c)
 *     CmpMarkKeyValuesDirty @ 0x14091FA94 (CmpMarkKeyValuesDirty.c)
 * Callees:
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     HvpMarkCellDirty @ 0x14071F300 (HvpMarkCellDirty.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 */

__int64 __fastcall CmpMarkValueDataDirty(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  ULONG_PTR v3; // rdx
  unsigned int v5; // eax
  int v6; // esi
  bool v8; // zf
  __int64 v9; // r12
  __int64 CellPaged; // rax
  ULONG_PTR v11; // rdx
  __int64 v12; // r15
  __int64 CellFlat; // rax
  unsigned __int16 v14; // r14
  ULONG_PTR v15; // rdx
  __int64 v16; // [rsp+68h] [rbp+48h] BYREF
  __int64 v17; // [rsp+70h] [rbp+50h] BYREF

  v3 = *(unsigned int *)(a2 + 8);
  if ( (_DWORD)v3 == -1 )
    return 0;
  v5 = *(_DWORD *)(a2 + 4);
  if ( v5 >= 0x80000000 )
    return 0;
  if ( *(_DWORD *)(BugCheckParameter3 + 220) < 4u || v5 - 16345 > 0x7FFFC026 )
  {
LABEL_7:
    v6 = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(a2 + 8));
    if ( v6 < 0 )
      return (unsigned int)v6;
    return 0;
  }
  v17 = 0xFFFFFFFFLL;
  v8 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v9 = 0LL;
  v16 = 0xFFFFFFFFLL;
  if ( v8 )
    CellPaged = HvpGetCellPaged(BugCheckParameter3);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter3, v3, &v17);
  v11 = *(unsigned int *)(CellPaged + 4);
  v12 = CellPaged;
  if ( (_DWORD)v11 == -1 )
  {
LABEL_19:
    v6 = 0;
    goto LABEL_20;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v11, &v16);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  v9 = CellFlat;
  v14 = 0;
  if ( !*(_WORD *)(v12 + 2) )
  {
LABEL_18:
    v6 = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(v12 + 4));
    if ( v6 < 0 )
      goto LABEL_20;
    goto LABEL_19;
  }
  while ( 1 )
  {
    v15 = *(unsigned int *)(v9 + 4LL * v14);
    if ( (_DWORD)v15 != -1 )
    {
      v6 = HvpMarkCellDirty(BugCheckParameter3, v15);
      if ( v6 < 0 )
        break;
    }
    if ( ++v14 >= *(_WORD *)(v12 + 2) )
      goto LABEL_18;
  }
LABEL_20:
  if ( v9 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v16);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v16);
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v17);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v17);
  if ( v6 >= 0 )
    goto LABEL_7;
  return (unsigned int)v6;
}
