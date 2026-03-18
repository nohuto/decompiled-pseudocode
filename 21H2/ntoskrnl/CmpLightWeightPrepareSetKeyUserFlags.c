/*
 * XREFs of CmpLightWeightPrepareSetKeyUserFlags @ 0x14065E690
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x14065D5C8 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     HvpMarkCellDirty @ 0x14071F300 (HvpMarkCellDirty.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 */

__int64 __fastcall CmpLightWeightPrepareSetKeyUserFlags(__int64 a1)
{
  __int64 v1; // rax
  ULONG_PTR v2; // rbx
  unsigned int v3; // edi
  __int64 CellFlat; // rax
  int v5; // edi
  int v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+34h] [rbp+Ch]

  v7 = -1;
  v8 = 0;
  v1 = *(_QWORD *)(a1 + 48);
  v2 = *(_QWORD *)(v1 + 32);
  v3 = *(_DWORD *)(v1 + 40);
  if ( (*(_BYTE *)(v2 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v2, *(unsigned int *)(v1 + 40));
  else
    CellFlat = HvpGetCellPaged(v2);
  if ( CellFlat )
  {
    v5 = HvpMarkCellDirty(v2, v3);
    if ( v5 >= 0 )
      v5 = 0;
    if ( (*(_BYTE *)(v2 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v2, &v7);
    else
      HvpReleaseCellPaged(v2, &v7);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v5;
}
