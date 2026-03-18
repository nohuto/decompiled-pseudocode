/*
 * XREFs of CmpKeyEnumStackEntryNotifyPromotion @ 0x14065CBDC
 * Callers:
 *     CmpKeyEnumStackNotifyPromotion @ 0x14065CB84 (CmpKeyEnumStackNotifyPromotion.c)
 * Callees:
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpDoFindSubKeyByNumber @ 0x1407C82B0 (CmpDoFindSubKeyByNumber.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 */

__int64 __fastcall CmpKeyEnumStackEntryNotifyPromotion(__int64 *a1)
{
  _DWORD *v2; // rcx
  unsigned int v3; // edx
  __int64 v4; // r9
  unsigned int v5; // r8d
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  ULONG_PTR v10; // rdx
  ULONG_PTR v11; // rcx
  __int64 CellFlat; // rax
  unsigned int SubKeyByNumber; // eax
  ULONG_PTR v14; // rcx
  unsigned int v15; // esi
  __int64 result; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx

  v2 = a1 + 4;
  v3 = 0;
  v4 = 0LL;
  v5 = 2;
  while ( *v2 == *(_DWORD *)((char *)v2 + a1[1] - (_QWORD)a1 - 12) )
  {
    ++v3;
    ++v4;
    ++v2;
    if ( v4 >= 2 )
      goto LABEL_4;
  }
  v5 = v3;
LABEL_4:
  *((_DWORD *)a1 + 28) = -1;
  v6 = v5;
  a1[15] = 0LL;
  if ( a1[v5 + 10] )
  {
    v17 = *a1;
    v18 = (__int64)&a1[v5 + 12];
    if ( (*(_BYTE *)(*a1 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v17, v18);
    else
      HvpReleaseCellPaged(v17, v18);
    a1[v6 + 10] = 0LL;
    *((_DWORD *)a1 + v6 + 18) = -1;
  }
  if ( a1[v6 + 5] )
  {
    v7 = *a1;
    v8 = (__int64)&a1[v6 + 7];
    if ( (*(_BYTE *)(*a1 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v7, v8);
    else
      HvpReleaseCellPaged(v7, v8);
    a1[v6 + 5] = 0LL;
  }
  v9 = a1[1];
  *((_DWORD *)a1 + v6 + 8) = *(_DWORD *)(v9 + 4 * v6 + 20);
  v10 = *(unsigned int *)(v9 + 4 * v6 + 28);
  v11 = *a1;
  if ( (*(_BYTE *)(*a1 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v11, v10);
  else
    CellFlat = HvpGetCellPaged(v11);
  a1[v6 + 5] = CellFlat;
  SubKeyByNumber = CmpDoFindSubKeyByNumber(*a1);
  *((_DWORD *)a1 + v6 + 18) = SubKeyByNumber;
  v14 = *a1;
  v15 = SubKeyByNumber;
  if ( (*(_BYTE *)(*a1 + 140) & 1) != 0 )
    result = HvpGetCellFlat(v14, SubKeyByNumber);
  else
    result = HvpGetCellPaged(v14);
  a1[v6 + 10] = result;
  *((_DWORD *)a1 + 28) = v15;
  a1[15] = result;
  return result;
}
