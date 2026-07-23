/*
 * XREFs of CmpLightWeightCommitSetSecDescUoW @ 0x14087F21C
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x1405E1934 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmpRemoveSecurityCellList @ 0x14024BB74 (CmpRemoveSecurityCellList.c)
 *     CmpDereferenceSecurityNode @ 0x1403F086C (CmpDereferenceSecurityNode.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpAssignSecurityToKcb @ 0x14065EF50 (CmpAssignSecurityToKcb.c)
 *     HvFreeCell @ 0x140720914 (HvFreeCell.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall CmpLightWeightCommitSetSecDescUoW(__int64 a1, _QWORD *a2)
{
  unsigned int *v2; // rdi
  __int64 v5; // rax
  ULONG_PTR v6; // rbx
  __int64 v7; // r15
  unsigned int v8; // r14d
  __int64 v9; // rbp
  int v10; // eax
  ULONG_PTR v11; // rdx
  int v12; // [rsp+60h] [rbp+8h] BYREF
  int v13; // [rsp+64h] [rbp+Ch]
  int v14; // [rsp+68h] [rbp+10h] BYREF
  int v15; // [rsp+6Ch] [rbp+14h]

  v14 = -1;
  v12 = -1;
  v2 = *(unsigned int **)(a1 + 104);
  v15 = 0;
  v13 = 0;
  v5 = *(_QWORD *)(a1 + 48);
  v6 = *(_QWORD *)(v5 + 32);
  v7 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v6 + 8))(v6, *(unsigned int *)(v5 + 40), &v14);
  v8 = *(_DWORD *)(v7 + 44);
  v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v6 + 8))(v6, v8, &v12);
  *(_DWORD *)(v7 + 44) = *v2;
  v10 = *(_DWORD *)(v9 + 12);
  if ( v10 == 1 )
  {
    (*(void (__fastcall **)(ULONG_PTR, int *))(v6 + 16))(v6, &v12);
    v9 = 0LL;
    CmpRemoveSecurityCellList(v6, v8);
    HvFreeCell(v6, v8);
  }
  else
  {
    *(_DWORD *)(v9 + 12) = v10 - 1;
  }
  *v2 = -1;
  *(_QWORD *)(v7 + 4) = *a2;
  *(_QWORD *)(*(_QWORD *)(a1 + 48) + 168LL) = *a2;
  ++*(_QWORD *)(*(_QWORD *)(a1 + 48) + 304LL);
  CmpAssignSecurityToKcb(*(_QWORD *)(a1 + 48), *(unsigned int *)(v7 + 44), 0LL, 0, 0);
  (*(void (__fastcall **)(ULONG_PTR, int *))(v6 + 16))(v6, &v14);
  if ( v9 )
    (*(void (__fastcall **)(ULONG_PTR, int *))(v6 + 16))(v6, &v12);
  v11 = *v2;
  if ( (_DWORD)v11 != -1 )
    CmpDereferenceSecurityNode(*((_QWORD *)v2 + 1), v11);
  ExFreePoolWithTag(v2, 0x77554D43u);
  *(_QWORD *)(a1 + 104) = 0LL;
}
