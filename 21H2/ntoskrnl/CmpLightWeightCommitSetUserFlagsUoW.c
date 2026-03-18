/*
 * XREFs of CmpLightWeightCommitSetUserFlagsUoW @ 0x14065E730
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x14065D5C8 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 */

__int64 __fastcall CmpLightWeightCommitSetUserFlagsUoW(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  ULONG_PTR v5; // rbx
  __int64 CellFlat; // rax
  unsigned int v7; // edx
  int v9; // [rsp+30h] [rbp+8h] BYREF
  int v10; // [rsp+34h] [rbp+Ch]

  v9 = -1;
  v10 = 0;
  v4 = *(_QWORD *)(a1 + 48);
  v5 = *(_QWORD *)(v4 + 32);
  if ( (*(_BYTE *)(v5 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v5, *(unsigned int *)(v4 + 40));
  else
    CellFlat = HvpGetCellPaged(v5);
  v7 = *(_DWORD *)(CellFlat + 52) ^ (*(_DWORD *)(CellFlat + 52) ^ (*(_DWORD *)(a1 + 88) << 16)) & 0xF0000;
  *(_DWORD *)(CellFlat + 52) = v7;
  *(_DWORD *)(*(_QWORD *)(a1 + 48) + 184LL) ^= (*(_DWORD *)(*(_QWORD *)(a1 + 48) + 184LL) ^ HIWORD(v7)) & 0xF;
  *(_QWORD *)(CellFlat + 4) = *a2;
  ++*(_QWORD *)(*(_QWORD *)(a1 + 48) + 304LL);
  if ( (*(_BYTE *)(v5 + 140) & 1) != 0 )
    return HvpReleaseCellFlat(v5, &v9);
  else
    return HvpReleaseCellPaged(v5, &v9);
}
