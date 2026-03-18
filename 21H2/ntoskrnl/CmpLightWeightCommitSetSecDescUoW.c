/*
 * XREFs of CmpLightWeightCommitSetSecDescUoW @ 0x140923C08
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x14065D5C8 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmpDereferenceSecurityNode @ 0x1402A2104 (CmpDereferenceSecurityNode.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpAssignSecurityToKcb @ 0x14071B640 (CmpAssignSecurityToKcb.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall CmpLightWeightCommitSetSecDescUoW(__int64 a1, _QWORD *a2)
{
  unsigned int *v2; // rdi
  __int64 v4; // rax
  ULONG_PTR v6; // rbx
  ULONG_PTR v7; // rdx
  __int64 CellFlat; // rax
  ULONG_PTR v9; // rdx
  __int64 v10; // rbp
  ULONG_PTR v11; // rdx
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = 0xFFFFFFFFLL;
  v2 = *(unsigned int **)(a1 + 104);
  v4 = *(_QWORD *)(a1 + 48);
  v6 = *(_QWORD *)(v4 + 32);
  v7 = *(unsigned int *)(v4 + 40);
  if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v6, v7, &v12);
  else
    CellFlat = HvpGetCellPaged(v6, v7, (unsigned int *)&v12);
  v9 = *(unsigned int *)(CellFlat + 44);
  v10 = CellFlat;
  *(_DWORD *)(CellFlat + 44) = *v2;
  CmpDereferenceSecurityNode(v6, v9);
  *v2 = -1;
  *(_QWORD *)(v10 + 4) = *a2;
  *(_QWORD *)(*(_QWORD *)(a1 + 48) + 168LL) = *a2;
  ++*(_QWORD *)(*(_QWORD *)(a1 + 48) + 304LL);
  CmpAssignSecurityToKcb(*(_QWORD *)(a1 + 48), *(unsigned int *)(v10 + 44), 0LL, 0, 0);
  if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v6, &v12);
  else
    HvpReleaseCellPaged(v6, (unsigned int *)&v12);
  v11 = *v2;
  if ( (_DWORD)v11 != -1 )
    CmpDereferenceSecurityNode(*((_QWORD *)v2 + 1), v11);
  ExFreePoolWithTag(v2, 0x77554D43u);
  *(_QWORD *)(a1 + 104) = 0LL;
}
