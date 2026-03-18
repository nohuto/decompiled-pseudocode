/*
 * XREFs of CmpSwapValueInList @ 0x1402564B4
 * Callers:
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14065D7C4 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmSetValueKey @ 0x140720260 (CmSetValueKey.c)
 * Callees:
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 */

__int64 __fastcall CmpSwapValueInList(ULONG_PTR a1, int a2, unsigned int a3, __int64 a4)
{
  ULONG_PTR v5; // rdx
  bool v6; // zf
  __int64 v8; // rsi
  __int64 CellPaged; // rax
  unsigned int v10; // edi
  int v12; // [rsp+30h] [rbp+8h] BYREF
  int v13; // [rsp+34h] [rbp+Ch]

  v12 = -1;
  v5 = *(unsigned int *)(a4 + 4);
  v6 = (*(_BYTE *)(a1 + 140) & 1) == 0;
  v8 = a3;
  v13 = 0;
  if ( v6 )
    CellPaged = HvpGetCellPaged(a1);
  else
    CellPaged = HvpGetCellFlat(a1, v5);
  v10 = 0;
  if ( CellPaged )
  {
    *(_DWORD *)(CellPaged + 4 * v8) = a2;
    if ( (*(_BYTE *)(a1 + 140) & 1) != 0 )
      HvpReleaseCellFlat(a1, &v12);
    else
      HvpReleaseCellPaged(a1, &v12);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v10;
}
