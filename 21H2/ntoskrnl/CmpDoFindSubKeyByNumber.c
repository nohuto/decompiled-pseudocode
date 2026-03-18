/*
 * XREFs of CmpDoFindSubKeyByNumber @ 0x1407C82B0
 * Callers:
 *     CmpKeyEnumStackEntryAdvance @ 0x14065BB1C (CmpKeyEnumStackEntryAdvance.c)
 *     CmpKeyEnumStackEntryBegin @ 0x14065BDD8 (CmpKeyEnumStackEntryBegin.c)
 *     CmpKeyEnumStackEntryNotifyPromotion @ 0x14065CBDC (CmpKeyEnumStackEntryNotifyPromotion.c)
 *     CmpFindSubKeyByNumber @ 0x1406BF278 (CmpFindSubKeyByNumber.c)
 *     CmpFindSubKeyByNumberEx @ 0x1407C3070 (CmpFindSubKeyByNumberEx.c)
 *     CmpCheckRegistry2 @ 0x1407C5CB0 (CmpCheckRegistry2.c)
 * Callees:
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 */

__int64 __fastcall CmpDoFindSubKeyByNumber(ULONG_PTR BugCheckParameter3, __int16 *a2, unsigned int a3)
{
  __int16 v4; // ax
  __int64 v8; // rbx
  __int64 CellFlat; // rax
  _WORD *v10; // rcx
  unsigned int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // [rsp+38h] [rbp+10h] BYREF

  v13 = 0xFFFFFFFFLL;
  v4 = *a2;
  if ( *a2 != 26994 )
  {
LABEL_2:
    if ( ((v4 - 26220) & 0xFDFF) == 0 )
      return *(unsigned int *)&a2[4 * a3 + 2];
    return *(unsigned int *)&a2[2 * a3 + 2];
  }
  v8 = 0LL;
  if ( !a2[1] )
    return *(unsigned int *)&a2[2 * a3 + 2];
  while ( 1 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, *(unsigned int *)&a2[2 * v8 + 2], &v13);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3);
    v10 = (_WORD *)CellFlat;
    if ( !CellFlat )
      return 0xFFFFFFFFLL;
    v11 = *(unsigned __int16 *)(CellFlat + 2);
    if ( a3 < v11 )
      break;
    a3 -= v11;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v13);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v13);
    v8 = (unsigned int)(v8 + 1);
    if ( (unsigned int)v8 >= (unsigned __int16)a2[1] )
    {
      v4 = *a2;
      goto LABEL_2;
    }
  }
  if ( ((*v10 - 26220) & 0xFDFF) != 0 )
    v12 = *(_DWORD *)&v10[2 * a3 + 2];
  else
    v12 = *(_DWORD *)&v10[4 * a3 + 2];
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v13);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v13);
  return v12;
}
