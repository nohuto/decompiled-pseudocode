/*
 * XREFs of CmpLightWeightCreateSetValueData @ 0x14065DE48
 * Callers:
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x14065D114 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14065D7C4 (CmpLightWeightPrepareSetValueKeyUoW.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x14024AC60 (CmpAllocateTransientPoolWithTag.c)
 *     CmpFreeTransientPoolWithTag @ 0x140346D64 (CmpFreeTransientPoolWithTag.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     HvpMarkCellDirty @ 0x14071F300 (HvpMarkCellDirty.c)
 *     CmpCopyCell @ 0x14079BC7C (CmpCopyCell.c)
 *     HvFreeCell @ 0x14079BD98 (HvFreeCell.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 */

__int64 __fastcall CmpLightWeightCreateSetValueData(__int64 a1, _QWORD *a2, __int64 a3, struct _LOOKASIDE_LIST_EX *a4)
{
  ULONG_PTR v6; // rsi
  char *TransientPoolWithTag; // rax
  _DWORD *v8; // rbx
  __int64 CellFlat; // rax
  __int64 v10; // rbp
  int v11; // ecx
  int v12; // edi
  ULONG_PTR v14; // rdx
  int v15; // [rsp+50h] [rbp+8h] BYREF
  int v16; // [rsp+54h] [rbp+Ch]

  v15 = -1;
  v16 = 0;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL);
  TransientPoolWithTag = (char *)CmpAllocateTransientPoolWithTag(PagedPool, 0xCuLL, 0x77554D43u, a4);
  v8 = TransientPoolWithTag;
  if ( !TransientPoolWithTag )
    return (unsigned int)-1073741670;
  *(_QWORD *)(TransientPoolWithTag + 4) = 0LL;
  *(_DWORD *)TransientPoolWithTag = 1;
  if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v6, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL));
  else
    CellFlat = HvpGetCellPaged(v6);
  v10 = CellFlat;
  if ( !CellFlat )
  {
    v12 = -1073741670;
LABEL_18:
    v14 = (unsigned int)v8[2];
    if ( (_DWORD)v14 != -1 )
      HvFreeCell(v6, v14);
    CmpFreeTransientPoolWithTag(v8, 0x77554D43u);
    return (unsigned int)v12;
  }
  v8[1] = 0;
  v8[2] = -1;
  v11 = *(_DWORD *)(CellFlat + 36);
  if ( !v11
    || (v8[1] = v11, v12 = CmpCopyCell(v6, *(unsigned int *)(CellFlat + 40), (__int64)(v8 + 2)), v12 >= 0)
    && (v12 = HvpMarkCellDirty(v6, *(unsigned int *)(v10 + 40)), v12 >= 0) )
  {
    v12 = 0;
    *a2 = v8;
    v8 = 0LL;
  }
  if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v6, &v15);
  else
    HvpReleaseCellPaged(v6, &v15);
  if ( v8 )
    goto LABEL_18;
  return (unsigned int)v12;
}
